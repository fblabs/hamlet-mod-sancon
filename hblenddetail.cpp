#include "hblenddetail.h"
#include "ui_hblenddetail.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "hblend.h"
#include <QAction>
#include <QMenu>
#include <QMessageBox>
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


    ui->tvData->setModel(detmod);
    getDetails();

    ui->tvData->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->tvData,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));
    connect(this,SIGNAL(sg_lot_checked(QString)),this,SLOT(add_row(QString)));
}

HBlendDetail::~HBlendDetail()
{
    delete ui;
}

void HBlendDetail::on_pbConfirm_clicked()
{

    transferData();
    close();
}



void HBlendDetail::add_row(QString p_lot)
{


    QList<QStandardItem*> row;
    QList<QStandardItem*> d;

    d=getLotData(p_lot);

    QStandardItem *si_id=new QStandardItem("0");
    QStandardItem *si_idblend=new QStandardItem(QString::number(blend->get_ID()));
    QStandardItem *si_idlotto=d.at(0)->clone();
    QStandardItem *si_lotto=d.at(1)->clone();
    QStandardItem *si_prodotto=d.at(2)->clone();
    QStandardItem *si_azione=new QStandardItem("2");
    QStandardItem *si_quantita=new QStandardItem("0");
    QStandardItem *si_um=new QStandardItem("1");

    row<<si_id<<si_idblend<<si_idlotto<<si_lotto<<si_prodotto<<si_azione<<si_quantita<<si_um;

    if(d.at(1)->text().length()>0)
    {
        detmod->appendRow(row);
    }


    ui->tvData->setColumnHidden(0,true);
    ui->tvData->setColumnHidden(1,true);
    ui->tvData->setColumnHidden(2,true);
    ui->tvData->setColumnHidden(3,false);
    ui->tvData->setColumnHidden(4,false);
    ui->tvData->setColumnHidden(5,true);
    ui->tvData->setColumnHidden(6,true);
    ui->tvData->setColumnHidden(7,true);


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




    return res;
}

void HBlendDetail::getDetails()
{



    QSqlQuery q(db);
    QString sql=QString();

    QList<QStandardItem*> d;


    sql="SELECT ID,idblend,IDlotto,lotto,azione,quantita,um FROM tb_blend_details WHERE idblend=:idb ";
    q.prepare(sql);
    q.bindValue(":idb",blend->get_ID());
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

    emit(sg_show_main());
    close();

}



void HBlendDetail::on_pbRemove_clicked()
{
    int r=0;
    r=detmod->index(ui->tvData->currentIndex().row(),0).data().toInt();
    detmod->removeRow(ui->tvData->currentIndex().row());

    emit add_removed_id(r);


    removed_rows<<r;

}

bool HBlendDetail::checkLot(QString plot)
{

    qDebug()<<plot;

    QStringList parts;
    QString clot=QString();
    QString sb=QString();
    parts=plot.split("-");

    bool res=false;

    if(plot.length()<12 || parts.size()<3) return res;

    if(parts.at(2).length()<8)return res;

    if(parts.at(2).length()>8)
    {
        if (parts.at(2).length()>8)
        {
            sb=parts.at(2).mid(0,8);
        }
    }

    qDebug()<<sb;


    if(parts.at(2).length()==8)
    {
        clot=parts.at(0)+"-"+parts.at(1)+"-"+parts.at(2);

        clot.clear();
        res =true;

    }
    else{
    res= false;
    }

    if(res) add_row(clot);


    return res;
}

void HBlendDetail::transferData()
{
    emit sg_transfer(detmod,removed_rows);
}

void HBlendDetail::setup()
{

    ui->tvData->setColumnHidden(0,true);
    ui->tvData->setColumnHidden(1,true);
    ui->tvData->setColumnHidden(2,true);
    ui->tvData->setColumnHidden(3,false);
    ui->tvData->setColumnHidden(4,false);
    ui->tvData->setColumnHidden(5,true);
    ui->tvData->setColumnHidden(6,true);
    ui->tvData->setColumnHidden(7,true);
}

void HBlendDetail::showContextMenu(const QPoint &pos)
{
    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(0);

    QAction *removeAction=new QAction("Cancella riga");
    QAction *saveAction=new QAction("Salva");
    connect(removeAction,SIGNAL(triggered(bool)),this,SLOT(on_pbRemove_clicked()));
    connect(saveAction,SIGNAL(triggered(bool)),this,SLOT(on_pbSave_clicked()));
    menu->addAction(removeAction);
    menu->addAction(saveAction);

    menu->popup(globalPos);
}




void HBlendDetail::on_leLot_textChanged(const QString &arg1)
{
    if(arg1.length()<12)return;

    if(checkLot(arg1)){

        add_row(arg1);
        ui->leLot->clear();
    }



}


void HBlendDetail::on_pbSave_clicked()
{

    if(QMessageBox::question(this,QApplication::applicationName(),"Salvare?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
    transferData();
    emit sg_save_blend(false);
    getDetails();
    }

}

