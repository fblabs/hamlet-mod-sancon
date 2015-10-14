#include "hduplicate.h"
#include "ui_hduplicate.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>

HDuplicate::HDuplicate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HDuplicate)
{
    ui->setupUi(this);
}

HDuplicate::~HDuplicate()
{
    delete ui;
}

void HDuplicate::init(QString conn, int ocliente, int oprodotto)
{
    db=QSqlDatabase::database(conn);

   QSqlTableModel *modclients=new QSqlTableModel(0,db);

   cliente=ocliente;
   prodotto=oprodotto;

   qDebug()<<QString::number(cliente)<<QString::number(prodotto);

   modclients->setTable("anagrafica");
   modclients->setSort(1,Qt::AscendingOrder);
   modclients->setFilter("cliente=1 or subcliente=1");
   modclients->select();
   ui->cbClienti->setModel(modclients);
   ui->cbClienti->setModelColumn(1);

   connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(getRecipes()));



}

void HDuplicate::getRecipes()
{
    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *modrecipes=new QSqlQueryModel();
    int cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();

   // sql="select ricette.ID,prodotti.ID,prodotti.descrizione,associazioni.visualizza from prodotti, ricette, associazioni where ricette.ID=associazioni.ID_ricetta and prodotti.ID=ricette.ID_prodotto and ricette.ID_cliente=:idcliente";
   // sql="SELECT ricette.ID,prodotti.ID,prodotti.descrizione from prodotti,ricette where ricette.ID_prodotto=prodotti.ID and prodotti.ID in (select ricette.ID_prodotto from ricette where ID_cliente=:idcliente) order by prodotti.descrizione";
    sql="select ricette.ID,prodotti.ID,prodotti.descrizione from prodotti, ricette, associazioni where ricette.ID=associazioni.ID_ricetta and prodotti.ID=ricette.ID_prodotto and associazioni.ID_cliente=:idcliente";
    q.prepare(sql);
    q.bindValue(":idcliente",QVariant(cliente));
    q.exec();

    modrecipes->setQuery(q);

    ui->cbRicette->setModel(modrecipes);
    ui->cbRicette->setModelColumn(2);

    qDebug()<<q.lastQuery()<<q.lastError()<<QString::number(cliente)<<q.boundValue(0).toString();

}

void HDuplicate::duplicate()
{
    QSqlQuery q(db);
    QString sql;
    int ncli, npro;



    ncli=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    npro= ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),1).data(0).toInt();

    sql="SELECT olio,vaso,tappo,etichette,scatole,note from schede where prodotto=:prodold and cliente=:clientold";
    q.prepare(sql);
    q.bindValue(":prodold",QVariant(npro));
    q.bindValue(":clientold",QVariant(ncli));
    q.exec();
    q.first();

    QVariant olio,vaso,tappo,etichette,scatole,note;

    olio= q.value(0);
    vaso=q.value(1);
    tappo=q.value(2);
    etichette=q.value(3);
    scatole=q.value(4);
    note=q.value(5);

    qDebug()<<olio.toString()<<q.lastError().text();

    sql="delete from schede where cliente=:cliente and prodotto=:prodotto";
    q.prepare(sql);
    q.bindValue(":cliente",QVariant(cliente));
    q.bindValue(":prodotto",QVariant(prodotto));
    q.exec();

    sql="insert into schede (prodotto,cliente,olio,vaso,tappo,etichette,scatole,note) values (:prodotto,:cliente,:olio,:vaso,:tappo,:etichette,:scatole,:note)";
    q.prepare(sql);
    q.bindValue(":prodotto",QVariant(prodotto));
    q.bindValue(":cliente",QVariant(cliente));
    q.bindValue(":olio",olio);
    q.bindValue(":vaso",vaso);
    q.bindValue(":tappo",tappo);
    q.bindValue(":etichette",etichette);
    q.bindValue(":scatole",scatole);
    q.bindValue(":note",note);

    bool b=q.exec();

    if (!b)
    {
        qDebug()<<q.lastQuery()<<q.lastError().text();
    }
    else
    {
        emit update();
    }


}

void HDuplicate::on_pushButton_clicked()
{
    duplicate();
}

void HDuplicate::on_pushButton_2_clicked()
{
    close();
}
