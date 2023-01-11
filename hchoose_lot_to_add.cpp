#include "hchoose_lot_to_add.h"
#include "ui_hchoose_lot_to_add.h"
#include "huser.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QCompleter>
#include <QDateTime>
#include <QmessageBox>

#include <QDebug>
#include <QSqlError>

HChoose_lot_to_add::HChoose_lot_to_add(int p_destlot=-1, HUser *p_user, QSqlDatabase p_db, QWidget *parent ):
    QWidget(parent),
    ui(new Ui::HChoose_lot_to_add)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;
    dest_lot=p_destlot;
    ui->cbProducts->setModelColumn(1);
    ui->cbProducts->setModel(getProducts());
    ui->cbProducts->completer()->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbProducts->completer()->setCompletionColumn(1);
    ui->cbProducts->completer()->setMaxVisibleItems(30);

    ui->leAmount->setValidator(new QDoubleValidator(0,35000,2,this));


}

HChoose_lot_to_add::~HChoose_lot_to_add()
{
    delete ui;
}

QSqlQueryModel *HChoose_lot_to_add::getProducts()
{
    QSqlQueryModel *mod=new QSqlQueryModel();

    QSqlQuery q(db);
    QString sql="SELECT ID, descrizione FROM prodotti ORDER BY descrizione ASC";
    q.prepare(sql);
    q.exec();
    mod->setQuery(q);
    return mod;
}

QSqlQueryModel *HChoose_lot_to_add::getProductLots()
{
   int prodotto=ui->cbProducts->model()->index(ui->cbProducts->currentIndex(),0).data(0).toInt();

    QSqlQueryModel *mod=new QSqlQueryModel();

    QSqlQuery q(db);
    QString sql="SELECT ID, lot, data,prodotto,um FROM lotdef WHERE  prodotto=:prodotto ORDER BY data DESC";
    q.prepare(sql);
    q.bindValue(":prodotto",prodotto);
    q.exec();
    mod->setQuery(q);
    return mod;
}

void HChoose_lot_to_add::on_pbClose_clicked()
{
    close();
}


void HChoose_lot_to_add::on_cbProducts_currentIndexChanged(int index)
{
    ui->tvLots->setModel(getProductLots());
    connect(ui->tvLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setCurrentLsText()));

    ui->tvLots->setColumnHidden(0,true);
    ui->tvLots->setColumnHidden(3,true);
    ui->tvLots->setColumnHidden(4,true);


}


void HChoose_lot_to_add::on_pbAdd_clicked()
{
    if (saveAdd())
    {

        QMessageBox::information(this,QApplication::applicationName(),"Modifiche salvate",QMessageBox::Ok);
        close();

    }

}

bool HChoose_lot_to_add::saveAdd()
{
     //QString sql="SELECT ID, lot, data,prodotto,um FROM lotdef WHERE  prodotto=:prodotto ORDER BY lot ASC";
    QDateTime data=QDateTime::currentDateTime();
    int idl=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),0).data(0).toInt();
    int utente=user->getID();
    int idprod=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),3).data(0).toInt();
    int azione=2;
    double quantita=ui->leAmount->text().toDouble();
    int um=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),4).data(0).toInt();

    QSqlQuery q(db);
    QString sql;

    qDebug()<<"IDL"<<idl;

    sql="INSERT INTO `operazioni`(`IDlotto`,`data`,`utente`,`IDprodotto`,`azione`,`quantita`,`um`)VALUES(:idlotto,:data,:utente,:idprodotto,:azione,:quantita,:um)";
    db.transaction();
    q.prepare(sql);
    q.bindValue(":idlotto",idl);
    q.bindValue(":data",QVariant(data));
    q.bindValue(":utente",QVariant(utente));
    q.bindValue(":idprodotto",QVariant(idprod));
    q.bindValue(":azione",QVariant(azione));
    q.bindValue(":quantita",QVariant(quantita));
    q.bindValue(":um",QVariant(um));
    bool b =q.exec();
    qDebug()<<"insert:"<<idl<<q.lastError().text();
    if(!b) {
        db.rollback();
        QMessageBox::warning(this,QApplication::applicationName(),"Errore inserendo operazione"+q.lastError().text(),QMessageBox::Ok);
        return false;
    }
    int idop=q.lastInsertId().toInt();

    qDebug()<<dest_lot<<QString::number(idl)<<QString::number(idop);

    sql="INSERT into composizione_lot(`ID_lotto`,`operazione`) VALUES(:lot,:operazione)";
    q.prepare(sql);
    q.bindValue(":lot",QVariant(dest_lot));
    q.bindValue(":operazione",QVariant(idop));

    b=q.exec();
  //  qDebug()<<"compB"<<q.lastError().text()<<q.lastQuery()<<QString::number(idl)<<QString::number(idop);

    if(b)
    {
        db.commit();
        emit add_saved();

   }
    else
    {

        db.rollback();
        QMessageBox::warning(this,QApplication::applicationName(),"Errore"+q.lastError().text(),QMessageBox::Ok);
    }

    return b;



}



QSqlQueryModel *HChoose_lot_to_add::search_by_lot()
{
    QString to_search=ui->leSearch->text();

     QSqlQueryModel *mod=new QSqlQueryModel();

     QSqlQuery q(db);
     QString sql="SELECT ID, lot, data,prodotto,um FROM lotdef WHERE  lot LIKE '" +to_search+"%' ORDER BY data DESC";
     q.prepare(sql);
     q.exec();
     mod->setQuery(q);
     return mod;
}

void HChoose_lot_to_add::setCurrentLsText()
{
    QModelIndex cix=ui->tvLots->model()->index(ui->tvLots->selectionModel()->currentIndex().row(),1);

    QString ntext=cix.data(0).toString();
    ui->leSearch->setText(ntext);
}


void HChoose_lot_to_add::on_leSearch_returnPressed()
{
   ui->tvLots->setModel(search_by_lot());
   ui->tvLots->setColumnHidden(0,true);
   ui->tvLots->setColumnHidden(3,true);
   ui->tvLots->setColumnHidden(4,true);
}

