#include "hloads.h"
#include "ui_hloads.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

HLoads::HLoads(int pid_prodotto=-1,QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLoads)
{
    ui->setupUi(this);
    ui->deFrom->setDate(QDate::currentDate().addMonths(-12));
    ui->deTo->setDate(QDate::currentDate());

    db=p_db;
    id_prodotto=pid_prodotto;

    getLoads();
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
        QString sql="SELECT SUM(quantita) from operazioni where operazioni.IDProdotto=:idprodotto  and operazioni.azione=1 and operazioni.data >= :from AND operazioni.data <= :to";
        q.prepare(sql);
        q.bindValue(":idprodotto", id_prodotto);
        q.bindValue(":from",from);
        q.bindValue(":to",to);
        q.exec();
        qDebug()<<q.lastError().text()<<q.lastQuery();
        q.next();

        double amount=q.value(0).toDouble();

        ui->leAmount->setText(QString::number(amount,'f',0));

}

void HLoads::on_pbClose_clicked()
{
    close();
}


void HLoads::on_pushButton_clicked()
{
    getLoads();
}

