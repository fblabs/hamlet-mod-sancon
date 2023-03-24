#include "hcontainer_cartoni.h"
#include "ui_hcontainer_cartoni.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QCompleter>
#include <QDebug>

HContainer_cartoni::HContainer_cartoni(QSqlDatabase p_db,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HContainer_cartoni)
{
    ui->setupUi(this);
    db=p_db;
    get_cartoni();
    ui->cbCartoni->completer()->setCompletionMode(QCompleter::PopupCompletion);
    QIntValidator *pezzi_validator=new QIntValidator(0,50);
    QDoubleValidator *costo_cartone_validator=new QDoubleValidator(0,50000,3);
    QDoubleValidator *costo_pezzo_validator=new QDoubleValidator(0,50000,3);

    ui->le_pezzi->setValidator(pezzi_validator);
    ui->le_costo_per_pezzo->setValidator(costo_pezzo_validator);
    ui->le_costo_cartone->setValidator(costo_cartone_validator);

}

HContainer_cartoni::~HContainer_cartoni()
{
    delete ui;
}

void HContainer_cartoni::get_cartoni()
{
    QSqlQueryModel *mod=new QSqlQueryModel();
    QSqlQuery q(db);
    q.prepare("SELECT ID,descrizione FROM prodotti where tipo=3");
    q.exec();
    mod->setQuery(q);
    ui->cbCartoni->setModel(mod);
    ui->cbCartoni->setModelColumn(1);

}

void HContainer_cartoni::data()
{
     QString item,costo=QString();
     item=ui->cbCartoni->currentText().toUpper();
     costo=ui->le_costo_per_pezzo->text();

     qDebug()<<"emit added cartoni";


    emit component_added(item,costo);
}


void HContainer_cartoni::on_pbCalculate_clicked()
{
    double costo_cartone=ui->le_costo_cartone->text().toDouble();
    int pezzi=ui->le_pezzi->text().toInt();

    double costo_pezzo=costo_cartone/pezzi;
    ui->le_costo_per_pezzo->setText(QString::number(costo_pezzo,'f',4));
}

