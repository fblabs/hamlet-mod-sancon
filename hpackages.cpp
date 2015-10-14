#include "hpackages.h"
#include "ui_hpackages.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QCompleter>
#include <QSqlError>
#include <QMessageBox>
//#include <QDebug>

HPackages::HPackages(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HPackages)
{
    ui->setupUi(this);
}

HPackages::~HPackages()
{
    delete ui;
}

void HPackages::init(QString conn,QString user)
{
    db=QSqlDatabase::database(conn);
    sConn=conn;
    userid=user;

    tmClienti=new QSqlTableModel(0,db);
    tmProdotti = new QSqlTableModel(0,db);
    tmUnitaMisura = new QSqlTableModel(0,db);

    tmClienti->setTable("anagrafica");
    tmClienti->setFilter("cliente=1");
    tmClienti->setSort(1,Qt::AscendingOrder);
    tmClienti->select();

    QSqlTableModel *tmLots=new QSqlTableModel(0,db);
    tmLots->setTable("lotdef");
    tmLots->setFilter("attivo=1");
    tmLots->setSort(3,Qt::DescendingOrder);
    tmLots->select();
    QCompleter *clots=new QCompleter(tmLots);
    clots->setCompletionColumn(1);
    clots->setCaseSensitivity(Qt::CaseInsensitive);
    ui->leComponente->setCompleter(clots);

    ui->cbClienti->setModel(tmClienti);
    ui->cbClienti->setModelColumn(1);

    tmProdotti->setTable("prodotti");
    tmProdotti->setFilter("tipo=2");
    tmProdotti->setSort(1,Qt::AscendingOrder);
    tmProdotti->select();
    tmUnitaMisura->setTable("unita_di_misura");
    tmUnitaMisura->setSort(1,Qt::AscendingOrder);
    tmUnitaMisura->select();
    ui->cbProdotti->setModel(tmProdotti);
    ui->cbProdotti->setModelColumn(1);
    ui->cbQua->setModel(tmUnitaMisura);
    ui->cbQua->setModelColumn(1);

    compClienti=new QCompleter();
    compProdotti=new QCompleter();

    compClienti->setModel(tmClienti);
    compProdotti->setModel(tmProdotti);
    compClienti->setCaseSensitivity(Qt::CaseInsensitive);
    compProdotti->setCaseSensitivity(Qt::CaseInsensitive);
    compClienti->setCompletionColumn(1);
    compProdotti->setCompletionColumn(1);
    compClienti->setCompletionMode(QCompleter::PopupCompletion);
    compProdotti->setCompletionMode(QCompleter::PopupCompletion);

    ui->cbClienti->setCompleter(compClienti);
    ui->cbProdotti->setCompleter(compProdotti);
    ui->dateEdit->setDate(QDate::currentDate().addYears(2));

    ui->lvSubclienti->setVisible(false);
    connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(filterProducts()));
    connect(ui->cbProdotti,SIGNAL(currentIndexChanged(int)),this,SLOT(createNewLot()));

    ui->pbAnnulla->setEnabled(false);
    ui->pbCrea->setEnabled(true);
    ui->leComponente->setEnabled(false);
    ui->leQuantita->setEnabled(false);
    ui->pbAddRow->setEnabled(false);
    ui->pbRemoveRow->setEnabled(false);
    ui->cbProdotti->setCurrentIndex(0);
    ui->checkBox_2->setVisible(false);

}

void HPackages::filterProducts()
{
  QString idcliente;
  if(ui->checkBox_2->isChecked() && ui->lvSubclienti->model()->rowCount()>0)
  {
      idcliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->selectionModel()->currentIndex().row(),0).data(0).toString();

  }
  else
  {
      idcliente=tmClienti->index(ui->cbClienti->currentIndex(),0).data(0).toString();
  }


    tmProdotti->setFilter("ID in (SELECT ricette.ID_prodotto FROM ricette, associazioni where ricette.ID=associazioni.ID_ricetta and associazioni.ID_cliente="+idcliente +")");
    ui->cbProdotti->setCurrentIndex(0);

}

void HPackages::getSubclients()
{

   int cliente;

   bool mostrasubclienti=ui->checkBox->isChecked();
   bool filtrapersub=ui->checkBox_2->isChecked();

   cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();

   QSqlQueryModel *subclients=new QSqlQueryModel();
   QSqlQuery q(db);
   QString sql="SELECT ID, ragione_sociale FROM anagrafica WHERE IDCliente=:id and subcliente=1";
   q.prepare(sql);
   q.bindValue(":id",QVariant(cliente));
   if (q.exec())
   {
   subclients->setQuery(q);
   ui->lvSubclienti->setModel(subclients);
   ui->lvSubclienti->setModelColumn(1);
   }
   else
   {
       ui->lvSubclienti->setVisible(false);
       ui->checkBox_2->setVisible(false);
       ui->checkBox_2->setChecked(false);
   }

   if (subclients->rowCount()>0 && mostrasubclienti)
   {
       ui->checkBox_2->setVisible(true);
       ui->lvSubclienti->setVisible(true);
   }
   else
   {
       ui->lvSubclienti->setVisible(false);

   }

   if(filtrapersub)
   {
        connect(ui->lvSubclienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(filterProducts()));
        filterProducts();
   }
   else
   {
       disconnect(ui->lvSubclienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(filterProducts()));
       filterProducts();

   }


}

void HPackages::on_checkBox_toggled(bool checked)
{
    if (checked) //se il cliente ha suclienti li mostro e li connetto allo slot
    {
        connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(getSubclients()));

    }
    else
    {
        disconnect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(getSubclients()));
        ui->lvSubclienti->setVisible(false);
        ui->checkBox_2->setVisible(false);
        ui->checkBox_2->setChecked(false);

    }

}

void HPackages::on_pushButton_4_clicked()
{
    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
    {
       close();
    }
}

void HPackages::createNewLotInterno()
{
    QSqlQuery q(db);
    int idprodotto= ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();

    QString sql;
    QString nlot;

   sql="select createID(:p)";
   q.prepare(sql);
   q.bindValue(":p",QVariant(idprodotto));

   q.exec();
   q.first();

   nlot=q.value(0).toString();

   ui->leNewLot->setText(nlot);
}

void HPackages::createNewLot()
{

    QSqlQuery q(db);
    int idprodotto= ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();
    int anagrafica=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    QString sql;
    QString ean;

    QString n;

   sql="select count(*)+1 from lotdef where prodotto=:p and anagrafica=:a and year(data)=year(now()) and tipo=4";//tipo=package
   q.prepare(sql);
   q.bindValue(":p",QVariant(idprodotto));
   q.bindValue (":a",QVariant(anagrafica));

   q.exec();
   q.first();

   n=q.value(0).toString();

   if (n.length()<2)
   {
       ean="L0";
   }
   else
   {
       ean="L";
   }

   ean.append(n);

    ui->leLest->setText(ean);




}

void HPackages::on_pbCrea_clicked()
{
    createNewLot();
    createNewLotInterno();
    mod=new QStandardItemModel();
    ui->tvPack->setModel(mod);
    ui->tvPack->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->pbCrea->setEnabled(false);
    ui->pbAnnulla->setEnabled(true);

    ui->leComponente->setEnabled(true);
    ui->leQuantita->setEnabled(true);
    ui->pbAddRow->setEnabled(true);
    ui->pbRemoveRow->setEnabled(true);
}

int HPackages::getIdProdotto(QString lotto)
{
  //  QString lotto = ui->leComponente->text();
    QStringList list;
    list=lotto.split('-');
    if (list.size()<3) return -1;
    QString idprod= list.at(1);

    int idp=idprod.toInt();

    return idp;
}

QString HPackages::getDescProdotto(QString lotto)
{
    QSqlQuery *q=new QSqlQuery(db);

    QString sql;

    int id=getIdProdotto(lotto);



    sql="SELECT descrizione FROM prodotti WHERE id=:id";

    q->prepare(sql);
    q->bindValue(":id",QVariant(id));

    q->exec();
    q->first();
    return q->value(0).toString();

}

int HPackages::getIdLotto(QString lotto)
{
    QSqlQuery q(db);
    QString sql;

    sql="SELECT ID from lotdef WHERE lot=:lotto";
    q.prepare(sql);
    q.bindValue(":lotto",lotto);
    q.exec();
    q.first();

    return q.value(0).toInt();

}

QList<QStandardItem*> HPackages::addRow( QString idprod,QString sDescProdotto,QString idlotto,QString sLotto,QString sQuantita)
{



        QList<QStandardItem*> fields;



        QStandardItem *idprodotto=new QStandardItem(idprod);
        QStandardItem *descr=new QStandardItem(sDescProdotto);
        QStandardItem *idltt=new QStandardItem(idlotto);
        QStandardItem *lotto=new QStandardItem(sLotto);
        QStandardItem *quantita= new QStandardItem(sQuantita);


        fields <<idprodotto<<descr<<idltt<<lotto<<quantita;


        return fields;


}


void HPackages::on_pbAddRow_clicked()
{
    QString lotto =ui->leComponente->text();
    int idlotto=getIdLotto(lotto);
    QString desc=getDescProdotto(lotto);
    int idprod=getIdProdotto(lotto);
   if(checkLot(lotto))
   {
        if(ui->leComponente->text().size()>4 && ui->leQuantita->text().toDouble() >0)
       {
         mod->appendRow(addRow(QString::number(idprod),getDescProdotto(lotto),QString::number(getIdLotto(lotto)),lotto,ui->leQuantita->text().trimmed()));
         ui->leComponente->setText("");
         ui->leQuantita->setText(getDescProdotto(ui->leQuantita->text().trimmed()));
       }
   }
   else
   {
       QMessageBox::warning(this,QApplication::applicationName(),"Il lotto non esiste. Può essere un errore di inserimento",QMessageBox::Ok);

   }


}

bool HPackages::checkLot(QString lot)
{
    QSqlQuery q(db);
    QString sql;

    sql="SELECT count(ID) FROM lotdef where lot=:lot";


    q.prepare(sql);
    q.bindValue(":lot",QVariant(lot));
    q.exec();
    q.first();

    int count=q.value(0).toInt();

    if (count >0)
        return true;
    else
        return false;

}

void HPackages::on_pbRemoveRow_clicked()
{
    mod->removeRow(ui->tvPack->selectionModel()->currentIndex().row());
}

void HPackages::on_checkBox_2_toggled(bool checked)
{
    if(checked)
    {
        connect(ui->lvSubclienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(filterProducts()));
        filterProducts();
    }
    else
    {
        disconnect(ui->lvSubclienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(filterProducts()));

    }
    ui->cbProdotti->setCurrentIndex(0);
}

int HPackages::getLastId()
{

    QSqlQuery q(db);
    QString sql="SELECT last_insert_id();";
    q.prepare(sql);
    q.exec();

    q.first();

    return q.value(0).toInt();
}

bool HPackages::saveLot(QString lotto)
{
     bool b;
db.transaction();
    //1. creazione lotto in lotdef

    b=saveNewLotInLotdef(lotto);

   if(!b)
   {
       db.rollback();
       return false;

   }
   int nlotid=getLastId();


    //2.salvo l'operazione di carico del lotto (operazione)

   b=chargeNewLot(nlotid);

   if(!b)
   {
       db.rollback();
       return false;
   }

//3.se il lotto è caricato, scarico i componenti

   b=unloadNewLotComponents(nlotid);

    if(!b)
    {
        db.rollback();
        return false;
    }

//4.salvo lo scarico in composizione_lot


        db.commit();
     return true;

}

bool HPackages::saveNewLotInLotdef(QString lotto)
{
    QSqlQuery q(db);
    QString sql;
    bool b;



    QString idp=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toString();

    sql="INSERT INTO `lotdef`(`lot`,`prodotto`,`data`,`giacenza`,`um`,`scadenza`,`anagrafica`,`EAN`,`tipo`,`attivo`) values (:lot,:prodotto,:data,:giacenza,:um,:scadenza,:anagrafica,:ean,4,1)";
    q.prepare(sql);
    q.bindValue(":lot",QVariant(lotto));
    q.bindValue(":prodotto",QVariant(idp));
    q.bindValue(":data",QVariant(QDateTime::currentDateTime()));
    q.bindValue(":giacenza",QVariant(ui->leQuantLot->text()));
    q.bindValue(":um",QVariant(1));
    q.bindValue(":scadenza",QVariant(ui->dateEdit->date()));
    q.bindValue(":anagrafica",QVariant(ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0)));
    q.bindValue(":ean",QVariant(ui->leLest->text()));

    b = q.exec();

//qDebug()<<"saveNewLot"<<q.lastError().text();


    return b;
}

bool HPackages::chargeNewLot(int id)
{
    QSqlQuery q(db);
    QString sql;
    QString quant=ui->leQuantLot->text();
    QString note=ui->teNote->toPlainText();
    QString lotto=ui->leNewLot->text();

    int idp =getIdProdotto(lotto);



    bool b;


         sql="INSERT INTO `operazioni` (`IDlotto`,`data`,`utente`, `IDprodotto`,`azione`,`quantita`,`um`,`note`) VALUES (:lot,:data,:utente,:idprodotto,:azione,:quantita,:um,:note)";
         q.prepare(sql);

         q.bindValue(":lot",id);
         q.bindValue(":data",QVariant(QDateTime::currentDateTime()));
         q.bindValue(":utente",QVariant(userid));
         q.bindValue(":idprodotto",QVariant(idp));
         q.bindValue(":azione",QVariant(1));
         q.bindValue(":quantita",QVariant(quant));
         q.bindValue(":um",QVariant(1));
         q.bindValue(":note",QVariant(note));

         b=q.exec();

         //qDebug()<<q.lastError().text()<<q.lastInsertId().toString()<<QString::number(idp);



      return b;


}

bool HPackages::unloadNewLotComponents(int nlot)
{
    bool b;
    QSqlQuery q(db);
    QString sql;
    QString lot;

    int lotdascaricare;
    int prodottodascaricare;
    int azione=2;
    int operazione;

    for (int row=0;row<ui->tvPack->model()->rowCount();row++)
    {
         lotdascaricare=ui->tvPack->model()->index(row,2).data(0).toInt();
         prodottodascaricare=ui->tvPack->model()->index(row,0).data(0).toInt();


        sql="INSERT INTO `operazioni` (`IDlotto`,`data`,`utente`, `IDprodotto`,`azione`,`quantita`,`um`) VALUES (:idlot,:data,:utente,:idprodotto,:azione,:quantita,:um)";



        q.prepare(sql);

        q.bindValue(":idlot",ui->tvPack->model()->index(row,2).data(0));
        q.bindValue(":data",QDateTime::currentDateTime());
        q.bindValue(":utente",QVariant(userid));
        q.bindValue(":idprodotto",QVariant(prodottodascaricare));
        q.bindValue(":azione",QVariant(azione));
        q.bindValue(":quantita",ui->tvPack->model()->index(row,4).data(0));
        q.bindValue(":um",QVariant(1));

        b=q.exec();
//  qDebug()<<"unload"<<q.lastError().text()<<q.boundValue(3).toString()<<QString::number(prodottodascaricare);

   operazione=q.lastInsertId().toInt();
   sql="insert into composizione_lot (id_lotto,operazione) values (:nlot,:operazione)";
   q.prepare(sql);
   q.bindValue(":nlot",QVariant(nlot));
   q.bindValue(":operazione",QVariant(operazione));
   b=q.exec();

//   qDebug()<<q.lastError().text()<<q.lastInsertId().toString();
        if (!b)return false;

    }



    return b;


}




void HPackages::on_pushButton_3_clicked()
{

bool b;

    if(QMessageBox::question(this,QApplication::applicationName(),"Salvare il nuovo lotto?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

       db.transaction();
       b=saveLot(ui->leNewLot->text());


        if(b)
        {
            db.commit();
            QMessageBox::information(this,QApplication::applicationName(),"Lotto salvato",QMessageBox::Ok);

        }
        else
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando il nuovo lotto",QMessageBox::Ok);

        }

    }



}

void HPackages::on_pbAnnulla_clicked()
{
    ui->tvPack->setModel(0);
    ui->pbAnnulla->setEnabled(false);
    ui->pbCrea->setEnabled(true);
    ui->leComponente->setEnabled(false);
    ui->leQuantita->setEnabled(false);
    ui->pbAddRow->setEnabled(false);
    ui->pbRemoveRow->setEnabled(false);
}

