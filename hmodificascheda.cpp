#include "hmodificascheda.h"
#include "ui_hmodificascheda.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

#include <QDebug>
#include <QSqlError>

#include <QFileDialog>
#include <QImage>
#include <QPixmap>
#include <QGraphicsScene>
#include <QBuffer>
#include "hduplicate.h"

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

void HModificaScheda::init(QString conn, int cliente, int prodotto, QString scheda)
{
    sConn=conn;

    idCliente=cliente;
    idProdotto=prodotto;
    schedaName=scheda;

    ui->leTitolo->setText(schedaName);

    db=QSqlDatabase::database(sConn);
    //qDebug()<<"modifica scheda"<<db.isOpenError();


    loadScheda();



}

void HModificaScheda::updateFile()
{
    QString sql,presql;
    QVariant olio,vaso,tappo,etichette,scatole,note;

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

    img = QPixmap::fromImage(*imgobj);
    img.save(&buffer,"PNG");




    presql="SELECT count(*) from schede WHERE cliente=:idcliente AND prodotto=:idprodotto";
    temp.prepare(presql);
    temp.bindValue(":idcliente",QVariant(idCliente));
    temp.bindValue(":idprodotto",QVariant(idProdotto));

    temp.exec();

    temp.first();


    if(temp.value(0).toInt()<1)
    {
       sql="INSERT INTO schede(cliente,prodotto,olio,vaso,tappo,etichette,scatole,note,immagine) values (:cliente,:prodotto,:olio,:vaso,:tappo,:etichette,:scatole,:note,:immagine)" ;
    }
    else
    {
      sql="UPDATE schede SET olio=:olio, vaso=:vaso,tappo=:tappo,etichette=:etichette,scatole=:scatole,note=:note,immagine=:immagine WHERE cliente=:cliente AND prodotto=:prodotto";


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
qDebug()<<"Errore "<<q.lastError().text()<<q.lastQuery();

    if(q.exec())
    {
        //qDebug()<<q.lastQuery()<<db.lastError();
        QMessageBox::information(this,QApplication::applicationName(),"Scheda aggiornata",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore aggiornando la scheda",QMessageBox::Ok);
        qDebug()<<"Errore "<<q.lastError().text()<<q.lastQuery();
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

   imgobj = new QImage();
   imgobj->fromData(bytes);
   img = QPixmap::fromImage(*imgobj);
   scene = new QGraphicsScene(this);
   scene->addPixmap(img);
   scene->setSceneRect(img.rect());
   ui->gv->setScene(scene);
   ui->gv->setAlignment(Qt::AlignLeft);
   ui->gv->fitInView(scene->itemsBoundingRect(),Qt::IgnoreAspectRatio);


}

void HModificaScheda::on_pushButton_clicked()
{
    updateFile();
    emit(schedaAggiornata());
}

void HModificaScheda::on_pushButton_3_clicked()
{
    if (QMessageBox::question(this,QApplication::applicationName(),"Annullare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
         reloadFile();
    }

}

void HModificaScheda::on_pushButton_2_clicked()
{
    this->close();
}

void  HModificaScheda::loadScheda()
{
    QString sql="SELECT olio,vaso,tappo,etichette,scatole,note,immagine from schede where cliente=:idcliente and prodotto=:idprodotto";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":idcliente",idCliente);
    q.bindValue(":idprodotto",idProdotto);

    q.exec();
    q.first();

    //qDebug()<<sql;

    ui->peOlio->setPlainText(q.value(0).toString());
    ui->peVaso->setPlainText(q.value(1).toString());
    ui->peTappo->setPlainText(q.value(2).toString());
    ui->peEtichette->setPlainText(q.value(3).toString());
    ui->peScatole->setPlainText(q.value(4).toString());
    ui->ptNote->setPlainText(q.value(5).toString());

    QByteArray bytes;
    bytes=q.value(6).toByteArray();


    QGraphicsScene *scene;

    imgobj = new QImage();
    imgobj->loadFromData(bytes);
    img = QPixmap::fromImage(*imgobj);
    scene = new QGraphicsScene(this);
    scene->addPixmap(img);

    scene->setSceneRect(img.rect());

    ui->gv->setScene(scene);

    ui->gv->setAlignment(Qt::AlignCenter);
    ui->gv->fitInView(scene->itemsBoundingRect(),Qt::KeepAspectRatio);


}

void HModificaScheda::on_pushButton_4_clicked()
{
   QString imagepath;
   QByteArray bytes;
   QGraphicsScene *scene;

   imgobj = new QImage();


  imagepath = QFileDialog::getOpenFileName(this,"Apri Immagine", QDir::currentPath(),"Immagini (*.png *.jpg);;Tutti i file (*.*)",0,QFileDialog::DontUseNativeDialog);

  imgobj = new QImage();
  imgobj->load(imagepath);
  img = QPixmap::fromImage(*imgobj);
  scene = new QGraphicsScene(this);
  scene->addPixmap(img);
  scene->setSceneRect(img.rect());
  ui->gv->setScene(scene);
  ui->gv->setAlignment(Qt::AlignCenter);
  ui->gv->fitInView(scene->itemsBoundingRect(),Qt::KeepAspectRatio);


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
