#include "hanalisi.h"
#include "ui_hanalisi.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>

HAnalisi::HAnalisi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HAnalisi)
{
    ui->setupUi(this);
}

HAnalisi::~HAnalisi()
{
    delete ui;
}

void HAnalisi::init(QString conn )
{
    sConn=conn;
    db=QSqlDatabase::database(sConn);


    QDate to=QDate::currentDate();
    QDate from=to.addMonths(-12);


    ui->deFrom->setDate(from);
    ui->deTo->setDate(to);

    datedal=ui->deFrom->date();
    dateal=ui->deTo->date();

    tmClienti=new QSqlTableModel(0,db);
    tmClienti->setTable("anagrafica");
    tmClienti->setFilter("cliente=1");
    tmClienti->setSort(1,Qt::AscendingOrder);
    tmClienti->select();


 //  ui->lvAnagrafica->setModel(tmClienti);
 //  ui->lvAnagrafica->setModelColumn(1);

    ui->cbClienti->setModel(tmClienti);

    ui->cbClienti->setModelColumn(1);

    ui->pushButton_4->setVisible(false);




  // connect(ui->cbClienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getProductsForClient()));
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(QString)),this,SLOT(getProductsForClient()));
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(QString)),this,SLOT(getYearlyProduction()));

}

void HAnalisi::getYearlyProduction()
{
        QSqlQuery q(db);
        QSqlQueryModel *yprod=new QSqlQueryModel();
    //    QString sql="SELECT distinct prodotti.ID,prodotti.descrizione from lotdef,prodotti,associazioni,ricette where associazioni.ID_ricetta=ricette.ID and ricette.ID_prodotto=prodotti.ID and prodotti.ID=ricette.ID_prodotto and associazioni.ID_cliente=:cliente and associazioni.ID_ricetta=ricette.ID and lotdef.tipo :tipo and lotdef.data between :datedal AND :dateal";
        QString sql="SELECT DISTINCT prodotti.ID,prodotti.descrizione from prodotti,lotdef where prodotti.ID=lotdef.prodotto and lotdef.anagrafica=:cliente and lotdef.data between :datedal and :dateal";
        QString cliente;
        QDate datedal,dateal;
        cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toString();
        datedal=ui->deFrom->date();
        dateal=ui->deTo->date();

        q.prepare(sql);
        q.bindValue(":cliente",cliente);
        q.bindValue(":datedal",datedal);
        q.bindValue(":dateal",dateal);

        q.exec();
        yprod->setQuery(q);

        ui->tvYearlyProduction->setModel(yprod);
        ui->tvYearlyProduction->horizontalHeader()->setStretchLastSection(true);

        if (ui->checkBox->isChecked())
        connect(ui->tvYearlyProduction->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getProductsForClient()));
        else
        disconnect(ui->tvYearlyProduction->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getProductsForClient()));


}



void HAnalisi::setLotSearch(QString msg)
{
    ui->leLot->setText(msg);
}

void HAnalisi::getProductsForClient()
{
    disconnect(ui->tvLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getLotComponents()));
    ui->tvNarrow->setModel(0);
    ui->tvComp->setModel(0);
    QString client = ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toString();

    QString sql;
    QSqlQueryModel *mod;
    QSqlQuery q(db);
    QString tipo;


    ui->tvLots->setModel(0);

qDebug()<<"cliente"<<client;

     if(ui->rbAll->isChecked())
    {
       // tipo="tipo=0 or tipo=1 or tipo=2 or tipo=3";
         tipo="IN(1,2,3,4)";


    }
    else if (ui->rbMateriePrime->isChecked())
    {
        "in (1)";


    }
    else if (ui->rbSemilavorati->isChecked())
    {
         "in(2)";

    }
    else if (ui->rbProdottifiniti->isChecked())
    {

        "in (3)";

    }
    else if (ui->rbPackages->isChecked())
    {

        "in (4)";
    }

    mod=0;

    mod=new QSqlQueryModel();

    if (ui->checkBox->isChecked())
    {
        QString prodotto=ui->tvYearlyProduction->model()->index(ui->tvYearlyProduction->currentIndex().row(),0).data(0).toString();
        sql="SELECT distinct lotdef.ID,lotdef.prodotto,lotdef.tipo, lotdef.lot, prodotti.descrizione FROM lotdef,prodotti,associazioni,anagrafica,tipi_lot where tipi_lot.ID=lotdef.tipo and anagrafica.ID = lotdef.anagrafica and associazioni.ID_Cliente = lotdef.anagrafica and prodotti.ID = lotdef.prodotto and lotdef.anagrafica=:cliente and lotdef.prodotto=:prodotto and lotdef.tipo "+ tipo +" and lotdef.data between :from and :to group by lotdef.lot";
      //  sql="SELECT distinct lotdef.data,lotdef.ID,lotdef.prodotto,lotdef.EAN as 'Lotto esterno', lotdef.lot, prodotti.descrizione FROM lotdef,prodotti,anagrafica,tipi_lot where tipi_lot.ID=lotdef.tipo and anagrafica.ID = lotdef.anagrafica and prodotti.ID = lotdef.prodotto and lotdef.anagrafica=:cliente and lotdef.prodotto=:prodotto order by lotdef.data desc";
        q.prepare(sql);
        q.bindValue(":cliente",QVariant(client));
        q.bindValue(":prodotto",QVariant(prodotto));
        q.bindValue(":from",QVariant(datedal));
        q.bindValue(":to",QVariant(dateal));
        q.bindValue(":tipo",QVariant(tipo));
        qDebug()<<"cliente"<<client<<prodotto;
    }
    else
    {
    sql="SELECT distinct lotdef.data,lotdef.ID,lotdef.prodotto,lotdef.EAN as 'Lotto esterno', lotdef.lot, prodotti.descrizione FROM lotdef,prodotti,associazioni,anagrafica,tipi_lot where lotdef.tipo=tipi_lot.ID and anagrafica.ID = lotdef.anagrafica and associazioni.ID_Cliente = lotdef.anagrafica and prodotti.ID = lotdef.prodotto and lotdef.anagrafica=:cliente and lotdef.tipo "+tipo+" and lotdef.data between :from and :to order by lotdef.data desc";
    q.prepare(sql);
    q.bindValue(":cliente",QVariant(client));
    q.bindValue(":from",QVariant(datedal));
    q.bindValue(":to",QVariant(dateal));
    q.bindValue(":tipo",QVariant(tipo));
    qDebug()<<"cliente"<<client;
    }




  q.exec();

   mod->setQuery(q);

   ui->tvLots->setModel(mod);
/*   ui->tvLots->setColumnHidden(0,true);*/
    ui->tvLots->setColumnHidden(1,true);
  ui->tvLots->setColumnHidden(2,true);
   ui->tvLots->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );

qDebug()<<q.lastQuery()<<q.lastError().text()<<q.boundValue(1).toString();


   connect(ui->tvLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getLotComponents()));




}

void HAnalisi::findLotUse()
{

    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *mod;


   ui->tvNarrow->setModel(0);
    mod=new QSqlQueryModel();


    QString lotid=this->ui->leLot->text().trimmed();

   sql="select lotdef.id,lotdef.tipo,lotdef.lot,lotdef.EAN as 'Lot. esterno',prodotti.descrizione from operazioni, lotdef,composizione_lot,prodotti where prodotti.ID=lotdef.prodotto and lotdef.ID =composizione_lot.ID_lotto and operazioni.ID=composizione_lot.operazione and operazioni.lot = :id order by operazioni.data desc";
   q.prepare(sql);
   q.bindValue(":id",lotid);

   q.exec();


    mod->setQuery(q);


    ui->tvNarrow->setModel(mod);
    ui->tvNarrow->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
    ui->tvNarrow->setColumnHidden(0,true);
    ui->tvNarrow->setColumnHidden(1,true);

    connect(ui->tvNarrow->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setNarrowSearch()));

 }

void HAnalisi::findLotComposition()
{
    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *mod;

    ui->tvNarrow->setModel(0);

    mod=new QSqlQueryModel();

    QString lotid= this->ui->leLot->text();

//    sql="SELECT distinct operazioni.ID,lotdef.ID,operazioni.lot,prodotti.descrizione,operazioni.quantita from operazioni,prodotti,lotdef,composizione_lot WHERE prodotti.ID=operazioni.IDprodotto and composizione_lot.ID_lotto=lotdef.ID and lotdef.lot=operazioni.lot and lotdef.lot='"+lotid+"'";

    sql="SELECT operazione,lot FROM composizione_lot where lot=:id";
    q.bindValue(":id",QVariant(lotid));

    q.exec(sql);


    mod->setQuery(q);

    qDebug()<<q.lastError().text();


}

void HAnalisi::narrow()
{


    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *mod;




    mod=new QSqlQueryModel();

    QString lotid=ui->tvComp->model()->index(ui->tvComp->currentIndex().row(),1).data(0).toString();


   // QString lotsrc=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),2).data(0).toString();
   // setLotSearch(lotsrc);


   // sql="SELECT operazioni.ID,lotdef.ID,operazioni.lot,prodotti.descrizione,operazioni.quantita from operazioni,prodotti,lotdef WHERE lotdef.lot=operazioni.lot and prodotti.ID=operazioni.IDprodotto and operazioni.ID in (SELECT operazione FROM composizione_lot WHERE composizione_lot.lot=:lotid)";

   sql="select operazioni.IDprodotto,operazioni.lot,prodotti.descrizione,operazioni.quantita from operazioni,prodotti where prodotti.ID=operazioni.IDprodotto and operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto =:lotid)";

    q.prepare(sql);
    q.bindValue(":lotid",QVariant(lotid));

    q.exec();


    mod->setQuery(q);

    qDebug()<<"narrow"<<lotid<<q.lastError().text();

    ui->tvNarrow->setColumnHidden(0,true);
    ui->tvNarrow->setColumnHidden(1,true);

    ui->tvNarrow->setModel(mod);
    ui->tvNarrow->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );

    //setLotSearch(lotsrc);

    connect(ui->tvNarrow->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setNarrowSearch()));
    connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setCompSearch()));


}

void HAnalisi::setNarrowSearch()
{
    ui->leLot->setText(ui->tvNarrow->model()->index(ui->tvNarrow->currentIndex().row(),1).data(0).toString());

}
void HAnalisi::setCompSearch()
{
    ui->leLot->setText(ui->tvComp->model()->index(ui->tvComp->currentIndex().row(),2).data(0).toString());

    qDebug()<<"setcompsearch()=="<<ui->tvComp->model()->index(ui->tvComp->currentIndex().row(),2).data(0).toString();
}


void HAnalisi::getLotComponents()
{


    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *mod;



    mod=new QSqlQueryModel();

    QString lotid=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),1).data(0).toString();//componenti
    QString lotsrc=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),4).data(0).toString();
  //  setLotSearch(lotsrc);

    sql="SELECT DISTINCT operazioni.ID,lotdef.ID,operazioni.lot as 'Lotto',prodotti.descrizione,operazioni.quantita from operazioni,prodotti,lotdef WHERE prodotti.ID=operazioni.IDprodotto and operazioni.azione=2 and lotdef.lot=operazioni.lot and operazioni.ID in (SELECT operazione FROM composizione_lot WHERE composizione_lot.ID_lotto="+lotid+" group by composizione_lot.ID_lotto)";

 //   sql="SELECT operazioni.ID,operazioni.lot as 'Lotto',prodotti.descrizione,operazioni.quantita from operazioni,prodotti WHERE prodotti.ID=operazioni.IDprodotto and operazioni.azione=2 and operazioni.ID in (SELECT operazione FROM composizione_lot WHERE composizione_lot.ID_lotto="+lotid+")";

    q.prepare(sql);
    q.bindValue(":id",QVariant(lotid));

    q.exec(sql);


    mod->setQuery(q);

    qDebug()<<q.lastError().text();

    ui->tvComp->setModel(mod);
    ui->tvComp->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
    ui->tvComp->setColumnHidden(0,true);
    ui->tvComp->setColumnHidden(1,true);

    connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(narrow()));
    connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setCompSearch()));

  //  connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(narrow()));

    qDebug()<<"lottti componente: "<<q.lastError().text()<<q.lastQuery()<<lotid<<q.boundValue(":id").toString();


}



void HAnalisi::on_rbAll_toggled(bool checked)
{
   if (checked) getProductsForClient();
}

void HAnalisi::on_rbMateriePrime_toggled(bool checked)
{
    if (checked) getProductsForClient();
}


void HAnalisi::on_rbProdottifiniti_toggled(bool checked)
{
    if (checked) getProductsForClient();
}

void HAnalisi::on_rbSemilavorati_toggled(bool checked)
{
    if (checked) getProductsForClient();
}



void HAnalisi::on_rbPackages_toggled(bool checked)
{
    if (checked) getProductsForClient();
}

void HAnalisi::on_pushButton_clicked()
{
    getProductsForClient();
}

void HAnalisi::on_pushButton_3_clicked()
{
    close();
}

void HAnalisi::on_pushButton_4_clicked()
{
    findLotComposition();
}

void HAnalisi::on_pushButton_5_clicked()
{
    findLotUse();
}

void HAnalisi::on_checkBox_toggled(bool checked)
{
      if (checked)
      {
          connect(ui->tvYearlyProduction->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getProductsForClient()));
      }
      else
      {
          disconnect(ui->tvYearlyProduction->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getProductsForClient()));
      }
      getProductsForClient();
}

void HAnalisi::on_deFrom_dateChanged(const QDate &date)
{
    datedal=ui->deFrom->date();
}

void HAnalisi::on_deTo_dateChanged(const QDate &date)
{
    dateal=ui->deTo->date();
}

void HAnalisi::on_tvComp_clicked(const QModelIndex &index)
{
    disconnect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(setCompSearch()));
    connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(narrow()));
    connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setCompSearch()));
}
