#include "hmodficaricetta.h"
#include "ui_hmodficaricetta.h"


#include <QWidget>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QStandardItem>
#include <QSqlQuery>
#include <QSqlQueryModel>


HModficaRicetta::HModficaRicetta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModficaRicetta)
{
    ui->setupUi(this);
}

HModficaRicetta::~HModficaRicetta()
{
    delete ui;
}

void HModficaRicetta::init(QString conn, int idricetta)
{
    id=idricetta;
    sConn=conn;
    db=QSqlDatabase::database(sConn);

    QSqlQuery q;
    QString sql="SELECT righe_ricette.ID_prodotto,prodotti.descrizione,righe_ricette.quantita,righe_ricette.show_prod FROM righe_ricette,prodotti WHERE prodotti.ID=righe_ricette.ID_prodotto AND righe_ricette.ID_ricetta=:idricetta order by righe_ricette.quantita DESC";
    q.prepare(sql);
    q.bindValue(":idricetta",QVariant(idricetta));
    q.exec();
    QSqlQueryModel *mod=new QSqlQueryModel();
    mod->setQuery(q);


}

void HModficaRicetta::on_pushButton_clicked()
{
    close();
}

void HModficaRicetta::on_pushButton_2_clicked()
{

}
