#include "hlotti.h"
#include "ui_hlotti.h"
 #include <QDebug>
#include <QDate>
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
#include "hprint.h"
#include <QThread>
#include "huser.h"
#include "hpackagesunload.h"
#include "hcomposizionelotto.h"
#include <QCompleter>
#include "hexpirations.h"


HLotti::HLotti(QSqlDatabase pdb, HUser *puser, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLotti)
{

    ui->setupUi(this);

    user=puser;
    db=pdb;
    ui->datadal->setDate(QDate::currentDate().addMonths(-1));
    ui->dataal->setDate(QDate::currentDate());

     tbm = new HReadOnlyModelLots(0,db);
     this->setContextMenuPolicy(Qt::CustomContextMenu);

     tbm->setTable("lotdef");
     tbm->setFilter("lotdef.attivo>0");
     tbm->setRelation(2,QSqlRelation("prodotti","ID","descrizione"));
     tbm->setRelation(5,QSqlRelation("unita_di_misura","ID","descrizione"));
     tbm->setRelation(7,QSqlRelation("anagrafica","ID","ragione_sociale"));
     tbm->setRelation(10,QSqlRelation("tipi_lot","ID","descrizione"));


     ui->twLots->setItemDelegate(new QSqlRelationalDelegate(tbm));

    ui->twLots->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tbm->select();

   qDebug()<< tbm->query().lastError();
    tbm->setEditStrategy(QSqlRelationalTableModel::OnFieldChange);


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

    tbm->setSort(3,Qt::AscendingOrder);

    QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));






    ui->twLots->setModel(tbm);

    mTipi=new QSqlTableModel(0,db);
    mTipi->setTable("tipi_lot");
    mTipi->setSort(1,Qt::AscendingOrder);
    ui->cbTipiLot->setModel(mTipi);
    ui->cbTipiLot->setModelColumn(1);
    mTipi->select();
    ui->cbTipiLot->setCurrentIndex(0);

    mTipiProdotto=new QSqlTableModel(0,db);
    mTipiProdotto->setTable("tipi_prodotto");
    mTipiProdotto->setSort(1,Qt::AscendingOrder);
    ui->cbTipoProd->setModel(mTipiProdotto);
    ui->cbTipoProd->setModelColumn(1);
    mTipiProdotto->select();
    ui->cbTipoProd->setCurrentIndex(0);


    mProdotti=new QSqlTableModel(0,db);
    mProdotti->setTable("prodotti");
    mProdotti->setSort(1,Qt::AscendingOrder);
    ui->cbProdotti->setModel(mProdotti);
    ui->cbProdotti->setModelColumn(1);
    ui->cbProdotti->completer()->setCompletionMode(QCompleter::PopupCompletion);
    mProdotti->select();


    ui->cbProdotti->setCurrentIndex(0);


    tbm->setSort(3,Qt::DescendingOrder);

    ui->twLots->setColumnWidth(11,10);

    ui->twLots->setColumnHidden(0,true);
    ui->twLots->setCurrentIndex(ui->twLots->model()->index(0,0));

    det=new QShortcut(QKeySequence("F5"),this);

    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));
    connect(det,SIGNAL(activated()),this,SLOT(getDetails()));
}



HLotti::~HLotti()
{
    delete ui;
}

void HLotti::editLot()
{
    int idlotto=ui->twLots->model()->index(ui->twLots->selectionModel()->currentIndex().row(),0).data(0).toInt();
    HModifyLot *f=new HModifyLot(idlotto,db);
    connect(f,SIGNAL(updateLot()),this,SLOT(updateTableView()));
    f->show();

}

void HLotti::getDetails()
{
    int lot=ui->twLots->model()->index(ui->twLots->selectionModel()->currentIndex().row(),0).data(0).toInt();
    QString desc=ui->twLots->model()->index(ui->twLots->selectionModel()->currentIndex().row(),1).data(0).toString();
    desc+= " - ";
    desc+=ui->twLots->model()->index(ui->twLots->selectionModel()->currentIndex().row(),2).data(0).toString();


    HComposizioneLotto *f=new HComposizioneLotto(0,db,lot,desc);
    f->show();
}

void HLotti::showContextMenu(const QPoint &pos)
{
    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(0);

    QAction *detailsAction=menu->addAction("Composizione/uso lotto");
    menu->addSeparator();
    QAction *copyAction=menu->addAction("Copia il testo sotto il cursore");
    QAction *editAction=menu->addAction("Modifica/Copia dati ...");
   //. detailsAction->setShortcut(QKeySequence("Ctrl+F5"));

    connect(detailsAction,SIGNAL(triggered(bool)),this,SLOT(getDetails()));
    connect(copyAction,SIGNAL(triggered(bool)),this,SLOT(copyField()));
    connect(editAction,SIGNAL(triggered(bool)),this,SLOT(editLot()));



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

   HPackagesUnload *f=new HPackagesUnload(user,db);
   f->show();
   connect(f,SIGNAL(update()),this,SLOT(updateTableView()));


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

   HnuovaOperazione *f = new HnuovaOperazione(user,db);
   connect(f,SIGNAL(trigger()),this,SLOT(updateTableView()));
   f->show();

}



void HLotti::setFilter()
{
    QString tipo,prodotto,filter;

       if(tbm==0)return;
       filter="";

       QString datafilter="lotdef.data between cast('" + ui->datadal->dateTime().toString("yyyy-MM-dd HH:mm:ss") + "' as date) and cast('" + ui->dataal->dateTime().addDays(1).toString("yyyy-MM-dd HH:mm:ss")+"' as date)";

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
    QApplication::processEvents();



}

void HLotti::updateTableView()
{
    tbm->select();
    ui->twLots->reset();
    qDebug()<<"update";
}

void HLotti::modifySelected(int pidlotto)
{

   HModifyLot *f=new HModifyLot(pidlotto,db);
   connect(f,SIGNAL(updatedLot()),this,SLOT(updateTableView()));
   f->show();

}

void HLotti::on_pushButton_7_clicked()
{
    int idlotto=ui->twLots->model()->index(ui->twLots->currentIndex().row(),0).data(0).toInt();

    modifySelected(idlotto);

}

void HLotti::on_leLottoRaw_textChanged(const QString &arg1)
{
    QString filter="lotdef.lot like '" +arg1+"%'";
    tbm->setFilter(filter);
   // // qDebug()<<tbm->query().lastError().text();
}



void HLotti::on_chTipoProdotti_toggled(bool checked)
{
    if(checked)
    {

      //  ui->chTipoProdotti->setEnabled(true); //check tipo prodotti
      //  ui->chTipoProdotti->setChecked(true);

        ui->chbT->setEnabled(false);//check tipo lotti
        ui->chbT->setChecked(false);
        ui->cbTipiLot->setEnabled(false);

        ui->chbP->setEnabled(false);
        ui->chbP->setChecked(false);
        ui->cbProdotti->setEnabled(false);


    }
    else
    {

          ui->cbTipoProd->setEnabled(checked); //combo tipo prodotti

          ui->chbT->setEnabled(true);//check tipo lotti
          ui->cbTipiLot->setEnabled(false);

          ui->chbP->setEnabled(true);
          ui->chbP->setChecked(false);
          ui->cbProdotti->setEnabled(false);
    }

    ui->cbTipoProd->setEnabled(checked); //combo tipo prodotti



    setFilter();

}

void HLotti::on_cbTipoProd_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    if(ui->cbTipoProd->isEnabled())
    {
    setFilter();
    }
}



void HLotti::on_chbT_toggled(bool checked)
{


    if(checked)
    {

        ui->chTipoProdotti->setEnabled(false); //check tipo prodotti
        ui->chTipoProdotti->setChecked(false);
        ui->cbTipoProd->setEnabled(false); //combo tipo prodotti
        ui->cbTipiLot->setEnabled(true);
        ui->chbP->setEnabled(true);
        ui->chbP->setChecked(false);



    }
    else
    {
          ui->chTipoProdotti->setEnabled(true); //check tipo prodotti
          ui->chTipoProdotti->setChecked(false);
          ui->chbP->setEnabled(true);

    }

    setFilter();
}

void HLotti::on_cbTipiLot_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    if(ui->cbTipiLot->isEnabled())
    {
        setFilter();
    }
}



void HLotti::on_chbP_toggled(bool checked)
{
    if(checked)
    {

        ui->chTipoProdotti->setEnabled(false); //check tipo prodotti
        ui->chTipoProdotti->setChecked(false);
        ui->cbProdotti->setEnabled(true);


    }
    else
    {
          ui->chTipoProdotti->setEnabled(true);
          ui->chbP->setEnabled(true);
          ui->chbP->setChecked(false);
          ui->cbProdotti->setEnabled(false);
    }
    setFilter();
}



void HLotti::on_cbProdotti_currentIndexChanged(int index)
{
    Q_UNUSED(index);

    setFilter();
}

void HLotti::on_twLots_doubleClicked(const QModelIndex &index)
{
    Q_UNUSED(index);

    int row=ui->twLots->selectionModel()->currentIndex().row();

    int idlotto=ui->twLots->model()->index(row,0).data(0).toInt();


    modifySelected(idlotto);
    tbm->select();

}


void HLotti::on_pbScadenze_clicked()
{
    HExpirations *f = new HExpirations(db,user);
    f->show();
}

void HLotti::on_datadal_dateChanged(const QDate &date)
{
    dal=date;
    setFilter();


}

void HLotti::on_dataal_dateChanged(const QDate &date)
{
     al=date;
     setFilter();


}
