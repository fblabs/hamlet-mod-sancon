#include "hchooselot.h"
#include "ui_hchooselot.h"
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>


HChooseLot::HChooseLot(const QString toSearch, QSqlDatabase pdb, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HChooseLot)
{
    ui->setupUi(this);
    db=pdb;
    mod=new QSqlTableModel(nullptr,db);
    mod->setTable("lotdef");
    mod->setSort(3,Qt::DescendingOrder);
    mod->setFilter("lot like '"+toSearch+"%'");
    mod->select();
    qDebug() << mod->lastError();
    ui->tvSearch->setModel(mod);
    ui->leSearch->setText(toSearch);
    ui->leSearch->setFocus();
    for (int i=0; i<mod->columnCount();i++)
    {
        if (i!=1) ui->tvSearch->setColumnHidden(i,true);
    }

}

HChooseLot::~HChooseLot()
{
    delete ui;
}




void HChooseLot::on_pbClose_clicked()
{
  //  close();
}


void HChooseLot::on_leSearch_returnPressed()
{
    QString filter=QString("lot like '")+ui->leSearch->text()+QString("%'");
    mod->setFilter(filter);


}


void HChooseLot::on_tvSearch_clicked(const QModelIndex &index)
{
    QString lotto=index.data(0).toString();
    emit sg_lotSelected(lotto);
    close();
}


void HChooseLot::on_tvSearch_doubleClicked(const QModelIndex &index)
{
    close();
}

