#include "hrecipeaddrow.h"
#include "ui_hrecipeaddrow.h"

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QList>
#include <QStandardItem>
#include <QMessageBox>
#include <QSqlQuery>


HRecipeAddRow::HRecipeAddRow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HRecipeAddRow)
{
    ui->setupUi(this);
}

HRecipeAddRow::~HRecipeAddRow()
{
    delete ui;
}

void HRecipeAddRow::init(QString conn,int idricetta)
{
    db=QSqlDatabase::database(conn);

    QSqlTableModel *mod= new QSqlTableModel(0,db);
    mod->setTable("prodotti");
    mod->setFilter("tipo=1");
    mod->setSort(1,Qt::AscendingOrder);
    mod->select();

    ui->checkBox->setVisible(false);

    ui->comboBox->setModel(mod);
    ui->comboBox->setModelColumn(1);

    idricettatarget=idricetta;
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
    bool ok;
    QList<QStandardItem*> list;
    /*
    q.bindValue(":idricetta",ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0));
    q.bindValue(":idprodotto",ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0));
    q.bindValue(":qua",QVariant(qua));
    q.bindValue(":show",QVariant(ui->checkBox->isChecked()));
    */
    QStandardItem* id= new QStandardItem(QString::number(-1));
    QStandardItem* ricetta= new QStandardItem(QString::number(idricettatarget));
    QStandardItem* prodotto=new QStandardItem  (QString::number(ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt()));
    QStandardItem* descrizione=new QStandardItem(ui->comboBox->currentText());
    QStandardItem* quantita=new QStandardItem(ui->lineEdit->text());
    QString show;
    ui->checkBox->isChecked()? show="1" : show="0";
    QStandardItem* showprod=new QStandardItem(show);
    //QStandardItem* descrizione3=new QStandardItem("pippo3");


    list.append(id);
    list.append(ricetta);
    list.append(prodotto);
    list.append(descrizione);
    list.append(quantita);
    list.append(showprod);


    emit rowadded(list);

    QSqlQuery q(db);
    QString sql="INSERT INTO righe_ricette`(`ID_ricetta`,`ID_prodotto`,`quantita`,`show_prod`)VALUES(:idricetta,:idprodotto,:qua,:show)";
    double qua=ui->lineEdit->text().toDouble();

    q.prepare(sql);
    q.bindValue(":idricetta",QVariant(idricettatarget));
    q.bindValue(":idprodotto",QVariant(ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt()));
    q.bindValue(":qua",QVariant(ui->lineEdit->text()));
    q.bindValue(":show",QVariant(ui->checkBox->isChecked()));
    q.exec();




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
