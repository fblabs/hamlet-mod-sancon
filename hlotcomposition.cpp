#include "hlotcomposition.h"
#include "qdebug.h"
#include "ui_hlotcomposition.h"
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

HLotComposition::HLotComposition(int lotid, QString title, QSqlQueryModel *pmod, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLotComposition)
{
    ui->setupUi(this);
    mod=pmod;
    db=pdb;
    idLotto=lotid;

    ui->lbLot->setText(title);

    double current=0.0;

    for(int r=0;r<mod->rowCount();r++)
    {
        current+=mod->index(r,5).data(0).toDouble();
    }

    ui->lbCurrent->setText(QString::number(current));

    ui->tvComponents->setModel(mod);
    ui->tvComponents->setColumnHidden(0,true);
    ui->tvComponents->setColumnHidden(1,true);
    ui->tvComponents->setColumnHidden(3,true);
    ui->tvComponents->setColumnHidden(6,true);

    ui->tvComponents->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

HLotComposition::~HLotComposition()
{
    delete ui;
}

void HLotComposition::recalculate()
{


    double dafare = ui->leUpdatedAmount->text().toDouble();
    double sommarighe=ui->lbCurrent->text().toDouble();

    double factor=0.0;
    double result=0.0;
    QString sql=QString();
    QSqlQuery q(db);

    int id_operation=findLotFirstLoad();


    factor = dafare / sommarighe;



    QModelIndex i=QModelIndex();
    QString resulttoadd=QString();


    sql="UPDATE operazioni set quantita=:q where id=:id";
    q.prepare(sql);
    q.bindValue(":id",id_operation);
    q.bindValue(":q",dafare);

     bool b=q.exec();

     if(!b){
         db.rollback();
         return;
     }


    for (int j=0;j<mod->rowCount();j++)
    {
       i = mod->index(j,5);
       result =i.data().toDouble()* factor;
     //  resulttoadd=QString::number(result,'f',2);
       sql="UPDATE operazioni set quantita=:q where id=:id";
       q.prepare(sql);
       q.bindValue(":q",result);
       q.bindValue(":id",mod->index(j,0).data(0).toInt());
       bool b=q.exec();
       if(!b){
           db.rollback();
           qDebug()<<b<<j<<result<<q.lastError().text();
           return;
       }
       else
       {

           qDebug()<<b<<j<<result<<"OK"<<q.lastQuery();

       }


      sql="select operazioni.ID,operazioni.IDlotto,lotdef.lot,prodotti.ID,prodotti.descrizione,operazioni.quantita,unita_di_misura.ID,unita_di_misura.descrizione from operazioni,lotdef,prodotti,unita_di_misura where prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and unita_di_misura.ID=operazioni.um and  operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid )order by operazioni.quantita desc";
      QSqlQuery qm(db);
      QSqlQueryModel *qmod = new QSqlQueryModel();
       qm.prepare(sql);
       qm.bindValue(":lotid",idLotto);
       qm.exec();
       qmod->setQuery(qm);
       ui->tvComponents->setModel(qmod);



    }




}


void HLotComposition::on_leUpdatedAmount_returnPressed()
{
    db.transaction();
    recalculate();
}


void HLotComposition::on_pbClose_clicked()
{

    close();
}


void HLotComposition::on_pbSave_clicked()
{
    if(QMessageBox::question(nullptr,QApplication::applicationName(),"Confermare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
       bool b= db.commit();
       qDebug()<<b<<db.lastError().text();
       int current=0;
       for(int r=0;r<mod->rowCount();r++)
       {
         current+=ui->tvComponents->model()->index(r,5).data(0).toDouble();
       }

       ui->lbCurrent->setText(QString::number(current));
       emit composition_updated();
       QMessageBox::information(nullptr,QApplication::applicationName(),"Lotto modificato",QMessageBox::Ok);
    }
}


void HLotComposition::on_pbRecalculate_clicked()
{
    db.transaction();
    recalculate();

}

int HLotComposition::findLotFirstLoad()
{
 int result=0;

 QString sql="SELECT MIN(ID) from operazioni where IDLotto=:id";
 QSqlQuery q(db);
 q.prepare(sql);
 q.bindValue(":id",idLotto);
 q.exec();
 q.first();
 result=q.value(0).toInt();

 return result;
}

