#include "hrecipeaddrow.h"
#include "ui_hrecipeaddrow.h"

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QList>
#include <QStandardItem>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>


HRecipeAddRow::HRecipeAddRow(int pidricetta, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HRecipeAddRow)
{
    ui->setupUi(this);
    db=pdb;

    QSqlTableModel *mod= new QSqlTableModel(0,db);
    mod->setTable("prodotti");
    mod->setFilter("tipo in (1,6)");
    mod->setSort(1,Qt::AscendingOrder);
    mod->select();

    ui->checkBox->setVisible(false);

    ui->comboBox->setModel(mod);
    ui->comboBox->setModelColumn(1);

    idricettatarget=pidricetta;
}

HRecipeAddRow::~HRecipeAddRow()
{
    delete ui;
}

void HRecipeAddRow::on_pushButton_2_clicked()
{
    close();
}

void HRecipeAddRow::on_pushButton_clicked()
{

    addRecipeRow();

}
void HRecipeAddRow::addRecipeRow()
{
    QList<QStandardItem*> list;
    double quant=0.0;

    QStandardItem* id= new QStandardItem(QString::number(-1));
    QStandardItem* ricetta= new QStandardItem(QString::number(idricettatarget));
    QStandardItem* prodotto=new QStandardItem  (QString::number(ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt()));
    QStandardItem* descrizione=new QStandardItem(ui->comboBox->currentText());
    bool ok=false;
    QString sQuan=QString::number(ui->lineEdit->text().toDouble(&ok),'f',4);
    QStandardItem* quantita=new QStandardItem(sQuan);
    if(!ok)
    {
        QMessageBox::warning(0,QApplication::applicationName(),"errore nella quantità",QMessageBox::Ok);
        return;
    }
    QString show;
    ui->checkBox->isChecked()? show="1" : show="0";
    QStandardItem* showprod=new QStandardItem(show);



    list.append(id);
    list.append(ricetta);
    list.append(prodotto);
    list.append(descrizione);
    list.append(quantita);
    list.append(showprod);


    emit rowadded(list);

    close();



}

void HRecipeAddRow::on_lineEdit_returnPressed()
{
    bool ok;
    double quant=ui->lineEdit->text().toDouble(&ok);
    if(!ok)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore! Attenzione, verificare la quantità",QMessageBox::Ok);
    }
}
