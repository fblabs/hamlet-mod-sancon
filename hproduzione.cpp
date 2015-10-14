#include "hproduzione.h"
#include "ui_hproduzione.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QDataWidgetMapper>
#include <QStandardItem>
#include <QList>
#include <QSqlRecord>
#include <QStandardItemModel>
#include <QSqlRelationalTableModel>
#include <QMessageBox>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQuery>
#include <hprint.h>
#include <QModelIndex>
#include <QSqlQueryModel>

HProduzione::HProduzione(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HProduzione)
{
    ui->setupUi(this);
   // setupForm();
    howManyLastLotsModel();


}

HProduzione::~HProduzione()
{
    delete ui;
}

void HProduzione::setConnection(QString conn)
{
   sConn = conn;
   setupForm();
}

void HProduzione::init(QString conn,int userid)
{
    sConn=conn;
    db=QSqlDatabase::database(sConn);

    sConn=conn;
    userID=userid;

    db=QSqlDatabase::database(sConn);

    getClients();
    ui->cbClienti->setCurrentIndex(0);

}

void HProduzione::getClients()
{
    QSqlQuery q(db);
    QSqlQueryModel *qmClienti=new QSqlQueryModel();

    QString sql="SELECT ID,ragione_sociale from anagrafica where cliente=1 order by ragione_sociale ASC";

    q.exec(sql);

    qmClienti->setQuery(q);

    qDebug()<<q.lastError().text();

    ui->cbClienti->setModel(qmClienti);
    ui->cbClienti->setModelColumn(1);

    ui->cbClienti->setCurrentIndex(0);
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(getRecipesForClient()));
}

void HProduzione::setupForm()
{

    qDebug()<<sConn <<"setupForm()";
    db = QSqlDatabase::database(sConn);

    tmProdotti = new QSqlRelationalTableModel(0,db);
  //  tmProdotti=new QSqlQueryModel();
  //  QSqlQuery query("SELECT ricette.ID, prodotti.descrizione FROM ricette, prodotti WHERE prodotti.ID = ricette.ID_prodotto",db);
  //  tmProdotti->setQuery(query);
    tmRicette =  new QSqlRelationalTableModel(0,db);
    tmRigheRicette = new QSqlRelationalTableModel(0,db);
    tmClienti = new QSqlRelationalTableModel(0,db);
    tmAssociazioni=new QSqlRelationalTableModel(0,db);
    tmSubclienti=new QSqlRelationalTableModel(0,db);


    tmProdotti->setTable("prodotti");

   tmProdotti->setSort(1,Qt::AscendingOrder);
   tmProdotti->setFilter("tipo=1");
   tmProdotti->select();
   qDebug()<<sConn <<"setupForm(tmprodotti)";
    tmRicette->setTable("ricette");
  //  tmRigheRicette->setTable("righe_ricette");
    tmRicette->setRelation(1,QSqlRelation("prodotti",0,"descrizione"));
  //  tmRigheRicette->setRelation(2,QSqlRelation("prodotti",1,));


 qDebug()<<sConn <<"setupForm(tmricette)";
   // tmRigheRicette->setRelation(2,QSqlRelation("ricette","ID_prodotto","ID_prodotto"));
    //tmRigheRicette->select();

    ui->lvRicette->setModel(tmProdotti);
    ui->lvRicette->setModelColumn(1);

    lastlotsm = new QStandardItemModel (1,2);
   // ui->tableView->setModel(ltm);

    tmClienti->setTable("anagrafica");
    tmClienti->setSort(1,Qt::AscendingOrder);
    tmClienti->setFilter("cliente=1");
    ;
    //tmRicette->setRelation(1,QSqlRelation("Anagrafica","ID","ragione_sociale"));
    tmAssociazioni->setRelation(1,QSqlRelation("anagrafica","ID","ragione_sociale"));
    tmRicette->setRelation(1,QSqlRelation("anagrafica","ID","ragione_sociale"));
    tmSubclienti->setTable("anagrafica");
    tmSubclienti->setRelation(0,QSqlRelation("anagrafica","ID","ragione_sociale"));
    tmSubclienti->setFilter("subcliente=1");

    tmClienti->select();
    tmRicette->select();
    tmSubclienti->select();
    ui->cbClienti->setModel(tmClienti);
    ui->cbClienti->setModelColumn(1);
    ui->cbSubClienti->setModel(tmSubclienti);
    ui->cbSubClienti->setModelColumn(1);

    qDebug()<<db.lastError().text();
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(QString)),this,SLOT(clientSelected()));


}

void HProduzione::clientSelected()
{
   QSqlQueryModel *rm=new QSqlQueryModel();
   QString idcliente;

   idcliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toString();
   QSqlQuery q(db);
   QString query="SELECT ricette.ID,prodotti.ID,prodotti.descrizione FROM ricette,associazioni,prodotti,anagrafica WHERE prodotti.ID=ricette.ID_prodotto and ricette.ID=associazioni.ID_ricetta and associazioni.ID_cliente=anagrafica.ID	and associazioni.ID_cliente="+idcliente;

   q.exec(query);
   rm->setQuery(q);
   ui->lvRicette->setModel(rm);
   ui->lvRicette->setModelColumn(2);

}

void HProduzione::setUserId(int puserId)
{
  userID = puserId;
}

QList<QStandardItem*> HProduzione::createRecipeRow(QString sProd,QString sDescProdotto, QString sPeso)
{
    QList<QStandardItem*> row;

    QStandardItem *prodotto;
    QStandardItem *descrizione;
    QStandardItem *peso;
   // QStandardItem *check;
    QStandardItem *lotto;
    QStandardItem *qtyToAdd;

    prodotto= new QStandardItem (sProd);
    descrizione = new QStandardItem(sDescProdotto);
    peso = new QStandardItem (sPeso);
   // check = new QStandardItem();
    lotto = new QStandardItem("");
   // check->setCheckable(true);
    qtyToAdd=new QStandardItem(sPeso);
    QColor c;
    QBrush b;
    b.setColor(Qt::red);
    qtyToAdd->setForeground(b);
    row << prodotto << descrizione<< peso << lotto<<qtyToAdd;

    return row;


}

void HProduzione::lastFiveLots()
{
    QSqlQuery *qlots= new QSqlQuery(db);

    qlots->exec("select lot, giacenza from lotdef where prodotto=" + ui->tableView->model()->index(ui->tableView->currentIndex().row(),0).data(0).toString() + " and attivo=1 ORDER by data DESC " + sQuantiLots);
    qlots->next();

 qDebug() << qlots->size() << qlots->lastError().text() <<qlots->lastQuery();
   ui->lvLastlots->setModel(0);

   lastlotsm = new QStandardItemModel(qlots->size(),2);
   lastlotsm->clear();

    int ix=0;

    for (ix=0; ix < qlots->size(); ix++)
    {

        lastlotsm->appendRow(lastFiveLotsList(qlots->value(0).toString(),qlots->value(1).toString()));
        qDebug()<<qlots->value(1).toString();
        qlots->next();
    }

    ui->lvLastlots->setModel(lastlotsm);


    connect(ui->lvLastlots->selectionModel(),SIGNAL(selectionChanged(QItemSelection,QItemSelection)),this,SLOT(lotSelected()));
    ui->lvLastlots->setCurrentIndex(ui->lvLastlots->model()->index(0,0));

}


QList<QStandardItem*> HProduzione::lastFiveLotsList(QString sLot,QString sGiacenza)
{

    QList<QStandardItem*> row;

    QStandardItem *lotto;
    QStandardItem *giacenza;


    lotto= new QStandardItem (sLot);
    giacenza = new QStandardItem(sGiacenza);


    row << lotto << giacenza;

    return row;


}

void HProduzione::caricaRicetta()
{
    //qui carico la ricetta del prodotto di id sProdottoMaster
    sIdProdottoMaster = ui->lvRicette->model()->data(ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),0)).toString();
qDebug()<<sIdProdottoMaster;

}

void HProduzione::on_pushButton_clicked()
{

    ui->lvRicette->setEnabled(false);
    ui->lvLastlots->setEnabled(true);
    ui->tableView->setEnabled(true);

}


void HProduzione::on_pushButton_4_clicked()
{


    if(QMessageBox::question(this,QApplication::applicationName(),"Annullare la lavorazione corrente?",QMessageBox::Ok |QMessageBox::Cancel))
    {
        ui->lvRicette->setEnabled(true);
        ui->lvLastlots->setEnabled(false);
        ui->tableView->setEnabled(false);
        ltm->clear();
        lastlotsm->clear();

    }


}

void HProduzione::recipeSelected()
{

    QSqlQuery qPeso(db);

qDebug() << "RECIPE SELECT£ED";
   QString sIdProdottoMaster = ui->lvRicette->model()->data(ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),0)).toString();

   //ID ingrediente, desrizione ingrediente, quantità
 //  QString sSql ="select righe_ricette.ID_prodotto, prodotti.descrizione, righe_ricette.quantita from ricette,prodotti,righe_ricette  where  righe_ricette.ID_ricetta = ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID_prodotto="+sIdProdottoMaster;
  QString sSql2="select sum(quantita)from righe_ricette,ricette where righe_ricette.ID_ricetta = ricette.ID and ricette.ID_prodotto=" +  ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),0).data(0).toString();
  QString sSql="select righe_ricette.ID_prodotto, prodotti.descrizione,righe_ricette.quantita from righe_ricette,prodotti where prodotti.ID=righe_ricette.ID_prodotto and righe_ricette.ID_ricetta=" + ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),0).data(0).toString();


   qDebug() << sSql<<sSql2;
   if (qPeso.exec(sSql2))
   {
   qPeso.next();
   qDebug() << "dopo qpeso next";
   }

   double peso = qPeso.value(0).toDouble();
   qDebug() <<  qPeso.value(0).toString();
   ui->leDaFare->setText(qPeso.value(0).toString());

   double dafare = peso ;

   double factor = dafare/peso;

   QSqlQuery qRicetta(db);
   qRicetta.exec(sSql);
   qRicetta.next();

   int iric=qRicetta.size();

   qDebug()<<qRicetta.lastQuery()<<qRicetta.lastError().text();


   ltm = new QStandardItemModel (iric,5);
   ltm->clear();

   float value;

   for (int ix=0;ix<iric;++ix)
   {

       value = (qRicetta.value(2).toFloat()* factor);
       QString ris = QString::number(value,'f',2);
       QString sToAdd=QString::number(0,'f',2);
       ltm->appendRow(createRecipeRow(qRicetta.value(0).toString(),qRicetta.value(1).toString(),ris));
       qRicetta.next();
   }

   ui->tableView->setModel(ltm);


     connect(ui->tableView->selectionModel(),SIGNAL(selectionChanged(QItemSelection,QItemSelection)), this,SLOT(productSelected()));



   ui->tableView->show();


}

void HProduzione::productSelected()
{
qDebug() << "productSelected";
   sPrdDesc = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),1)).toString();
   sPrd =ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0)).toString();
  qDebug() << sPrdDesc;
   QSqlQuery *qProdID =new QSqlQuery(db);
   qProdID->exec("Select ID from prodotti where descrizione='" + sPrdDesc +"'");
   qProdID->next();
   sProdMaster = qProdID->value(0).toString();
   qDebug() << "productSelected"<<sIdProdottoMaster <<sPrd;
   qProdID->clear();
   //ui->leLotToDo->setText(sLotToAdd);
   connect(ui->cbQuantiItem,SIGNAL(currentIndexChanged(QString)),this,SLOT(lastFiveLots()));
   connect(ui->tableView,SIGNAL(clicked(QModelIndex)),this,SLOT(lastFiveLots()));

   lastFiveLots();

}

void HProduzione::lotSelected()
{
    sLotToAdd = ui->lvLastlots->model()->data(ui->lvLastlots->model()->index(ui->lvLastlots->currentIndex().row(),0)).toString();



    ui->leLot->setText(sLotToAdd);
    ui->leIngrediente->setText(ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),1)).toString());

}

int HProduzione::addNewOperation(QString idProd, QString Lot, QString note, double quantita,bool carico)
{

    int result;
    QSqlQuery *qrOp =new QSqlQuery(db);
    QSqlQuery *qrId =new QSqlQuery(db);
    QString sSql;

    if (carico && quantita < 0)
    {
        quantita *= -1;
        
    }

    if(!carico && quantita > 0)
    {
        quantita *= -1;
    }

    sSql="INSERT INTO operazioni(ID,lot,data,utente,IDprodotto,azione,quantita,note) VALUES (-1,'" + Lot +"',NOW()," + QString::number(userID) + "," + idProd + ",2," + QString::number(quantita) + ",'"+ note +"')";

    bool bres = qrOp->exec(sSql);
    if (bres)
    {
        qrId->exec("SELECT max(ID) from operazioni");
        qrId->next();
        result=qrId->value(0).toInt();
        result++;


        qDebug()<< "addNewOperation OK";
        qDebug()<<sSql;
        return result;
    }
    else
    {
        qDebug()<< "errore in addNewOperation"<<qrId->lastError().text();
        qDebug()<< sSql;
        return -1;
    }

}

QString HProduzione::getNewLot(QString sCurProd)
{
    QSqlQuery qLotQr(db);
    QString sLot;
    qLotQr.exec("SELECT createID('" + sCurProd +"'); ");

    qLotQr.next();
    sLot = qLotQr.value(0).toString();

    qDebug()<<sLot;
    return sLot;
}


bool HProduzione::addLot()
{
    QSqlQuery *lotQry = new QSqlQuery(db);
    QString sQuery;

    newLot = getNewLot(sIdProdottoMaster);

    qDebug()<<newLot;


    sQuery = "INSERT INTO lotdef (lot,prodotto,data,giacenza,scadenza,anagrafica,lot_fornitore,EAN,tipo,attivo) values ('" + newLot + "'," + sIdProdottoMaster + ",NOW()," + ui->leDaFare->text() +",NULL,174,NULL,NULL,1,1)";
    bool bAdd=lotQry->exec(sQuery);
    if (bAdd)
    {
       qDebug()<<"addLot() eseguita correttamente";
    }
    else
    {
        newLot="";
        qDebug()<<"errore in addLot()";
        qDebug()<< sQuery;
        qDebug()<<lotQry->lastError();


    }

    return bAdd;
}

int HProduzione::addLot(QString lot)
{
    int result;
    QSqlQuery *lotQry = new QSqlQuery(db);
    QString sQuery;

   // newLot = getNewLot(sIdProdottoMaster);

    //qDebug()<<newLot;
    lot = getNewLot(sIdProdottoMaster);


    sQuery = "INSERT INTO lotdef (lot,prodotto,data,giacenza,scadenza,anagrafica,lot_fornitore,EAN,tipo,attivo) values ('" + lot + "'," + sIdProdottoMaster + ",NOW()," + ui->leDaFare->text() +",NULL,174,NULL,NULL,1,1)";
    bool bAdd=lotQry->exec(sQuery);
    if (bAdd)
    {
       qDebug()<<"addLot() eseguita correttamente";
       result = 0;
    }
    else
    {
        newLot="";
        qDebug()<<"errore in addLot()";
        qDebug()<< sQuery;
        qDebug()<<lotQry->lastError();
        result = -1;


    }

    return result;

}


void HProduzione::on_pushButton_5_clicked()
{
    QModelIndex ix=ui->tableView->currentIndex();

    ltm->removeRow(ix.row());
}

void HProduzione::on_lineEdit_textChanged(const QString &arg1)
{

   QString flt = "descrizione LIKE '%" + ui->lineEdit->text() + "%'";
   tmProdotti->setFilter(flt);
}
////////////////////////////////////////////CALCAPOLAPESI///////////////////////////////////////////
void HProduzione::calcolaPesi()
{
    QSqlQuery *qpesi= new QSqlQuery(db);

    qpesi->exec("select sum(quantita)from righe_ricette where ID_ricetta = '" + sIdProdottoMaster + "'");
    qpesi->next();
    double peso = qpesi->value(0).toDouble();

    double dafare = ui->leDaFare->text().toFloat();

    double factor = dafare/peso;


    QSqlQuery qcomp(db);
    tmRicette->setRelation(1,QSqlRelation("prodotti","ID","descrizione"));
    tmRicette->select();
    tmRigheRicette->setRelation(0,QSqlRelation("ricette","ID","ID_ricetta"));
    tmRigheRicette->select();

    int inx = qcomp.size();
    //double somma=0;

    ltm = new QStandardItemModel (inx,3);
    ltm->clear();
    //qDebug()<< inx;
    for (int lind = 0; lind <inx; ++lind)
    {

        qcomp.next();




        double value;
        value = (qcomp.value(1).toFloat()* factor);
        QString ris = QString::number(value,'f',2);

      //  somma += value;

        ltm->appendRow(createRecipeRow(qcomp.value(0).toString(),qcomp.value(1).toString(),ris));
}
}
/////////////////////CALCULATEWEIGHTS
void HProduzione::calculateWeights()
{
   QSqlQuery qPeso(db);

   sIdProdottoMaster = ui->lvRicette->model()->data(ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),0)).toString();


   //ID ingrediente, desrizione ingrediente, quantità
   QString sSql ="select righe_ricette.ID_prodotto, prodotti.descrizione, righe_ricette.quantita from ricette,prodotti,righe_ricette  where  righe_ricette.ID_ricetta = ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID_prodotto="+sIdProdottoMaster;
   QString sSql2="select sum(quantita)from righe_ricette,ricette where righe_ricette.ID_ricetta = ricette.ID and ricette.ID_prodotto=" + sIdProdottoMaster;


   qPeso.exec(sSql2);
   qPeso.next();

   double peso = qPeso.value(0).toDouble();

 //  ui->leDaFare->setText(qPeso.value(0).toString());

   double dafare = ui->leDaFare->text().toDouble();

   double factor = double(dafare/peso);

   QSqlQuery qRicetta(db);
   qRicetta.exec(sSql);
   qRicetta.next();

   int iric=qRicetta.size();
   ltm = new QStandardItemModel (iric,4);
   ltm->clear();

   float value;

   for (int ix=0;ix<iric;++ix)
   {

       value = (qRicetta.value(2).toFloat()* factor);
       QString ris = QString::number(value,'f',2);
       ltm->appendRow(createRecipeRow(qRicetta.value(0).toString(),qRicetta.value(1).toString(),ris));
       qRicetta.next();
   }

   ui->tableView->setModel(ltm);

   connect(ui->tableView->selectionModel(),SIGNAL(selectionChanged(QItemSelection,QItemSelection)), this,SLOT(productSelected()));


   ui->tableView->show();
}

int HProduzione::saveProduction()
{
   int result;

   bool save=true;
   if  (QMessageBox::question(this,QApplication::applicationName(),"Salvare questo lotto?", QMessageBox::Ok | QMessageBox::Cancel)==QMessageBox::Ok)
   {
   // per ogi riga della tavola aggiunge operazione
 //  QSqlQuery *qsaveLot = new QSqlQuery(db);
   QString sLotNew;
   QString sQty;
   QString sqt;



   sqt = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),2)).toString();
   sQty = ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),3)).toString();
qDebug()<<sqt;
   //crea nuovo lotto
   newLot=getNewLot(sIdProdottoMaster);
   qDebug()<< "getNewLot()" +sLotNew;
   int i;
   int imx=ui->tableView->model()->rowCount();
   // inizio la transazione

   db.transaction();
//salvo il nuovo lotto

qDebug()<<"Nuovo Lot=" + sLotNew;
result = addLot(newLot);

   if(result==-1)
   {
       QMessageBox::warning(this,QApplication::applicationName(),"errore salvando il nuovo lotto\nSalvataggio cancellato, transazione annullata");
       db.rollback();
       return -1;
   }

qDebug()<<"sNewLot=" + sLotNew;

//salvo le operazioni

   int id;
   QSqlQuery *qrCompLot = new QSqlQuery(db);
   QString note="";
   double quant=ui->leDaFare->text().toDouble();

   if (quant <0)
   {
       quant*= -1;
   }

       if(save==0)
       {

          id = addNewOperation(sIdProdottoMaster,newLot,note,quant,true);


          if (!id>0)
          {
              save=false;
              qDebug()<<"errore in addnewoperation()";
          }

          for (i=0;i<imx;i++)
          {

              QString prodlot =ui->tableView->model()->data(ui->tableView->model()->index(i,3)).toString();
              QString idprod = ui->tableView->model()->data(ui->tableView->model()->index(i,0)).toString();
              double quantita=ui->tableView->model()->data(ui->tableView->model()->index(i,4)).toDouble();
              qDebug()<<prodlot<<idprod<<quantita<<"imx="<<imx;
         qDebug()<<"aggiungo operazione di scarico";
             if(quantita > 0)quantita*=-1;
                  id = addNewOperation(idprod,prodlot,note,quantita,false);


                  if(!id>0)
                  {
                      db.rollback();
                      QMessageBox::warning(this,QApplication::applicationName(),"Gerrore salvando operazione\nSalvataggio cancellato");
                      return -1;

                  }

                if (save)
                {
                   // se l'operazione è salvata aggiorno composizione_lot

                  QString sCompLot="INSERT into composizione_lot VALUES('" + sLotNew + "'," + QString::number(id) + ")";
                  qDebug() << sCompLot << sLotNew;
                  save = qrCompLot->exec(sCompLot);
                  qDebug()<< qrCompLot->lastError().text()<<qrCompLot->lastQuery()<<"riga:600";

                }
                else
                {
                    qDebug()<<qrCompLot->lastError().text()<<qrCompLot->lastQuery();
                    QMessageBox::warning(this,QApplication::applicationName(),"errore salvando in composizione_lot\nSalvataggio cancellato");

                    db.rollback();
                    return -1;
                }


              }
           }
           else
           {
               QMessageBox::warning(this,QApplication::applicationName(),"errore salvando una operazione\nSalvataggio cancellato");
               db.rollback();
               return -1;
           }

       db.commit();
       QMessageBox::information(this,QApplication::applicationName(),"Lotto Salvato correttamente");


        }
}

void HProduzione::getRecipesForClient()
{
    QString idcliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toString();
 //   QString qs="SELECT select prodotti.ID,ricette.ID,prodotti.descrizione from ricette,associazioni,prodotti,anagrafica where prodotti.ID=ricette.ID_prodotto and ricette.ID=associazioni.ID_ricetta and associazioni.ID_cliente=anagrafica.ID	and associazioni.ID_cliente="+idcliente;
  QString qs="select ricette.ID,prodotti.ID,prodotti.descrizione from prodotti, ricette, associazioni where ricette.ID=associazioni.ID_ricetta and prodotti.ID=ricette.ID_prodotto and associazioni.visualizza=1 and associazioni.ID_cliente="+idcliente;
    QSqlQuery q(db);
    qmRicette=new QSqlQueryModel();

    q.exec(qs);

    qDebug()<<q.lastError().text();

    qmRicette->setQuery(q);

    ui->lvRicette->setModel(qmRicette);
    ui->lvRicette->setModelColumn(2);

    //connect(ui->lvRicette->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getRecipe()));
    connect(ui->lvRicette->selectionModel(),SIGNAL(selectionChanged(QItemSelection,QItemSelection)), this,SLOT(recipeSelected()));
}

void HProduzione::getRecipe()
{

}

void HProduzione::on_pushButton_6_clicked()
{
 int result=saveProduction();

 if (result==0)
 {
     QMessageBox::information(this,QApplication::applicationName(),"Operazione salvata correttamente",QMessageBox::Ok);
 }
 else
 {
     QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando la produzione",QMessageBox::Ok);
 }


}



void HProduzione::on_pushButton_2_clicked()
{

   if(ui->leLotToAdd->text().length()==0)
   {

    QModelIndex index = ui->tableView->model()->index(ui->tableView->currentIndex().row(),3);
    ui->tableView->model()->setData(index,ui->leLot->text(),Qt::EditRole);

   }
   else
   {

       addProductionRow();

   }


    ui->leLotToAdd->setText("");
    ui->leQtyToAdd->setText("");

}

void HProduzione::addProductionRow()
{
    QList<QStandardItem*> list;
    QStringList itemcaption;

    //0: idprodotto
    //1: desc prodotto
    //2: peso da aggiungere (ricetta)
    //3: lot da aggiungere (lavorazione)
    //4: peso da aggiungere (lavorazione)

    QString lot=ui->leLotToAdd->text();
    QString pid=getProdId(lot);

    QSqlQuery  qr(db);

    qr.exec("select descrizione from prodotti where ID="+pid);
    qr.next();
    QSqlRecord r=qr.record();


    itemcaption.append(getProdId(lot));
    itemcaption.append(qr.value(0).toString());
    itemcaption.append("");
    itemcaption.append(ui->leLotToAdd->text());
    itemcaption.append(QString::number(ui->leQtyToAdd->text().toDouble(),'f',2));


    list.append(new QStandardItem(itemcaption.at(0)));
    list.append(new QStandardItem(itemcaption.at(1)));
    list.append(new QStandardItem(itemcaption.at(2)));
    list.append(new QStandardItem(itemcaption.at(3)));
    list.append(new QStandardItem(itemcaption.at(4)));

    QModelIndex ix=ui->tableView->currentIndex();

    ltm->insertRow(ix.row(),list);
}

int HProduzione::getProdIDint(QString lot)
{
    QStringList list=lot.split("-");
    QString sid=list.at(1);
    int i=sid.toInt();
    return i;
}

QString HProduzione::getProdId(QString lot)
{
    QStringList list=lot.split("-");
    QString sid=list.at(1);

    return sid;

}



/*void HProduzione::on_pushButton_7_clicked()
{
    HPrint* f = new HPrint();
    f->show();

}*/

void HProduzione::on_pushButton_3_clicked()
{
    if (QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?")==QMessageBox::Yes)
    {
    this->close();
    }
}

void HProduzione::onConnectionNameSet()
{
    setupForm();
}



void HProduzione::on_lvRicette_clicked(const QModelIndex &index)
{

}


void HProduzione::on_leDaFare_returnPressed()
{
    calculateWeights();
}

void HProduzione::howManyLastLotsModel()
{

    ui->cbQuantiItem->addItem("Ultimi 5 lot",QVariant(5));
    ui->cbQuantiItem->addItem("Ultimi 10 lot",QVariant(10));
    ui->cbQuantiItem->addItem ("Tutti i lot",QVariant(-1));
}

void HProduzione::on_cbQuantiItem_currentIndexChanged(const QString &arg1)
{
    int num=ui->cbQuantiItem->currentData().toInt();

    if(num >0)
    {
        sQuantiLots=" LIMIT " + ui->cbQuantiItem->currentData().toString();
    }
    else
    {
        sQuantiLots="";
    }

   // lastFiveLots();
    qDebug()<<sQuantiLots;
}

void HProduzione::on_cbUsaSublienti_toggled(bool checked)
{

    ui->cbSubClienti->setEnabled(checked);

}
