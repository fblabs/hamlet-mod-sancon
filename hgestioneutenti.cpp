#include "hgestioneutenti.h"
#include "ui_hgestioneutenti.h"

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlquery>
#include <QDataWidgetMapper>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>

HGestioneUtenti::HGestioneUtenti(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HGestioneUtenti)
{
    ui->setupUi(this);




  //  connect(ui->lvUtenti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,slot(loadDetails()));
}

HGestioneUtenti::~HGestioneUtenti()
{
    delete ui;
}

void HGestioneUtenti::init(QString conn)
{


    sConn=conn;

    db=QSqlDatabase::database(sConn);

    utm=new QSqlRelationalTableModel(0,db);
    QSqlTableModel *gtm=new QSqlTableModel(0,db);
    gtm->setTable("gruppi");
    utm->setTable("utenti");
    mapper=new QDataWidgetMapper();
    utm->setFilter("attivo=1");
 //   utm->setRelation(3,QSqlRelation("gruppi","ID","descrizione"));

   gtm->select();

    ui->comboBox->setModel(gtm);
    ui->comboBox->setModelColumn(1);

    utm->setFilter("attivo=1");

    utm->setSort(1,Qt::AscendingOrder);
    utm->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);
    utm->select();

    qDebug()<<utm->lastError().text();

    ui->lvUtenti->setModel(utm);
    ui->lvUtenti->setModelColumn(1);


    mapper->setModel(utm);
    mapper->addMapping(ui->leUsername,1);
    mapper->addMapping(ui->lenome,4);
    mapper->addMapping(ui->cbAttivo,5);
    mapper->addMapping(ui->comboBox,3, "currentIndex");

  //  qDebug()<<QString::number(mapper->mappedSection(ui->comboBox));
    mapper->setItemDelegate(new QSqlRelationalDelegate(this));

    mapper->toFirst();

    connect(ui->lvUtenti->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), mapper, SLOT(setCurrentModelIndex(QModelIndex)));
    connect(ui->lvUtenti->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), this, SLOT(getGruppo()));


}

void HGestioneUtenti::on_pushButton_3_clicked()
{
    this->close();
}

void HGestioneUtenti::on_pushButton_clicked()
{
    HNewUser *d = new HNewUser();

    d->init(sConn);
    d->show();

    utm->select();
}

void HGestioneUtenti::on_checkBox_toggled(bool checked)
{
    if(checked)
    {
       utm->setFilter("attivo=0");
    }
    else
    {
         utm->setFilter("attivo=1");
    }
}

bool HGestioneUtenti::updatePassword()
{
        QString id=utm->index(ui->lvUtenti->currentIndex().row(),0).data(0).toString();
        QString sql="UPDATE utenti SET pwd=SHA1(:newpass) WHERE ID=:id";
        QSqlQuery q(db);
        q.prepare(sql);
        q.bindValue(":newpass",QVariant(ui->leNewPass->text()));
        q.bindValue(":id",QVariant(id));

        return q.exec();
}

void HGestioneUtenti::getGruppo()
{
    QSqlQuery f(db);
    QString sql="select ID,descrizione from gruppi where ID=:id";
    f.prepare(sql);
    f.bindValue(":id",ui->lvUtenti->model()->index(ui->lvUtenti->selectionModel()->currentIndex().row(),3).data(0).toString());
    f.exec();
    f.first();
    QString rsc=f.value(1).toString();
    int i= ui->comboBox->findText(rsc);
    ui->comboBox->setCurrentIndex(i);
}


void HGestioneUtenti::on_pushButton_2_clicked()
{
    utm->submitAll();

    utm->select();
}

void HGestioneUtenti::on_pbNuovaPassword_clicked()
{
     if(updatePassword())
     {
         QMessageBox::information(this,QApplication::applicationName(),"Password modificata",QMessageBox::Ok);
     }
     else
     {
         QMessageBox::warning(this,QApplication::applicationName(),"Errore aggiornando la password",QMessageBox::Ok);
     }
}
