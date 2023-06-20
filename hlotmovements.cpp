#include "hlotmovements.h"
#include "ui_hlotmovements.h"
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include <QDebug>
#include <QSqlError>


HLotMovements::HLotMovements(int id, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLotMovements)
{
    ui->setupUi(this);
    db=pdb;
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
    QSqlQuery q(db);
    QString sql="SELECT operazioni.data as 'DATA',azioni.descrizione as 'AZIONE',lotdef.lot as 'LOTTO',prodotti.descrizione as 'PRODOTTO',operazioni.quantita as \"QUANTITA'\",lotdef.giacenza as 'GIACENZA' FROM fbgmdb260.operazioni,fbgmdb260.lotdef,fbgmdb260.azioni,fbgmdb260.prodotti where azioni.ID=operazioni.azione and prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and IDLotto="+QString::number(id);

    q.exec(sql);
    mod->setQuery(q);
    qDebug()<<q.lastError().text();
    ui->tvMovimentiLotto->setModel(mod);
    ui->tvMovimentiLotto->setItemDelegate(new QSqlRelationalDelegate(mod));
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

void HLotMovements::on_pushButton_clicked()
{
    close();
}
