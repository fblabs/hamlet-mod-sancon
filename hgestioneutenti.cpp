#include "hgestioneutenti.h"
#include "ui_hgestioneutenti.h"

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlQuery>
#include <QDataWidgetMapper>
#include <QMessageBox>
#include "huser.h"
#include "hgroups.h"
#include <QDebug>


HGestioneUtenti::HGestioneUtenti(HUser *p_user, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HGestioneUtenti)
{
    ui->setupUi(this);

    db=pdb;
    user=p_user;

    user->get_utenti_u()>0?ui->pushButton->setEnabled(true):ui->pushButton->setEnabled(false);
    user->get_utenti_u()>0?ui->pushButton_2->setEnabled(true):ui->pushButton_2->setEnabled(false);
    user->get_utenti_u()>0?ui->pbGroups->setEnabled(true):ui->pbGroups->setEnabled(false);
    user->get_utenti_u()>0?ui->pbNuovaPassword->setEnabled(true):ui->pbNuovaPassword->setEnabled(false);

    utm=new QSqlRelationalTableModel(0,db);
    gtm=new QSqlTableModel(0,db);
    gtm->setTable("gruppi");
    gtm->setSort(1,Qt::AscendingOrder);
    //gtm->setEditStrategy(QSqlTableModel::);
    gtm->select();
    utm->setTable("utenti");

  //  utm->setFilter("attivo=1");
 //   utm->setRelation(3,QSqlRelation("gruppi","ID","descrizione"));


    ui->comboBox->setModel(gtm);
    ui->comboBox->setModelColumn(1);

    utm->setFilter("attivo=1");
    utm->setRelation(3,QSqlRelation("gruppi","ID","descrizione"));

    utm->setSort(4,Qt::AscendingOrder);
    utm->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);
   // gtm->select();
    utm->select();

    qDebug()<<utm->query().executedQuery();





    ui->lvUtenti->setModel(utm);
    ui->lvUtenti->setModelColumn(4);

    mapper=new QDataWidgetMapper();
    mapper->setModel(utm);
    mapper->addMapping(ui->leUsername,1);
    mapper->addMapping(ui->lenome,4);
    mapper->addMapping(ui->cbAttivo,5);
   // mapper->addMapping(ui->comboBox,3, "currentIndex");

  // // // qDebug()<<QString::number(mapper->mappedSection(ui->comboBox));
    mapper->setItemDelegate(new QSqlRelationalDelegate(this));

    mapper->toFirst();


    connect(ui->lvUtenti->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), mapper, SLOT(setCurrentModelIndex(QModelIndex)));

    connect(ui->lvUtenti->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), this, SLOT(getGruppo()));
    connect(ui->lvUtenti->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), this, SLOT(getIdUtente()));

    ui->lvUtenti->setCurrentIndex(utm->index(0,0));




  //  connect(ui->lvUtenti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,slot(loadDetails()));
}

HGestioneUtenti::~HGestioneUtenti()
{
    delete ui;
}


void HGestioneUtenti::on_pushButton_3_clicked()
{
    this->close();
}

void HGestioneUtenti::on_pushButton_clicked()
{
    HNewUser *d = new HNewUser(db);

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
         utm->setFilter("attivo>0");
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

int HGestioneUtenti::getGruppo()
{


   int i=ui->comboBox->findText(ui->lvUtenti->model()->index(ui->lvUtenti->currentIndex().row(),3).data(0).toString());
   ui->comboBox->setCurrentIndex(i);


   return i;
}

void HGestioneUtenti::getIdUtente()
{
    idutente=ui->lvUtenti->model()->index(ui->lvUtenti->currentIndex().row(),0).data(0).toInt();
   // // qDebug()<<"getIdUtente():"<<idutente;
}


void HGestioneUtenti::on_pushButton_2_clicked()
{
   // int i=ui->comboBox->findText(ui->comboBox->findText());
    //int i=ui->comboBox->currentIndex();

    //------------------

    QSqlQuery q(db);
    QString sql="SELECT ID from gruppi where descrizione='" +ui->comboBox->currentText()+"'";
    q.exec(sql);
    q.first();
    int idgruppo=q.value(0).toInt();
   // // qDebug()<<"salva "<<idgruppo<<sql;
    //// // qDebug()<<utm->lastError().text();

    //-----------------

  //  ui->comboBox->setCurrentIndex(i);


    utm->setData(utm->index(ui->lvUtenti->currentIndex().row(),3),QVariant(idgruppo));


  //  getGruppo();

    q.prepare("update utenti SET gruppo=:idgruppo,attivo=:attivo,nome=:nome where ID=:idutente");
    q.bindValue(":idgruppo",QVariant(idgruppo));
    q.bindValue(":attivo",ui->cbAttivo->isChecked());
    q.bindValue(":nome",ui->lenome->text());
    q.bindValue(":idutente",QVariant(idutente));
    q.exec();
   // // qDebug()<<"salva2:"<<"idutente:"<<idutente<<"idgruppo " + q.boundValue(0).toString()<<"idutente: "+q.boundValue(1).toString()<<utm->index(ui->lvUtenti->currentIndex().row(),3).data(0).toString();

    //gtm->select();
    //utm->select();
  //  getGruppo();
    if(utm->submit()){

    QMessageBox::information(this,QApplication::applicationName(),"Modifiche salvate",QMessageBox::Ok);

    }
    else
    {
        QMessageBox::information(this,QApplication::applicationName(),"errore salvando le modifiche",QMessageBox::Ok);


    }

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



void HGestioneUtenti::emit_permissions_updated()
{
    qDebug()<<"emit_permissions_updated";
    emit permissions_updated();
}


void HGestioneUtenti::on_pbGroups_clicked()
{
    HGroups *f=new HGroups(user,-1,"",db);
    connect(f,SIGNAL(permissions_updated()),this,SLOT(emit_permissions_updated()));
    f->show();

}


void HGestioneUtenti::on_pbUserPermissions_clicked()
{
    QSqlQuery q(db);
    QString sql="SELECT ID from gruppi where descrizione='" +ui->comboBox->currentText()+"'";
    q.exec(sql);
    q.first();
    int id_gruppo=q.value(0).toInt();

    QString utente=utm->index(ui->lvUtenti->currentIndex().row(),1).data(0).toString().toUpper();

    HGroups *f=new HGroups(user,id_gruppo,utente,db);
    connect(f,SIGNAL(permissions_updated()),this,SLOT(emit_permissions_updated()));
    f->show();
}

