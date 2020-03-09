#include "hnewsheet.h"
#include "ui_hnewsheet.h"
#include <QMessageBox>
#include <QDate>

HNewSheet::HNewSheet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HNewSheet)
{
    ui->setupUi(this);
    ui->deDEl->setDate(QDate::currentDate());
}

HNewSheet::~HNewSheet()
{
    delete ui;
}

void HNewSheet::on_pbOK_clicked()
{
    int linea=ui->spLine->value();
    QDate date=ui->deDEl->date();

    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Creare il nuovo foglio Produzione? Data: "+ ui->deDEl->date().toString("dd-MM-yyyy") +"\nLinea: "+QString::number(ui->spLine->value()),QMessageBox::Ok|QMessageBox::Cancel))
    {
           emit OK(linea,date);
    }
    close();

}

void HNewSheet::on_pbCancel_clicked()
{
    close();
}
