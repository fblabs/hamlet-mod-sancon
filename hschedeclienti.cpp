#include "hschedeclienti.h"
#include "ui_hschedeclienti.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QCompleter>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QTextEdit>
#include <QTextDocument>
#include "huser.h"
#include "hduplicate.h"

#include "hmodificascheda.h"

HSchedeClienti::HSchedeClienti(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HSchedeClienti)
{
    ui->setupUi(this);
}

HSchedeClienti::~HSchedeClienti()
{
    delete ui;
}

void HSchedeClienti::init(QString conn,HUser *usr)
{
    sConn=conn;

    this->showMaximized();

  QTextDocument *doc  =new QTextDocument();

 bool upd=usr->getCanUpdate();

    if (!upd)
    {
       ui->pushButton_3->setVisible(false);
       ui->pushButton_4->setVisible(false);
       ui->btnDup->setVisible(false);


   }
   else
    {
        ui->pushButton_3->setVisible(true);
        ui->pushButton_4->setVisible(true);
        ui->btnDup->setVisible(true);

    }


    db=QSqlDatabase::database(sConn);

    tmClienti=new QSqlTableModel(0,db);

    tmClienti->setTable("anagrafica");
    tmClienti->setFilter("cliente=1");
    tmClienti->setSort(1,Qt::AscendingOrder);
    tmClienti->select();

    completerClienti=new QCompleter(tmClienti);
    completerClienti->setCaseSensitivity(Qt::CaseInsensitive);
    completerClienti->setCompletionColumn(1);
    completerClienti->setCompletionMode(QCompleter::PopupCompletion);
    ui->comboBox->setModel(tmClienti);
    ui->comboBox->setModelColumn(1);
    ui->comboBox->setCompleter(completerClienti);
    ui->comboBox->setCurrentIndex(0);



   // connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(set_midcliente()));
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(getSubclients()));
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(selectRecipesforClient()));
    connect(ui->cbSelectCriteria,SIGNAL(toggled(bool)),this,SLOT(showSubclients(bool)));
    connect(ui->listView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(loadScheda()));


    ui->comboBox->setCurrentIndex(0);
    //set_midcliente();

    selectRecipesforClient();

    ui->listView->setCurrentIndex(ui->listView->model()->index(0,0));
    ui->lvSubclienti->setVisible(false);





}



void HSchedeClienti::showSubclients(bool toggled)
{

  //  ui->lvSubclienti->setVisible(ui->cbSelectCriteria->isChecked());
   // ui->lvSubclienti->setVisible(false);
    if (toggled && ui->lvSubclienti->model()->rowCount() >0)
    {
        getSubclients();
        connect(ui->lvSubclienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(selectRecipesforClient()));

    }
    else
    {
        ui->lvSubclienti->setVisible(false);
        disconnect(ui->lvSubclienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(selectRecipesforClient()));
        connect(ui->comboBox->model(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(selectRecipesforClient()));
    }

    selectRecipesforClient();

}

void HSchedeClienti::getSubclients()
{

    int cliente= ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt();


    QSqlQueryModel *subclients=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="SELECT ID, ragione_sociale FROM anagrafica WHERE IDCliente=:id and subcliente=1";
    q.prepare(sql);
    q.bindValue(":id",QVariant(cliente));
    q.exec();
    qDebug()<<q.lastQuery()<<q.lastError().text();
    subclients->setQuery(q);
    ui->lvSubclienti->setModel(subclients);
    ui->lvSubclienti->setModelColumn(1);

    if(subclients->rowCount() >0 && ui->cbSelectCriteria->isChecked())
    {
        ui->lvSubclienti->setVisible(true);
    }
    else
    {
        ui->lvSubclienti->setVisible(false);
    }



}

void HSchedeClienti::selectRecipesforClient()
{
    int cliente;
    if (ui->cbSelectCriteria->isChecked() && ui->lvSubclienti->model()->rowCount() >0)
    {
        cliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->selectionModel()->currentIndex().row(),0).data(0).toInt();
    }
    else
    {
        cliente=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt();
    }
 qDebug()<<"idcliente"<<QString::number(cliente);


   QString query="SELECT ricette.ID_prodotto, prodotti.descrizione FROM ricette, prodotti WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT ID_ricetta FROM associazioni WHERE ID_cliente=:id and visualizza=1)";
   QSqlQuery q(db);
   q.prepare(query);
   q.bindValue(":id",QVariant(cliente));
   q.exec();

   QSqlQueryModel *qrm=new QSqlQueryModel();


   qrm->setQuery(q);

   qDebug()<<q.lastError()<< QString::number(q.size());


   QModelIndex index=qrm->index(0,0);

   ui->listView->setModel(qrm);
   ui->listView->setModelColumn(1);
   ui->listView->setCurrentIndex(index);

   ui->widget->hideClose();

   if (!ui->listView->selectionModel()==0)
   {
   connect(ui->listView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(loadScheda()));
   }

   qDebug()<<"selectrecipesforclient: "<<q.lastError().text()<<QString::number(cliente);
}

void HSchedeClienti::loadScheda()
{

    int prodotto=ui->listView->model()->index(ui->listView->selectionModel()->currentIndex().row(),0).data(0).toInt();
    int cliente;

    if (ui->cbSelectCriteria->isChecked())
    {
       cliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->currentIndex().row(),0).data(0).toInt();
    }
    else
    {
       cliente=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt();
    }




    QString query="SELECT olio,vaso,tappo,etichette,scatole,note,immagine from schede where cliente=:idcliente and prodotto=:idprodotto";
    QSqlQuery q(db);



   // if(p) p->close();
    q.prepare(query);
    q.bindValue(":idcliente",QVariant(cliente));
    q.bindValue(":idprodotto",QVariant(prodotto));
    q.exec();

  //  p=new HPrint(ui->widget);


   qDebug()<<"loadscheda"<<QString::number(prodotto)<<QString::number(cliente);

   q.first();

   ui->widget->resetText();




    ui->widget->append("==========================================",false);

  //  idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
     ui->widget->append("SCHEDA CLIENTE" ,true);
    ui->widget->append(ui->listView->model()->index(ui->listView->currentIndex().row(),1).data(0).toString() + " - " + ui->comboBox->currentText() ,false);
    ui->widget->append("==========================================",false);
   // ui->widget->append("",false);
    ui->widget->cursorToEnd();


    ui->widget->append("OLIO:" +q.value(0).toString(),false);
    ui->widget->append("VASO: "+q.value(1).toString(),false);
    ui->widget->append("TAPPO: "+q.value(2).toString(),false);
   ui->widget->append("ETICHETTE: "+q.value(3).toString(),false);
   ui->widget->append("SCATOLE: "+q.value(4).toString(),false);
   ui->widget->append("NOTE: "+q.value(5).toString(),false);
   ui->widget->cursorToEnd();

   QByteArray bytes;

   bytes=q.value(6).toByteArray();
  // QTextEdit*  editor =ui->widget->getViewport();
  // QTextCursor cursor(editor->document());
   QImage* imgobj = new QImage();

   QImage scale;
   imgobj->loadFromData(bytes);

   scale=imgobj->scaled(600,300,Qt::KeepAspectRatio,Qt::FastTransformation);
 //  img = QPixmap::fromImage(*imgobj);

  // cursor.atEnd();

    ui->widget->cursorToEnd();

   ui->widget->getCursor().insertImage(scale);

   ui->widget->cursorToEnd();

}


void HSchedeClienti::on_pushButton_clicked()
{
    if (QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
     this->close();
    }
}

void HSchedeClienti::on_pushButton_4_clicked()
{
   int cliente;
   if (ui->cbSelectCriteria->isChecked())
   {
      cliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->currentIndex().row(),0).data(0).toInt();
   }
   else
   {
      cliente=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt();
   }


   int prodotto=ui->listView->model()->index(ui->listView->currentIndex().row(),0).data(0).toInt();

    HModificaScheda *f=new HModificaScheda();
    f->init(sConn,cliente,prodotto,ui->listView->model()->index(ui->listView->currentIndex().row(),1).data(0).toString() + " - " + ui->comboBox->currentText());
    f->setWindowModality(Qt::ApplicationModal);
    f->showMaximized();
    connect(f,SIGNAL(schedaAggiornata()),this,SLOT(loadScheda()));
}


void HSchedeClienti::deleteScheda()
{

    int prodotto=ui->listView->model()->index(ui->listView->currentIndex().row(),0).data(0).toInt();
    int cliente;
    if (ui->cbSelectCriteria->isChecked())
    {
     cliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->currentIndex().row(),0).data(0).toInt();
    }
    else
    {
      cliente=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt();
    }


    QString sql="DELETE from schede WHERE cliente=:cliente AND prodotto=:prodotto";

    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":cliente",QVariant(cliente));
    q.bindValue(":prodotto",QVariant(prodotto));

    if(q.exec())
    {
        QMessageBox::information(this,QApplication::applicationName(),"Scheda cancellata",QMessageBox::Ok);
    }


}

void HSchedeClienti::on_pushButton_3_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Cancellare la scheda?\nATTENZIONE: la cancellazione è irreversibile",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        deleteScheda();
    }
    loadScheda();
}

void HSchedeClienti::on_cbSelectCriteria_toggled(bool checked)
{

  if (checked)
  {
      disconnect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(loadScheda()));
      connect(ui->comboBox,SIGNAL(currentIndexChanged(QString)),this,SLOT(getSubclients()));
      getSubclients();
      connect(ui->lvSubclienti->selectionModel(),SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),this,SLOT(loadScheda()));
  }
  else
  {

      disconnect(ui->lvSubclienti->selectionModel(),SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),this,SLOT(loadScheda()));
      connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(loadScheda()));
  }


}




void HSchedeClienti::on_btnDup_clicked()
{
    HDuplicate *f=new HDuplicate();
    int cliente;
    if (ui->cbSelectCriteria->isChecked())
    {
       cliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->currentIndex().row(),0).data(0).toInt();
    }
    else
    {
       cliente=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt();
    }


    int prodotto=ui->listView->model()->index(ui->listView->currentIndex().row(),0).data(0).toInt();
    connect(f,SIGNAL(update()),this,SLOT(loadScheda()));
    f->init(sConn,cliente,prodotto);

    f->show();


}

