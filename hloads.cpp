#include "hloads.h"
#include "ui_hloads.h"
#include <QSqlQuery>
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

    ui->leProduct->setText(p_title);

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
        QString sql="SELECT SUM(quantita) from operazioni,lotdef where operazioni.IDlotto=lotdef.ID and lotdef.tipo=1 and operazioni.IDprodotto=:idp and operazioni.azione=1 and operazioni.data >= :from and operazioni.data <=:to";
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

