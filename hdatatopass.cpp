#include "hdatatopass.h"

HDataToPass::HDataToPass(QObject *parent) : QObject(parent)
{}

void HDataToPass::setData(QObject *parent,QStandardItemModel *pmod0,int prow, int pprodid,int plotid, bool pallergene, QString pdescription, double pquantity)
{
   /* model = new QStandardItemModel(0,7);
    model->setHeaderData(0,Qt::Horizontal,"ID Prodotto",0);
    model->setHeaderData(1,Qt::Horizontal,"Prodotto",0);
    model->setHeaderData(2,Qt::Horizontal,"Quantità ricetta",0);
    model->setHeaderData(3,Qt::Horizontal,"ID Lotto",0);
    model->setHeaderData(4,Qt::Horizontal,"Lotto",0);
    model->setHeaderData(5,Qt::Horizontal,"Quantità effettiva",0);
    model->setHeaderData(6,Qt::Horizontal,"Allergene",0);*/
    row=prow;
    productId=pprodid;
    description=pdescription;
    //lotId=plotid;
    allergene=pallergene;
    quantity=pquantity;
}
