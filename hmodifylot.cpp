#include "hmodifylot.h"
#include "ui_hmodifylot.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QDebug>
#include "hcomposizionelotto.h"
#include <QSqlError>
#include "hlotmovements.h"
#include "huser.h"


HModifyLot::HModifyLot(int pidlotto, HUser *p_user, QSqlDatabase pdb,const QString p_descrizione, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModifyLot)
{
    ui->setupUi(this);

  /*  f=from;
    t=to;*/

    user=p_user;
    descrizione=p_descrizione;


    if (f.isNull())
    {
        ui->lbLoad->setVisible(false);
        ui->leLoad->setVisible(false);

    }
    else
    {
        ui->lbLoad->setText("Carichi tra\n"+f.toString("dd-MM-yyyy")+"\n e \n"+t.toString("dd-MM-yyyy"));
    }



    db=pdb;
    lot=pidlotto;
    QSqlTableModel *mum=new QSqlTableModel(0,db);
    QSqlTableModel *mang=new QSqlTableModel(0,db);
    QSqlTableModel *mtipi=new QSqlTableModel(0,db);

    mum->setTable("unita_di_misura");
    mum->setSort(1,Qt::AscendingOrder);
    mum->select();

    mang->setTable("anagrafica");
    mang->setSort(1,Qt::AscendingOrder);
    mang->select();

    mtipi->setTable("tipi_lot");
    mtipi->setSort(1,Qt::AscendingOrder);
    mtipi->select();

    ui->cbAnag->setModelColumn(1);
    ui->cbAnag->setModel(mang);

    ui->cbUm->setModelColumn(1);
    ui->cbUm->setModel(mum);

    ui->cbtipo->setModelColumn(1);
    ui->cbtipo->setModel(mtipi);

    loadLotData();
    getLoadAmount();
}

HModifyLot::~HModifyLot()
{
    delete ui;
}



void HModifyLot::on_cbScad_toggled(bool checked)
{
    if(checked)
    {
        ui->deScad->setVisible(false);
    }
    else
    {
        ui->deScad->setVisible(true);
    }
}

void HModifyLot::updateLot()
{
    QSqlQuery q(db);
    QString sql;
    bool b=false;

    sql="UPDATE lotdef set  giacenza=:giac, um=:um, scadenza=:scad, anagrafica=:anag, lot_fornitore=:lotf, ean=:ean,tipo=:tipo,attivo=:att,note=:note,operatore=:oper WHERE id=:lotid";
    q.prepare(sql);
    q.bindValue(":giac",QVariant(ui->leGiac->text().toDouble()));
    q.bindValue(":um",ui->cbUm->model()->index(ui->cbUm->currentIndex(),0).data(0));

    if(ui->cbScad->isChecked())
    {
        q.bindValue(":scad",QVariant(QVariant::Date));
    }
    else
    {

       q.bindValue(":scad",QVariant(ui->deScad->date()));
    }
    if(ui->cbAttivo->isChecked())
    {
        q.bindValue(":att",true);
    }
    else
    {

       q.bindValue(":att",false);
    }


    q.bindValue(":anag",ui->cbAnag->model()->index(ui->cbAnag->currentIndex(),0).data(0));
    q.bindValue(":lotf",QVariant(ui->leLotFornitore->text()));
    q.bindValue(":ean",QVariant(ui->leEan->text()));
    q.bindValue(":tipo",ui->cbtipo->model()->index(ui->cbtipo->currentIndex(),0).data(0));
    q.bindValue(":note",QVariant(ui->plainTextEdit->toPlainText()));
    q.bindValue(":oper",QVariant(ui->leOperatore->text()));
    q.bindValue(":lotid",QVariant(lot));

    db.transaction();
    b=q.exec();
   // // qDebug()<<q.lastQuery()<<q.lastError().text();
    if(b)
    {
        db.commit();
        emit updatedLot();
        QMessageBox::information(this,QApplication::applicationName(),"modifiche salvate",QMessageBox::Ok);


    }
    else
    {

        QMessageBox::warning(this,QApplication::applicationName(),"modifiche salvate",QMessageBox::Ok);
        db.rollback();
        QMessageBox::information(this,QApplication::applicationName(),"Errore salvando le modifiche",QMessageBox::Ok);


    }

}

void HModifyLot::on_pushButton_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Salvare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel))
    {
         updateLot();
    }
}

void HModifyLot::on_pbComposizione_clicked()
{
   // int p_idlotto, QString p_descrizione, HUser *p_user, QSqlDatabase pdb,QWidget *parent
        QString desc=ui->leLot->text()+" - "+ui->leProd->text();

    HComposizioneLotto *f=new HComposizioneLotto(lot,desc,user,db);
    connect(f,SIGNAL(unloaded()),this,SLOT(loadLotData()));

    f->show();


}


void HModifyLot::on_pbClose_clicked()
{
   if(QMessageBox::question(this,QApplication::applicationName(),"Chiudere? ATTENZIONE le modifiche verranno perse",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

        close();
    }
}

void HModifyLot::on_pbLotOperations_clicked()
{
    HLotMovements *f =new HLotMovements(lot,db);
    f->show();
}



void HModifyLot::getLoadAmount()
{
     QSqlQuery q(db);
     QString sql="SELECT SUM(quantita) from operazioni,lotdef where operazioni.IDlotto=lotdef.ID and lotdef.tipo=1 and operazioni.IDProdotto=:idp and operazioni.IDProdotto=:idp and operazioni.azione=1 and operazioni.data between :from and :to";
     q.prepare(sql);
     q.bindValue(":idp",prodotto);
     q.bindValue(":from",f);
     q.bindValue(":to",t);
     q.exec();
     q.first();

     double load=0.0;
     load=q.value(0).toDouble();
     qDebug()<<q.executedQuery()<<q.lastError().text();

     const QString s_load=QString::number(load,'f',3);
     ui->leLoad->setText(s_load);
     qDebug()<<s_load;




}

void HModifyLot::loadLotData()
{
    QSqlQuery q(db);
    QString sql="SELECT * from lotdef WHERE ID=:id";
    q.prepare(sql);
    q.bindValue(":id",QVariant(lot));
    q.exec();
    q.first();

    prodotto=q.value(2).toInt();
    qDebug()<<"prodotto:"<<prodotto;
    QVariant anag=q.value(7);
    QVariant ixtipo=q.value(10);
    tipo=q.value(10).toInt();
    QVariant ixum=q.value(5);
    QVariant scadz= q.value(6);
    QVariant attv=q.value(11);

    if (scadz.isNull())
    {
        ui->cbScad->setChecked(true);
        ui->deScad->setVisible(false);

    }
    else
    {
        ui->cbScad->setChecked(false);
        ui->deScad->setVisible(true);
    }

    ui->leLot->setText(q.value(1).toString());

    ui->leGiac->setText(QString::number(q.value(4).toDouble(),'n',3));
    ui->deScad->setDate(q.value(6).toDate());
    ui->leLotFornitore->setText(q.value(8).toString());
    ui->leEan->setText(q.value(9).toString());
    ui->plainTextEdit->setPlainText(q.value(12).toString());
    ui->leOperatore->setText(q.value(13).toString());

    sql="SELECT descrizione FROM prodotti where ID=:id";
    q.prepare(sql);
    q.bindValue(":id",prodotto);
    q.exec();
    q.first();
    ui->leProd->setText(q.value(0).toString());

    sql= "select ragione_sociale from anagrafica where ID=:id";
    q.prepare(sql);
    q.bindValue(":id",anag);
    q.exec();
    q.first();

    int idx=ui->cbAnag->findText(q.value(0).toString());
    ui->cbAnag->setCurrentIndex(idx);

    sql= "select descrizione from tipi_lot where ID=:id";
    q.prepare(sql);
    q.bindValue(":id",ixtipo);
    q.exec();
    q.first();
    if (ixtipo.toInt()!=1)
    {
        ui->lbLoad->setVisible(false);
        ui->leLoad->setVisible(false);

    }
    else
    {
        ui->lbLoad->setText("Carichi tra\n"+f.toString("dd-MM-yyyy")+"\n e \n"+t.toString("dd-MM-yyyy"));
    }

    bool at=attv.toBool();
    ui->cbAttivo->setChecked(at);

    int ixt=ui->cbtipo->findText(q.value(0).toString());
    ui->cbtipo->setCurrentIndex(ixt);

    sql="select descrizione from unita_di_misura where ID=:id";
    q.prepare(sql);
    q.bindValue(":id",ixum);
    q.exec();
    q.first();

    int ium=ui->cbUm->findText(q.value(0).toString());
    ui->cbUm->setCurrentIndex(ium);
}



