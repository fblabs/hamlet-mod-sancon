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

HWarehouseDetails::HWarehouseDetails(QSqlDatabase pdb, int id,int pidlotto, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWarehouseDetails)
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    ui->setupUi(this);
    db=pdb;
    opid=id;
    idlotto=pidlotto;
    mod=new QSqlRelationalTableModel(0,db);
    qDebug()<<db.userName();

    mod->setTable("operazioni");
    mod->setRelation(1,QSqlRelation("lotdef","ID","lot"));
    mod->setRelation(3,QSqlRelation("utenti","ID","nome"));
    mod->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
    mod->setRelation(5,QSqlRelation("azioni","ID","descrizione"));
    mod->setRelation(7,QSqlRelation("unita_di_misura","ID","descrizione"));
    mod->setFilter("operazioni.ID="+QString::number(opid));
    mod->select();


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

    QApplication::setOverrideCursor(Qt::ArrowCursor);

    getLotdefData();

    if (ui->cbUM->currentText()=="Kg")
    {ui->leQuantita->setText(QString::number(ui->leQuantita->text().toDouble(),'f',3));}
    else return;
}

HWarehouseDetails::~HWarehouseDetails()
{
    delete ui;
}

void HWarehouseDetails::getLotdefData()
{

  QSqlQueryModel *qmdl=new QSqlQueryModel();
  QSqlQuery q(db);
  QString sql= "SELECT lotdef.ID, lotdef.lot_fornitore,lotdef.giacenza,lotdef.scadenza,lotdef.EAN FROM lotdef,operazioni WHERE lotdef.ID=operazioni.IDlotto AND operazioni.ID=:idop";
  q.prepare(sql);
  q.bindValue(":idop",opid);
  q.exec();
  qmdl->setQuery(q);

  qDebug()<<"getLotdefdata"<<q.lastError().text();


  ui->leLotFornitore->setText(qmdl->index(0,1).data(0).toString());
  ui->leGiacenza->setText(QString::number(qmdl->index(0,2).data(0).toDouble())+ " "+ui->cbUM->currentText());

  if (qmdl->index(0,3).data(0).toDate()>ui->deScadenza->minimumDate())
  {
    ui->label_11->setText("Scadenza:");
    ui->deScadenza->setVisible(true);
    ui->deScadenza->setDate(qmdl->index(0,3).data(0).toDate());
  }
  else
  {
     ui->label_11->setText("Nessuna Scadenza");
     ui->deScadenza->setVisible(false);

  }
  ui->leEAN->setText(qmdl->index(0,4).data(0).toString());


}






void HWarehouseDetails::on_pbSave_clicked()
{
   if(saveOperation())
    {
     getLotdefData();
     updateAmounts();
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
    qDebug()<<db.userName();
    QString sql="UPDATE operazioni SET operazioni.azione=:azione,operazioni.quantita=:quant,operazioni.um=:um,operazioni.note=:note WHERE operazioni.ID=:id";
    q.prepare(sql);

    q.bindValue(":azione",act);
    q.bindValue(":quant",ui->leQuantita->text().toDouble());
    q.bindValue(":um", umi);
    q.bindValue(":note",ui->ptNote->toPlainText());
    q.bindValue(":id",opid);

    bool b=q.exec();


    if(!b){
        qDebug()<<"update operazioni"<<q.lastError().text();
        return b;
    }


    sql="UPDATE lotdef SET lot_fornitore=:lof WHERE lotdef.ID=(SELECT operazioni.idLotto FROM operazioni where operazioni.ID=:id)";
    q.prepare(sql);
    q.bindValue(":lof",ui->leLotFornitore->text());
    q.bindValue(":id",opid);

    b=q.exec();

   qDebug()<<"update lotdef"<<q.lastError().text();

    return b;

}

void HWarehouseDetails::updateAmounts()
{
    qDebug()<<idlotto;
    QSqlQueryModel *qmod=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="SELECT operazioni.ID, operazioni.quantita from operazioni where operazioni.ID IN(select operazione from composizione_lot where ID_lotto=:idlotto)";
    q.prepare(sql);
    q.bindValue(":idlotto",QVariant(idlotto));
   if(q.exec()){qmod->setQuery(q);}else{qDebug()<<q.lastError().text();return;}

     double factor=0;
     double todo=ui->leQuantita->text().toDouble();
     double rowsum=0;


    for (int k=0;k<qmod->rowCount();k++)
    {

        rowsum+=qmod->index(k,1).data(0).toDouble();
    }


      factor =  todo/rowsum;

     sql="UPDATE operazioni set quantita=:row where ID=:id";
     int rowid=0;

     db.transaction();

      for (int k=0;k<qmod->rowCount();k++)
      {
         rowid=qmod->index(k,0).data(0).toInt();
         rowsum=qmod->index(k,1).data(0).toDouble()*factor;
         QSqlQuery qu(db);
         qu.prepare(sql);
         qu.bindValue(":row",rowsum);
         qu.bindValue(":id",rowid);

         if(!qu.exec()){
             QMessageBox::question(this,QApplication::applicationName(),"Errore "+qu.lastError().text(),QMessageBox::Ok);
             db.rollback();
             return;

         }



      }

      if(QMessageBox::Ok == QMessageBox::question(this,QApplication::applicationName(),"Salvare?",QMessageBox::Ok|QMessageBox::Cancel))
      {
        db.commit();

      }


    mod->select();


    /****************************************************************
    bool ok;

    double dafare = ui->leQtyTotal->text().toDouble(&ok);
    if(!ok)
    {
        // // qDebug()<<"updatetotals"<<QString::number(dafare,'f',6);
    }
    // ui->leQuaRic->setText(QString::number(dafare,'f',3));
    double sommarighe=0;
    double factor=0;
    double result=0;
    QStandardItemModel* model=static_cast<QStandardItemModel*>(ui->tableView->model());

    for (int x=0;x<model->rowCount();x++)
    {
        sommarighe += model->index(x,2).data(0).toDouble();

    }


    factor = dafare / sommarighe;

    // // // qDebug()<<"updatetotals"<<QString::number(sommarighe,'f',6);

    for (int j=0;j<model->rowCount();j++)
    {
        QModelIndex i = model->index(j,2);
        QModelIndex m = model->index(j,5);
        result =i.data().toDouble()* factor;
        QString resulttoadd=QString::number(result,'f',3);
        //  model->setData(i,QVariant(resulttoadd));
        model->setData(m,QVariant(resulttoadd));

    }

*********************************************************************/




}

void HWarehouseDetails::on_pbClose_clicked()
{
    if(QMessageBox::Ok == QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra? Le eventuali modifiche nonsalvate andranno perdute...ATTENZIONE",QMessageBox::Ok|QMessageBox::Cancel))
    {
       close();

    }
}






void HWarehouseDetails::on_leQuantita_returnPressed()
{

}

