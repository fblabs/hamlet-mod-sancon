#include "hmodificascheda.h"
#include "ui_hmodificascheda.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

// #include <QDebug>
#include <QSqlError>

#include <QFileDialog>
#include <QImage>
#include <QPixmap>
#include <QGraphicsScene>
#include <QBuffer>
#include "hduplicate.h"
#include <QGraphicsPixmapItem>

HModificaScheda::HModificaScheda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HModificaScheda)
{
    ui->setupUi(this);


}

HModificaScheda::~HModificaScheda()
{
    delete ui;
}

void HModificaScheda::init(QString conn, int cliente, int prodotto, QString scheda,int w,int h,int s)
{
    sConn=conn;

    idCliente=cliente;
    idProdotto=prodotto;
    schedaName=scheda;

    ui->leTitolo->setText(schedaName);

    db=QSqlDatabase::database(sConn);
    //// qDebug()<<"modifica scheda"<<db.isOpenError();


    loadScheda();



}

void HModificaScheda::updateFile()
{
    QString sql,presql;
    QVariant olio,vaso,tappo,etichette,scatole,note,vimgx,vimgy;

    QSqlQuery q(db);
    QSqlQuery temp(db);
    olio = ui->peOlio->toPlainText();
    vaso = ui->peVaso->toPlainText();
    tappo =ui->peTappo->toPlainText();
    etichette=ui->peEtichette->toPlainText();
    scatole=ui->peScatole->toPlainText();
    note=ui->ptNote->toPlainText();
    QByteArray ba;
    QBuffer buffer(&ba);
    buffer.open(QIODevice::WriteOnly);

    QByteArray bc;
    QBuffer bufferc(&bc);
    bufferc.open(QIODevice::WriteOnly);



    pixEtichetta = QPixmap::fromImage(imgEtichetta);
    pixEtichetta.save(&buffer,"PNG");

    pixCartone = QPixmap::fromImage(imgCartone);
    pixCartone.save(&bufferc,"PNG");




    presql="SELECT count(*) from schede WHERE cliente=:idcliente AND prodotto=:idprodotto";
    temp.prepare(presql);
    temp.bindValue(":idcliente",QVariant(idCliente));
    temp.bindValue(":idprodotto",QVariant(idProdotto));

    temp.exec();

    temp.first();


    if(temp.value(0).toInt()<1)
    {
       sql="INSERT INTO schede(cliente,prodotto,olio,vaso,tappo,etichette,scatole,note,immagine,imgcartone) values (:cliente,:prodotto,:olio,:vaso,:tappo,:etichette,:scatole,:note,:immagine,:imgcartone)" ;
    }
    else
    {
      sql="UPDATE schede SET olio=:olio, vaso=:vaso,tappo=:tappo,etichette=:etichette,scatole=:scatole,note=:note,immagine=:immagine,imgcartone=:imgcartone WHERE cliente=:cliente AND prodotto=:prodotto";


    }




    q.prepare(sql);





    q.bindValue(":olio",QVariant(olio));
    q.bindValue(":vaso",QVariant(vaso));
    q.bindValue(":tappo",QVariant(tappo));
    q.bindValue(":etichette",QVariant(etichette));
    q.bindValue(":scatole",QVariant(scatole));
    q.bindValue(":note",QVariant(note));
    q.bindValue(":cliente",QVariant(idCliente));
    q.bindValue(":prodotto",QVariant(idProdotto));
    q.bindValue(":immagine",QVariant(ba));
    q.bindValue(":imgcartone",QVariant(bc));




    if(q.exec())
    {

        QMessageBox::information(this,QApplication::applicationName(),"Scheda aggiornata",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore aggiornando la scheda",QMessageBox::Ok);

    }

}

void HModificaScheda::reloadFile()
{
    QString sql="SELECT olio,vaso,tappo,etichette,scatole,note,immagine from schede where cliente=:cliente and prodotto=:prodotto";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":cliente",QVariant(idCliente));
    q.bindValue(":prodotto",QVariant(idProdotto));

    q.exec();
    q.next();


    ui->peOlio->setPlainText(q.value(0).toString());
    ui->peVaso->setPlainText(q.value(1).toString());
    ui->peTappo->setPlainText(q.value(2).toString());
    ui->peEtichette->setPlainText(q.value(3).toString());
    ui->peScatole->setPlainText(q.value(4).toString());
    ui->ptNote->setPlainText(q.value(5).toString());

    QByteArray bytes;
    QGraphicsScene *scene;
/*
  // imgobj = new QImage();
  // imgobj->fromData(bytes);
  // img = QPixmap::fromImage(*imgobj);
 //  scene = new QGraphicsScene(this);
 /  scene->addPixmap(img);
   scene->setSceneRect(img.rect());
   ui->gv->setScene(scene);
   ui->gv->setAlignment(Qt::AlignLeft);
   ui->gv->fitInView(scene->itemsBoundingRect(),Qt::IgnoreAspectRatio);*/


}

void HModificaScheda::on_pushButton_clicked()
{
    updateFile();
    emit(schedaAggiornata());
}

/*void HModificaScheda::on_pushButton_reload_clicked()
{
    if (QMessageBox::question(this,QApplication::applicationName(),"Annullare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
         reloadFile();
    }

}*/

void HModificaScheda::on_pushButton_2_clicked()
{
    if (QMessageBox::question(this,QApplication::applicationName(),"Sicur* di chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
    {
    this->close();
    }
}

void  HModificaScheda::loadScheda()
{

    QString sql="SELECT olio,vaso,tappo,etichette,scatole,note,immagine,imgx,imgy,imgcartone from schede where cliente=:idcliente and prodotto=:idprodotto";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":idcliente",idCliente);
    q.bindValue(":idprodotto",idProdotto);

    q.exec();
    q.first();

    //// qDebug()<<sql;

    ui->peOlio->setPlainText(q.value(0).toString());
    ui->peVaso->setPlainText(q.value(1).toString());
    ui->peTappo->setPlainText(q.value(2).toString());
    ui->peEtichette->setPlainText(q.value(3).toString());
    ui->peScatole->setPlainText(q.value(4).toString());
    ui->ptNote->setPlainText(q.value(5).toString());
    imgw=q.value(7).toInt();
    imgh=q.value(8).toInt();

   // // qDebug()<<"loadscheda"<<imgw<<imgh;


    QByteArray bytes;
    bytes=q.value(6).toByteArray();

    QByteArray bytesc;
    bytesc=q.value(9).toByteArray();


    QGraphicsScene *scene;
    scene = new QGraphicsScene(this);


    imgCartone.loadFromData(bytesc);
    imgEtichetta.loadFromData(bytes);

    QGraphicsPixmapItem *itemlab = new QGraphicsPixmapItem(QPixmap::fromImage(imgEtichetta));
    itemlab->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
    itemlab->setPos(100,150);
    itemlab->setScale(0.25);


    scene->addItem(itemlab);



    ui->gv->setScene(scene);
    ui->gv->setAlignment(Qt::AlignCenter);
  //  ui->gv->fitInView(scene->itemsBoundingRect(),Qt::KeepAspectRatio);

    QGraphicsScene *imgcartscn =new QGraphicsScene(this);





    QGraphicsPixmapItem *itemcart = new QGraphicsPixmapItem(QPixmap::fromImage(imgCartone));
    itemcart->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
    itemcart->setPos(100,150);
    itemcart->setScale(0.25);


    imgcartscn->addItem(itemcart);

    ui->gvimgcart->setScene(imgcartscn);


}

void HModificaScheda::on_pushButton_4_clicked()
{
   QString imagepath;
   QByteArray bytes;
   QGraphicsScene *scene =new QGraphicsScene();



  imagepath = QFileDialog::getOpenFileName(this,"Apri Immagine", QDir::currentPath(),"Immagini (*.png *.jpg);;Tutti i file (*.*)",0,QFileDialog::DontUseNativeDialog);
  if (imagepath.length()>0)
  {
 // imgobj = new QImage();
  imgEtichetta.load(imagepath);
  //img = QPixmap::fromImage(imgEtichetta);

  QGraphicsPixmapItem *itemlab = new QGraphicsPixmapItem(QPixmap::fromImage(imgEtichetta));
  itemlab->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
  itemlab->setPos(100,150);
  itemlab->setScale(0.25);

  scene->addItem(itemlab);
  ui->gv->setScene(scene);

  }

}

void HModificaScheda::on_pushButton_5_clicked()
{
    HDuplicate *f=new HDuplicate();

    f->init(sConn,idCliente,idProdotto);
    connect(f,SIGNAL(update()),this,SLOT(update()));
    f->show();
}

void HModificaScheda::update()
{
    loadScheda();
    emit(schedaAggiornata());

}

void HModificaScheda::on_pushButton_6_clicked()
{
   /* QGraphicsScene *scene;
    QImage *imgobj = new QImage();
    imgobj->load("");
    QPixmap img = QPixmap::fromImage(*imgobj);
    scene = new QGraphicsScene(this);
    scene->addPixmap(img);
    scene->setSceneRect(img.rect());
    ui->gv->setScene(scene);
    ui->gv->setAlignment(Qt::AlignCenter);
    ui->gv->fitInView(scene->itemsBoundingRect(),Qt::KeepAspectRatio);*/

    QSqlQuery q(db);
    QString sql="update schede set immagine=NULL where prodotto=:prodotto and cliente=:cliente";
    q.prepare(sql);
    q.bindValue(":prodotto",idProdotto);
    q.bindValue(":cliente",idCliente);
    bool b=q.exec();
    if(!b)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore:\n"+q.lastError().text(),QMessageBox::Ok);
    }
    else
    {
        loadScheda();
    }

}

void HModificaScheda::on_pushButton_9_clicked()
{
    QString imagepath;
    QByteArray bytes;
    QGraphicsScene *scene =new QGraphicsScene();



   imagepath = QFileDialog::getOpenFileName(this,"Apri Immagine", QDir::currentPath(),"Immagini (*.png *.jpg);;Tutti i file (*.*)",0,QFileDialog::DontUseNativeDialog);
   if (imagepath.length()>0)
   {
  // imgobj = new QImage();
   imgCartone.load(imagepath);
   //img = QPixmap::fromImage(imgEtichetta);

   QGraphicsPixmapItem *item = new QGraphicsPixmapItem(QPixmap::fromImage(imgCartone));
   item->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
   item->setPos(100,150);
   item->setScale(0.25);

   scene->addItem(item);
   ui->gvimgcart->setScene(scene);
   }
}

void HModificaScheda::on_pushButton_10_clicked()
{
    QSqlQuery q(db);
    QString sql="update schede set imgcartone=NULL where prodotto=:prodotto and cliente=:cliente";
    q.prepare(sql);
    q.bindValue(":prodotto",idProdotto);
    q.bindValue(":cliente",idCliente);
    bool b=q.exec();
    if(!b)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore:\n"+q.lastError().text(),QMessageBox::Ok);
    }
    else
    {
        loadScheda();
    }
}

void HModificaScheda::on_pushButton_3_clicked()
{
    loadScheda();
}
