#include "hwarehousedetails.h"
#include "ui_hwarehousedetails.h"
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QDate>
#include <QSqlError>
#include <QDebug>
#include <QSqlRelation>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>

HWarehouseDetails::HWarehouseDetails(QSqlDatabase pdb, int id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWarehouseDetails)
{
    ui->setupUi(this);
    ui->pbUndo->setVisible(false);
    db=pdb;
    opid=id;
    mod=new QSqlRelationalTableModel(0,db);

    mod->setTable("operazioni");
    mod->setRelation(1,QSqlRelation("lotdef","ID","lot"));
    mod->setRelation(3,QSqlRelation("utenti","ID","nome"));
    mod->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
    mod->setRelation(5,QSqlRelation("azioni","ID","descrizione"));
    mod->setRelation(7,QSqlRelation("unita_di_misura","ID","descrizione"));
    mod->select();
    mod->setFilter("operazioni.ID="+QString::number(opid));

    mod->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);

    ui->cbAzione->setModel(mod->relationModel(5));
    ui->cbAzione->setModelColumn(mod->relationModel(5)->fieldIndex("descrizione"));
    ui->cbUM->setModel(mod->relationModel(7));
    ui->cbUM->setModelColumn(mod->relationModel(7)->fieldIndex("descrizione"));


    mapper=new QDataWidgetMapper(this);
    mapper->setModel(mod);
    mapper->setItemDelegate(new QSqlRelationalDelegate(this));

    mapper->addMapping(ui->leID,0);
    mapper->addMapping(ui->leLotto,1);
    mapper->addMapping(ui->deData,2);
    mapper->addMapping(ui->leOperatore,3);
    mapper->addMapping(ui->leProdotto,4);
    mapper->addMapping(ui->cbAzione,5);
    mapper->addMapping(ui->leQuantita,6);
    mapper->addMapping(ui->cbUM,7);
    mapper->addMapping(ui->ptNote,8);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    mapper->toLast();
    qDebug()<<mod->lastError().text();
}

HWarehouseDetails::~HWarehouseDetails()
{
    delete ui;
}

void HWarehouseDetails::getUnitaDiMisura()
{
   /* QSqlTableModel *umod=new QSqlTableModel(0,db);
    umod->setTable("unita_di_misura");
    umod->setSort(1,Qt::AscendingOrder);
    umod->select();
    ui->cbUM->setModel(umod);
    ui->cbUM->setModelColumn(1);*/
}

void HWarehouseDetails::getActions()
{
   /* QSqlTableModel *actmod=new QSqlTableModel(0,db);
    actmod->setTable("azioni");
    actmod->setSort(1,Qt::AscendingOrder);
    actmod->select();
    ui->cbAzione->setModel(actmod);
    ui->cbAzione->setModelColumn(1);*/
}


void HWarehouseDetails::on_pbUndo_clicked()
{
    if(QMessageBox::Ok == QMessageBox::question(this,QApplication::applicationName(),"Annullare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        mod->revertAll();
    }


    emit confirm();
    mod->select();
}

void HWarehouseDetails::on_pbSave_clicked()
{
   if(saveOperation())
    {
     emit confirm();
    }else{
       QMessageBox::warning(this,QApplication::applicationName(),"Errore salvandolemodifiche",QMessageBox::Ok);
   }



}

bool HWarehouseDetails::saveOperation()
{
    QSqlQuery t(db);
    QString sqlt="SELECT ID from azioni WHERE descrizione=:des";
    t.prepare(sqlt);
    t.bindValue(":des",ui->cbAzione->currentText());
    t.exec();
    t.first();

    qDebug()<<t.boundValue(0)<<t.lastError().text();

    int act=t.value(0).toInt();



    sqlt="SELECT ID from unita_di_misura WHERE descrizione=:des";
    t.prepare(sqlt);
    t.bindValue(":des",ui->cbUM->currentText());
    t.exec();
    t.next();

     qDebug()<<t.lastError().text();

    int umi=t.value(0).toInt();

    qDebug()<<"action:"<<act<<"umi: "<<umi;







    QSqlQuery q(db);
    QString sql="UPDATE operazioni SET azione=:azione,quantita=:quant,um=:um,note=:note WHERE ID=:id";
    q.prepare(sql);

    q.bindValue(":azione",act);
    q.bindValue(":quant",ui->leQuantita->text().toDouble());
    q.bindValue(":um", umi);
    q.bindValue(":note",ui->ptNote->toPlainText());
    q.bindValue(":id",opid);

    bool b=q.exec();
    qDebug()<<q.lastQuery()<<q.lastError().text();

    return b;
}

void HWarehouseDetails::on_pbClose_clicked()
{
    if(QMessageBox::Ok == QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra? Le eventuali modifiche nonsalvate andranno perdute...ATTENZIONE",QMessageBox::Ok|QMessageBox::Cancel))
    {
       close();

    }
}
