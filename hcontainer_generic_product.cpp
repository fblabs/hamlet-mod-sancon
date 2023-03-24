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
    getProducts(p_tipo);

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
   qDebug()<<"data";

    QString item=ui->cb_prodotti->currentText().toUpper();
    QString costo=ui->leCosto->text();

    emit component_added(item,costo);
}

