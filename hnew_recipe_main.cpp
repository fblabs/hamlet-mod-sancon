#include "hnew_recipe_main.h"
#include "ui_hnew_recipe_main.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QCompleter>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

HNew_recipe_main::HNew_recipe_main(int p_id_prodotto, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HNew_recipe_main)
{
    ui->setupUi(this);
    db=p_db;
    prod_mod = new QSqlQueryModel();
    id_prodotto_main=p_id_prodotto;

    /* setMinimumSize(0,0);
    update();
    QMetaObject::invokeMethod(this, [=](){ resize(minimumSize()); });*/

    if(id_prodotto_main<0)
    {
        ui->cb_what->setChecked(true);
    }
    else
    {
        ui->cb_what->setChecked(false);
        get_products();
    }



}

HNew_recipe_main::~HNew_recipe_main()
{
    delete ui;
}

void HNew_recipe_main::get_products()
{

    QSqlQuery q(db);
    QString sql=QString();

    if(ui->cb_what->isChecked()){

        return;
        // sql= "SELECT prodotti.ID,prodotti.descrizione FROM prodotti,ricette WHERE ricette.ID_prodotto=prodotti.ID";

    }
    else
    {
        sql="select prodotti.id, prodotti.descrizione from prodotti where prodotti.tipo in (2,6) and prodotti.ID not in (SELECT ricette.ID_prodotto from ricette)";


        q.prepare(sql);
        q.exec();

        prod_mod->setQuery(q);

        ui->lvProducts->setModel(prod_mod);
        ui->lvProducts->setModelColumn(1);
        qDebug()<<"NON E' CECCATO";

    }

    /*ui->leSearchProduct->completer()->setModel(prod_mod);
    ui->leSearchProduct->completer()->setCompletionMode(QCompleter::PopupCompletion);
    ui->leSearchProduct->completer()->setCompletionColumn(1);*/




}





void HNew_recipe_main::on_pbAddRecipeAndproduct_clicked()
{
    if(id_prodotto_main<0)
    {
        if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Creare nuovo prodotto e relativa ricetta?",QMessageBox::Ok|QMessageBox::Cancel))
        {

            int tipo=-1;
            ui->rbProdotto_finito->isChecked()? tipo=2: tipo=6;

            emit sig_add_recipe_and_product(tipo);
            close();
        }

    }else{



        emit sig_add_recipe_to_product(id_prodotto_main);
        //QMessageBox::information(this,QApplication::applicationName(),"RICETTA CREATA",QMessageBox::Ok);


        close();
    }
}


void HNew_recipe_main::on_leSearchProduct_returnPressed()
{
    QSqlQuery q(db);
    QString sql=QString();

    if(ui->cb_what->isChecked())
    {
        sql="SELECT prodotti.ID,prodotti.descrizione FROM prodotti,ricette WHERE ricette.ID_prodotto=prodotti.ID and prodotti.descrizione LIKE '%" + ui->leSearchProduct->text() + "%'";
    }
    else
    {
        sql="select prodotti.id, prodotti.descrizione from prodotti where  prodotti.descrizione LIKE '%" + ui->leSearchProduct->text() + "%' and prodotti.tipo in (2,6) and prodotti.tipo not in (SELECT ricette.ID_prodotto from ricette)";
    }
    q.prepare(sql);
    q.bindValue(":s",ui->leSearchProduct->text());
    q.exec();
    qDebug()<<q.lastError().text()<<q.executedQuery()<<q.boundValue(":s");

    prod_mod->setQuery(q);


}


void HNew_recipe_main::on_pbClose_clicked()
{
    close();
}




void HNew_recipe_main::on_cb_what_toggled(bool checked)
{



    if(!checked)
    {

        get_products();
        ui->lvProducts->setVisible(true);
        ui->leSearchProduct->setVisible(true);
        ui->label->setVisible(true);
        ui->rbProdotto_finito->setVisible(false);
        ui->rbSemilavorato->setVisible(false);
        setMinimumSize(500,300);


    }
    else
    {
        get_products();
        ui->lvProducts->setVisible(false);
        ui->leSearchProduct->setVisible(false);
        ui->label->setVisible(false);
        ui->rbProdotto_finito->setVisible(true);
        ui->rbSemilavorato->setVisible(true);
        setMinimumSize(500,70);

    }

    update();
    QMetaObject::invokeMethod(this, [=](){ resize(minimumSize()); });



}

