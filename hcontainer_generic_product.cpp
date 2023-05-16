#include "hcontainer_generic_product.h"
#include "ui_hcontainer_generic_product.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QCompleter>
#include <QDebug>

HContainer_generic_product::HContainer_generic_product(const int p_tipo, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HContainer_generic_product)
{
    ui->setupUi(this);
    db=p_db;
    tipo=p_tipo;
    getProducts(p_tipo);

    QDoubleValidator *costo_validator=new QDoubleValidator(0,100,3);
    ui->leCosto->setValidator(costo_validator);
    QIntValidator *amount_validator=new QIntValidator(0,32564);
    ui->leAmount->setValidator(amount_validator);

}

HContainer_generic_product::~HContainer_generic_product()
{
    delete ui;
}

void HContainer_generic_product::getProducts(int p_tipo)
{

        QSqlQueryModel *mod=new QSqlQueryModel();
        QSqlQuery q(db);
        q.prepare("SELECT ID,descrizione,prezzo FROM prodotti where tipo=:t");
        q.bindValue(":t",p_tipo);
        q.exec();
        mod->setQuery(q);
        ui->cb_prodotti->setModel(mod);
        ui->cb_prodotti->setModelColumn(1);
        ui->cb_prodotti->completer()->setCompletionMode(QCompleter::PopupCompletion);

}




void HContainer_generic_product::on_cb_prodotti_currentIndexChanged(int index)
{
   QSqlQueryModel *mod=static_cast<QSqlQueryModel*>(ui->cb_prodotti->model());
   double prezzo=mod->index(index,2).data(0).toDouble();
   ui->leCosto->setText(QString::number(prezzo,'f',2));

}

void HContainer_generic_product::data()
{


    QString item=ui->cb_prodotti->currentText().toUpper();
    QString costo=ui->leCosto->text();
    QString amount=ui->leAmount->text();

    emit component_added(item,amount,costo);
}


void HContainer_generic_product::on_leAmount_returnPressed()
{
    double amount=ui->leAmount->text().toDouble();
    double cost=ui->leCosto->text().toDouble();
    double cost_result=amount * cost;

    if(tipo==3)
    {
        cost_result=cost/amount;
    }
    else{
        cost_result=cost*amount;
    }

     ui->leCosto->setText(QString::number(cost_result,'f',4));
}

