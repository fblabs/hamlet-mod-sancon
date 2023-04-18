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
  /*  QSqlRelationalTableModel *mod = new QSqlRelationalTableModel(0,db);
    mod->setTable("operazioni");

    mod->setRelation(3,QSqlRelation("utenti","ID","nome"));
    mod->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
    mod->setRelation(5,QSqlRelation("azioni","ID","descrizione"));
    mod->setRelation(7,QSqlRelation("unita_di_misura","ID","descrizione"));

    mod->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    mod->setHeaderData(1,Qt::Horizontal,QObject::tr("Lotto"));
    mod->setHeaderData(2,Qt::Horizontal,QObject::tr("Data"));
    mod->setHeaderData(3,Qt::Horizontal,QObject::tr("Operatore"));
    mod->setHeaderData(4,Qt::Horizontal,QObject::tr("Prodotto"));
    mod->setHeaderData(5,Qt::Horizontal,QObject::tr("Azione"));
    mod->setHeaderData(7,Qt::Horizontal,QObject::tr("Quantità"));
    mod->setHeaderData(6,Qt::Horizontal,QObject::tr("U.M."));
    mod->setHeaderData(8,Qt::Horizontal,QObject::tr("Note"));


    mod->setFilter("operazioni.IDlotto="+QString::number(id));
    mod->setSort(2,Qt::DescendingOrder);
    mod->select();
    ui->tvMovimentiLotto->setModel(mod);
    ui->tvMovimentiLotto->setItemDelegate(new QSqlRelationalDelegate(mod));
    ui->tvMovimentiLotto->setColumnHidden(0,true);
    ui->tvMovimentiLotto->setColumnHidden(1,true);
    ui->tvMovimentiLotto->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);*/

    QSqlQueryModel *mod=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="SELECT operazioni.data as 'DATA',anagrafica.ragione_sociale as 'OPERATORE',prodotti.descrizione as 'PRODOTTO',azioni.descrizione as 'AZIONE',FORMAT(operazioni.quantita,4) as 'QUANTITA\', unita_di_misura.descrizione, operazioni.note as 'NOTE'\
        from operazioni,anagrafica,utenti,prodotti, azioni,unita_di_misura\
        where anagrafica.ID=operazioni.utente and prodotti.ID=operazioni.IDprodotto and azioni.ID=operazioni.azione and unita_di_misura.ID=operazioni.um and operazioni.IDLotto=25866";
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
