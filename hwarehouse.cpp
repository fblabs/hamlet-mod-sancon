#include "hwarehouse.h"
#include "ui_hwarehouse.h"
#include <QDebug>
#include <QSqlError>

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlTableModel>
#include <QSqlRelation>
#include <QSqlQuery>
#include <QCompleter>
#include <QMessageBox>

#include "hreadonlymodel.h"
#include "hnuovaoperazione.h"

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

void HWarehouse::init(QString conn, QString utente)
{
    db=QSqlDatabase::database(conn);

    ui->rbLotfilter->setVisible(false);

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
    tmOperazioni->setSort(2,Qt::DescendingOrder);
    tmOperazioni->setEditStrategy(QSqlTableModel::OnManualSubmit);



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

    tmProdotti=new QSqlTableModel(0,db);
    tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);

  //  tmLotti=new QSqlTableModel(0,db);
  // tmLotti->setTable("lotdef");
   // tmLotti->setSort(0,Qt::AscendingOrder);

   // ui->cbFilter->setModel(tmOperazioni);



    ui->deDateTo->setDateTime(QDateTime::currentDateTime());
    ui->deDateFrom->setDateTime(QDateTime::currentDateTime().addMonths(-1));


    datefilter="operazioni.data between '"+ui->deDateFrom->dateTime().toString("yyyy-MM-dd HH:mm:ss") + "' and '"+ui->deDateTo->dateTime().toString("yyyy-MM-dd HH:mm:ss")+"'";
    filter = datefilter;

    tmProdotti->select();
    tmOperazioni->setFilter(datefilter);
    tmOperazioni->setSort(2,Qt::DescendingOrder);

    tmOperazioni->select();
    comp=new QCompleter();
    comp->setModel(tmProdotti);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setCompletionColumn(1);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    ui->cbFilter->setCompleter(comp);

    QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));


}




void HWarehouse::on_rbNoFilter_toggled(bool checked)
{
    if (checked)
    {
       filter=datefilter;
       setOperazioniFilter(0);

    }
}

void HWarehouse::on_rbLotfilter_toggled(bool checked)
{
    if (checked)
    {

        ui->cbFilter->setModel(tmLotti);
        ui->cbFilter->setModelColumn(0);

    }
}



void HWarehouse::on_rbProdFilter_toggled(bool checked)
{
  if (checked)
  {
    ui->cbFilter->setModel(tmProdotti);
    ui->cbFilter->setModelColumn(1);
  }

}


void HWarehouse::setOperazioniFilter(int tipo)
{
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

    //qDebug()<<tmOperazioni->lastError().text()<<tmOperazioni->query().lastQuery();
    //tmOperazioni->select();

}

/*void HWarehouse::on_pbFilterByDate_clicked()
{
    datefilter="operazioni.data between '"+ui->deDateFrom->dateTime().toString("yyyy-MM-dd HH:mm:ss") + "' and '"+ui->deDateTo->dateTime().toString("yyyy-MM-dd HH:mm:ss")+"'";

    int tipofiltro=0;

    if(ui->rbNoFilter->isChecked())
    {
        tipofiltro=0;
    }
    else if (ui->rbLotfilter->isChecked())
    {
        tipofiltro=1;

    }
    else if (ui->rbProdFilter->isChecked())
    {
        tipofiltro=2;
    }

    setOperazioniFilter(tipofiltro);

}


*/



void HWarehouse::on_pushButton_clicked()
{
  //tmOperazioni->select();
     int tipofiltro=0;

    if(ui->rbNoFilter->isChecked())
    {
        tipofiltro=0;
    }
    else if (ui->rbLotfilter->isChecked())
    {
        tipofiltro=1;
    }
    else if (ui->rbProdFilter->isChecked())
    {
        tipofiltro=2;
    }

    setOperazioniFilter(tipofiltro);
}

void HWarehouse::on_pushButton_4_clicked()
{
    close();
}

void HWarehouse::on_pushButton_2_clicked()
{
    HnuovaOperazione *f = new HnuovaOperazione();
    f->setConnectionName(sConn,user);
    f->show();

    connect(f,SIGNAL(trigger()),this,SLOT(update()));


}

void HWarehouse::update()
{

    tmOperazioni->select();
    //qDebug()<<"apdeit";
}

void HWarehouse::on_pushButton_3_clicked()
{
    if( QMessageBox::Save==QMessageBox::question(this,QApplication::applicationName(),"salvo?",QMessageBox::Save | QMessageBox::Discard))
   {
        tmOperazioni->submitAll();
        tmOperazioni->select();
    }
    else
      return;
}
