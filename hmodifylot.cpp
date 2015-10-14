#include "hmodifylot.h"
#include "ui_hmodifylot.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlError>


HModifyLot::HModifyLot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModifyLot)
{
    ui->setupUi(this);
}

HModifyLot::~HModifyLot()
{
    delete ui;
}

void HModifyLot::init(int idlotto, QString conn)
{
    db = QSqlDatabase::database(conn);
    lot=idlotto;

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
    QVariant ixum=q.value(5);
    QVariant scadz= q.value(6);

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

    ui->leGiac->setText(q.value(4).toString());
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

void HModifyLot::on_pushButton_2_clicked()
{
    if (QMessageBox::Ok==QMessageBox::information(this,QApplication::applicationName(),"Chiudere? Tutte le modifiche non salvate andranno perdute",QMessageBox::Ok|QMessageBox::Cancel))
    {
        close();
    }
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

bool HModifyLot::updateLot()
{
    QSqlQuery q(db);
    QString sql;
    bool b=false;

    sql="UPDATE lotdef set  giacenza=:giac, um=:um, scadenza=:scad, anagrafica=:anag, lot_fornitore=:lotf, ean=:ean,tipo=:tipo,note=:note WHERE id=:lotid";
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


    q.bindValue(":anag",ui->cbAnag->model()->index(ui->cbAnag->currentIndex(),0).data(0));
    q.bindValue(":lotf",QVariant(ui->leLotFornitore->text()));
    q.bindValue(":ean",QVariant(ui->leEan->text()));
    q.bindValue(":tipo",ui->cbtipo->model()->index(ui->cbtipo->currentIndex(),0).data(0));
    q.bindValue(":note",QVariant(ui->plainTextEdit->toPlainText()));
    q.bindValue(":lotid",QVariant(lot));

    db.transaction();
    b=q.exec();
    qDebug()<<q.lastQuery()<<q.lastError().text();
    if(b)
    {
        db.commit();
        emit update();
    }
    else
    {
        db.rollback();
        qDebug()<<q.lastError().text();
    }

    return b;

}

void HModifyLot::on_pushButton_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Salvare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel))
    {
         updateLot();
    }
}
