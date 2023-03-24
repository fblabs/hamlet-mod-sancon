#include "hcomponenti_costo_item.h"
#include "ui_hcomponenti_costo_item.h"

#include <QModelIndex>
#include <QStandardItemModel>

HComponenti_costo_Item::HComponenti_costo_Item(QStandardItemModel *p_mod,QModelIndex p_ix,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HComponenti_costo_Item)
{
    ui->setupUi(this);
    ui->lbComponente->setText(p_mod->index(p_ix.row(),0).data(0).toString());
    mod=p_mod;
    uix=p_ix;
}

HComponenti_costo_Item::~HComponenti_costo_Item()
{
    delete ui;
}




void HComponenti_costo_Item::on_leCosto_returnPressed()
{
    emit row_modified(uix.row(),ui->leCosto->text().toDouble());
    close();
}

