#include "hwarehousedetails.h"
#include "ui_hwarehousedetails.h"
#include <QSqlQuery>
#include <QDate>
#include <QSqlError>
#include <QDebug>

HWarehouseDetails::HWarehouseDetails(QSqlDatabase pdb, int id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWarehouseDetails)
{
    ui->setupUi(this);
    db=pdb;
    QSqlQuery q(db);
    QString sql="SELECT anagrafica.ragione_sociale, lotdef.scadenza,operazioni.azione,lotdef.lot_fornitore,lotdef.lot from operazioni,lotdef, anagrafica where anagrafica.ID=lotdef.anagrafica and lotdef.ID=operazioni.IDlotto and operazioni.ID=:idop";
    q.prepare(sql);
    q.bindValue(":idop",id);
    q.exec();
    q.next();

    QString anag=q.value(0).toString();
    QString scad=q.value(1).toDate().toString("yyyy-MM-dd");
    int azione=q.value(2).toInt();
    QString lotfornitore= q.value(3).toString();
    QString lot = q.value(4).toString();

    qDebug()<<azione;

    if(azione==1)
    {
        ui->label->setText("Fornitore:");
    }
    else
    {
        ui->label->setText("Cliente:");
    }


    ui->leFornitore->setText(anag);
    ui->leLotInt->setText(lot);
    ui->leLotFornitore->setText(lotfornitore);
    ui->leScadenza->setText(scad);




}

HWarehouseDetails::~HWarehouseDetails()
{
    delete ui;
}

void HWarehouseDetails::on_pushButton_clicked()
{
    close();
}
