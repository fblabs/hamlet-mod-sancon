#include "hnewproduct.h"
#include "ui_hnewproduct.h"
#include "hnuovaricetta.h"

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include "huser.h"

HNewProduct::HNewProduct(HUser *pusr, QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HNewProduct)
{

    ui->setupUi(this);
    Q_UNUSED(pusr);


    db=pdb;

    tmTipo=new QSqlTableModel(0,db);
    tmTipo->setTable("tipi_prodotto");
    tmTipo->setSort(1,Qt::AscendingOrder);
    tmTipo->select();

    ui->comboBox->setModel(tmTipo);
    ui->comboBox->setModelColumn(1);

    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(tipoSelected()));


}

HNewProduct::~HNewProduct()
{
    delete ui;
}


void HNewProduct::on_pushButton_2_clicked()
{
    this->close();
}

void HNewProduct::addNewProduct()
{
    QSqlQuery q(db);
    QString query;
    QVariant descrizione,tipo,allergenico,attivo,bio,allergene_usa;

    descrizione=ui->leDescrizione->text().toUpper();
    tipo=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toString();
    if (ui->cbAllergenico->isChecked())
    {
        allergenico="1";
    }
    else
    {
        allergenico="0";
    }
    if (ui->cbBio->isChecked())
    {
        bio="1";
    }
    else
    {
        bio="0";
    }
    if (ui->cbAllergeneUSA->isChecked())
    {
        allergene_usa="1";
    }
    else
    {
        allergene_usa="0";
    }




    attivo="1";


    query="INSERT INTO prodotti (descrizione,tipo,allergenico,attivo,bio,allergene_usa) VALUES(:desc,:tipo,:allerg,:attivo,:bio,:allergene_usa)";
    q.prepare(query);
    q.bindValue(":desc",QVariant(descrizione));
    q.bindValue(":tipo",QVariant(tipo));
    q.bindValue(":allerg",QVariant(allergenico));
    q.bindValue(":attivo",QVariant(attivo));
    q.bindValue(":bio",QVariant(bio));
    q.bindValue(":allergene_usa",QVariant(allergene_usa));

    db.transaction();

    bool s=q.exec();
    if(s)
    {
        QMessageBox::warning(this, QApplication::applicationName(),"Prodotto salvato",QMessageBox::Ok);
        if(tipo>2 && tipo <6)
        {
            addNewContainer(q.lastInsertId().toInt());

        }

        db.commit();
        emit done();
        close();

    }
    else
    {
        db.rollback();
        QMessageBox::warning(this, QApplication::applicationName(),"Errore salvando il prodotto\n"+q.lastError().text(),QMessageBox::Ok);

    }


}

bool HNewProduct::addNewContainer(const int p_id)
{

    QSqlQuery q(db);
    QString sql="INSERT INTO tags_containers(ID_Prodotto)VALUES(:id_prodotto)";
    q.prepare(sql);
    q.bindValue(":id_prodotto",p_id);

    return q.exec();



}



void HNewProduct::on_pbSave_clicked()
{
    addNewProduct();
}


void HNewProduct::on_pbCancel_clicked()
{
    close();
}
