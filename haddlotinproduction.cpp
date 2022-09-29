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

HAddLotInProduction::HAddLotInProduction(QWidget *parent, HDataToPass *datapass, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HAddLotInProduction)
{
    ui->setupUi(this);

     prefsdb=QSqlDatabase::addDatabase("QSQLITE");
     prefsdb.setDatabaseName("preferences.db");
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

void HAddLotInProduction::lastLots()
{
    qDebug()<<"lastLots()";
    QSqlQuery qlots(db);
    QSqlQueryModel *qmLots=new QSqlQueryModel(0);

    int quanti=ui->cbLastLots->currentData().toInt();

    QString sql="select lotdef.ID,lotdef.lot,lotdef.prodotto,prodotti.allergenico from lotdef,prodotti where prodotti.ID=lotdef.prodotto and lotdef.prodotto=:prd and lotdef.attivo>0 ORDER by lotdef.data DESC LIMIT :quanti";
    qlots.prepare(sql);
    qlots.bindValue(":prd",QVariant(data->productId));
    qlots.bindValue(":quanti",QVariant(quanti));
    qlots.exec();

   // qDebug()<<qlots.lastError().text()<<_idprodotto;
    qmLots->setQuery(qlots);


    ui->lvLastLots->clearSelection();
    ui->lvLastLots->setModel(qmLots);
    ui->lvLastLots->setModelColumn(1);

    QString default_lot=findDefaultLot(QString::number(data->productId));
    if (default_lot==QString()) return;

    for(int i=0; i<qmLots->rowCount();++i)
    {
        if(qmLots->record(i).value(1).toString()==default_lot)
        {
            ui->lvLastLots->setCurrentIndex(qmLots->index(i,1));
        }
    }





}



void HAddLotInProduction::addLot()
{

   // here I want to add a lot's component
    QStandardItemModel* mod= data->mod;
    int nrow=data->row;
    bool ballergene=data->allergene;
    int lotid=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),0).data(0).toInt();
    QString lot=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),1).data(0).toString();



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

void HAddLotInProduction::on_lvLastLots_doubleClicked(const QModelIndex &index)
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

/*void HAddLotInProduction::searchByLot()
{
    QSqlQuery q(db);
    QString sql="SELECT id, lot from lotdef where lot like '"+ui->leSearch->text()+"%'";
    q.exec(sql);
    QSqlQueryModel *mod=static_cast<QSqlQueryModel*>(ui->lvLastLots->model());
    mod->setQuery(q);
    ui->lvLastLots->setModelColumn(1);
    ui->lvLastLots->setModel(mod);
    qDebug()<<sql<<q.lastError().text();


}*/



void HAddLotInProduction::on_pbDefaultLot_clicked()
{
    QSqlQuery qp(prefsdb);
    QSqlQuery qpm(prefsdb);
    QString psql=QString();
    QString lot=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),1).data(0).toString();
    QString prod=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),2).data(0).toString();
    QString sqlprep="SELECT COUNT(*) from pref WHERE prod=:idp";
    qp.prepare(sqlprep);
    qp.bindValue(":idp",prod);
qDebug()<<lot<<prod;

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

       qDebug()<<"qpm"<<qpm.lastError().text();


    }
    qDebug()<<"qp"<<qp.lastError().text();
}



void HAddLotInProduction::on_pbCancel_clicked()
{
    QSqlQuery q(prefsdb);
    QString prod=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),2).data(0).toString();
    QString msql="UPDATE pref SET lot='' where prod=:idp";

    q.prepare(msql);
    q.bindValue(":idp",prod);
    q.exec();
    ui->lvLastLots->selectionModel()->clearSelection();
    ui->lvLastLots->selectionModel()->clearCurrentIndex();


}

