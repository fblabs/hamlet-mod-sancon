#include "hlotmovements.h"
#include "ui_hlotmovements.h"
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QDebug>
#include <QSqlError>


HLotMovements::HLotMovements(int id, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLotMovements)
{
    ui->setupUi(this);
    db=pdb;
    qDebug()<<"ID"<<id;
    getLotMovements(id);
    getGiacenzaLotto(id);
}

HLotMovements::~HLotMovements()
{
    delete ui;
}

void HLotMovements::getLotMovements(int id)
{

    QSqlQueryModel *mod=new QSqlQueryModel();
    QStandardItemModel *si_mod=new QStandardItemModel();

    QSqlQuery q(db);
    QString sql="SELECT operazioni.ID,operazioni.data as 'DATA',azioni.descrizione as 'AZIONE',lotdef.lot as 'LOTTO',prodotti.descrizione as 'PRODOTTO',operazioni.quantita as \"QUANTITA'\",lotdef.giacenza as 'GIACENZA' FROM fbgmdb260.operazioni,fbgmdb260.lotdef,fbgmdb260.azioni,fbgmdb260.prodotti where azioni.ID=operazioni.azione and prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and IDLotto="+QString::number(id);
   // QString sql ="select operazioni.ID,lotdef.lot,prodotti.descrizione from operazioni,lotdef,composizione_lot,prodotti where prodotti.ID=lotdef.prodotto and lotdef.ID=operazioni.IDlotto and operazioni.ID=composizione_lot.operazione and composizione_lot.ID_lotto="+QString::number(id);
    q.prepare(sql);
    q.exec(sql);
    mod->setQuery(q);


    QList<QStandardItem*> items;

    for (int i=0;i<mod->rowCount();++i)
    {

        int id_operazione=mod->index(i,0).data(0).toInt();
        QStandardItem *op_data = new QStandardItem(mod->index(i,1).data(0).toString());
        QStandardItem *op_azione = new QStandardItem(mod->index(i,2).data(0).toString());
        QStandardItem *op_lotto = new QStandardItem(mod->index(i,3).data(0).toString());
        QStandardItem *op_prodotto = new QStandardItem(mod->index(i,4).data(0).toString());
        QStandardItem *op_quant = new QStandardItem(QString::number(mod->index(i,5).data(0).toDouble(),'f',4));
        QStandardItem *op_giacenza = new QStandardItem(QString::number(mod->index(i,6).data(0).toDouble(),'f',2));
        qDebug()<<"id_operazione"<<id_operazione;
        QString dlot=getDestinationLot(id_operazione);
        QStandardItem *op_dest_lot = new QStandardItem(dlot);

        items.append(op_data);
        items.append(op_azione);
        items.append(op_lotto);
        items.append(op_prodotto);
        items.append(op_quant);
        items.append(op_giacenza);
        items.append(op_dest_lot);

        si_mod->appendRow(items);
        items.clear();

    }

    ui->tvMovimentiLotto->setModel(si_mod);
    ui->tvMovimentiLotto->setItemDelegate(new QItemDelegate(si_mod));
    si_mod->setHeaderData(0,Qt::Horizontal,"DATA");
    si_mod->setHeaderData(1,Qt::Horizontal,"AZIONE");
    si_mod->setHeaderData(2,Qt::Horizontal,"LOTTO");
    si_mod->setHeaderData(3,Qt::Horizontal,"PRODOTTO");
    si_mod->setHeaderData(4,Qt::Horizontal,"QUANTITA\'");
    si_mod->setHeaderData(5,Qt::Horizontal,"GIACENZA");
    si_mod->setHeaderData(6,Qt::Horizontal,"LOTTO DI DESTINAZIONE");


    ui->tvMovimentiLotto->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);




}

void HLotMovements::getGiacenzaLotto(int id)
{
    QString sql= "SELECT getgiacenza(:id)";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":id",id);
    q.exec();
    q.next();
    ui->leGiacenza->setText(QString::number(q.value(0).toDouble(),'f',3));
}

QString HLotMovements::getDestinationLot( const int p_id_operation)
{
    QSqlQuery q(db);
    QString sql="select lotdef.data,lotdef.lot from lotdef,operazioni,composizione_lot where operazioni.ID=composizione_lot.operazione and lotdef.ID=composizione_lot.ID_lotto and operazioni.ID=:idop order by lotdef.data desc";

    q.prepare(sql);
    q.bindValue(":idop",p_id_operation);
    bool b=q.exec();
    q.next();
    if(b)
    {
        return q.value(1).toString();
    }else{
        return q.lastError().text();
        qDebug()<<q.lastError().text();
    }
}

void HLotMovements::on_pushButton_clicked()
{
    close();
}
