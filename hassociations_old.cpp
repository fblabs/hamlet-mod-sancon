#include "hassociations.h"
#include "ui_hassociations.h"
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlQueryModel>

#include <QMessageBox>
#include <QDebug>

HAssociations::HAssociations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HAssociations)
{
    ui->setupUi(this);

}

HAssociations::~HAssociations()
{
    delete ui;
}

void HAssociations::initForm()
{

    db = QSqlDatabase::database(sConn);

    db.open();



    anagrafica=new QSqlRelationalTableModel(0,db);
    prodotti=new QSqlRelationalTableModel(0,db);
    ricette=new QSqlRelationalTableModel(0,db);
    associazioni=new QSqlRelationalTableModel(0,db);

//setto chiavi foreign

    QSqlRelation ricprodotti("prodotti","ID","descrizione");
    QSqlRelation ricanagrafica ("anagrafica","ID","descrizione");
    QSqlRelation assprodotti("prodotti","ID","descrizione");
    QSqlRelation assricette("anagrafica","ID","descrizione");

    anagrafica->setTable("anagrafica");
    prodotti->setTable("prodotti");
    ricette->setTable("ricette");
    associazioni->setTable("associazioni");
    anagrafica->select();
    prodotti->select();
    ricette->select();
    associazioni->select();
 //   QMessageBox::information(this,QApplication::applicationName(),QString::number(prodotti->rowCount()),QMessageBox::Ok);

    ricette->setRelation(0,ricprodotti);
    ricette->setRelation(1,ricanagrafica);
    associazioni->setRelation(0,assprodotti);
    associazioni->setRelation(1,assricette);

    ui->cb1->setModel(anagrafica);
    ui->cb1->setModelColumn(1);
    //ui->listView_2->setModel(ricette);
    ui->listView_2->setModel(associazioni);
    ui->listView_2->setModelColumn(1);
    anagrafica->setFilter("cliente=1");
    prodotti->setFilter("tipo=1");


}

void HAssociations::setConnectionName(QString conn)
{
    sConn=conn;
    initForm();
}

void HAssociations::on_cb1_currentIndexChanged(const QString &arg1)
{

   QVariant pp=ui->cb1->model()->index(ui->cb1->currentIndex(),0).data(0);
   QString p=pp.toString();
   //associazioni->setFilter("ID_cliente="+p);
   QSqlQueryModel qr;

   qr.setQuery("select prodotti.descrizione from prodotti");
   qDebug()<<p;

}
