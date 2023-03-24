#include "hproducts_for_calcolo_costi.h"
#include "ui_hproducts_for_calcolo_costi.h"
#include <hcontainer_generic_product.h>
#include "hcontainer_generic.h"
#include "huser.h"
#include "hcontainer_cartoni.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>

HProducts_for_calcolo_costi::HProducts_for_calcolo_costi(int p_selectTypology, HUser *p_user, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HProducts_for_calcolo_costi)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;
    select_tipology=p_selectTypology;




    get_tipologie(select_tipology);

    ui->label_2->setVisible(false);
    ui->cbTipologie->setVisible(false);
    ui->chkGeneric->setChecked(false);





}

HProducts_for_calcolo_costi::~HProducts_for_calcolo_costi()
{
    delete ui;
}


void HProducts_for_calcolo_costi::get_tipologie(int select_tipology)
{
    QSqlQuery q(db);
    QSqlQueryModel *mod=new QSqlQueryModel();
    QString sql=QString();

    sql="SELECT ID,descrizione FROM tipi_prodotto ORDER BY descrizione ASC ";
    q.prepare(sql);
    q.exec();

    mod->setQuery(q);
    ui->cbTipologie->setModel(mod);
    ui->cbTipologie->setModelColumn(1);

    qDebug()<<select_tipology<<ui->cbTipologie->model()->index(select_tipology,1).data(0).toString();

    if(select_tipology>0)
    {
        ui->chkGeneric->setChecked(true);
        ui->cbTipologie->setEnabled(false);
        ui->cbTipologie->setCurrentIndex(select_tipology);
        ui->cbTipologie->setVisible(true);
    }
}

void HProducts_for_calcolo_costi::on_cbTipologie_currentIndexChanged(int index)
{


    int tipo=-1;

    QWidget *current_widget=static_cast<QWidget*>(ui->container_widget->children().at(0));


    if(!ui->chkGeneric->isChecked()){

        if(current_widget!=nullptr){
                    current_widget->deleteLater();
                    current_widget=nullptr;
                }
                HContainer_generic *f=new HContainer_generic();
                f->setParent(ui->container_widget);
                connect (this,SIGNAL(sg_data()),f,SLOT(data()));
                connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
                f->showMaximized();
                return;
    }



    if (select_tipology<0){
        tipo=ui->cbTipologie->model()->index(ui->cbTipologie->currentIndex(),0).data(0).toInt();
    }else{
        tipo=select_tipology;
    }

    if(current_widget!=nullptr){
        current_widget->deleteLater();
        current_widget=nullptr;
    }


    switch (tipo)
    {


   /*  default:
    {
      if(current_widget!=nullptr){
            current_widget->deleteLater();
            current_widget=nullptr;
        }
        HContainer_generic *f=new HContainer_generic();
        f->setParent(ui->container_widget);
        connect (this,SIGNAL(sg_data()),f,SLOT(data()));
        connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
        f->showMaximized();
        break;
    }*/
    case TYPES::CONTENITORI:
    {
        if(current_widget!=nullptr){
            current_widget->deleteLater();
            current_widget=nullptr;
        }
        HContainer_cartoni *f=new HContainer_cartoni(db);
        connect (this,SIGNAL(sg_data()),f,SLOT(data()));
        connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
        f->setParent(ui->container_widget);
        f->showMaximized();
        break;
    }
    case TYPES::VASI:
    {
        if(current_widget!=nullptr){
            current_widget->deleteLater();
            current_widget=nullptr;
        }

        HContainer_generic_product *f=new HContainer_generic_product(tipo,db);
        connect (this,SIGNAL(sg_data()),f,SLOT(data()));
        connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
        f->setParent(ui->container_widget);
        f->showMaximized();
        break;
    }
    case TYPES::CAPSULE:
      {      if(current_widget!=nullptr){
                current_widget->deleteLater();
                current_widget=nullptr;
            }

            HContainer_generic_product *f=new HContainer_generic_product(tipo,db);
            connect (this,SIGNAL(sg_data()),f,SLOT(data()));
            connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
            f->setParent(ui->container_widget);
            f->showMaximized();
            break;
    }
    case TYPES::MATERIALI:
          {  if(current_widget!=nullptr){
                current_widget->deleteLater();
                current_widget=nullptr;
            }

            HContainer_generic_product *f=new HContainer_generic_product(tipo,db);
            connect (this,SIGNAL(sg_data()),f,SLOT(data()));
            connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
            f->setParent(ui->container_widget);
            f->showMaximized();
            break;
    }
    case TYPES::PRODOTTI:
          {  if(current_widget!=nullptr){
                current_widget->deleteLater();
                current_widget=nullptr;
            }

            HContainer_generic_product *f=new HContainer_generic_product(tipo,db);
            connect (this,SIGNAL(sg_data()),f,SLOT(data()));
            connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
            f->setParent(ui->container_widget);
            f->showMaximized();
            break;
    }



    }







}


void HProducts_for_calcolo_costi::on_pbClose_clicked()
{
    close();
}


void HProducts_for_calcolo_costi::on_chkGeneric_toggled(bool checked)
{
    ui->label_2->setVisible(checked);
    ui->cbTipologie->setVisible(checked);

    if(!checked)
    {
        QWidget *current_widget=static_cast<QWidget*>(ui->container_widget->children().at(0));
        if(current_widget!=nullptr){
            current_widget->deleteLater();
            current_widget=nullptr;
        }
        HContainer_generic *f=new HContainer_generic();
        f->setParent(ui->container_widget);
        connect (this,SIGNAL(sg_data()),f,SLOT(data()));
        connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
        f->showMaximized();
    }else
    {
        QWidget *current_widget=static_cast<QWidget*>(ui->container_widget->children().at(0));
        int t=ui->cbTipologie->model()->index(ui->cbTipologie->currentIndex(),0).data(0).toInt();
        if(current_widget!=nullptr){
            current_widget->deleteLater();
            current_widget=nullptr;
        }
        HContainer_generic_product *f=new HContainer_generic_product(t,db);
        f->setParent(ui->container_widget);
        connect (this,SIGNAL(sg_data()),f,SLOT(data()));
        connect(f,SIGNAL(component_added(QString,QString)),this,SIGNAL(sg_item_added(QString,QString)));
        f->showMaximized();

    }

}

void HProducts_for_calcolo_costi::on_pbAdd_clicked()
{
   emit sg_data();
}




