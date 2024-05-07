#include "hblenddetail.h"
#include "ui_hblenddetail.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "hblend.h"
#include <QDebug>
#include <QSqlError>


HBlendDetail::HBlendDetail(HBlend *p_blend,QStandardItemModel *p_mod, QSqlDatabase p_db, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HBlendDetail)
{
    ui->setupUi(this);
    blend=p_blend;
    detmod=p_mod;
    removed_rows.clear();
    db=p_db;
    qDebug()<<"DETALIS"<<blend->get_ID();

    ui->tvData->setModel(detmod);
    getDetails();
}

HBlendDetail::~HBlendDetail()
{
    delete ui;
}

void HBlendDetail::on_pbConfirm_clicked()
{
    emit sg_transfer(detmod);

    close();
}


void HBlendDetail::on_pbAdd_clicked()
{
    add_row();
}

void HBlendDetail::add_row()
{
    QList<QStandardItem*> row;
    QList<QStandardItem*> d;


    QString lot=ui->leLotto->text();
    QStandardItem *si_id=new QStandardItem("0");
    QStandardItem *si_idblend=new QStandardItem(QString::number(blend->get_ID()));
    d=getLotData(lot);
    QStandardItem *si_idlotto=d.at(0)->clone();
    QStandardItem *si_lotto=d.at(1)->clone();
    QStandardItem *si_prodotto=d.at(2)->clone();
    QStandardItem *si_azione=new QStandardItem("2");
    QStandardItem *si_quantita=new QStandardItem("0");
    QStandardItem *si_um=new QStandardItem("1");

    row<<si_id<<si_idblend<<si_idlotto<<si_lotto<<si_prodotto<<si_azione<<si_quantita<<si_um;
    detmod->appendRow(row);

    /*ui->tvData->setColumnHidden(0,true);
    ui->tvData->setColumnHidden(1,true);
    ui->tvData->setColumnHidden(2,true);
    ui->tvData->setColumnHidden(3,false);
    ui->tvData->setColumnHidden(4,false);
    ui->tvData->setColumnHidden(5,true);
    ui->tvData->setColumnHidden(6,true);
    ui->tvData->setColumnHidden(7,true);*/

    ui->leLotto->clear();

}

int HBlendDetail::getLotId(QString p_lot)
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

QList<QStandardItem *> HBlendDetail::getLotData(QString p_lot)
{
    QString sql="SELECT lotdef.ID,lotdef.lot,prodotti.descrizione FROM lotdef,prodotti WHERE prodotti.ID=lotdef.prodotto and lotdef.lot=:lot";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":lot",p_lot);
    QList<QStandardItem*>res;
    if(q.exec())
    {
        q.next();

        QStandardItem *idlotto=new QStandardItem(q.value(0).toString());
        QStandardItem *lotto=new QStandardItem(q.value(1).toString());
        QStandardItem *prod=new QStandardItem(q.value(2).toString());

        res<<idlotto<<lotto<<prod;
    }

    qDebug()<<"getlotdeta"<<q.value(0).toString()<<q.value(1).toString()<<q.value(2).toString();

    return res;

}

void HBlendDetail::getDetails()
{
    int idblend=blend->get_ID();
    qDebug()<<"GETDETAILS"<<idblend;

    QSqlQuery q(db);
    QString sql=QString();

    QList<QStandardItem*> d;


    sql="SELECT ID,idblend,IDlotto,lotto,azione,quantita,um FROM tb_blend_details WHERE idblend=:idb ";
    q.prepare(sql);
    q.bindValue(":idb",blend->get_ID());
    qDebug()<<"IDB"<<blend->get_ID()<<q.size();
    q.exec();


    detmod->clear();
    while(q.next())
    {
        QString lot=QString();
        QList<QStandardItem*> row;

        lot=q.value(3).toString();
        d=getLotData(lot);


        QStandardItem *si_id=new QStandardItem(q.value(0).toString());
        QStandardItem *si_idblend=new QStandardItem(QString::number(blend->get_ID()));
        QStandardItem *si_idlotto=d.at(0)->clone();
        QStandardItem *si_lotto=d.at(1)->clone();
        QStandardItem *si_prodotto=d.at(2)->clone();
        QStandardItem *si_azione=new QStandardItem("2");
        QStandardItem *si_quantita=new QStandardItem(QString::number(q.value(5).toDouble(),'f',2));
        QStandardItem *si_um=new QStandardItem("1");
        row<<si_id<<si_idblend<<si_idlotto<<si_lotto<<si_prodotto<<si_azione<<si_quantita<<si_um;


        detmod->appendRow(row);



    }

    detmod->setHeaderData(3,Qt::Horizontal,"LOTTO");
    detmod->setHeaderData(4,Qt::Horizontal,"MATERIALE");



    ui->tvData->setColumnHidden(0,true);
    ui->tvData->setColumnHidden(1,true);
    ui->tvData->setColumnHidden(2,true);
    ui->tvData->setColumnHidden(3,false);
    ui->tvData->setColumnHidden(4,false);
    ui->tvData->setColumnHidden(5,true);
    ui->tvData->setColumnHidden(6,true);
    ui->tvData->setColumnHidden(7,true);
}



void HBlendDetail::on_pbClose_clicked()
{
    close();
}





void HBlendDetail::on_leLotto_returnPressed()
{
    ui->pbAdd->click();
}


void HBlendDetail::on_pbRemove_clicked()
{
    int r=0;
    r=detmod->index(ui->tvData->currentIndex().row(),0).data().toInt();
    detmod->removeRow(ui->tvData->currentIndex().row());

    emit add_removed_id(r);


    removed_rows<<r;
    qDebug()<<"REMOVED ID"<<r;
}

void HBlendDetail::checkLot(QString lot)
{
    connect(this,SIGNAL(sg_lot_check(QString)),ui->leLotto,SLOT(setText(QString)));

    QStringList parts;
    QString clot=QString();
    QString sb=QString();



    parts=lot.split("-");

    if(lot.length()>=11) {
        if(parts.size()==3 && parts.at(2).length()==8)
        {

            if (parts.at(2).length()>8)
            {
                sb=parts.at(2).mid(0,7);


            }
            else if (parts.at(2).length()==8)
            {
                sb=parts.at(2);
            }

            clot=parts.at(0)+"-"+parts.at(1)+"-"+sb;

            emit sg_lot_check(clot);

        }
        else
        {
            return;
        }

    }

}






void HBlendDetail::on_leLotto_textChanged(const QString &arg1)
{
    bool b=false;


    int len=arg1.length();
    qDebug()<<arg1.length();

    if(len>=12) checkLot(arg1);else return;

    on_pbAdd_clicked();
}




