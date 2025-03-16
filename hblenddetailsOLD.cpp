#include "hblenddetails.h"
#include "hblend.h"
#include "ui_hblenddetails.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlDatabase>
#include <QSqlQuery>

#include <QDebug>
#include <QSqlError>


HBlendDetails::HBlendDetails(HBlend *p_blend, QSqlDatabase p_db, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HBlendDetails)
{
    ui->setupUi(this);
    db=p_db;
    blend=p_blend;
    qDebug()<<db.isOpen()<<db.databaseName();
    mod=new QStandardItemModel();
    ui->tvData->setModel(mod);
}

HBlendDetails::~HBlendDetails()
{
    delete ui;
}

void HBlendDetails::on_pbConfirm_clicked()
{
    emit sg_transfer();
}


void HBlendDetails::on_pbAdd_clicked()
{
    add_row();
}

void HBlendDetails::add_row()
{
    QList<QStandardItem*> row;
    QList<QStandardItem*> d;


    QString lot=ui->leLotto->text();
    QStandardItem *si_id=new QStandardItem();
    QStandardItem *si_idblend=new QStandardItem(QString::number(blend->get_ID()));
    d=getLotData(lot);
    QStandardItem *si_lotto=new QStandardItem(lot);
    QStandardItem *si_idlotto=d.at(0)->clone();
    QStandardItem *si_prodotto=d.at(1)->clone();
    QStandardItem *si_azione=new QStandardItem("2");
    QStandardItem *si_quantita=new QStandardItem("");
    QStandardItem *si_um=new QStandardItem("1");

    row<<si_id<<si_idblend<<si_idlotto<<si_lotto<<si_prodotto<<si_azione<<si_quantita<<si_um;
    mod->appendRow(row);

    ui->tvData->setColumnHidden(0,true);
    ui->tvData->setColumnHidden(1,true);
    ui->tvData->setColumnHidden(2,true);
    ui->tvData->setColumnHidden(3,false);
    ui->tvData->setColumnHidden(4,false);
    ui->tvData->setColumnHidden(5,true);
    ui->tvData->setColumnHidden(6,true);
    ui->tvData->setColumnHidden(7,true);

}

int HBlendDetails::getLotId(QString p_lot)
{
    QString sql="SELECT ID FROM lotdef WHERE lot=:lot";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":lot",p_lot);
    q.exec();
    q.next();
    int lid=q.value(0).toInt();
    qDebug()<<"fidIDLotto"<<lid<<q.lastError().text();

    return lid;
}

QList<QStandardItem *> HBlendDetails::getLotData(QString p_lot)
{
    QString sql="SELECT lotdef.ID,prodotti.descrizione FROM lotdef,prodotti WHERE prodotti.ID=lotdef.prodotto and lotdef.lot=:lot";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":lot",p_lot);
    QList<QStandardItem*>res;
    if(q.exec())
    {
        q.next();
        QStandardItem *idlotto=new QStandardItem(q.value(0).toString());
        QStandardItem *prod=new QStandardItem(q.value(1).toString());

        res<<idlotto<<prod;
    }

     qDebug()<<q.value(0).toString()<<q.value(1).toString();

    return res;

}

void HBlendDetails::getDetails()
{
    int idblend=0;

    QSqlQuery q(db);

    QList<QStandardItem*> d;

    QString sql="SELECT ID from tb_blend where tb_blend.ID_riga_prod=:id";
    q.prepare(sql);
    q.bindValue(":id",blend->getIDRiga());
    q.exec();
    q.next()?idblend=q.value(0).toInt():idblend=-1;

    blend->set_ID(idblend);

    sql="SELECTID,ID_blend,IDlotto,azione,quantita,um FROM tb_blend_details WHERE id_blend=:idb";
    q.prepare(sql);
    q.bindValue(":idb",blend->get_ID());
    q.exec();
    while(q.next())
    {
        QList<QStandardItem*> row;

        QString lot=ui->leLotto->text();
        QStandardItem *si_id=new QStandardItem(q.value(0).toString());
        QStandardItem *si_idblend=new QStandardItem(QString::number(blend->get_ID()));
        d=getLotData(lot);
        QStandardItem *si_lotto=new QStandardItem(lot);
        QStandardItem *si_idlotto=d.at(0)->clone();
        QStandardItem *si_prodotto=d.at(1)->clone();
        QStandardItem *si_azione=new QStandardItem("2");
        QStandardItem *si_quantita=new QStandardItem();
        QStandardItem *si_um=new QStandardItem("1");
        row<<si_id<<si_idblend<<si_idlotto<<si_lotto<<si_prodotto<<si_azione<<si_quantita<<si_um;
        mod->appendRow(row);

        ui->tvData->setColumnHidden(0,true);
        ui->tvData->setColumnHidden(1,true);
        ui->tvData->setColumnHidden(2,true);
        ui->tvData->setColumnHidden(3,false);
        ui->tvData->setColumnHidden(4,false);
        ui->tvData->setColumnHidden(5,true);
        ui->tvData->setColumnHidden(6,true);
        ui->tvData->setColumnHidden(7,true);}
}

