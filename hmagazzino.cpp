#include "hmagazzino.h"
#include "ui_hmagazzino.h"
#include <QSqlRelationalDelegate>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QSqlQuery>
#include "hnewop.h"
#include "hreadonlymodel.h"
#include "mainwindow.h"
#include "hnuovaoperazione.h"

HMagazzino::HMagazzino(QWidget *parent, int usr) :
    QWidget(parent),
    ui(new Ui::HMagazzino)
{

    userid=usr;
    ui->setupUi(this);
    //setupForm();
    this->setWindowModality(Qt::ApplicationModal);



}

HMagazzino::~HMagazzino()
{
    delete ui;
}

void HMagazzino::setupForm()
{
    condFilter="";

    db = QSqlDatabase::database(sConnection);
    ui->dtDateFrom->setDate(QDate::currentDate().addMonths(-1));
    ui->dtDateTo->setDate(QDate::currentDate());
    dateFrom=ui->dtDateFrom->date();
    dateTo=ui->dtDateTo->date();

   // db.open();

    tbm = new hReadonlyModel(this, db);
    tbm->setTable("operazioni");
    tbm->setSort(2,Qt::DescendingOrder);

    tbm->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);
    tbm->setRelation(1,QSqlRelation("lotdef","ID","attivo"));
    tbm->setRelation(3,QSqlRelation("utenti","ID","username"));
    tbm->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
    tbm->setRelation(5,QSqlRelation("azioni","ID","descrizione"));
    tbm->setRelation(7,QSqlRelation("unita_di_misura","ID","descrizione"));

    updateFilter();

    tbm->setFilter(filter);
 // //qDebug()<<"SETUPFORM"<<filter;
    tbm->select();

    ui->tableView->setModel(tbm);

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(tbm));

////qDebug()<<db.lastError().text()<<tbm->rowCount();


    tbm->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    tbm->setHeaderData(1,Qt::Horizontal,QObject::tr("Lotto"));// 1 lotdef.lot
    tbm->setHeaderData(2,Qt::Horizontal,QObject::tr("Data"));
    tbm->setHeaderData(3,Qt::Horizontal,QObject::tr("Operatore"));//3 utenti.ID
    tbm->setHeaderData(4,Qt::Horizontal,QObject::tr("Prodotto"));//4 prodotti.ID
    tbm->setHeaderData(5,Qt::Horizontal,QObject::tr("Azione"));//5 azioni.ID
    tbm->setHeaderData(6,Qt::Horizontal,QObject::tr("Quantità"));
    tbm->setHeaderData(7,Qt::Horizontal,QObject::tr("Unità di misura"));
    tbm->setHeaderData(8,Qt::Horizontal,QObject::tr("Note"));

   //qDebug() << db.lastError().text();




  // connect(ui->dtDateFrom,SIGNAL(dateChanged(QDate)),this,SLOT(updateFilter()));
  // connect(ui->dtDateTo,SIGNAL(dateChanged(QDate)),this,SLOT(updateFilter()));


   QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));

    updateFilter();

}

void HMagazzino::updateFilter()
{


    filter.clear();
    dateFilter.clear();
    dateFrom=ui->dtDateFrom->date();
    dateTo=ui->dtDateTo->date();
    dateFilter.append("operazioni.data between '");
    dateFilter.append(dateFrom.toString("yyyy-MM-dd"));
    dateFilter.append("' and '");
    dateFilter.append(dateTo.toString("yyyy-MM-dd"));
    dateFilter.append("'");

    if(condFilter.length()==0)
    {
        filter=dateFilter;

    }
    else
    {
        filter=/*condFilter + " and " + */dateFilter;
    }

    tbm->setFilter(filter);

   // tbm->select();
    //qDebug()<<"updateFilter:"<<filter<<tbm->lastError().text()<<tbm->rowCount()<<tbm->query().lastQuery();
}

void HMagazzino::onConnectionNameSet()
{

    setupForm();
    //qDebug()<<"onConnectionNameSet";
}

void HMagazzino::on_pushButton_clicked()
{
   HnuovaOperazione *f = new HnuovaOperazione(0);
   f->show();
   f->setConnectionName(sConnection,QString::number(userid));
  // f->setUser();

   connect(f,SIGNAL(trigger()),this,SLOT(refresh()));


}

void HMagazzino::setUser(int usr)
{
    userid = usr;
}

void HMagazzino::setConn(QString conn)
{
    sConnection=conn;
   //qDebug()<<sConnection;
}


void HMagazzino::cercaLot()
{
    QString flt;


   if (ui->btsearch->isChecked())
    {

        if(ui->rblot->isChecked())
        {
            condFilter ="operazioni.lot LIKE '%" + ui->leLot->text() + "%'";



        }
        else if (ui->rbprod->isChecked())
        {
            flt ="relTblAl_4.descrizione LIKE '%" + ui->leLot->text() + "%'";
            condFilter=flt+dateFilter;




        }

        updateFilter();


        tbm->setFilter(filter);
    }
    else
    {
        filter.clear();
        updateFilter();
        //tbm->setFilter(filter);
    }







    tbm->select();
}


void HMagazzino::on_pushButton_2_clicked()
{


    if( QMessageBox::Save==QMessageBox::question(this,QApplication::applicationName(),"salvo?",QMessageBox::Save | QMessageBox::Discard))
   {
        tbm->submitAll();
        tbm->select();
    }
    else
      return;



}

void HMagazzino::on_btsearch_clicked()
{
    tbm->setFilter(filter);
    tbm->select();
}

void HMagazzino::on_pushButton_4_clicked()
{
    tbm->revertAll();
    tbm->select();
}

void HMagazzino::on_pushButton_3_clicked()
{
    this->setVisible(true);
    if( QMessageBox::Close == QMessageBox::question(this, QApplication::applicationName(), "Chiudere la finestra?", QMessageBox::Close |QMessageBox::Cancel))
      {
            this->close();
      }

}

void HMagazzino::refresh()
{

    tbm->select();
    ui->tableView->reset();
}


void HMagazzino::on_pushButton_5_clicked()
{

    tbm->setSort(2,Qt::DescendingOrder);
    tbm->select();
}

void HMagazzino::on_rbprod_clicked()
{

}

void HMagazzino::on_pushButton_6_toggled(bool checked)
{
    if (checked)
    {
       updateFilter();
    }
}

void HMagazzino::on_pushButton_6_clicked()
{
    updateFilter();
}
