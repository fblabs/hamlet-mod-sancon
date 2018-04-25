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
#include <QCompleter>

#include "hreadonlymodel.h"
#include "hwarehousedetails.h"
#include "hnuovaoperazione.h"
#include "hpackagesunload.h"

#include <QDebug>

HWarehouse::HWarehouse(HUser *puser, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWarehouse)
{
    ui->setupUi(this);
    db=pdb;
    user=puser;

    ui->lineEdit->setVisible(false);

    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));




     delegate = new QSqlRelationalDelegate();


     tmOperazioni=new hReadonlyModel(0,db);
     tmOperazioni->setTable("operazioni");
     tmOperazioni->setRelation(1,QSqlRelation("lotdef","ID","lot"));
     tmOperazioni->setRelation(3,QSqlRelation("utenti","ID","nome"));
     tmOperazioni->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
     tmOperazioni->setRelation(5,QSqlRelation("azioni","ID","descrizione"));
     tmOperazioni->setRelation(7,QSqlRelation("unita_di_misura","ID","descrizione"));
     //tmOperazioni->setSort(2,Qt::DescendingOrder);

     tmOperazioni->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
     tmOperazioni->setHeaderData(1,Qt::Horizontal,QObject::tr("Lotto"));
     tmOperazioni->setHeaderData(2,Qt::Horizontal,QObject::tr("Data"));
     tmOperazioni->setHeaderData(3,Qt::Horizontal,QObject::tr("Operatore"));
     tmOperazioni->setHeaderData(4,Qt::Horizontal,QObject::tr("Prodotto"));
     tmOperazioni->setHeaderData(5,Qt::Horizontal,QObject::tr("Azione"));
     tmOperazioni->setHeaderData(6,Qt::Horizontal,QObject::tr("Quantità"));
     tmOperazioni->setHeaderData(7,Qt::Horizontal,QObject::tr("Unità di misura"));
     tmOperazioni->setHeaderData(8,Qt::Horizontal,QObject::tr("Note"));
     tmOperazioni->select();

     qDebug()<<"INIT "<<tmOperazioni->query().lastQuery()<<tmOperazioni->query().lastError().text();
     ui->deDateTo->setDate(QDate::currentDate());
     ui->deDateFrom->setDate(QDate::currentDate().addMonths(-1));

     ui->tableView->setModel(tmOperazioni);
     ui->tableView->setItemDelegate(delegate);

   //  tmOperazioni->setSort(2,Qt::DescendingOrder);
     ui->tableView->setCurrentIndex(tmOperazioni->index(0,0));

     ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    comp=new QCompleter();
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    comp->setModel(tmOperazioni);
    comp->setCompletionColumn(1);
    comp->setCompletionMode(QCompleter::PopupCompletion);

    comp2=new QCompleter();
    comp2->setCaseSensitivity(Qt::CaseInsensitive);
    comp2->setModel(tmOperazioni);
    comp2->setCompletionColumn(4);
    comp2->setCompletionMode(QCompleter::InlineCompletion);


    nfilter=0;
     QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));

}

HWarehouse::~HWarehouse()
{
    delete ui;
}

void HWarehouse::on_Confirmed()
{
    tmOperazioni->submitAll();

    setOperazioniFilter(nfilter);
    tmOperazioni->select();


    qDebug()<<"on_confirmed "<<tmOperazioni->query().lastError().text();


}



void HWarehouse::setOperazioniFilter(int tipo)
{

  datefilter="operazioni.data between CAST('"+ui->deDateFrom->date().toString("yyyy-MM-dd") + "' AS DATE) and CAST('"+ui->deDateTo->date().addDays(1).toString("yyyy-MM-dd")+"' AS DATE)";


  switch(tipo)
   {

  case 0:
      filter=datefilter;
      break;

  case 1:

      ui->lineEdit->setCompleter(comp);
      filter="relTblAl_1.lot LIKE '%" + ui->lineEdit->text() + "%' AND " + datefilter;
      break;
    case 2:
      ui->lineEdit->setCompleter(comp2);
      filter="relTblAl_4.descrizione LIKE '%" + ui->lineEdit->text() + "%' AND " + datefilter;
      break;

   }

   tmOperazioni->setFilter(filter);
   tmOperazioni->setSort(2,Qt::DescendingOrder);


   qDebug()<<tmOperazioni->query().lastError().text();




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

}


void HWarehouse::on_pushButton_5_clicked()
{
    HPackagesUnload *f=new HPackagesUnload(user,db);
    connect(f,SIGNAL(update()),this,SLOT(update()));
    f->show();

}

void HWarehouse::on_tableView_doubleClicked(const QModelIndex &index)
{
    int id=tmOperazioni->index(index.row(),0).data(0).toInt();
    qDebug()<<id;

    HWarehouseDetails *f=new HWarehouseDetails(db,id);
    connect(f,SIGNAL(confirm()),this,SLOT(on_Confirmed()));
    f->show();
}

void HWarehouse::on_deDateFrom_dateChanged(const QDate &date)
{
    Q_UNUSED(date);
    setOperazioniFilter(nfilter);



}

void HWarehouse::on_deDateTo_dateChanged(const QDate &date)
{
    Q_UNUSED(date);
    setOperazioniFilter(nfilter);

}





void HWarehouse::on_pbMod_clicked()
{
   int id=tmOperazioni->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
   HWarehouseDetails *f=new HWarehouseDetails(db,id);
   connect(f,SIGNAL(confirm()),this,SLOT(on_Confirmed()));
   f->show();
}





void HWarehouse::on_lineEdit_returnPressed()
{
   setOperazioniFilter(nfilter);
}

void HWarehouse::on_lineEdit_textChanged(const QString &arg1)
{
    if (arg1.length()==0)
    {

        setOperazioniFilter(nfilter);
    }
}

void HWarehouse::on_radioButton_toggled(bool checked)
{
    if(checked){
    nfilter=1;
    setOperazioniFilter(nfilter);
    ui->lineEdit->setText(QString());
    ui->lineEdit->setVisible(true);
    }
}

void HWarehouse::on_radioButtonProd_toggled(bool checked)
{
    if(checked){
    nfilter=2;
    setOperazioniFilter(nfilter);
    ui->lineEdit->setText(QString());
    ui->lineEdit->setVisible(true);
    }
}

void HWarehouse::on_radioButton_2_toggled(bool checked)
{
    if(checked){
    nfilter=0;
    setOperazioniFilter(nfilter);
    ui->lineEdit->setText(QString());
    ui->lineEdit->setVisible(false);
    }
}


