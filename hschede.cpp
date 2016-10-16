#include "hschede.h"
#include "ui_hschede.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QCompleter>
#include <QTextCursor>
#include "hmodificascheda.h"
#include<QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>

HSchede::HSchede(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HSchede)
{
    ui->setupUi(this);
    db=pdb;
    QSqlTableModel *modclienti=new QSqlTableModel(0,db);
    modclienti->setTable("anagrafica");
    modclienti->setFilter("cliente=1");
    modclienti->setSort(1,Qt::AscendingOrder);
    modclienti->select();
    ui->cbClienti->setModel(modclienti);
    ui->cbClienti->setModelColumn(1);
    QCompleter* compclienti= new QCompleter(modclienti);
    compclienti->setCompletionMode(QCompleter::PopupCompletion);
    compclienti->setCaseSensitivity(Qt::CaseInsensitive);
    compclienti->setCompletionColumn(1);
    ui->cbClienti->setCompleter(compclienti);
    ui->cbClienti->setCurrentIndex(0);

    int  cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();

    QString query="SELECT ricette.ID_prodotto, prodotti.descrizione FROM ricette, prodotti WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT ID_ricetta FROM associazioni WHERE ID_cliente=:id and visualizza=1)order by prodotti.descrizione";
    QSqlQuery q(db);
    q.prepare(query);
    q.bindValue(":id",QVariant(cliente));
    q.exec();

    QSqlQueryModel *qrm=new QSqlQueryModel();


    qrm->setQuery(q);

    ui->cbProdotti->setModel(qrm);
    ui->cbProdotti->setModelColumn(1);

    connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(retrieveProducts()));
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(loadScheda()));



}

void HSchede::retrieveProducts()
{
    int  cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();

    QString query="SELECT ricette.ID_prodotto, prodotti.descrizione FROM ricette, prodotti WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT ID_ricetta FROM associazioni WHERE ID_cliente=:id and visualizza=1)order by prodotti.descrizione";
    QSqlQuery q(db);
    q.prepare(query);
    q.bindValue(":id",QVariant(cliente));
    q.exec();

    QSqlQueryModel *qrm=new QSqlQueryModel();


    qrm->setQuery(q);

    ui->cbProdotti->setModel(qrm);
    ui->cbProdotti->setModelColumn(1);
}

HSchede::~HSchede()
{
    delete ui;
}

void HSchede::on_pbClose_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
       {
        close();
       }
}

void HSchede::on_pbMod_clicked()
{
    int  cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    int prod = ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();
    QString name = ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),1).data(0).toString();

  /*  qDebug()<<cliente<<prod<<name;

    HModificaScheda *f=new HModificaScheda();
    f->init(db.connectionName(),cliente,prod,name,200,200,10);
    f->show();*/

    loadScheda();
}

void HSchede::loadScheda()
{
    int  cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    int prodotto = ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();

   //original
    QString query="SELECT olio,vaso,tappo,etichette,scatole,note,immagine,imgx,imgy,fontsize,imgcartone,imgcw,imgch from schede where cliente=:idcliente and prodotto=:idprodotto";


    QSqlQuery q(db);

    ui->textEdit->clear();
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
 int  width=q.value(7).toInt();
 int  height=q.value(8).toInt();
 qreal fontsize =q.value(9).toReal();
 bytesc=q.value(10).toByteArray();
 int  widthc=q.value(11).toInt();
 int  heightc=q.value(12).toInt();

 QImage imgobj;
 QImage imgobjc;


   ui->textEdit->setFontPointSize(fontsize);





    ui->textEdit->append("==========================================");

  //  idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    ui->textEdit->append("SCHEDA CLIENTE");
    ui->textEdit->append("==========================================");

    ui->textEdit->moveCursor(QTextCursor::End);


   ui->textEdit->append("OLIO:" +q.value(0).toString());
   ui->textEdit->append("VASO: "+q.value(1).toString());
   ui->textEdit->append("TAPPO: "+q.value(2).toString());
  ui->textEdit->append("ETICHETTE: "+q.value(3).toString());
  ui->textEdit->append("SCATOLE: "+q.value(4).toString());
  ui->textEdit->append("NOTE: "+q.value(5).toString());
  ui->textEdit->moveCursor(QTextCursor::End);




   if(bytes.size()>0)
   {


   ui->textEdit->append("IMMAGINE\n");
   imgobj=QImage::fromData(bytes);
   QImage scale=imgobj.scaledToWidth(width,Qt::SmoothTransformation);


   ui->textEdit->moveCursor(QTextCursor::End);
   //ui->textEdit->textCursor().insertImage(scale,"0");
   ui->textEdit->moveCursor(QTextCursor::End);


   }



   if(bytesc.size()>0)
   {
       imgobjc=QImage::fromData(bytesc);

   QImage scalec=imgobjc.scaledToWidth(widthc,Qt::SmoothTransformation);

   ui->textEdit->append("IMMAGINE CARTONE\n");
   ui->textEdit->textCursor().insertImage(scalec,"1");




   }


}
