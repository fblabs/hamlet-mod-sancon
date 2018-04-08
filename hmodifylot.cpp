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


HModifyLot::HModifyLot(int pidlotto, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModifyLot)
{
    ui->setupUi(this);

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



    QSqlQuery q(db);
    QString sql="SELECT * from lotdef WHERE ID=:id";
    q.prepare(sql);
    q.bindValue(":id",QVariant(lot));
    q.exec();
    q.first();


    //setto la form ai valori correnti

    QVariant prod=q.value(2);
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

    sql="SELECT descrizione FROM prodotti where ID=:id";
    q.prepare(sql);
    q.bindValue(":id",prod);
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

    sql="UPDATE lotdef set  giacenza=:giac, um=:um, scadenza=:scad, anagrafica=:anag, lot_fornitore=:lotf, ean=:ean,tipo=:tipo,attivo=:att,note=:note WHERE id=:lotid";
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


    HComposizioneLotto *f=new HComposizioneLotto(0,db,lot,ui->leLot->text() + " - " + ui->leProd->text());

    f->show();


}


void HModifyLot::on_pbClose_clicked()
{
   if(QMessageBox::question(this,QApplication::applicationName(),"Chiudere? ATTENZIONE le modifiche verranno perse",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

        close();
    }
}
