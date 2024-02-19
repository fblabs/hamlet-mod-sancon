#include "hprogtable.h"
#include "ui_hprogtable.h"
#include <QSqlQueryModel>
#include <QDebug>

HProgTable::HProgTable(QSqlQueryModel *mod,QString p_title,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HProgTable)
{

    ui->setupUi(this);
    setWindowTitle(p_title);

   // qDebug()<< mod<<mod->rowCount();


    ui->view->setModel(mod);
}


HProgTable::~HProgTable()
{
    delete ui;
}

void HProgTable::on_pbClose_clicked()
{
    close();
}

void HProgTable::print()
{
  /*TODO: IMPLEMENT*/
}

