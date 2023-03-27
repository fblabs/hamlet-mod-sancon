#include "hcalcolo_costi_jolly.h"
#include "ui_hcalcolo_costi_jolly.h"
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QHeaderView>
#include <QDebug>
HCalcolo_costi_jolly::HCalcolo_costi_jolly(QSqlQueryModel *p_recipe_model, QStandardItemModel *p_componenti_model, double p_formato, HUser *p_user, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HCalcolo_costi_jolly)
{
    ui->setupUi(this);

    recipe_mod=p_recipe_model;
    QStandardItemModel *converted_mod=convert_recipe_model();
    componenti_mod=p_componenti_model;
    HUser *user=p_user;
    formato=p_formato;


    ui->tv_Recipe->setModel(converted_mod);


    connect(ui->tv_Recipe->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(recalculate()));
    ui->tv_Recipe->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tv_Recipe->horizontalHeader()->setStretchLastSection(true);


    ui->tvComponenti->setModel(componenti_mod);
    ui->tvComponenti->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvComponenti->horizontalHeader()->setStretchLastSection(true);

     double tot_form=0.0;

     tot_form= get_total_formato();
     ui->lb_costo_formato->setText(QString::number(tot_form,'f',4));

}

HCalcolo_costi_jolly::~HCalcolo_costi_jolly()
{
    delete ui;
}

void HCalcolo_costi_jolly::setOverviewData(QString p_overview)
{
    ui->lb_overview->setText(p_overview);
}

void HCalcolo_costi_jolly::recalculate()
{
   QStandardItemModel *loc_mod=static_cast<QStandardItemModel*>(ui->tv_Recipe->model());
   QModelIndex ix=ui->tv_Recipe->currentIndex();
   QModelIndex ix_costo_ricetta=loc_mod->index(ui->tv_Recipe->currentIndex().row(),3);
   QModelIndex ix_cf=loc_mod->index(ui->tv_Recipe->currentIndex().row(),4);
   double costo_ricetta=0.0;
   double costo_unitario=loc_mod->index(ui->tv_Recipe->currentIndex().row(),2).data(0).toDouble();
   double quant=loc_mod->index(ui->tv_Recipe->currentIndex().row(),1).data(0).toDouble();

   costo_ricetta=costo_unitario*quant;

   loc_mod->setData(ix_costo_ricetta,QString::number(costo_ricetta,'f',4));
   double norm_formato=(costo_unitario*quant)*formato;
   loc_mod->setData(ix_cf,QString::number(norm_formato,'f',4));

   double tot_form=0.0;
   tot_form= get_total_formato();
   ui->lb_costo_formato->setText(QString::number(tot_form,'f',4));
   QStandardItemModel *loc_componenti_mod=static_cast<QStandardItemModel*>(ui->tvComponenti->model());
   QModelIndex ix_prodotto=loc_componenti_mod->index(0,2);
   loc_componenti_mod->setData(ix_prodotto,QString::number(tot_form,'f',4));



}

double HCalcolo_costi_jolly::get_factor()
{
    /*double tot_ricetta=0.0;*/
    double factor=0.0;

/*
    QStandardItemModel* model=static_cast<QStandardItemModel*>(ui->tvRicetta->model());

    for (int x=0;x<model->rowCount();x++)
    {
        tot_ricetta += model->index(x,1).data(0).toDouble();
    }




    factor = tot_formato / tot_ricetta;*/

    return factor;
}

double HCalcolo_costi_jolly::get_total_formato()
{
    double tot_formato=0.0;
    QStandardItemModel *loc_mod=static_cast<QStandardItemModel*>(ui->tv_Recipe->model());
    for(int x=0;x<loc_mod->rowCount();x++)
    {
         tot_formato+=loc_mod->index(x,4).data(0).toDouble();


    }

    qDebug()<<tot_formato;
    return tot_formato;
}

QStandardItemModel* HCalcolo_costi_jolly::convert_recipe_model()
{
   QStandardItemModel *mod=new QStandardItemModel(0,0);
   int rows=recipe_mod->rowCount();
   int cols=recipe_mod->columnCount();




   for(int r=0;r<rows;++r)
   {
       QList<QStandardItem*> it;
        for (int c=0;c<cols;++c)
        {
           it<< new QStandardItem(recipe_mod->index(r,c).data(0).toString());

        }
        mod->appendRow(it);

    }

    mod->setHeaderData(0,Qt::Horizontal,"MATERIALE",0);
    mod->setHeaderData(1,Qt::Horizontal,"QUANTITA\'",0);
    mod->setHeaderData(2,Qt::Horizontal,"COSTO UNITARIO (€)",0);
    mod->setHeaderData(3,Qt::Horizontal,"COSTO PER RICETTA",0);
    mod->setHeaderData(4,Qt::Horizontal,"COSTO FORMATO",0);


   return mod;
}

void HCalcolo_costi_jolly::on_pbClose_clicked()
{
    close();
}

