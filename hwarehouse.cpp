#include "hwarehouse.h"
#include "ui_hwarehouse.h"
// #include <QDebug>
#include <QSqlError>

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlTableModel>
#include <QSqlRelation>
#include <QSqlQuery>
#include <QCompleter>
#include <QMessageBox>
#include <hlotti.h>

#include "hreadonlymodel.h"
#include "hwarehousedetails.h"
#include "hnuovaoperazione.h"
#include "hpackagesunload.h"

#include <QDebug>

HWarehouse::HWarehouse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWarehouse)
{
    ui->setupUi(this);
}

HWarehouse::~HWarehouse()
{
    delete ui;
}

void HWarehouse::init(QString conn, HUser *utente)
{
    db=QSqlDatabase::database(conn);



    user=utente;
    sConn=conn;
    delegate = new QSqlRelationalDelegate();


    lotFilter="";
    prodfilter="";



    tmOperazioni=new hReadonlyModel(0,db);
    tmOperazioni->setTable("operazioni");
    tmOperazioni->setRelation(1,QSqlRelation("lotdef","ID","lot"));
    tmOperazioni->setRelation(3,QSqlRelation("utenti","ID","nome"));
    tmOperazioni->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
    tmOperazioni->setRelation(5,QSqlRelation("azioni","ID","descrizione"));
    tmOperazioni->setRelation(7,QSqlRelation("unita_di_misura","ID","descrizione"));
//    tmOperazioni->setRelation(9,QSqlRelation("lotdef","ID","giacenza"));
    tmOperazioni->setSort(2,Qt::DescendingOrder);
    tmOperazioni->setEditStrategy(QSqlTableModel::OnFieldChange);



    ui->tableView->setModel(tmOperazioni);
    ui->tableView->setItemDelegate(delegate);

    tmOperazioni->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    tmOperazioni->setHeaderData(1,Qt::Horizontal,QObject::tr("Lotto"));
    tmOperazioni->setHeaderData(2,Qt::Horizontal,QObject::tr("Data"));
    tmOperazioni->setHeaderData(3,Qt::Horizontal,QObject::tr("Operatore"));
    tmOperazioni->setHeaderData(4,Qt::Horizontal,QObject::tr("Prodotto"));
    tmOperazioni->setHeaderData(5,Qt::Horizontal,QObject::tr("Azione"));
    tmOperazioni->setHeaderData(6,Qt::Horizontal,QObject::tr("Quantità"));
    tmOperazioni->setHeaderData(7,Qt::Horizontal,QObject::tr("Unità di misura"));
    tmOperazioni->setHeaderData(8,Qt::Horizontal,QObject::tr("Note"));

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->tableView->setColumnHidden(0,1);

    tmProdotti=new QSqlTableModel(0,db);
    tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);
    tmProdotti->select();


    ui->cbFilter->setModel(tmProdotti);
    ui->cbFilter->setModelColumn(1);

    ui->deDateTo->setDateTime(QDateTime::currentDateTime());
    ui->deDateFrom->setDateTime(QDateTime::currentDateTime().addMonths(-1));


    datefilter="operazioni.data between '"+ui->deDateFrom->dateTime().toString("yyyy-MM-dd HH:mm:ss") + "' and '"+ui->deDateTo->dateTime().toString("yyyy-MM-dd HH:mm:ss")+"'";
    filter = datefilter;


    tmOperazioni->setFilter(datefilter);
    tmOperazioni->setSort(2,Qt::DescendingOrder);

    tmOperazioni->select();
    comp=new QCompleter();
    comp->setModel(tmProdotti);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setCompletionColumn(1);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    ui->cbFilter->setCompleter(comp);

    ui->cbFilter->setVisible(false);

    QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));


}

void HWarehouse::updateDataSlt()
{
   // db=QSqlDatabase::database(conn);
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));

    prodfilter="";



  //  tmOperazioni=new hReadonlyModel(0,db);
    tmOperazioni->setTable("operazioni");
    tmOperazioni->setRelation(1,QSqlRelation("lotdef","ID","lot"));
    tmOperazioni->setRelation(3,QSqlRelation("utenti","ID","nome"));
    tmOperazioni->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
    tmOperazioni->setRelation(5,QSqlRelation("azioni","ID","descrizione"));
    tmOperazioni->setRelation(7,QSqlRelation("unita_di_misura","ID","descrizione"));
    tmOperazioni->setSort(2,Qt::DescendingOrder);
    tmOperazioni->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tmProdotti->select();


    QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));
}




void HWarehouse::on_rbNoFilter_toggled(bool checked)
{
    if (checked)
    {

       filter=datefilter;


       updateFilter();

    }
}





void HWarehouse::on_rbProdFilter_toggled(bool checked)
{
  if (checked)
  {
    updateFilter();
  }

}


void HWarehouse::setOperazioniFilter(int tipo)
{
   QApplication::setOverrideCursor(Qt::WaitCursor);
   QString param;
   datefilter="operazioni.data between '"+ui->deDateFrom->dateTime().toString("yyyy-MM-dd HH:mm:ss") + "' and '"+ui->deDateTo->dateTime().toString("yyyy-MM-dd HH:mm:ss")+"'";


    switch(tipo)
    {
    case 0:
        filter=datefilter;
        break;
    case 1:
        param=ui->cbFilter->model()->index(ui->cbFilter->currentIndex(),0).data(0).toString();
        filter= "operazioni.lot='" + param+"' and "+datefilter;
        break;
    case 2:
        param=ui->cbFilter->model()->index(ui->cbFilter->currentIndex(),0).data(0).toString();
        filter="operazioni.IDprodotto=" + param + " and "+datefilter;
    }


    tmOperazioni->setFilter(filter);
    QApplication::setOverrideCursor(Qt::ArrowCursor);



}


void HWarehouse::updateFilter()
{
    int tipofiltro=0;

    QApplication::setOverrideCursor(Qt::WaitCursor);

   if(ui->rbNoFilter->isChecked())
   {
       tipofiltro=0;
   }
   else if (ui->rbProdFilter->isChecked())
   {
       tipofiltro=2;
   }

   ui->cbFilter->setVisible(!ui->rbNoFilter->isChecked());

   QApplication::setOverrideCursor(Qt::ArrowCursor);

   setOperazioniFilter(tipofiltro);

}



void HWarehouse::on_pushButton_clicked()
{
   updateFilter();
}

void HWarehouse::on_pushButton_4_clicked()
{
    close();
}

void HWarehouse::on_pushButton_2_clicked()
{
    HnuovaOperazione *f = new HnuovaOperazione(user,db);
    f->show();

    connect(f,SIGNAL(trigger()),this,SLOT(update()));


}

void HWarehouse::update()
{

    tmOperazioni->select();
    //// qDebug()<<"apdeit";
}


void HWarehouse::on_pushButton_5_clicked()
{
    HPackagesUnload *f=new HPackagesUnload(user,db);
    connect(f,SIGNAL(update()),this,SLOT(update()));

}

void HWarehouse::on_tableView_doubleClicked(const QModelIndex &index)
{
     int id=tmOperazioni->index(index.row(),0).data(0).toInt();
    qDebug()<<id;

    HWarehouseDetails *f=new HWarehouseDetails(db,id);
    f->show();
}

void HWarehouse::on_deDateFrom_dateChanged(const QDate &date)
{
    Q_UNUSED(date);
    updateFilter();
}

void HWarehouse::on_deDateTo_dateChanged(const QDate &date)
{
    Q_UNUSED(date);
    updateFilter();
}

void HWarehouse::on_cbFilter_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    updateFilter();
}


