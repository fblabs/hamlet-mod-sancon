#include "hschede.h"
#include "ui_hschede.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QCompleter>
#include <QTextCursor>
#include <QTextFragment>
#include "hmodificascheda.h"
#include<QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QShortcut>
#include <QFileDialog>
#include <QDir>
#include <QBuffer>

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

    QCompleter* compprodotti= new QCompleter(qrm);
    compprodotti->setCompletionMode(QCompleter::PopupCompletion);
    compprodotti->setCaseSensitivity(Qt::CaseInsensitive);
    compprodotti->setCompletionColumn(1);
    ui->cbProdotti->setCompleter(compprodotti);
    ui->cbProdotti->setCurrentIndex(0);

    connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(retrieveProducts()));
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(loadScheda()));
    connect(ui->cbProdotti,SIGNAL(currentIndexChanged(int)),this,SLOT(loadScheda()));

    loadScheda();


    QShortcut *shortcut =new QShortcut(QKeySequence("Ctrl+Alt+I"),this);
    connect(shortcut,SIGNAL(activated()),this,SLOT(addNewImage()));



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


    HModificaScheda *f=new HModificaScheda();
    f->init(db.connectionName(),cliente,prod,name,200,200,10);
    f->show();

   // loadScheda();
}

void HSchede::loadScheda()
{
    int cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    int prodotto = ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();
    int ids;
    QString olio,vaso,tappo,etichette,scatole,note;
    qreal fontsize;
    QByteArray bytes;

   //original
    QString query="SELECT ID,olio,vaso,tappo,etichette,scatole,note,fontsize from schede where cliente=:idcliente and prodotto=:idprodotto";


    QSqlQuery q(db);

    ui->textEdit->clear();
    q.prepare(query);
    q.bindValue(":idcliente",QVariant(cliente));
    q.bindValue(":idprodotto",QVariant(prodotto));
    q.exec();

    qDebug()<<q.lastQuery()<<q.lastError().text();



   bool b = q.first();

   if(b)
   {



       ids=q.value(0).toInt();
       olio=q.value(1).toString();
       vaso=q.value(2).toString();
       tappo=q.value(3).toString();
       etichette=q.value(4).toString();
       scatole=q.value(5).toString();
       note=q.value(6).toString();
       fontsize =q.value(7).toReal();
   }
   else
   {
       return;
   }

     ui->textEdit->setFontPointSize(fontsize);





    ui->textEdit->append("==========================================");

  //  idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    ui->textEdit->append("SCHEDA CLIENTE");
    ui->textEdit->append("==========================================");

    ui->textEdit->moveCursor(QTextCursor::End);


   ui->textEdit->append("OLIO:" +q.value(1).toString());
   ui->textEdit->append("VASO: "+q.value(2).toString());
   ui->textEdit->append("TAPPO: "+q.value(3).toString());
  ui->textEdit->append("ETICHETTE: "+q.value(4).toString());
  ui->textEdit->append("SCATOLE: "+q.value(5).toString());
  ui->textEdit->append("NOTE: "+q.value(6).toString());
  ui->textEdit->moveCursor(QTextCursor::End);


  int iwidth,iheight;

  query="SELECT bits,width,height FROM immagini_schede WHERE IDScheda=:id";
  q.clear();
  q.prepare(query);
  q.bindValue(":id",ids);
  q.exec();
  q.first();

  bytes=q.value(0).toByteArray();
  iwidth=q.value(1).toInt();
  iheight=q.value(2).toInt();

qDebug()<<q.lastError().text()<<q.lastQuery();

ui->textEdit->moveCursor(QTextCursor::End);
  addImage(bytes,"0",iwidth,iheight);


}

void HSchede::addImage(QByteArray bytes, QString name, int width, int height)
{
    QTextCursor cursor(ui->textEdit->textCursor());
    cursor.movePosition(QTextCursor::End);
 //   ui->textEdit->setTextCursor(cursor);

    QImage *imgobj = new QImage();
    imgobj->loadFromData(bytes);

    QImage scaled=imgobj->scaled(width,height,Qt::KeepAspectRatio,Qt::SmoothTransformation);

    cursor.movePosition(QTextCursor::End);
    cursor.insertImage(scaled,name);
    cursor.movePosition(QTextCursor::End);


}

void HSchede::resizeImage(QString name,int wr, int hr)
{
    QTextBlock currentBlock = ui->textEdit->textCursor().block();
    QTextBlock::iterator it;


        for (it = currentBlock.begin(); !(it.atEnd()); ++it)
        {

                 QTextFragment fragment = it.fragment();

                 if (fragment.isValid())
                 {

                     if(fragment.charFormat().isImageFormat () )
                     {
                          QTextImageFormat newImageFormat = fragment.charFormat().toImageFormat();

                    //      qDebug()<<newImageFormat.name();
                          if(newImageFormat.name()==name)
                          {
                          newImageFormat.setWidth(wr);
                          newImageFormat.setHeight(hr);
                          }

                          if (newImageFormat.isValid())
                          {

                              QTextCursor helper = ui->textEdit->textCursor();

                              helper.setPosition(fragment.position());
                              helper.setPosition(fragment.position() + fragment.length(),
                                                  QTextCursor::KeepAnchor);
                              helper.setCharFormat(newImageFormat);
                          }
                      }
                  }
           }

}

void HSchede::addNewImage()
{
    QString imagepath = QFileDialog::getOpenFileName(this,"Apri Immagine", QDir::currentPath(),"Immagini (*.png *.jpg);;Tutti i file (*.*)",0,QFileDialog::DontUseNativeDialog);
    QImage image;
    image.load(imagepath);


    QByteArray bytes;
    QBuffer buffer(&bytes);
    buffer.open(QIODevice::WriteOnly);
    image.save(&buffer,"PNG");



    addImage(bytes,"1",200,200);

}
