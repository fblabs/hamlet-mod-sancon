#include "hmodproduct.h"
#include "ui_hmodproduct.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelation>
#include <QDebug>
#include <QSqlError>
#include <QDataWidgetMapper>
#include <QMessageBox>
#include "huser.h"

HModProduct::HModProduct(int pID, HUser *user, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModProduct)
{
    ui->setupUi(this);
    setModifyEnabled(user->getCanUpdateAnag());
    db=pdb;
    ID=pID;
    ui->deLastUpdate->setDate(QDate::currentDate());
    getProductData();


}

HModProduct::~HModProduct()
{
    delete ui;
}

void HModProduct::setModifyEnabled(bool enable)
{

    ui->pbSave->setEnabled(enable);


}

bool HModProduct::getProductData()
{
    productsmodel=new QSqlRelationalTableModel(0,db);
    productsmodel->setTable("prodotti");
    productsmodel->setRelation(2,QSqlRelation("tipi_prodotto","ID","descrizione"));
    productsmodel->setFilter("prodotti.ID="+QString::number(ID));
    productsmodel->setEditStrategy(QSqlRelationalTableModel::OnFieldChange);
    productsmodel->select();


    map=new QDataWidgetMapper(productsmodel);
    map->setModel(productsmodel);
    map->setItemDelegate(new QSqlRelationalDelegate(this));

    map->addMapping(ui->leDescription,1);
    ui->cbType->setModel(productsmodel->relationModel(TIPO));
    ui->cbType->setModelColumn(1);
    map->addMapping(ui->cbType,TIPO);
    map->addMapping(ui->cbActive,ATTIVO);
    map->addMapping(ui->cbAllergene,ALLERGENE);
    map->addMapping(ui->cbBio,BIO);
    map->addMapping(ui->lePrice,PRICE);
    map->addMapping(ui->deLastUpdate,LAST_UPDATE);


    map->toFirst();
    map->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
   // connect(ui->cbType,SIGNAL(currentIndexChanged(int)),productsmodel,SLOT(submit()));


    return true;

}


void HModProduct::on_pbClose_clicked()
{


    close();

}

void HModProduct::on_pbSave_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Salvare?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

        bool b= map->submit();
        qDebug()<<productsmodel->lastError().text();
        if(b){
            productsmodel->select();
            emit done();
            close();
        }else{

            QMessageBox::information(this,QApplication::applicationName(),"Errore durante il salvataggio\n"+productsmodel->lastError().text()+"---",QMessageBox::Ok);
        }


    }
}







