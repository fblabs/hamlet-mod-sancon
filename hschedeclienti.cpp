#include "ui_hschedeclienti.h"
#include "hschedeclienti.h"
#include <QImage>
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
   // ui->btnSave->setVisible(false);
}

HSchedeClienti::~HSchedeClienti()
{
    delete ui;
}

void HSchedeClienti::init(QString conn,HUser *usr)
{


  sConn=conn;

  //  this->showMaximized();

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

  //  connect(ui->widget,SIGNAL(imghChanged(int)),this,SLOT(setImgHeight(int)));
  //  connect(ui->widget,SIGNAL(imgwChanged(int)),this,SLOT(setImgWidth(int)));

    ui->comboBox->setCurrentIndex(0);
    //set_midcliente();

    selectRecipesforClient();

    connect(ui->listView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(loadScheda()));

    ui->listView->setCurrentIndex(ui->listView->model()->index(0,0));
    ui->lvSubclienti->setVisible(false);
    ui->widget->toggleImageUI(true);


QApplication::restoreOverrideCursor();


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
   // // qDebug()<<q.lastQuery()<<q.lastError().text();
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
// // qDebug()<<"idcliente"<<QString::number(cliente);


   QString query="SELECT ricette.ID_prodotto, prodotti.descrizione FROM ricette, prodotti WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT ID_ricetta FROM associazioni WHERE ID_cliente=:id and visualizza=1)";
   QSqlQuery q(db);
   q.prepare(query);
   q.bindValue(":id",QVariant(cliente));
   q.exec();

   QSqlQueryModel *qrm=new QSqlQueryModel();


   qrm->setQuery(q);

  // // qDebug()<<q.lastError()<< QString::number(q.size());


   QModelIndex index=qrm->index(0,0);

   ui->listView->setModel(qrm);
   ui->listView->setModelColumn(1);
   ui->listView->setCurrentIndex(index);

   ui->widget->hideClose();

   if (!ui->listView->selectionModel()==0)
   {
   connect(ui->listView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(loadScheda()));
   }

  // // qDebug()<<"selectrecipesforclient: "<<q.lastError().text()<<QString::number(cliente);
}

void HSchedeClienti::loadScheda()
{

    int prodotto=ui->listView->model()->index(ui->listView->selectionModel()->currentIndex().row(),0).data(0).toInt();
   // // qDebug()<<QString::number(prodotto);
    int cliente;


    if (ui->cbSelectCriteria->isChecked())
    {
       cliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->currentIndex().row(),0).data(0).toInt();
    }
    else
    {
       cliente=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt();
    }




   //original
    QString query="SELECT olio,vaso,tappo,etichette,scatole,note,immagine,imgx,imgy,fontsize,imgcartone,imgcw,imgch from schede where cliente=:idcliente and prodotto=:idprodotto";


    QSqlQuery q(db);



   ui->widget->resetText();

    q.prepare(query);
    q.bindValue(":idcliente",QVariant(cliente));
    q.bindValue(":idprodotto",QVariant(prodotto));
    q.exec();

    qDebug()<<q.lastQuery()<<q.lastError().text();



   bool b = q.first();

   if(!b)
   {
       return;
   }

   QByteArray bytes;
   QByteArray bytesc;



   bytes=q.value(6).toByteArray();
   width=q.value(7).toInt();
   height=q.value(8).toInt();
   fontsize=q.value(9).toInt();
   bytesc=q.value(10).toByteArray();
   widthc=q.value(11).toInt();
   heightc=q.value(12).toInt();


   ui->widget->setFontSize(fontsize);





    ui->widget->append("==========================================",false);

  //  idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
     ui->widget->append("SCHEDA CLIENTE" ,true);
    if(ui->cbSelectCriteria->isChecked())
    {
        ui->widget->append(ui->listView->model()->index(ui->listView->currentIndex().row(),1).data(0).toString() + " - " + ui->lvSubclienti->model()->index(ui->lvSubclienti->currentIndex().row(),1).data(0).toString(),false);
    }
    else
    {
    ui->widget->append(ui->listView->model()->index(ui->listView->currentIndex().row(),1).data(0).toString() + " - " + ui->comboBox->currentText() ,false);
    }

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

   //load img



 //  QImage* imgobj = new QImage();
//   QImage scale;



   if(bytes.size()>0)
   {
    ui->widget->cursorToEnd();
    ui->widget->append("IMMAGINE\n",false);


    ui->widget->cursorToEnd();
    ui->widget->addImage(bytes,"0",width,height);

   }

   ui->widget->cursorToEnd();



   if(bytesc.size()>0)
   {

  // scalec=imgobjc->scaledToWidth(widthc,Qt::SmoothTransformation);
   ui->widget->cursorToEnd();
   ui->widget->append("IMMAGINE CARTONE\n",false);
   ui->widget->addImage(bytesc,"1",widthc,heightc);




   }

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
    f->init(sConn,cliente,prodotto,ui->listView->model()->index(ui->listView->currentIndex().row(),1).data(0).toString() + " - " + ui->comboBox->currentText(),width,height,fontsize);
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

/*void HSchedeClienti::on_pushButton_3_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Cancellare la scheda?\nATTENZIONE: la cancellazione è irreversibile",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        deleteScheda();
    }
   // loadScheda();
}*/


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


void HSchedeClienti::on_pushButton_3_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Cancellare la scheda?\nATTENZIONE: la cancellazione è irreversibile",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        deleteScheda();
    }
}

void HSchedeClienti::on_pushButton_2_clicked()
{
    saveScheda();
}

void HSchedeClienti::saveScheda()
{
    int cliente;
    int prodotto;
    int fontsize;

    width=ui->widget->getWidthImg0();
    height=ui->widget->getHeightImg0();
    widthc=ui->widget->getWidthImg1();
    heightc=ui->widget->getHeightImg1();

    qDebug()<<width<<height<<widthc<<heightc;




    if (ui->cbSelectCriteria->isChecked())
    {
       cliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->currentIndex().row(),0).data(0).toInt();
    }
    else
    {
       cliente=ui->comboBox->model()->index(ui->comboBox->currentIndex(),0).data(0).toInt();
    }

    fontsize=ui->widget->getFontSize();

//// qDebug()<<"w"<<width<<"h"<<height;
    prodotto=ui->listView->model()->index(ui->listView->currentIndex().row(),0).data(0).toInt();
    //connect(f,SIGNAL(update()),this,SLOT(loadScheda()));

    QSqlQuery q(db);
    QString sql="update schede set imgx=:w,imgy=:h,imgcw=:cw,imgch=:hw,fontsize=:font where cliente=:cliente and prodotto=:prodotto";
    q.prepare(sql);
    q.bindValue(":w",QVariant(width));
    q.bindValue(":h",QVariant(height));
    q.bindValue(":cw",QVariant(widthc));
    q.bindValue(":hw",QVariant(heightc));
    q.bindValue(":font",QVariant(fontsize));
    q.bindValue(":cliente",QVariant(cliente));
    q.bindValue(":prodotto",QVariant(prodotto));


    bool b=q.exec();
    if(b)
    {
        QMessageBox::information(this,QApplication::applicationName(),"Modifiche salvate",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore\n"+q.lastError().text(),QMessageBox::Ok);
    }






}

void HSchedeClienti::on_btnSave_clicked()
{
    saveScheda();
}

void HSchedeClienti::setImgWidth(int newWidth)
{
    width=newWidth;

}

void HSchedeClienti::setImgHeight(int newHeight)
{
    height=newHeight;
}
