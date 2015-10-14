#include "hanalisi.h"
#include "ui_hanalisi.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include "hprint.h"
#include <QCompleter>
#include <QMenu>
#include <QAction>

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


    QDate to=QDate::currentDate().addDays(1);
    QDate from=to.addMonths(-12);


    ui->deFrom->setDate(from);
    ui->deTo->setDate(to);

    datedal=ui->deFrom->date();
    dateal=ui->deTo->date();

    tmClienti=new QSqlTableModel(0,db);
    tmClienti->setTable("anagrafica");
    tmClienti->setFilter("cliente=1 or subcliente=1");
    tmClienti->setSort(1,Qt::AscendingOrder);
    tmClienti->select();
    QCompleter *comp=new QCompleter();
    comp->setModel(tmClienti);
    comp->setCompletionColumn(1);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setCaseSensitivity(Qt::CaseInsensitive);

    ui->tvNarrow->setVisible(false);
 //  ui->lvAnagrafica->setModel(tmClienti);
 //  ui->lvAnagrafica->setModelColumn(1);

    ui->cbClienti->setModel(tmClienti);

    ui->cbClienti->setModelColumn(1);
    ui->cbClienti->setCompleter(comp);

    ui->pushButton_4->setVisible(true);




  // connect(ui->cbClienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getProductsForClient()));
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(QString)),this,SLOT(getProductsForClient()));
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(QString)),this,SLOT(getYearlyProduction()));
    connect(ui->tvLots->selectionModel(),SIGNAL(currentIndexChanged(QString)),this,SLOT(getLotComponents()));

    connect(ui->tvLots,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(doMenu(QPoint)));


}

void HAnalisi::getYearlyProduction()
{
        QSqlQuery q(db);
        QSqlQueryModel *yprod=new QSqlQueryModel();
       // QString sql="SELECT distinct prodotti.ID,prodotti.descrizione from lotdef,prodotti,associazioni,ricette where associazioni.ID_ricetta=ricette.ID and ricette.ID_prodotto=prodotti.ID and prodotti.ID=ricette.ID_prodotto and associazioni.ID_cliente=:cliente and associazioni.ID_ricetta=ricette.ID and associazioni.visualizza=1 and lotdef.data between :datedal AND :dateal";
       QString sql="SELECT DISTINCT prodotti.ID,prodotti.descrizione from prodotti,lotdef where prodotti.ID=lotdef.prodotto and prodotti.tipo=2 and lotdef.anagrafica=:cliente and lotdef.data between :datedal and :dateal";
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

       // if (ui->checkBox->isChecked())
        connect(ui->tvYearlyProduction->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getProductsForClient()));
     //   else
     //   disconnect(ui->tvYearlyProduction->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getProductsForClient()));


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
    QString cl;


    ui->tvLots->setModel(0);

    if(ui->rbAll->isChecked())
    {
       tipo= "3,4";
       cl=client;

    }
    else if (ui->rbProdottifiniti->isChecked())
    {

        tipo="3";
        cl=client;

    }
    else if (ui->rbPackages->isChecked())
    {

        tipo="4";
        cl=client;
    }


    mod=0;

    mod=new QSqlQueryModel();

    if (ui->checkBox->isChecked())//se prodotto selezionato
    {
        int prodotto=ui->tvYearlyProduction->model()->index(ui->tvYearlyProduction->currentIndex().row(),0).data(0).toInt();
      //  sql="SELECT distinct lotdef.data,lotdef.ID,lotdef.prodotto,lotdef.EAN as 'Lotto esterno', lotdef.lot, prodotti.descrizione FROM lotdef,prodotti,anagrafica,tipi_lot where tipi_lot.ID=lotdef.tipo and anagrafica.ID = lotdef.anagrafica and prodotti.ID = lotdef.prodotto and lotdef.anagrafica in (:cliente) and lotdef.prodotto=:prodotto and lotdef.tipo in ("+tipo+") and lotdef.data between :from and :to order by lotdef.data desc";
        sql="SELECT  lotdef.ID as 'ID lotto',lotdef.data,lotdef.lot,lotdef.prodotto,lotdef.EAN as 'Lotto esterno', prodotti.descrizione FROM lotdef,prodotti,anagrafica,tipi_lot where tipi_lot.ID=lotdef.tipo and anagrafica.ID = lotdef.anagrafica and prodotti.ID = lotdef.prodotto and lotdef.anagrafica in ("+cl+")and lotdef.tipo in ("+tipo+") and lotdef.prodotto=:prodotto and lotdef.data between :from and :to order by lotdef.data desc";
         q.prepare(sql);


       q.bindValue(":cliente",QVariant(cl));
       q.bindValue(":prodotto",QVariant(prodotto));
       q.bindValue(":from",QVariant(datedal));
       q.bindValue(":to",QVariant(dateal.addDays(1)));
       q.bindValue(":tipo",QVariant(tipo));
       q.exec();

    }
    else//non filtro per prodotto selezionato
    {

    sql="SELECT distinct lotdef.ID as 'ID lotto',lotdef.data, lotdef.lot,lotdef.prodotto,lotdef.EAN as 'Lotto esterno', prodotti.descrizione FROM lotdef,prodotti,anagrafica,tipi_lot where tipi_lot.ID=lotdef.tipo and anagrafica.ID = lotdef.anagrafica and prodotti.ID = lotdef.prodotto and lotdef.anagrafica in ("+cl+") and lotdef.tipo in ("+tipo+") and lotdef.data between :from and :to order by lotdef.data desc";
    q.prepare(sql);
    q.bindValue(":cliente",QVariant(cl));
    q.bindValue(":from",QVariant(datedal));
    q.bindValue(":to",QVariant(dateal));
    q.bindValue(":tipo",QVariant(tipo));
    q.exec();


    }

qDebug()<<sql;

   mod->setQuery(q);

   ui->tvLots->setModel(mod);
  ui->tvLots->setColumnHidden(0,true);
  ui->tvLots->setColumnHidden(3,true);
//  ui->tvLots->setColumnHidden(2,true);
   ui->tvLots->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );

qDebug()<<"getproductsforclient"<<q.lastQuery()<<"ERROR:"<<q.lastError().text()<<q.boundValue(0)<<q.boundValue(1)<<q.boundValue(2)<<q.boundValue(3)<<q.lastError().text();


   connect(ui->tvLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getLotComponents()));





}

int HAnalisi::getLotID(QString lot)
{
    int lotid;
    QSqlQuery k(db);
    QString sqlk="SELECT ID from lotdef WHERE lot=:lot";
    k.prepare(sqlk);
    k.bindValue(":lot",QVariant(lot));
    k.exec();
    k.first();
    lotid=k.value(0).toInt();

    return lotid;
}



void HAnalisi::findLotUse()
{

    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *mod;


    ui->tvNarrow->setModel(0);
    mod=new QSqlQueryModel();

    QString lot=this->ui->leLot->text().trimmed();
    int lotid=getLotID(lot);

    sql="select lotdef.ID,lotdef.data,lotdef.lot,lotdef.EAN as 'Lot. esterno',prodotti.descrizione,anagrafica.ragione_sociale from  lotdef,prodotti,operazioni,anagrafica,composizione_lot where prodotti.ID=lotdef.prodotto and lotdef.ID =composizione_lot.ID_lotto and anagrafica.ID=lotdef.anagrafica and operazioni.ID=composizione_lot.operazione and operazioni.IDlotto =:id";
    q.prepare(sql);
    q.bindValue(":id",lotid);

    q.exec();


    mod->setQuery(q);


    ui->tvNarrow->setModel(mod);
    ui->tvNarrow->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
    ui->tvNarrow->setColumnHidden(0,true);
  //  ui->tvNarrow->setColumnHidden(1,true);

    connect(ui->tvNarrow->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setNarrowSearch()));
    qDebug()<<"findlotuse :"<<q.lastError().text();

 }

/*void HAnalisi::findLotComposition()
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

    //qDebug()<<q.lastError().text();


}*/

void HAnalisi::narrow()
{


    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *mod;

    ui->tvNarrow->setModel(0);

   disconnect(ui->tvNarrow->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setNarrowSearch()));

    mod=new QSqlQueryModel();

    int lotid=ui->tvComp->model()->index(ui->tvComp->currentIndex().row(),0).data(0).toInt();

    sql="select DISTINCT lotdef.ID,operazioni.data,lotdef.lot,prodotti.descrizione,anagrafica.ragione_sociale, operazioni.quantita from operazioni,prodotti,lotdef,anagrafica where prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid)";

    q.prepare(sql);
    q.bindValue(":lotid",QVariant(lotid));
    q.exec();


    mod->setQuery(q);

    qDebug()<<"narrow"<<q.lastQuery()<<QString::number(lotid)<<q.lastError().text();

    ui->tvNarrow->setColumnHidden(0,true);
  //  ui->tvNarrow->setColumnHidden(1,true);

    ui->tvNarrow->setModel(mod);
    ui->tvNarrow->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );

    //setLotSearch(lotsrc);
    if(mod->rowCount()>0)
        ui->tvNarrow->setVisible (true);
    else
        ui->tvNarrow->setVisible (false);


    connect(ui->tvNarrow->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setNarrowSearch()));
    connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setCompSearch()));


}

void HAnalisi::setNarrowSearch()
{
    ui->leLot->setText(ui->tvNarrow->model()->index(ui->tvNarrow->currentIndex().row(),2).data(0).toString());

}
void HAnalisi::setCompSearch()
{
    ui->leLot->setText(ui->tvComp->model()->index(ui->tvComp->currentIndex().row(),2).data(0).toString());


}


void HAnalisi::getLotComponents()
{


    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *mod;

    ui->tvComp->setModel(0);
    ui->tvNarrow->setModel(0);


    mod=new QSqlQueryModel();

    int lotid=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),0).data(0).toInt();//componenti

    //sql="SELECT operazioni.ID,lotdef.ID,lotdef.lot as 'Lotto',prodotti.descrizione,operazioni.quantita from operazioni,prodotti,lotdef WHERE prodotti.ID=operazioni.IDprodotto and operazioni.azione=2 and lotdef.ID=operazioni.IDlotto and operazioni.ID in (SELECT operazione FROM composizione_lot WHERE composizione_lot.ID_lotto=:lotid)";
    //sql="SELECT operazioni.ID,lotdef.ID,lotdef.lot as 'Lotto',prodotti.descrizione,operazioni.quantita from operazioni,prodotti,lotdef WHERE prodotti.ID=operazioni.IDprodotto and operazioni.azione=2 and lotdef.ID=operazioni.IDlotto and operazioni.ID in (SELECT operazione FROM composizione_lot WHERE composizione_lot.ID_lotto=:lotid)";
    //sql="select operazioni.ID,prodotti.descrizione, anagrafica.ragione_sociale,operazioni.quantita from operazioni,prodotti,lotdef,anagrafica  where  prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and operazioni.ID in (select operazione from composizione_lot where ID_lotto=5164);

   // sql="select lotdef.ID,lotdef.data,lotdef.lot,prodotti.descrizione, anagrafica.ragione_sociale,operazioni.quantita from operazioni,prodotti,lotdef,anagrafica  where  prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and operazioni.ID in (select operazione from composizione_lot where ID_lotto=:lotid)";  //+QString::number(lotid)
    //sql="select lotdef.ID,lotdef.data,lotdef.lot,anagrafica.ragione_sociale,operazioni.quantita  from operazioni,lotdef,anagrafica,composizione_lot  where lotdef.ID=composizione_lot.ID_lotto and anagrafica.ID=lotdef.anagrafica and composizione_lot.ID_lotto=operazioni.IDlotto  and composizione_lot.ID_lotto=:lotid";
   // sql="select operazioni.ID, operazioni.IDlotto,prodotti.descrizione from operazioni,prodotti where prodotti.ID=operazioni.IDprodotto and operazioni.ID in(select operazione from composizione_lot where ID_lotto=:idlot)";
    sql="select  operazioni.IDlotto,operazioni.data,lotdef.lot,prodotti.descrizione,operazioni.quantita from operazioni,lotdef,prodotti where lotdef.ID=operazioni.IDlotto and prodotti.ID=operazioni.IDprodotto and operazioni.ID in(select operazione from composizione_lot where ID_lotto=:lotid)";
    q.prepare(sql);
    q.bindValue(":lotid",QVariant(lotid));
    q.exec();


    mod->setQuery(q);

    qDebug()<<q.lastError().text()<<QString::number(lotid);

    ui->tvComp->setModel(mod);
    ui->tvComp->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
    ui->tvComp->setColumnHidden(0,true);
  //  ui->tvComp->setColumnHidden(1,true);
    

  //  connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(narrow()));
    connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setCompSearch()));
    connect(ui->tvComp->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(narrow()));

    //qDebug()<<"getlotcomponents: "<<q.lastError().text()<<q.lastQuery()<<lotid<<q.boundValue(":id").toString();


}

void HAnalisi::getLotComponents(int idlotto)
{


    QSqlQuery q(db);
    QString sql;
    QSqlQueryModel *mod;

    mod=new QSqlQueryModel();
    QTableView *w = ui->tvNarrow;

//sql="select lotdef.ID,lotdef.data,lotdef.lot,prodotti.descrizione, anagrafica.ragione_sociale,operazioni.quantita from operazioni,prodotti,lotdef,anagrafica  where  prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and operazioni.ID in (select operazione from composizione_lot where ID_lotto=:lotid)";  //+QString::number(lotid)
 //   sql="select  operazioni.IDlotto,operazioni.data,lotdef.lot,prodotti.descrizione,operazioni.quantita from operazioni,lotdef,prodotti where lotdef.ID=operazioni.IDlotto and prodotti.ID=operazioni.IDprodotto and operazioni.ID in(select operazione from composizione_lot where ID_lotto=:lotid)";
 sql="select DISTINCT lotdef.ID,operazioni.data,lotdef.lot,prodotti.descrizione,anagrafica.ragione_sociale, operazioni.quantita from operazioni,prodotti,lotdef,anagrafica where prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid)";
    q.prepare(sql);
    q.bindValue(":lotid",QVariant(idlotto));
    q.exec();


    mod->setQuery(q);

    qDebug()<<q.lastError().text()<<QString::number(idlotto);

    w->setModel(mod);
    w->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
    w->setColumnHidden(0,true);

    connect(ui->tvNarrow->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(setNarrowSearch()));




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
    ui->tvNarrow->setVisible(!checked);
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
   // findLotComposition();
    int lotid=ui->tvNarrow->model()->index(ui->tvNarrow->currentIndex().row(),0).data(0).toInt();
    getLotComponents(lotid);
    ui->leLot->setText("");
}

void HAnalisi::on_pushButton_5_clicked()
{
    findLotUse();
    ui->tvNarrow->setVisible(true);
    ui->leLot->setText("");
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


void HAnalisi::doMenu(QPoint pos)
{

        QPoint globalPos = ui->tvLots->viewport()->mapToGlobal(pos);



        QMenu *menu=new QMenu(0);
        QAction *printAction=menu->addAction("Stampa");
        connect(printAction,SIGNAL(triggered(bool)),this,SLOT(printThis()));

        menu->popup(ui->tvLots->viewport()->mapToGlobal(pos));


}

void HAnalisi::printThis()
{
  qDebug()<<"STAMPA DEL RIQUADRO SELEZIONATO!";
}


