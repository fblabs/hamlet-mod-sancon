#include "hlotti.h"
#include "ui_hlotti.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlquery>
#include <QSqlRelationalDelegate>
#include <QMessageBox>
#include <QPainter>
#include <QsqlTableModel>
#include "hnewop.h"
#include "hmodifylot.h"
#include "hreadonlymodellots.h"
#include "hnuovaoperazione.h"
#include <QMenu>
#include <QClipboard>
#include <hprint.h>
#include <QThread>
#include "huser.h"
#include "hpackagesunload.h"
#include <QCompleter>


HLotti::HLotti(QWidget *parent,HUser *puser,QString pcon) :
    QWidget(parent),
    ui(new Ui::HLotti)
{
    user=puser;
    sConnection=pcon;
    ui->setupUi(this);
    //setWindowModality(Qt::ApplicationModal);
    this->setContextMenuPolicy(Qt::CustomContextMenu);
    setupForm();
}

/*void HLotti::setConnectionName(QString conn)
{
   // sConnection = conn;
}*/

HLotti::~HLotti()
{
    delete ui;
}

/*void HLotti::onConnectionNameSet()
{
   setupForm();
}*/

void HLotti::setupForm()
{
    db = QSqlDatabase::database(sConnection);

    ui->datadal->setDate(QDate::currentDate().addMonths(-3));
    ui->dataal->setDate(QDate::currentDate());


    tbm = new HReadOnlyModelNew(0,db);

    tbm->setTable("lotdef");
    tbm->setFilter("lotdef.attivo=1");

    tbm->setRelation(2,QSqlRelation("prodotti","ID","descrizione"));
    tbm->setRelation(5,QSqlRelation("unita_di_misura","ID","descrizione"));
    tbm->setRelation(7,QSqlRelation("anagrafica","ID","ragione_sociale"));
    tbm->setRelation(10,QSqlRelation("tipi_lot","ID","descrizione"));

    ui->twLots->setItemDelegate(new QSqlRelationalDelegate(tbm));
    ui->twLots->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    tbm->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);


////qDebug()<<tbm->lastError().text()<<tbm->relation(7).indexColumn();

    tbm->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    tbm->setHeaderData(1,Qt::Horizontal,QObject::tr("Lotto"));
    tbm->setHeaderData(2,Qt::Horizontal,QObject::tr("Prodotto"));
    tbm->setHeaderData(3,Qt::Horizontal,QObject::tr("Data"));
    tbm->setHeaderData(4,Qt::Horizontal,QObject::tr("Giacenza"));
    tbm->setHeaderData(5,Qt::Horizontal,QObject::tr("Unità di misura"));
    tbm->setHeaderData(6,Qt::Horizontal,QObject::tr("Scadenza"));
    tbm->setHeaderData(7,Qt::Horizontal,QObject::tr("Cliente(U) - Fornitore(E)"));
    tbm->setHeaderData(8,Qt::Horizontal,QObject::tr("Lotto Fornitore"));
    tbm->setHeaderData(9,Qt::Horizontal,QObject::tr("Lotto di Uscita"));
    tbm->setHeaderData(10,Qt::Horizontal,QObject::tr("Tipologia Lotto"));
 /*   tbm->setHeaderData(9,Qt::Horizontal,QObject::tr("Attivo"));*/
    tbm->setSort(3,Qt::AscendingOrder);
    QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));

    ui->twLots->setColumnHidden(0,true);


    tbm->select();
    ui->twLots->setModel(tbm);

    //qDebug()<<tbm->query().lastError().text();

    mTipi=new QSqlTableModel(0,db);
    mTipi->setTable("tipi_lot");
    mTipi->setSort(1,Qt::AscendingOrder);
    ui->cbTipiLot->setModel(mTipi);
    ui->cbTipiLot->setModelColumn(1);
    mTipi->select();

    mTipiProdotto=new QSqlTableModel(0,db);
    mTipiProdotto->setTable("tipi_prodotto");
    mTipiProdotto->setSort(1,Qt::AscendingOrder);
    ui->cbTipoProd->setModel(mTipiProdotto);
    ui->cbTipoProd->setModelColumn(1);
    mTipiProdotto->select();


    mProdotti=new QSqlTableModel(0,db);
    mProdotti->setTable("prodotti");
    mProdotti->setSort(1,Qt::DescendingOrder);
    ui->cbProdotti->setModel(mProdotti);
    ui->cbProdotti->setModelColumn(1);
    ui->cbProdotti->completer()->setCompletionMode(QCompleter::PopupCompletion);
    mProdotti->select();

    ui->cbTipiLot->setCurrentIndex(0);
    ui->cbProdotti->setCurrentIndex(0);


    tbm->setSort(3,Qt::DescendingOrder);
    setFilter();
    ui->twLots->setColumnWidth(11,10);

   // connect(ui->cbTipiLot,SIGNAL(currentIndexChanged(QString)),this,SLOT(setFilter()));
   // connect(ui->cbProdotti,SIGNAL(currentIndexChanged(QString)),this,SLOT(setFilter()));
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));
   // connect(this,SIGNAL(actionCopia),this,SLOT(showContextMenu(QPoint));

}

void HLotti::editLot()
{
    HModifyLot *f=new HModifyLot();
    connect(f,SIGNAL(update()),this,SLOT(updateData()));
    f->show();
    f->init(ui->twLots->model()->index(ui->twLots->selectionModel()->currentIndex().row(),0).data(0).toInt(),sConnection);
}

void HLotti::showContextMenu(const QPoint &pos)
{
    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(0);

    QAction *copyAction=menu->addAction("Copia il testo sotto il cursore");
    QAction *editaction=menu->addAction("Modifica/Copia dati ...");

    connect(copyAction,SIGNAL(triggered(bool)),this,SLOT(copyField()));
    connect(editaction,SIGNAL(triggered(bool)),this,SLOT(editLot()));


    menu->popup(globalPos);
}

void HLotti::copyField()
{
    QString field=ui->twLots->currentIndex().data(0).toString();
    QClipboard *clipboard= QApplication::clipboard();
    clipboard->setText(field);
}

void HLotti::on_pushButton_clicked()
{
 /*  if(QMessageBox::question(this,QApplication::applicationName(),"salvare le modifiche?",QMessageBox::Ok | QMessageBox::Cancel )==QMessageBox::Ok)
   {
       tbm->submitAll();
       tbm->select();

   }*/

   HPackagesUnload *f=new HPackagesUnload(0,user,sConnection);
   f->show();
   connect(f,SIGNAL(update()),this,SLOT(updateData()));


}

void HLotti::on_pushButton_3_clicked()
{
    if( QMessageBox::Ok == QMessageBox::question(this, QApplication::applicationName(), "Chiudere la finestra?", QMessageBox::Ok |QMessageBox::Cancel))
      {
            this->close();
      }
}

void HLotti::searchProduct()
{

}



void HLotti::resetData()
{
    tbm->select();
}




void HLotti::on_pushButton_4_clicked()
{

    HnuovaOperazione *f = new HnuovaOperazione(0,user,sConnection);
  //  f->setConnectionName(sConnection,user);
    f->show();


    tbm->select();
    ui->twLots->reset();
}

void HLotti::on_pushButton_5_clicked()
{
   setFilter();
}


void HLotti::setFilter()
{
    QString tipo,prodotto,filter;
    filter="";
    QString datafilter="lotdef.data between '" + ui->datadal->dateTime().toString("yyyy-MM-dd MM:mm:ss") + "' and '" + ui->dataal->dateTime().addDays(1).toString("yyyy-MM-dd HH:mm:ss")+"'";
//qDebug()<<datafilter;

    if (ui->chbT->isChecked() && !ui->chbP->isChecked())
    {
        //filtra solo per tipo
       tipo=ui->cbTipiLot->model()->index(ui->cbTipiLot->currentIndex(),0).data(0).toString();
       filter="lotdef.tipo="+tipo+" and ";

    }
    else if (ui->chbP->isChecked() &&  ! ui->chbT->isChecked())
    {
        //filtra per prodotto
        prodotto=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toString();
        filter="lotdef.prodotto="+prodotto+" and ";
    }
    else if(ui->chbP->isChecked() && ui->chbT->isChecked())
    {
        //filtra  per entrambi
        tipo=ui->cbTipiLot->model()->index(ui->cbTipiLot->currentIndex(),0).data(0).toString();
        prodotto=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toString();
        filter="lotdef.tipo="+ tipo + " and lotdef.prodotto=" + prodotto + " and ";
    }
    else if(ui->chTipoProdotti->isChecked() /*&& ui->chbT->isChecked()*/)
    {
        //filtra  per entrambi
        tipo=ui->cbTipoProd->model()->index(ui->cbTipoProd->currentIndex(),0).data(0).toString();
       // prodotto=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toString();
        filter="prodotto in (SELECT ID from prodotti where tipo=" + tipo + ") and ";
    }


    filter=filter += datafilter;

    tbm->setFilter(filter);
    qDebug()<<prodotto<<tipo<<filter<<tbm->lastError().text()<<tbm->query().lastQuery();


}



void HLotti::on_pushButton_6_clicked()
{
  print();
}



void HLotti::print()
{


    HPrint *f =new HPrint();

    int rows=ui->twLots->model()->rowCount();
    int cols=ui->twLots->model()->columnCount();



    f->append("PRODUZIONE DAL "+ ui->datadal->text().toUpper() + " AL " + ui->dataal->text().toUpper(),false);
    f->toggleImageUI(false);
    f->showMaximized();
    QTextTable *tb=f->addTable(rows,cols);
    QString txt;

   int r,c;


    f->showMaximized();

    for (r=0;r<rows;r++)
    {


        for (c=0; c<cols; c++)
        {
            txt=ui->twLots->model()->index(r,c).data(0).toString();
            f->writeTableContent(tb,r,c,txt);
            QApplication::processEvents();

        }
        QApplication::processEvents();

    }



}

void HLotti::updateData()
{
    tbm->select();
    qDebug()<<"update";
}

void HLotti::on_pushButton_7_clicked()
{
    //modifica lotto  selezionato
    HModifyLot *f=new HModifyLot();
    connect(f,SIGNAL(update()),this,SLOT(updateData()));
    f->show();
    f->init(ui->twLots->model()->index(ui->twLots->selectionModel()->currentIndex().row(),0).data(0).toInt(),sConnection);

}

void HLotti::on_leLottoRaw_textChanged(const QString &arg1)
{
    QString filter="lotdef.lot like '" +arg1+"%'";
    tbm->setFilter(filter);
    qDebug()<<tbm->query().lastError().text();
}


