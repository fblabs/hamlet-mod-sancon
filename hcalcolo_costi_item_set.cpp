#include "hcalcolo_costi_item_set.h"
#include "ui_hcalcolo_costi_item_set.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QCompleter>
#include <QDebug>


HCalcolo_costi_item_set::HCalcolo_costi_item_set(QString s_prod, QModelIndex p_index, int p_tipo, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HCalcolo_costi_item_set)
{
    ui->setupUi(this);
    db=p_db;
    tipo=p_tipo;
    index=p_index;




    QSqlQuery q(db);
    QString sql="SELECT ID,descrizione,prezzo FROM prodotti WHERE tipo=:tipo ORDER BY descrizione ASC";
    q.prepare(sql);
    q.bindValue(":tipo",tipo);
    q.exec();
    QSqlQueryModel *mod=new QSqlQueryModel();
    mod->setQuery(q);
    ui->cbProdotti->setModel(mod);
    ui->cbProdotti->setModelColumn(1);
    ui->cbProdotti->completer()->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbProdotti->setCurrentIndex(-1);
    ui->cbProdotti->setFocus();
    ui->cbProdotti->setCurrentText(s_prod);
}

HCalcolo_costi_item_set::~HCalcolo_costi_item_set()
{
    delete ui;
}


void HCalcolo_costi_item_set::on_le_costo_returnPressed()
{

}


void HCalcolo_costi_item_set::on_cbProdotti_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    double costo=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),2).data(0).toDouble();
    QString s_costo=QString::number(costo,'f',4);
    ui->le_costo->setText(s_costo);
    ui->leAmount->setFocus();

}


void HCalcolo_costi_item_set::on_leAmount_returnPressed()
{
    double costo=ui->le_costo->text().toDouble();
    double quantita=ui->leAmount->text().toDouble();

    double result=0.0;

    qDebug()<<"TIPO:"<<tipo;

    if(tipo==3)
    {
        result=costo / quantita;
    }else{
        result=costo*quantita;
    }

    ui->leResult->setText(QString::number(result,'f',4));
    ui->leResult->setFocus();


    if(tipo==1)
    {

        return;
    }

    if(tipo==2 || tipo==3 || tipo==4 || tipo==5)
    {
        ui->leAmount->setText("1");
        return;

    }

}


void HCalcolo_costi_item_set::on_leResult_returnPressed()
{


    emit item_modified(index,ui->cbProdotti->currentText(), ui->leResult->text());


    close();
}



void HCalcolo_costi_item_set::on_pbOk_clicked()
{
    on_leResult_returnPressed();
}


void HCalcolo_costi_item_set::on_pbClose_clicked()
{
    close();
}

