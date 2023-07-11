#include "haddlotinproduction.h"
#include "ui_haddlotinproduction.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QSqlError>
#include <QStandardItem>
#include "hdatatopass.h"
#include <QFile>
#include <QSettings>

HAddLotInProduction::HAddLotInProduction(HDataToPass *datapass, QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HAddLotInProduction)
{
    ui->setupUi(this);

    QSettings settings("hamletmod.ini",QSettings::IniFormat);
    QString preferredLotsDb=settings.value("preferred_lots").toString();

    prefsdb=QSqlDatabase::addDatabase("QSQLITE");
    prefsdb.setDatabaseName(preferredLotsDb);
    prefsdb.open();


    db=pdb;

    data=datapass;
    model=data->mod;


    ui->lbDesc->setText((data->description));



    ui->cbLastLots->addItem("Tutti",100000);
    ui->cbLastLots->addItem("Ultimi 5 lotti",5);
    ui->cbLastLots->addItem("Ultimi 10 lotti",10);
    ui->cbLastLots->addItem("Ultimi 50 lotti",50);
    ui->cbLastLots->setCurrentIndex(0);

    lastLots();

    ui->dsbQt->setValue(data->quantity);


    connect(ui->cbLastLots,SIGNAL(currentIndexChanged(int)),this,SLOT(lastLots()));
}

HAddLotInProduction::~HAddLotInProduction()
{
    delete ui;
}

void HAddLotInProduction::click()
{
    ui->pbAdd->click();
}

void HAddLotInProduction::lastLots()
{

    QSqlQuery qlots(db);
    QSqlQueryModel *qmLots=new QSqlQueryModel(0);

    int quanti=ui->cbLastLots->currentData().toInt();

    QString sql="select lotdef.ID,lotdef.lot,lotdef.prodotto,prodotti.allergenico,lotdef.giacenza from lotdef,prodotti where prodotti.ID=lotdef.prodotto and lotdef.prodotto=:prd and lotdef.attivo>0 ORDER by lotdef.data DESC LIMIT :quanti";
    qlots.prepare(sql);
    qlots.bindValue(":prd",QVariant(data->productId));
    qlots.bindValue(":quanti",QVariant(quanti));
    qlots.exec();




    qmLots->setQuery(qlots);


    ui->tvLots->clearSelection();
    ui->tvLots->setModel(qmLots);
    ui->tvLots->setColumnHidden(0,true);
    ui->tvLots->setColumnHidden(2,true);
    ui->tvLots->setColumnHidden(3,true);
    ui->tvLots->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tvLots->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Stretch);


    QString default_lot=findDefaultLot(QString::number(data->productId));
    if (default_lot==QString()) return;

    for(int i=0; i<qmLots->rowCount();++i)
    {

        if(qmLots->record(i).value(1).toString()==default_lot)
        {

            ui->tvLots->setCurrentIndex(qmLots->index(i,1));
        }
    }





}



void HAddLotInProduction::addLot()
{

    // here I want to add a lot's component
    QStandardItemModel* mod= data->mod;
    int nrow=data->row;
    bool ballergene=data->allergene;
    int lotid=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),0).data(0).toInt();
    QString lot=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),1).data(0).toString();



    mod->setData(mod->index(nrow,0),data->productId);
    mod->setData(mod->index(nrow,1),data->description);

    //  mod->setData(mod->index(nrow,2),data->quantity);
    mod->setData(mod->index(nrow,3),lotid);
    mod->setData(mod->index(nrow,4),lot);
    QString val=QString::number(ui->dsbQt->value(),'f',3);
    mod->setData(mod->index(nrow,5),val);
    if (ballergene){
        mod->setData(mod->index(nrow,6),QString("1"));
    }
    else
    {
        mod->setData(mod->index(nrow,6),QString("0"));
    }

    close();


}





void HAddLotInProduction::on_pdClose_clicked()
{
    prefsdb.close();
    close();
}

void HAddLotInProduction::on_pbAdd_clicked()
{
    addLot();
    prefsdb.close();
    close();
}

void HAddLotInProduction::on_tvLots_doubleClicked(const QModelIndex &index)
{
    Q_UNUSED(index);
    addLot();
    prefsdb.close();
    close();

}

QString HAddLotInProduction::findDefaultLot(const QString p_prod)
{
    QString defaultLot=QString();
    QString sql("SELECT lot FROM pref WHERE prod=:prod");

    QSqlQuery q(prefsdb);
    q.prepare(sql);
    q.bindValue(":prod",p_prod);
    if (q.exec())
    {
        q.first();
        defaultLot=q.value(0).toString();
    }

    qDebug()<<q.lastError().text()<<defaultLot<<p_prod;

    return defaultLot;

}




void HAddLotInProduction::on_pbDefaultLot_clicked()
{
    QSqlQuery qp(prefsdb);
    QSqlQuery qpm(prefsdb);
    QString psql=QString();
    QString lot=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),1).data(0).toString();
    QString prod=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),2).data(0).toString();
    QString sqlprep="SELECT COUNT(*) from pref WHERE prod=:idp";
    qp.prepare(sqlprep);
    qp.bindValue(":idp",prod);

    if(qp.exec())
    {
        qp.first();
        if(qp.value(0).toInt()>0)
        {
            psql="UPDATE pref SET lot=:lot where prod=:idp";
        }
        else
        {
            psql="INSERT INTO pref (prod,lot) VALUES(:idp,:lot)";
        }

        prefsdb.transaction();

        qpm.prepare(psql);
        qpm.bindValue(":lot",lot);
        qpm.bindValue(":idp",prod);
        if(qpm.exec()){prefsdb.commit();}else{prefsdb.rollback();}




    }

}



void HAddLotInProduction::on_pbCancel_clicked()
{
    QSqlQuery q(prefsdb);
    QString prod=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),2).data(0).toString();
    QString msql="UPDATE pref SET lot='' where prod=:idp";

    q.prepare(msql);
    q.bindValue(":idp",prod);
    q.exec();
    ui->tvLots->selectionModel()->clearSelection();
    ui->tvLots->selectionModel()->clearCurrentIndex();


}

