#include "hnuovaricetta.h"
#include "ui_hnuovaricetta.h"
#include <QSqlDatabase>
#include <QCompleter>
#include <QList>
#include <QStandardItem>
#include <QSqlTableModel>
#include <QStandardItemModel>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

HNuovaRicetta::HNuovaRicetta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HNuovaRicetta)
{
    ui->setupUi(this);
}

HNuovaRicetta::~HNuovaRicetta()
{
    delete ui;
}

void HNuovaRicetta::init(QString conn)
{
    sConn=conn;

    db=QSqlDatabase::database(sConn);
    ui->cbAllergenico->setVisible(false);

    tmprodotti=new QSqlTableModel(0,db);
    tmCbProdotti=new QSqlTableModel(0,db);

    tmprodotti->setTable("prodotti");
    tmprodotti->setFilter("tipo=1");
    tmprodotti->setSort(1,Qt::AscendingOrder);
    tmprodotti->select();


   tmCbProdotti->setTable("prodotti");
   tmCbProdotti->setFilter("tipo=2 and ID not in (select ID_prodotto from ricette)");
   tmCbProdotti->setSort(1,Qt::AscendingOrder);
   tmCbProdotti->select();

   ui->listView->setModel(tmprodotti);
   ui->listView->setModelColumn(1);

   tmRecipe=new QStandardItemModel();
   ui->tvRicetta->setModel(tmRecipe);
   getListProducts();

   comp=new QCompleter(tmCbProdotti);
   comp->setCompletionMode(QCompleter::PopupCompletion);
   comp->setCompletionColumn(1);
   comp->setCaseSensitivity(Qt::CaseInsensitive);

   ui->comboBox->setCompleter(comp);
   ui->comboBox->setModel(tmCbProdotti);

   ui->comboBox->setModelColumn(1);
   ui->comboBox->setVisible(false);

   ui->comboBox->setCurrentIndex(ui->comboBox->count());
   ui->comboBox->setCurrentIndex(0);

   connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(setRecipeName()));


}

int HNuovaRicetta::creaNuovoProdotto(QString nome)
{
    QString sNuovoProdotto=nome;
    QSqlQuery q(db);

    QString sql = "INSERT INTO prodotti(descrizione,tipo)VALUES(:nome,2)";
    q.prepare(sql);
    q.bindValue(":nome",QVariant(sNuovoProdotto));
    bool r=q.exec();
    if (!r)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"errore creando nuovo prodotto\n"+q.lastError().text(),QMessageBox::Ok);
        return -1;
    }

    return 0;
}

void HNuovaRicetta::creaRicetta()
{

    QSqlQuery q(db);
    QString sql;

    //prendo l'ID del prodotto

    QString idricetta;
    QString idprodotto;

    if(ui->rbExisting->isChecked())
    {
        idprodotto=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toString();

    }
    else
    {

        sql="SELECT max(ID) from prodotti";

        q.exec(sql);
        q.first();

        idprodotto=q.value(0).toString();
    }

    sql="INSERT INTO ricette(ID_prodotto) VALUES (:idprodotto)";
    q.prepare(sql);
    q.bindValue(":idprodotto",idprodotto);

    bool b=q.exec();
   qDebug()<<q.lastError().text();

   // if (b)
       //prendo l'id ricetta
        sql="SELECT max(ID) from ricette";
        q.exec(sql);
        q.first();
        idricetta=q.value(0).toString();



   db.transaction();

    for (int i=0;i<tmRecipe->rowCount();i++)
    {
        sql="INSERT INTO righe_ricette (ID_ricetta,ID_prodotto,quantita,show_prod) VALUES (:idricetta,:idprodotto,:quantita,:show)";
        q.prepare(sql);
        q.bindValue(":idricetta",idricetta);
        q.bindValue(":idprodotto",ui->tvRicetta->model()->index(i,0).data(0).toString());
        q.bindValue(":quantita",ui->tvRicetta->model()->index(i,2).data(0).toString());
        q.bindValue(":show",ui->tvRicetta->model()->index(i,3).data(0).toString());

        if(b)
        {
          b=q.exec();
        }
        else
        {
            db.rollback();
            return;
        }


    }



   db.commit();


}


void HNuovaRicetta::getListProducts()
{

}

void HNuovaRicetta::setRecipeName()
{
    ui->leNome->setText(ui->comboBox->currentText());
}

void HNuovaRicetta::addRecipeRow()
{
    QList<QStandardItem*>row;

    QStandardItem *id=new QStandardItem(ui->listView->model()->index(ui->listView->currentIndex().row(),0).data(0).toString());
    QStandardItem *descrizione =new QStandardItem(ui->listView->model()->index(ui->listView->currentIndex().row(),1).data(0).toString());
    QStandardItem *quantita=new QStandardItem(ui->leQuantita->text());
    QStandardItem *show;
    bool bshow =ui->cbShow->isChecked();

    if (bshow)
    {
       show=new QStandardItem("1");
    }
    else
    {
        show=new QStandardItem("0");
    }

    row <<id<<descrizione<<quantita<<show;

    tmRecipe->appendRow(row);






}

void HNuovaRicetta::on_pushButton_clicked()
{
    addRecipeRow();
    ui->leQuantita->setText("");
  //  ui->cbShow->setChecked(false);


}

void HNuovaRicetta::on_pushButton_2_clicked()
{
    tmRecipe->removeRow(ui->tvRicetta->currentIndex().row());
}

void HNuovaRicetta::on_pushButton_5_clicked()
{
    close();
}


void HNuovaRicetta::on_pushButton_4_clicked()
{

        creaRicetta();

}

void HNuovaRicetta::on_rbNew_toggled(bool checked)
{
    ui->cbAllergenico->setVisible(checked);
    ui->comboBox->setVisible(!checked);
    ui->leNome->setVisible(checked);
    ui->lbProdotti->setVisible(!checked);
    ui->leNome->setText("");
}

void HNuovaRicetta::on_pushButton_3_clicked()
{
    QString mbtext;
    bool prodotto;

    if(ui->rbNew->isChecked())
    {
        mbtext="confermare la creazione del prodotto?";
        prodotto=true;
    }
    else
    {

        mbtext="Confermare la creazione della ricetta?";
        prodotto=false;
    }

    if (QMessageBox::question(this,QApplication::applicationName(),mbtext,QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

    // db.transaction();
        if(prodotto)
        {
            int b= creaNuovoProdotto(ui->leNome->text());

            if (b==0)
            {
                QMessageBox::information(this,QApplication::applicationName(),"Prodotto salvato",QMessageBox::Ok);
                //db.commit();
            }
            else
            {
                QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando il prodotto",QMessageBox::Ok);
                //db.rollback();

            }
        }
    }


}

void HNuovaRicetta::on_pushButton_8_clicked()
{
    ui->leNome->setText("");

    db.rollback();
}

void HNuovaRicetta::on_rbExisting_toggled(bool checked)
{
    ui->cbAllergenico->setVisible(!checked);
    ui->comboBox->setVisible(checked);
    ui->lbProdotti->setVisible(checked);
    ui->leNome->setText("");
    ui->leNome->setVisible(!checked);
    ui->lbNome->setVisible(!checked);
}
