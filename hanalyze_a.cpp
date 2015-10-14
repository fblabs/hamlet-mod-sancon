#include "hanalyze_a.h"
#include "ui_hanalyze_a.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTablemodel>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QTextTable>

#include "hprint.h"

HAnalyze_a::HAnalyze_a(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HAnalyze_a)
{
    ui->setupUi(this);
    ui->tvDetailsLot->setVisible(true);
}

HAnalyze_a::~HAnalyze_a()
{
    delete ui;
}

void HAnalyze_a::setConnectionName(QString conn)
{
    sConn=conn;
    //qui inizializzo la form
     ui->dateDal->setDate(QDate::currentDate().addMonths(-6));
     ui->dateAl->setDate(QDate::currentDate());
     zeromodel=new QSqlQueryModel();
     ui->lvWhat->setVisible(false);
    // ui->pbFilter->setVisible(false);

    db=QSqlDatabase::database(sConn);

    tmProdotti=new QSqlTableModel(0,db);

    tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);


    tmProdotti->select();
    tmProdotti->setFilter("tipo=1");

    tmAnagrafica=new QSqlTableModel(0,db);
    tmAnagrafica->setTable("anagrafica");
    tmAnagrafica->setFilter("cliente=1");
    tmAnagrafica->setSort(1,Qt::AscendingOrder);
    tmAnagrafica->select();

    qmMain=new QSqlQueryModel();

//    connect(ui->cbProdotti,SIGNAL(currentIndexChanged(QString)),this,SLOT(requestData()));

    connect(ui->rbMateriePrime,SIGNAL(toggled(bool)),this,SLOT(radioToggled()));
    connect(ui->rbSemilavorati,SIGNAL(toggled(bool)),this,SLOT(radioToggled()));
    connect(ui->rbProdottiFiniti,SIGNAL(toggled(bool)),this,SLOT(radioToggled()));
    connect(ui->rbAll,SIGNAL(toggled(bool)),this,SLOT(radioToggled()));
    connect(ui->rbPackage,SIGNAL(toggled(bool)),this,SLOT(radioToggled()));

    connect(ui->rbProdotti,SIGNAL(toggled(bool)),this,SLOT(requestData()));
    connect(ui->rbAnagrafica,SIGNAL(toggled(bool)),this,SLOT(requestData()));
    connect(ui->rbAnagrafica,SIGNAL(toggled(bool)),this,SLOT(requestData()));
    connect(ui->rbProdotti,SIGNAL(toggled(bool)),this,SLOT(requestData()));
    connect(ui->rbAnagrafica,SIGNAL(toggled(bool)),this,SLOT(requestData()));
    connect(ui->rbLes,SIGNAL(toggled(bool)),this,SLOT(requestData()));
    connect(ui->rbLin,SIGNAL(toggled(bool)),this,SLOT(requestData()));
    connect(ui->pbFilter,SIGNAL(toggled(bool)),this,SLOT(requestData()));


    ui->cbProdotti->setModel(tmAnagrafica);
    ui->cbProdotti->setModelColumn(1);

    ui->cbProdotti->setCurrentIndex(0);

    connect(ui->cbProdotti,SIGNAL(currentIndexChanged(QString)),this,SLOT(getData()));
    connect(ui->tvMain->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),SLOT(getData()));
    connect(ui->tableView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(loadDetails(QString)));


}

void HAnalyze_a::resetData()
{
 //   QSqlQueryModel *zeromodel=new QSqlQueryModel();
    zeromodel->setQuery(QSqlQuery(db));
    ui->tvDetailsLot->setModel(zeromodel);
    ui->tvDetails->setModel(zeromodel);
    ui->tvMain->setModel(zeromodel);
    ui->tableView->setModel(zeromodel);

}

void HAnalyze_a::getLots()
{


//non utilizzata

}

void HAnalyze_a::requestData()
{

    ID= ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toString();
    QString what;
    QString d =" and lotdef.data BETWEEN '" + ui->dateDal->date().toString("yyyy-MM-dd") + "' AND '" + ui->dateAl->date().toString("yyyy-MM-dd")+"'";
    QString condiz1;
    QString from="FROM lotdef where";
    QString group=" group by lotdef.lot ";
    QString idProdotto;

// "tipi prodotto"

    if (ui->rbProdotti->isChecked())
    {
        condiz1= " prodotto=" + ID + d + " ";
    }
    else
    {
       condiz1=" anagrafica="+ID+ d +" and lotdef.EAN IS  NOT NULL and lotdef.EAN !=''";
    }

    if(ui->rbAll->isChecked())
    {
        filter="";
    }
    else if (ui->rbMateriePrime->isChecked())
    {
        filter = " and lotdef.tipo=0 ";

    }
    else if (ui->rbSemilavorati->isChecked())
    {
        filter= " and lotdef.tipo=1 ";
    }
    else if (ui->rbProdottiFiniti->isChecked())
    {
        filter=" and lotdef.tipo=2";
    }
    else if (ui->rbPackage->isChecked())
    {
        filter=" and lotdef.tipo=3 ";
        from="FROM lotdef where";
    }

 // filtra per p0rtodotto selezionato

    if(ui->pbFilter->isChecked())
    {
        idProdotto=ui->lvWhat->model()->index(ui->lvWhat->currentIndex().row(), 0).data(0).toString();
    }
    else
    {
        idProdotto="";
    }


 //lotto interno o lotto esterno?
    if (ui->rbLin->isChecked())
    {
        what="SELECT lotdef.lot,prodotti.descrizione ";
        from=" FROM lotdef,prodotti where ";
        condiz1=" anagrafica="+ID+" and lotdef.EAN IS NOT NULL and prodotti.ID=lotdef.prodotto and lotdef.tipo=2 ";
    }
    else if (ui->rbLes->isChecked())
    {
        what ="select lotdef.EAN,lotdef.lot,prodotti.descrizione";
        from=" FROM lotdef, prodotti where";
        condiz1=" anagrafica="+ID+" and lotdef.EAN IS NOT NULL and prodotti.ID=lotdef.prodotto";

        if(ui->pbFilter->isChecked())
        {
             condiz1=" anagrafica="+ID+" and lotdef.EAN IS NOT NULL and prodotti.ID=lotdef.prodotto and lotdef.prodotto="+idProdotto;
        }
        // getProductsForClientsInRange();
    }


    QSqlQuery q(db);
    QString query = what + from + condiz1 + filter + d + group + "order by data desc" ;
    q.exec(query);

    qmMain->setQuery(q);
    ui->tvMain->setModel(qmMain);



    //qDebug()<<"QUERYYYY:"<<query<<q.lastError().text();
  //  ui->tvMain->setModelColumn(0);

    ui->tvMain->resizeColumnsToContents();
    ui->tvMain->horizontalHeader()->resizeSections(QHeaderView::Stretch);
    ui->tvMain->horizontalHeader()->stretchLastSection();



    if(ui->rbLes->isChecked())
    {
        lot=ui->tvMain->model()->index(ui->tvMain->currentIndex().row(),1).data(0).toString();
    }
    else
    {
        lot=ui->tvMain->model()->index(ui->tvMain->currentIndex().row(),0).data(0).toString();
    }

    loadDetails(lot);

}

void HAnalyze_a::getData()
{


    ID= ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toString();
    QString what;
    QString d =" and lotdef.data BETWEEN '" + ui->dateDal->date().toString("yyyy-MM-dd") + "' AND '" + ui->dateAl->date().toString("yyyy-MM-dd")+"'";
    QString condiz1;
    QString from="FROM lotdef where";
    QString group=" group by lotdef.lot ";
    QString idProdotto;

// "tipi prodotto"

    if (ui->rbProdotti->isChecked())
    {
        condiz1= " prodotto=" + ID + d + " ";
    }
    else
    {
       condiz1=" anagrafica="+ID+ d +" and lotdef.EAN IS  NOT NULL and lotdef.EAN !=''";
    }

    if(ui->rbAll->isChecked())
    {
        filter="";
    }
    else if (ui->rbMateriePrime->isChecked())
    {
        filter = " and lotdef.tipo=0 ";

    }
    else if (ui->rbSemilavorati->isChecked())
    {
        filter= " and lotdef.tipo=1 ";
    }
    else if (ui->rbProdottiFiniti->isChecked())
    {
        filter=" and lotdef.tipo=2";
    }
    else if (ui->rbPackage->isChecked())
    {
        filter=" and lotdef.tipo=3 ";
        from="FROM lotdef where";
    }

 // filtra per prodotto selezionato

    if(ui->pbFilter->isChecked())
    {
        idProdotto=ui->lvWhat->model()->index(ui->lvWhat->currentIndex().row(), 0).data(0).toString();
    }
    else
    {
        idProdotto="";
    }


 //lotto interno o lotto esterno?
    if (ui->rbLin->isChecked())
    {
        what="SELECT lotdef.ID,lotdef.lot,prodotti.descrizione ";
        from=" FROM lotdef,prodotti where ";
        condiz1=" anagrafica="+ID+" and lotdef.EAN IS NOT NULL and prodotti.ID=lotdef.prodotto and lotdef.tipo=2 ";
    }
    else if (ui->rbLes->isChecked())
    {
        what ="select lotdef.ID,lotdef.EAN,lotdef.lot,prodotti.descrizione";
        from=" FROM lotdef, prodotti where";
        condiz1=" anagrafica="+ID+" and lotdef.EAN IS NOT NULL and prodotti.ID=lotdef.prodotto";

        if(ui->pbFilter->isChecked())
        {
             condiz1=" anagrafica="+ID+" and lotdef.EAN IS NOT NULL and prodotti.ID=lotdef.prodotto and lotdef.prodotto="+idProdotto;
        }
         getProductsForClientsInRange();
    }


    QSqlQuery q(db);
    QString query = what + from + condiz1 + filter + d + group + "order by data desc" ;
    q.exec(query);

    qmMain->setQuery(q);
    ui->tvMain->setModel(qmMain);



    //qDebug()<<"QUERYYYY:"<<query<<q.lastError().text();
  //  ui->tvMain->setModelColumn(0);

    ui->tvMain->resizeColumnsToContents();
    ui->tvMain->horizontalHeader()->resizeSections(QHeaderView::Stretch);
    ui->tvMain->horizontalHeader()->stretchLastSection();



    if(ui->rbLes->isChecked())
    {
        lot=ui->tvMain->model()->index(ui->tvMain->currentIndex().row(),1).data(0).toString();
    }
    else
    {
        lot=ui->tvMain->model()->index(ui->tvMain->currentIndex().row(),0).data(0).toString();
    }

    loadDetails(lot);

}

QString HAnalyze_a::getProduct(QString lot)
{
    QStringList list= lot.split('-');

    return list.at(1);
}


void HAnalyze_a::radioToggled()
{
      requestData();
}

void HAnalyze_a::loadDetails(QString lot)
{
  //  ui->tvDetailsLot->setVisible(true);
     if(ui->rbLin->isChecked())
     {
         lot=ui->tvMain->model()->index(ui->tvMain->currentIndex().row(),0).data(0).toString();
     }
     else
     {

     }
   // QString rs="SELECT `operazioni`.`lot` AS `Componente`,`prodotti`.`descrizione` AS `Prodotto`,lotdef.lot_fornitore AS `Lotto Fornitore`,anagrafica.ragione_sociale AS Fornitore,`operazioni`.`quantita` AS `Quantità` FROM `composizione_lot`,`operazioni`, lotdef,prodotti,anagrafica WHERE lotdef.lot = operazioni.lot AND prodotti.ID = lotdef.prodotto AND anagrafica.ID = lotdef.anagrafica AND operazioni.ID = composizione_lot.operazione AND composizione_lot.lot = '" + lot +"'";
    QString rs="select operazioni.ID,operazioni.lot,prodotti.ID,prodotti.descrizione,operazioni.quantita from operazioni,prodotti where prodotti.ID=operazioni.IDprodotto and  operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto="+lot+")";
    QSqlQueryModel *rm=new QSqlQueryModel();
    QSqlQuery  r(db);


    r.exec(rs);
    rm->setQuery(r);

    ui->tableView->setModel(rm);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->stretchLastSection();
    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);

    //qDebug()<<lot;
}

void HAnalyze_a::on_pushButton_clicked()
{
    this->close();
}


void HAnalyze_a::on_pushButton_2_clicked()
{
    HPrint *f=new HPrint();
    QTextTable *table;
    int rws=ui->tvDetails->model()->rowCount()>0;
    int cls=ui->tvDetails->model()->columnCount();

    f->append("DETTAGLIO PRODUZIONE",false);
    f->append("",false);

    //stampa

       table = f->addTable(rws,cls);

       for(int r=0;r<rws;r++)
       {
           for (int c=0;c<cls;c++)
           {


               f->writeTableContent(table,r,c,ui->tvDetails->model()->index(r,c).data(0).toString());


          }
       }

       f->cursorToEnd();

       f->append("COMPONENTI",false);
       f->append("",false);

       //end dettagli lotto---------------

       rws=ui->tableView->model()->rowCount();
       cls=ui->tableView->model()->columnCount();

       table = f->addTable(rws,cls);

       for(int r=0;r<rws;r++)
       {
           for (int c=0;c<cls;c++)
           {


               f->writeTableContent(table,r,c,ui->tableView->model()->index(r,c).data(0).toString());


          }
       }

       f->cursorToEnd();
       f->append("COMPONENTI DI LOTTO:"+ui->tableView->currentIndex().data(0).toString(),false);
       f->append("",false);

       rws=ui->tvDetailsLot->model()->rowCount();
       cls=ui->tvDetailsLot->model()->columnCount();

       if(rws<1)return;

       table = f->addTable(rws,cls);

       for(int r=0;r<rws;r++)
       {
           for (int c=0;c<cls;c++)
           {


               f->writeTableContent(table,r,c,ui->tvDetailsLot->model()->index(r,c).data(0).toString());


          }
       }

       f->cursorToEnd();



//end dettagli

       f->show();
}

void HAnalyze_a::on_tvMain_clicked(const QModelIndex &index)
{
    QString lot;

    if (ui->rbLin->isChecked())
    {

       lot=ui->tvMain->model()->index(index.row(),0).data(0).toString();
       // QMessageBox::information(this,"PIPPO", "rbLin lot:" + lot,QMessageBox::Ok);

       //qDebug()<<"lin"<<lot;
    }
    else
    {
        lot=ui->tvMain->model()->index(index.row(),1).data(0).toString();
      //  ui->tvDetails->setVisible(false);
       // QMessageBox::information(this,"PIPPO", "rbLes lot:" + lot,QMessageBox::Ok+ "\n row=" + QString::number(index.row())+ " column: " + QString::number(index.column()));
        //qDebug()<<"les"<<lot;
    }
  //qDebug()<<lot;

   // QString ana=
    QString select;
    QString space=" ";
    QString what="SELECT lotdef.lot as LOTTO, prodotti.descrizione AS PRODOTTO,  lotdef.data AS DATA, anagrafica.ragione_sociale AS 'RAGIONE SOCIALE',lotdef.lot_fornitore AS 'LOT FORNITORE',lotdef.EAN as 'LOTTO DI USCITA',lotdef.scadenza AS SCADENZA,lotdef.giacenza as giacenza, operazioni.note AS NOTE";

    QString from="FROM lotdef, anagrafica,operazioni,prodotti";
    QString where;
    QString date="AND lotdef.data between '" + ui->dateDal->date().toString("yyyy-MM-dd") + "' and '" + ui->dateAl->date().toString("yyyy-MM-dd")+"'";



     if (ui->rbLin->isChecked())
     {
      where="WHERE anagrafica.ID = lotdef.anagrafica AND operazioni.lot=lotdef.lot AND prodotti.ID=operazioni.IDprodotto AND operazioni.azione=1 and lotdef.lot='" + lot +"'";
     }
    else
    {
       what="SELECT distinct lotdef.lot as LOTTO, prodotti.descrizione AS PRODOTTO,  lotdef.data AS DATA, anagrafica.ragione_sociale AS 'RAGIONE SOCIALE',lotdef.lot_fornitore AS 'LOT FORNITORE',lotdef.EAN as 'LOTTO DI USCITA',lotdef.scadenza AS SCADENZA,lotdef.giacenza as giacenza, operazioni.note AS NOTE";
       //where="WHERE anagrafica.ID = lotdef.anagrafica AND operazioni.lot=lotdef.lot AND prodotti.ID=operazioni.IDprodotto AND operazioni.azione=1 and lotdef.lot='"+lot+"' and prodotti.ID="+ID+" and lotdef.lot='"+lot+"'";
       where="WHERE anagrafica.ID = lotdef.anagrafica AND operazioni.lot=lotdef.lot AND prodotti.ID=operazioni.IDprodotto AND operazioni.azione=1 and lotdef.lot='"+lot+"' and lotdef.lot='"+lot+"'";

    }

    select=what;
    select.append(space);
    select.append(from);
    select.append(space);
    select.append(where);
    select.append(space);
    select.append(date);

    QString query=select;
    query.append(from);
    query.append(where);
    query.append(date);
    QSqlQueryModel *m=new QSqlQueryModel();
    QSqlQuery q(db);

    QString rs="SELECT `operazioni`.`lot` AS `Componente`,`prodotti`.`descrizione` AS `Prodotto`,lotdef.lot_fornitore AS `Lotto Fornitore`,anagrafica.ragione_sociale AS Fornitore,`operazioni`.`quantita` AS `Quantità` FROM `composizione_lot`,`operazioni`, lotdef,prodotti,anagrafica WHERE lotdef.lot = operazioni.lot AND prodotti.ID = lotdef.prodotto AND anagrafica.ID = lotdef.anagrafica AND operazioni.ID = composizione_lot.operazione AND composizione_lot.lot = '" + lot +"'";
    QSqlQueryModel *rm=new QSqlQueryModel();
    QSqlQuery  r(db);



    q.exec(select);
    m->setQuery(q);

     //qDebug()<<"SEEEELECT: " +lot+q.lastQuery();

    ui->tvDetails->setModel(m);
    ui->tvDetails->resizeColumnsToContents();

    r.exec(rs);
    rm->setQuery(r);

    ui->tableView->setModel(rm);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->stretchLastSection();
    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);
//
 //   ui->tvDetailsLot->setVisible(false);

    //qDebug()<<select;

}

void HAnalyze_a::on_tvMain_current_changed()
{
    QString lot;

    if (ui->rbLin->isChecked())
    {

       lot=ui->tvMain->model()->index(ui->tvMain->currentIndex().row(),0).data(0).toString();
       // QMessageBox::information(this,"PIPPO", "rbLin lot:" + lot,QMessageBox::Ok);

       //qDebug()<<"lin"<<lot;
    }
    else
    {
        lot=ui->tvMain->model()->index(ui->tvMain->currentIndex().row(),1).data(0).toString();
      //  ui->tvDetails->setVisible(false);
       // QMessageBox::information(this,"PIPPO", "rbLes lot:" + lot,QMessageBox::Ok+ "\n row=" + QString::number(index.row())+ " column: " + QString::number(index.column()));
        //qDebug()<<"les"<<lot;
    }
  //qDebug()<<lot;

   // QString ana=
    QString select;
    QString space=" ";
    QString what="SELECT lotdef.lot as LOTTO, prodotti.descrizione AS PRODOTTO,  lotdef.data AS DATA, anagrafica.ragione_sociale AS 'RAGIONE SOCIALE',lotdef.lot_fornitore AS 'LOT FORNITORE',lotdef.EAN as 'LOTTO DI USCITA',lotdef.scadenza AS SCADENZA,lotdef.giacenza as giacenza, operazioni.note AS NOTE";

    QString from="FROM lotdef, anagrafica,operazioni,prodotti";
    QString where;
    QString date="AND lotdef.data between '" + ui->dateDal->date().toString("yyyy-MM-dd") + "' and '" + ui->dateAl->date().toString("yyyy-MM-dd")+"'";



     if (ui->rbLin->isChecked())
     {
      where="WHERE anagrafica.ID = lotdef.anagrafica AND operazioni.lot=lotdef.lot AND prodotti.ID=operazioni.IDprodotto AND operazioni.azione=1 and lotdef.lot='" + lot +"'";
     }
    else
    {
       what="SELECT distinct lotdef.lot as LOTTO, prodotti.descrizione AS PRODOTTO,  lotdef.data AS DATA, anagrafica.ragione_sociale AS 'RAGIONE SOCIALE',lotdef.lot_fornitore AS 'LOT FORNITORE',lotdef.EAN as 'LOTTO DI USCITA',lotdef.scadenza AS SCADENZA,lotdef.giacenza as giacenza, operazioni.note AS NOTE";
       //where="WHERE anagrafica.ID = lotdef.anagrafica AND operazioni.lot=lotdef.lot AND prodotti.ID=operazioni.IDprodotto AND operazioni.azione=1 and lotdef.lot='"+lot+"' and prodotti.ID="+ID+" and lotdef.lot='"+lot+"'";
       where="WHERE anagrafica.ID = lotdef.anagrafica AND operazioni.lot=lotdef.lot AND prodotti.ID=operazioni.IDprodotto AND operazioni.azione=1 and lotdef.lot='"+lot+"' and lotdef.lot='"+lot+"'";

    }

    select=what;
    select.append(space);
    select.append(from);
    select.append(space);
    select.append(where);
    select.append(space);
    select.append(date);

    QString query=select;
    query.append(from);
    query.append(where);
    query.append(date);
    QSqlQueryModel *m=new QSqlQueryModel();
    QSqlQuery q(db);

    QString rs="SELECT `operazioni`.`lot` AS `Componente`,`prodotti`.`descrizione` AS `Prodotto`,lotdef.lot_fornitore AS `Lotto Fornitore`,anagrafica.ragione_sociale AS Fornitore,`operazioni`.`quantita` AS `Quantità` FROM `composizione_lot`,`operazioni`, lotdef,prodotti,anagrafica WHERE lotdef.lot = operazioni.lot AND prodotti.ID = lotdef.prodotto AND anagrafica.ID = lotdef.anagrafica AND operazioni.ID = composizione_lot.operazione AND composizione_lot.lot = '" + lot +"'";
    QSqlQueryModel *rm=new QSqlQueryModel();
    QSqlQuery  r(db);



    q.exec(select);
    m->setQuery(q);

     //qDebug()<<"SEEEELECT: " +lot+q.lastQuery();

    ui->tvDetails->setModel(m);
    ui->tvDetails->resizeColumnsToContents();

    r.exec(rs);
    rm->setQuery(r);

    ui->tableView->setModel(rm);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->stretchLastSection();
    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);
}

void HAnalyze_a::on_tableView_clicked(const QModelIndex &index)
{
    QString lot;
    QString rs;

    lot=ui->tableView->model()->index(index.row(),0).data(0).toString();

    //qDebug()<<lot;

     if(ui->rbLin->isChecked())//lotto interno per prodotto
     {

         rs="SELECT `operazioni`.`lot` AS `Componente`,`prodotti`.`descrizione` AS `Prodotto`,lotdef.lot_fornitore AS `Lotto Fornitore`,anagrafica.ragione_sociale AS Fornitore,`operazioni`.`quantita` AS `Quantità` FROM `composizione_lot`,`operazioni`, lotdef,prodotti,anagrafica WHERE lotdef.lot = operazioni.lot AND prodotti.ID = lotdef.prodotto AND anagrafica.ID = lotdef.anagrafica AND operazioni.ID = composizione_lot.operazione AND composizione_lot.lot = '" + lot +"'";
     }
     else
     {

          rs="SELECT `operazioni`.`lot` AS `Componente`,`prodotti`.`descrizione` AS `Prodotto`,lotdef.lot_fornitore AS `Lotto Fornitore`,anagrafica.ragione_sociale AS Fornitore,`operazioni`.`quantita` AS `Quantità` FROM `composizione_lot`,`operazioni`, lotdef,prodotti,anagrafica WHERE lotdef.lot = operazioni.lot AND prodotti.ID = lotdef.prodotto AND anagrafica.ID = lotdef.anagrafica AND operazioni.ID = composizione_lot.operazione AND lotdef.EAN = '" + lot +"'";
     }

            //qDebug()<<rs;
    QSqlQueryModel *rm=new QSqlQueryModel();
    QSqlQuery  r(db);


    if ( r.exec(rs))
    {
    rm->setQuery(r);
    }
    else
    {
        //qDebug()<<r.lastError().text();
    }
    if (r.size()>0)
    {
        ui->tvDetailsLot->setVisible(true);
        ui->tvDetailsLot->setModel(rm);
        //qDebug()<<"407 ontableview_clicked"<<r.lastQuery();
    }
    else
    {

    rm->clear();
  //  ui->tvDetailsLot->setVisible(false);

    }



    ui->tvDetailsLot->resizeColumnsToContents();
    ui->tvDetailsLot->horizontalHeader()->stretchLastSection();
    ui->tvDetailsLot->horizontalHeader()->resizeSections(QHeaderView::Stretch);
}




void HAnalyze_a::on_rbAnagrafica_toggled(bool checked)
{
    if (checked)
    {
        ui->rbProdotti->setChecked(false);
        ui->cbProdotti->setModel(tmAnagrafica);

    }
    else
    {
        ui->rbProdotti->setChecked(true);
        ui->cbProdotti->setModel(tmProdotti);


    }

    ui->lvWhat->setVisible(checked);
//    ui->pbFilter->setVisible(true);
   // ui->tvMain->setModelColumn(1);

}

void HAnalyze_a::on_pushButton_3_clicked()
{
    requestData();
}

void HAnalyze_a::on_tvDetails_clicked(const QModelIndex &index)
{
  //  QString lot;

  //  lot=ui->tvMain->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toString();


 //  loadDetails(lot);

}

void HAnalyze_a::getProductsForClientsInRange()
{
    QString sql;


    sql="SELECT distinct prodotti.ID,prodotti.descrizione from lotdef,prodotti,associazioni,ricette where associazioni.ID_ricetta=ricette.ID and ricette.ID_prodotto=prodotti.ID and prodotti.ID=ricette.ID_prodotto and associazioni.ID_cliente="+ID+ " and lotdef.data between '"+ui->dateDal->date().toString("yyyy-MM-dd")+"' and '"+ui->dateAl->date().toString("yyyy-MM-dd")+"'";
    QSqlQuery q(db);
    m=new QSqlQueryModel();
    q.exec(sql);
    m->setQuery(q);
    ui->lvWhat->setModel(m);
    ui->lvWhat->setModelColumn(1);
    connect(ui->lvWhat->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(requestData()));
    //qDebug()<<"getproductsforClients:"<<q.lastQuery()<<q.lastError().text();
}

void HAnalyze_a::on_pbFilter_toggled(bool checked)
{
    ui->lvWhat->setVisible(checked);

}

void HAnalyze_a::on_rbProdotti_toggled(bool checked)
{

   ui->pbFilter->setVisible(!checked);

}

void HAnalyze_a::on_cbProdotti_currentIndexChanged(int index)
{

}

void HAnalyze_a::on_rbLes_toggled(bool checked)
{

}
