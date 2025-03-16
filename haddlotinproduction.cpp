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
//#include "hquerymodel_lastlots.h"

HAddLotInProduction::HAddLotInProduction(HDataToPass *datapass, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HAddLotInProduction)
{
    ui->setupUi(this);


    QSettings settings("hamletmod.ini",QSettings::IniFormat);
    QString preferredLotsDb=settings.value("preferred_lots").toString();
    //setWindowFlag();


    prefsdb=QSqlDatabase::addDatabase("QSQLITE");
    prefsdb.setDatabaseName(preferredLotsDb);
    prefsdb.open();
    db=pdb;

    //  data=datapass;
    data=datapass;
    //data=&d;
    model=data->mod;


    ui->lbDesc->setText((data->description));



    ui->cbLastLots->addItem("Tutti",100000);
    ui->cbLastLots->addItem("Ultimi 5 lotti",5);
    ui->cbLastLots->addItem("Ultimi 10 lotti",10);
    ui->cbLastLots->addItem("Ultimi 50 lotti",50);
    ui->cbLastLots->setCurrentIndex(0);

    lastLots();

    ui->dsbQt->setValue(data->quantity);

    connect(this,SIGNAL(lot_added()),this,SLOT(clean()));
    connect(ui->cbLastLots,SIGNAL(currentIndexChanged(int)),this,SLOT(addLot()));


}

HAddLotInProduction::~HAddLotInProduction()
{
    prefsdb.close();
    data=nullptr;
    delete data;
    model=nullptr;
    delete model;
    qmLots=nullptr;
    delete qmLots;
    delete ui->cbLastLots->model();
    delete ui;

}

void HAddLotInProduction::click()
{
    addLot();
    prefsdb.close();
    data=nullptr;
    delete data;
    model=nullptr;
    delete model;
    qmLots=nullptr;
    delete qmLots;
    delete ui->cbLastLots->model();
    close();

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

    // qDebug()<<"addLot";// here I want to add a lot's component

    int nrow=data->row;

    //qDebug()<<"addlot"<<ballergene;
    int lotid=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),0).data(0).toInt();

    QString lot=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),1).data(0).toString();
    double giacenza=get_giacenza(lotid);
    ;
    if(!model) {
        //qDebug()<<"NULL";
        return;
    }
    bool al=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),6).data(0).toBool();
    bool alusa=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),7).data(0).toBool();

    QString val=QString::number(ui->dsbQt->value(),'f',3);



    model->setData(model->index(nrow,0),data->productId);
    model->setData(model->index(nrow,1),data->description);
    model->setData(model->index(nrow,3),lotid);
    model->setData(model->index(nrow,4),lot);
    model->setData(model->index(nrow,5),val);
    //model->setData(model->index(nrow,6),al);
    if(al) model->item(nrow,6)->setCheckState(Qt::Checked);// :model->item(nrow,7)->setCheckState(Qt::Unchecked);
    if (alusa) model->item(nrow,7)->setCheckState(Qt::Checked); //:model->item(nrow,7)->setCheckState(Qt::Unchecked);

    model->setData(model->index(nrow,8),giacenza);









    for(int col=0;col<model->columnCount();col++)
    {
        if(giacenza <=0){
            model->item(nrow,col)->setData(QBrush(QColor(255,150,150)),Qt::BackgroundRole);
                // model->item(nrow,col)->setData(QVariant(QColor(Qt::white)),Qt::ForegroundRole);
        }
        else
        {
            model->item(nrow,col)->setData(QBrush(QColor(255,255,255)),Qt::BackgroundRole);
        }
    }

   /* for(int col=0;col<model->columnCount();col++)
    {
        model->item(nrow,col)->setData(QVariant(QBrush(Qt::white)),Qt::BackgroundRole);
        model->item(nrow,col)->setData(QVariant(QColor(Qt::black)),Qt::ForegroundRole);
    }*/



    /*if(ballergene)
    {
        model->item(nrow,6)->setData("[X]",Qt::DisplayRole);
        model->item(nrow,6)->setTextAlignment(Qt::AlignCenter);
    }*/

emit lot_added();
}











void HAddLotInProduction::on_pdClose_clicked()
{

    clean();



}

void HAddLotInProduction::on_pbAdd_clicked()
{
    addLot();
    clean();
}

void HAddLotInProduction::on_tvLots_doubleClicked(const QModelIndex &index)
{
    Q_UNUSED(index);

    addLot();

}

void HAddLotInProduction::clean()
{

    prefsdb.close();
    data=nullptr;
    delete data;
    qmLots=nullptr;
    delete qmLots;
    model=nullptr;
    delete model;
    delete ui->cbLastLots->model();
    close();

}

double HAddLotInProduction::get_giacenza(const int p_id)
{
    int id=0;
    double giacenza=0.0;

    QSqlQuery q(db);
    QString sql="SELECT getgiacenza(:id)";
    q.prepare(sql);
    q.bindValue(":id",p_id);
    q.exec();
    q.next();
    giacenza=q.value(0).toDouble();

    return giacenza;
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

    q.clear();


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

