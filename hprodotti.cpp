#include "mainwindow.h"
#include "hprodotti.h"
#include "ui_hprodotti.h"
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include <QSqlQuery>
#include <QDebug>
#include <QItemSelectionModel>
#include <QItemDelegate>
#include <QStringList>
#include <QSortFilterProxyModel>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QImage>
#include <QFileDialog>
#include <QDir>
#include <QPixmap>
#include <QGraphicsScene>
#include <QByteArray>
//#include <QSqlModelIndex>
#include <QSqlQueryModel>
#include <QBuffer>
#include <QSqlRecord>
#include <QSqlField>
#include <QSqlError>
#include <QFile>
#include <QBitArray>
#include <QSettings>
#include <QMessageBox>
#include "hnewproduct.h"

HProdotti::HProdotti(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HProdotti)
{




}

void HProdotti::setForm()
{
   // QSettings settings("DB");
    ui->setupUi(this);
    db =QSqlDatabase::database(sConn);
    this->showMaximized();
    fillTipi();
    setupForm();

}


void HProdotti::setConnection(QString conn)
{

    sConn=conn;
    setForm();
}



void HProdotti::setMain(MainWindow *w)
{
   wmain = w;
}


HProdotti::~HProdotti()
{
    delete ui;


}

void HProdotti::fillTipi()
{
    ui->cbxType->addItem("Mostra Tutto", QVariant(5));
    ui->cbxType->addItem("Materie Prime", QVariant(0));
    ui->cbxType->addItem("Prodotti", QVariant(1));
    ui->cbxType->addItem("Confezionamento", QVariant(2));
    ui->cbxType->addItem("Tappi e capsule", QVariant(3));
    ui->cbxType->addItem("Vasi e contenitori", QVariant(4));


    ui->cbxtipo->addItem("Materie Prime", QVariant(0));
    ui->cbxtipo->addItem("Prodotti", QVariant(1));
    ui->cbxtipo->addItem("Confezionamento", QVariant(2));
    ui->cbxtipo->addItem("Tappi e capsule", QVariant(3));
    ui->cbxtipo->addItem("Vasi e contenitori", QVariant(4));

    ui->cbxUM->addItem("Kg",0);
    ui->cbxUM->addItem("Pz.",1);


}

void HProdotti::setupForm()

{
    fillTipi();

    pModel= new QSqlTableModel(0,db);
    pModel->setTable("prodotti");
    pModel->setEditStrategy(QSqlTableModel::OnRowChange);
   // pModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    pModel->select();


    ui->lvMaster->setModel(pModel);
    ui->lvMaster->setModelColumn(1);


    dwMapperTipi = new QDataWidgetMapper();

    dwMapperTipi->setModel(pModel);
    dwMapperTipi->addMapping(ui->lid,0);
    dwMapperTipi->addMapping(ui->desc,1);
    dwMapperTipi->addMapping(ui->cbxtipo,2,"currentIndex");
    dwMapperTipi->addMapping(ui->cballergenico,3);
    dwMapperTipi->setItemDelegate(new QItemDelegate(this));

 //   dwMapperTipi->toFirst();
    pModel->select();





    connect(ui->lnSearch,SIGNAL(textChanged(QString)) , this, SLOT(productSearch()));
    connect(ui->cbxType,SIGNAL(currentIndexChanged(int)),this,SLOT(showType()));
    //qDebug() <<"search e combo connected ok";
    connect(ui->lvMaster->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), dwMapperTipi, SLOT(setCurrentModelIndex(QModelIndex)));
    //qDebug() <<"dwmappertipi connected ok";
  //  connect(ui->lvMaster->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), this, SLOT(caricaRicetta()));
    connect (ui->lid, SIGNAL(textChanged(QString)), this,SLOT(setImage()));
   //qDebug() <<"slot caricaRicetta ok";
    // connect(ui->lvMaster->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), mpr,SLOT(setCurrentModelIndex(QModelIndex)));
   // connect(ui->lvMaster->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), this,SLOT(caricaRicetta()));


}


void HProdotti::productSearch()
{
   QString flt = "descrizione LIKE '%" + ui->lnSearch->text() + "%'";
   pModel->setFilter(flt);
}

void HProdotti::showType()
{
  QString flt = "tipo = " + (ui->cbxType->currentData()).toString();

  if (flt == "tipo = 5") flt = "";

  pModel->setFilter(flt);

}


void HProdotti::on_pushButton_clicked()
{
   imagepath = QFileDialog::getOpenFileName(this,"Apri Immagine", QDir::currentPath(),"Immagini (*.png *.jpg);;Tutti i file (*.*)",0,QFileDialog::DontUseNativeDialog);

   imageobject = new QImage();
   imageobject->load(imagepath);
   image = QPixmap::fromImage(*imageobject);
   scene = new QGraphicsScene(this);
   scene->addPixmap(image);
   scene->setSceneRect(image.rect());
   ui->graphicsView->setScene(scene);
   ui->graphicsView->setAlignment(Qt::AlignLeft);
}

void HProdotti::on_pushButton_2_clicked()
{
    QByteArray ba;
    QFile f(imagepath);
   int count;

    if (f.open(QIODevice::ReadOnly))
    {
        ba = f.readAll();
        f.close();
    }

    QSqlQuery qr(db);

    qr.exec("select count(*) from immagini_prodotti where id_prodotto=" + ui->lid->text());
    qr.next();
    count = qr.value(0).toInt();
    //qDebug() << "count" << count;
    qr.clear();
    if (count == 0)
    {
    qr.prepare("insert into immagini_prodotti (id_prodotto, immagine)values (:id,:img)");
    }
    else
    {
        qr.prepare("update immagini_prodotti set immagine = :img where id_prodotto=" + ui->lid->text());
    }
    qr.bindValue(":id", ui->lid->text());
    qr.bindValue(":img",ba);

   if (qr.exec())
   {
    QMessageBox::information(this,QApplication::applicationName(),"Immagine salvata",QMessageBox::Ok);
   }

    //qDebug() << qr.lastQuery()<< qr.lastError().text();
}

void HProdotti::setImage()
{
   QByteArray ba2;
   QPixmap pixmap;
   QSqlQuery qr(db);

   qr.prepare("SELECT immagine from immagini_prodotti where id_prodotto= " + ui->lid->text() );
   qr.exec();
   qr.next();
   //qDebug() << qr.executedQuery()<< qr.value(0);
   ba2.resize(120000);
   ba2 = qr.value(0).toByteArray();
   pixmap.loadFromData(ba2);
   scene = new QGraphicsScene(QRect(0,0,400,500));
   scene->addPixmap(pixmap);
  // scene->setSceneRect(pixmap.rect());
   ui->graphicsView->setScene(scene);
   ui->graphicsView->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);

   //qDebug()<< pixmap.size() << "qr.exec()" << "caricata";

}

void HProdotti::on_pushButton_3_clicked()
{
    this->close();
}

void HProdotti::on_pushButton_4_clicked()
{
  
    HNewProduct *f=new HNewProduct();
    f->show();
    f->init(sConn);


//  ui->lid->setText("");
//  ui->desc->setText("");


 }

void HProdotti::on_pushButton_5_clicked()
{

    int allergenico = ui->cballergenico->isChecked() ? 1:0 ;

    QSqlQuery q(db);
   if( !q.exec("INSERT INTO prodotti (ID,descrizione,tipo,allergenico,unita_misura) VALUES ('-1','"+ ui->desc->text()+"'," + ui->cbxtipo->itemData(ui->cbxtipo->currentIndex()).toString() + ","+ QString::number(allergenico) + "," + ui->cbxUM->itemData(ui->cbxtipo->currentIndex()).toString()+ ")"))
   {
      QMessageBox::warning(this,QApplication::applicationName(),"Errore durante il salvataggio\n"+pModel->lastError().text(),QMessageBox::Ok);
      //qDebug()<<q.lastQuery()<<q.lastError();
   }

    pModel->submitAll();
 
}
