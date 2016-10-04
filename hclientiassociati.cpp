#include "hclientiassociati.h"
#include "ui_hclientiassociati.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

HClientiAssociati::HClientiAssociati(QWidget *parent,int pidricetta,QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HClientiAssociati)
{
    ui->setupUi(this);

    db=pdb;
    idricetta=pidricetta;
    QSqlQueryModel *clienti = new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="select anagrafica.ID, anagrafica.ragione_sociale FROM anagrafica where ID IN (select ID_cliente FROM associazioni where ID_ricetta=:idricetta) order by ragione_sociale ASC";
    q.prepare(sql);
    q.bindValue(":idricetta",idricetta);
    q.exec();

    clienti->setQuery(q);

    ui->lvClienti->setModel(clienti);
    ui->lvClienti->setModelColumn(1);
}

HClientiAssociati::~HClientiAssociati()
{
    delete ui;
}



void HClientiAssociati::on_pushButton_clicked()
{
    close();
}
