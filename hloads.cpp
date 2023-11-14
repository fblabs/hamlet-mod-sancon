#include "hloads.h"
#include "ui_hloads.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>

HLoads::HLoads(const int pid_prodotto=-1, const QString p_title, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLoads)
{
    ui->setupUi(this);
    ui->deFrom->setDate(QDate::currentDate().addMonths(-12));
    ui->deTo->setDate(QDate::currentDate());

    db=p_db;
    id_prodotto=pid_prodotto;
    getTypes();
    load();
    // getLoads();
}

HLoads::~HLoads()
{
    delete ui;
}

void HLoads::getLoads()
{
    QSqlQuery q(db);
    QDate from=ui->deFrom->date();
    QDate to=ui->deTo->date();
    // QString sql="SELECT SUM(quantita) from operazioni,lotdef where operazioni.IDlotto=lotdef.ID and lotdef.tipo=1 and operazioni.IDprodotto=:idp and operazioni.azione=1 and operazioni.data >= :from and operazioni.data <=:to";
    QString sql="SELECT SUM(quantita) from operazioni,lotdef where operazioni.IDlotto=lotdef.ID and operazioni.IDprodotto=:idp and operazioni.azione=1 and operazioni.data >= :from and operazioni.data <=:to";
    id_prodotto=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data().toInt();
    q.prepare(sql);
    q.bindValue(":idp", id_prodotto);
    q.bindValue(":from",from);
    q.bindValue(":to",to);
    q.exec();
    q.next();

    double amount=q.value(0).toDouble();

    ui->leAmount->setText(QString::number(amount,'f',0));

}

void HLoads::getUnloads()
{
    QSqlQuery q(db);
    QDate from=ui->deFrom->date();
    QDate to=ui->deTo->date();
    QString sql="SELECT SUM(quantita) from operazioni,lotdef where operazioni.IDlotto=lotdef.ID and lotdef.tipo=1 and operazioni.IDprodotto=:idp and operazioni.azione=2 and operazioni.data >= :from and operazioni.data <=:to";
    q.prepare(sql);
    q.bindValue(":idp", id_prodotto);
    q.bindValue(":from",from);
    q.bindValue(":to",to);
    q.exec();
    qDebug()<<q.lastError().text()<<q.lastQuery()<<id_prodotto;
    q.next();

    double amount=q.value(0).toDouble();

    ui->leAmount->setText(QString::number(amount,'f',0));

}

void HLoads::on_pbClose_clicked()
{
    close();
}


void HLoads::on_rbLoads_toggled(bool checked)
{
    if(checked)
    {
        ui->label_3->setText("Totale carichi");
        getLoads();
    }
    else
    {
        ui->label_3->setText("Totale scarichi");
        getUnloads();
    }
}


void HLoads::on_pbSearch_clicked()
{
    getLoads();
}

void HLoads::get_prodotti(const int idtipo)
{

}

void HLoads::getTypes()
{
    QSqlQueryModel *tmTipi=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="SELECT ID,descrizione from tipi_prodotto order by descrizione asc";
    // q.prepare(sql);
    q.exec(sql);
    tmTipi->setQuery(q);
    qDebug()<<"get_types"<<q.lastQuery()<<q.lastError().text();
    ui->cbTipi->setModel(tmTipi);
    ui->cbTipi->setModelColumn(1);
    connect(ui->cbTipi,SIGNAL(currentIndexChanged(int)),this,SLOT(load()));
    connect(ui->cbProdotti,SIGNAL(currentIndexChanged(int)),this,SLOT(get_data()));

}

void HLoads::load(const QString tosearch)
{
    QString sql=QString();
    QSqlQueryModel *qmprodotti=new QSqlQueryModel();
    if(tosearch.length()>0)
    {
        sql="SELECT id,descrizione from prodotti where descrizione LIKE '%"+ tosearch +"%' AND tipo=:idtipo order by descrizione ASC";

    }
    else{

        sql="SELECT id,descrizione from prodotti where tipo=:idtipo order by descrizione ASC";
    }



    QSqlQuery q(db);
    q.prepare(sql);
    int idtipo=ui->cbTipi->model()->index(ui->cbTipi->currentIndex(),0).data(0).toInt();
    qDebug()<<idtipo;
    q.bindValue(":idtipo",idtipo);
    q.exec();
    qmprodotti->setQuery(q);
    ui->cbProdotti->setModel(qmprodotti);
    ui->cbProdotti->setModelColumn(1);
    qDebug()<<idtipo<<q.lastError().text();
}

void HLoads::get_data()
{
    ui->rbLoads->isChecked()?getLoads():getUnloads();
}




void HLoads::on_deFrom_userDateChanged(const QDate &date)
{
    get_data();
}


void HLoads::on_deTo_userDateChanged(const QDate &date)
{
    get_data();
}

