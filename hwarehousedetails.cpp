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
    getLotdefData();
}

HWarehouseDetails::~HWarehouseDetails()
{
    delete ui;
}

void HWarehouseDetails::getLotdefData()
{

  QSqlQueryModel *qmdl=new QSqlQueryModel();
  QSqlQuery q(db);
  QString sql= "SELECT lot_fornitore,giacenza,EAN FROM lotdef,operazioni WHERE lotdef.ID=operazioni.IDlotto AND operazioni.ID=:idop";
  q.prepare(sql);
  q.bindValue(":idop",opid);
  q.exec();
  qmdl->setQuery(q);

  qDebug()<<"getLotdefdata"<<q.lastError().text();


  ui->leLotFornitore->setText(qmdl->index(0,0).data(0).toString());
  ui->leGiacenza->setText(QString::number(qmdl->index(0,1).data(0).toDouble())+ " "+ui->cbUM->currentText());
  ui->leEAN->setText(qmdl->index(0,2).data(0).toString());

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
     getLotdefData();
     emit confirm();
     QMessageBox::information(this,QApplication::applicationName(),"Modifiche all'operazione salvate correttamente",QMessageBox::Ok);

    }else{
       QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando le modifiche",QMessageBox::Ok);
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



    int act=t.value(0).toInt();



    sqlt="SELECT ID from unita_di_misura WHERE descrizione=:des";
    t.prepare(sqlt);
    t.bindValue(":des",ui->cbUM->currentText());
    t.exec();
    t.next();


    int umi=t.value(0).toInt();

    QSqlQuery q(db);
    QString sql="UPDATE operazioni SET operazioni.azione=:azione,operazioni.quantita=:quant,operazioni.um=:um,operazioni.note=:note WHERE operazioni.ID=:id";
    q.prepare(sql);

    q.bindValue(":azione",act);
    q.bindValue(":quant",ui->leQuantita->text().toDouble());
    q.bindValue(":um", umi);
    q.bindValue(":note",ui->ptNote->toPlainText());
    q.bindValue(":id",opid);

    bool b=q.exec();


    if(!b){
        return b;
    }


    sql="UPDATE lotdef SET lot_fornitore=:lof WHERE lotdef.ID=(SELECT operazioni.idLotto FROM operazioni where operazioni.ID=:id)";
    q.prepare(sql);
    q.bindValue(":lof",ui->leLotFornitore->text());
    q.bindValue(":id",opid);

    b=q.exec();


    return b;

}

void HWarehouseDetails::on_pbClose_clicked()
{
    if(QMessageBox::Ok == QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra? Le eventuali modifiche nonsalvate andranno perdute...ATTENZIONE",QMessageBox::Ok|QMessageBox::Cancel))
    {
       close();

    }
}



