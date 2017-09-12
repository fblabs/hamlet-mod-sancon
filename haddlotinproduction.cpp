#include "haddlotinproduction.h"
#include "ui_haddlotinproduction.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QStandardItem>
#include "hdatatopass.h"

HAddLotInProduction::HAddLotInProduction(QWidget *parent, HDataToPass *datapass, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HAddLotInProduction)
{
    ui->setupUi(this);



    db=pdb;

    data=datapass;
    model=data->mod;


    ui->lbDesc->setText((data->description));


    ui->cbLastLots->addItem("Tutti",100000);
    ui->cbLastLots->addItem("Ultimi 5 lotti",5);
    ui->cbLastLots->addItem("Ultimi 10 lotti",10);
    ui->cbLastLots->addItem("Ultimi 50 lotti",50);
    ui->cbLastLots->setCurrentIndex(1);

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
     // int prd =ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0)).toInt();
    // int prd =model->index(ui->tableView->currentIndex().row(),0).data(0).toInt();

    qDebug()<<"lastLots()";
    QSqlQuery qlots(db);
    QSqlQueryModel *qmLots=new QSqlQueryModel(0);

    int quanti=ui->cbLastLots->currentData().toInt();

    QString sql="select ID,lot,prodotto from lotdef where prodotto=:prd and attivo>0 ORDER by data DESC LIMIT :quanti";
    qlots.prepare(sql);
    qlots.bindValue(":prd",QVariant(data->productId));
    qlots.bindValue(":quanti",QVariant(quanti));
    qlots.exec();

   // qDebug()<<qlots.lastError().text()<<_idprodotto;
    qmLots->setQuery(qlots);


    ui->lvLastLots->clearSelection();
    ui->lvLastLots->setModel(qmLots);
    ui->lvLastLots->setModelColumn(1);
    ui->lvLastLots->setCurrentIndex(ui->lvLastLots->model()->index(0,0));


}

void HAddLotInProduction::addLot()
{
   // here I want to add a lot's component
    QStandardItemModel* mod= data->mod;
    int nrow=data->row;
    bool ballergene=data->allergene;
    int lotid=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),0).data(0).toInt();
    QString lot=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),1).data(0).toString();

  /*  if(ballergene)
    {
        ID_prodotto->setForeground(Qt::red);
        ID_prodotto->setIcon(QIcon(":/Resources/Flag-red64.png"));

    }*/





   mod->setData(mod->index(nrow,0),data->productId);
   mod->setData(mod->index(nrow,1),data->description);
 //  mod->setData(mod->index(nrow,2),data->quantity);
   mod->setData(mod->index(nrow,3),lotid);
   mod->setData(mod->index(nrow,4),lot);
   mod->setData(mod->index(nrow,5),ui->dsbQt->value());
   mod->setData(mod->index(nrow,6),QString("true"));



}





void HAddLotInProduction::on_pdClose_clicked()
{
    close();
}

void HAddLotInProduction::on_pbAdd_clicked()
{
    addLot();
    close();
}
