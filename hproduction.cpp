#include "hproduction.h"
#include "ui_hproduction.h"

#include <QSqlDatabase>
#include <QSqlquery>

#include <QDebug>
#include <QSqlError>
#include <QDateTime>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QModelIndex>
#include <QSqlRecord>
#include <QCompleter>
#include "hprint.h"
#include <QTextTable>
#include <QSqlQueryModel>

HProduction::HProduction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HProduction)
{
    ui->setupUi(this);
}

HProduction::~HProduction()
{
    delete ui;
}
void HProduction::getSubclients()
{
    QSqlQueryModel *qm=new QSqlQueryModel();
    int cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    QSqlQuery q(db);
    QString sql="SELECT ID,ragione_sociale from anagrafica where IDCliente=:id";

    q.prepare(sql);
    q.bindValue(":id",QVariant(cliente));
    q.exec();
    qm->setQuery(q);
    //qDebug()<<q.lastError().text()<<QString::number(qm->rowCount());
    ui->lvSubclienti->setModel(qm);
    ui->lvSubclienti->setModelColumn(1);
    if (qm->rowCount()>0)
    {


        connect(ui->lvSubclienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getRecipesForClient()));

    }
    else
    {

        disconnect(ui->lvSubclienti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getRecipesForClient()));

    }



}
void HProduction::init(QString conn, QString userid)
{

    sConn=conn;
    userID=userid;
    modifyLot=false;


     db=QSqlDatabase::database(sConn);

     tmTipiLotti=new QSqlTableModel(0,db);
     tmTipiLotti->setTable("tipi_lot");
     tmTipiLotti->select();
     tmTipiLotti->setFilter("ID=3");
     tmTipiLotti->setSort(1,Qt::AscendingOrder);

     ui->cbTipoLotto->setModel(tmTipiLotti);
     ui->cbTipoLotto->setModelColumn(1);
     ui->cbTipoLotto->setEnabled(true);

     tmUm=new QSqlTableModel(0,db);
     tmUm->setTable("unita_di_misura");
     tmUm->select();
     tmUm->setSort(1,Qt::AscendingOrder);

     ui->cbUm->setModel(tmUm);
     ui->cbUm->setModelColumn(1);


     getClients();
     ui->cbClienti->setCurrentIndex(ui->cbClienti->model()->rowCount());
     ui->cbClienti->setCurrentIndex(0);



     ui->tableView->setEnabled(false);
     ui->lvRicette->setEnabled(true);
   //  ui->leQtyTotal->setReadOnly(true);
     ui->lvSubclienti->setVisible(false);

     ui->cbQuanti->addItem("Tutti",100000);
     ui->cbQuanti->addItem("Ultimi 5 lotti",5);
     ui->cbQuanti->addItem("Ultimi 10 lotti",10);
     ui->cbQuanti->addItem("Ultimi 50 lotti",50);
     ui->cbQuanti->setCurrentIndex(1);

     ui->leQtyTotal->setEnabled(true);
     ui->pushButton_5->setVisible(true);
     ui->pushButton_6->setVisible(false);
     ui->pushButton->setEnabled(false);
     ui->pushButton_2->setEnabled(false);
     ui->pushButton_7->setEnabled(false);
     ui->label->setVisible(false);
     ui->cbQuanti->setVisible(false);
     ui->lvLastLots->setVisible(false);
     ui->leNuovoLot->setText("");
     ui->label_4->setVisible(false);
     ui->label_6->setVisible(true);
     ui->label_2->setVisible(false);
     ui->leqtytoAdd->setVisible(false);
     ui->leLotToadd->setVisible(false);
    // ui->cbTipoLotto->setVisible(true);
     ui->pbAddLottoFuoriRicetta->setVisible(false);

    // ui->lvRicette->setCurrentIndex(ui->lvRicette->model()->index(ui->lvRicette->model()->rowCount()-1,0));
    // ui->lvRicette->setCurrentIndex(ui->lvRicette->model()->index(0,0));

     ui->dateEdit->setDate(QDate::currentDate().addYears(2));

     setAddProductFuoriRicettaUI(false);


     connect(ui->cbQuanti,SIGNAL(currentIndexChanged(int)),this,SLOT(lastFiveLots()));
     connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(getSubclients()));

     ui->lvRicette->setCurrentIndex(ui->lvRicette->model()->index(0,1));


}

void HProduction::getLotModel()
{
    QSqlTableModel *lm=new QSqlTableModel(0,db);
    lm->setTable("lotdef");
    QCompleter *comp=new QCompleter(lm);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setCompletionColumn(1);
    lm->setSort(3,Qt::DescendingOrder);
    lm->select();
    ui->leLotToEdit->setCompleter(comp);

}

void HProduction::recalculateTotal()
{
    QStandardItemModel *model=static_cast<QStandardItemModel*>(ui->tableView->model());
    double quantita;

    for (int x=0;x<model->rowCount();x++)
    {
        quantita += model->index(x,2).data(0).toDouble();
        //qDebug()<<QString::number(quantita,'f',4);
    }

    ui->leQtyTotal->text()=QString::number(quantita,'f',2);

}

void HProduction::updateTotals()
{
    double dafare = ui->leQtyTotal->text().toDouble();
    double sommarighe=0;
    double factor=0;
    double result=0;
    QStandardItemModel* model=static_cast<QStandardItemModel*>(ui->tableView->model());

    for (int x=0;x<model->rowCount();x++)
    {
       sommarighe += model->index(x,2).data(0).toDouble();

    }


    factor = dafare / sommarighe;

    for (int j=0;j<model->rowCount();j++)
    {
       QModelIndex i = model->index(j,2);
       result =i.data().toDouble()* factor;
       QString resulttoadd=QString::number(result,'f',4);
       model->setData(i,QVariant(resulttoadd));

    }


}



void HProduction::lastFiveLots()
{
    QSqlQuery qlots(db);
    QSqlQueryModel *qmLots =new QSqlQueryModel();
    int prd =ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0)).toInt();
    int quanti=ui->cbQuanti->currentData().toInt();

    QString sql="select ID,lot from lotdef where prodotto=:prd and attivo=1 ORDER by data DESC LIMIT :quanti";
    qlots.prepare(sql);
    qlots.bindValue(":prd",QVariant(prd));
    qlots.bindValue(":quanti",QVariant(quanti));
    qlots.exec();
    qmLots->clear();
    qmLots->setQuery(qlots);

    //qDebug()<<"lastfivelots"<<qlots.lastError().text();



   // disconnect(ui->lvLastLots->selectionModel(),SIGNAL(selectionChanged(QItemSelection,QItemSelection)),this,SLOT(lotSelected()));
    ui->lvLastLots->clearSelection();
    ui->lvLastLots->setModel(qmLots);
    ui->lvLastLots->setModelColumn(1);




 // ui->lvLastLots->setCurrentIndex();
 // ui->lvLastLots->setCurrentIndex(ui->lvLastLots->model()->index(-1,0));

 // int cols=qmLots->columnCount();
 // qmLots->insertColumns(cols,2);


   connect(ui->lvLastLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(lotSelected()));
 //connect(ui->lvLastLots->model(),SIGNAL(dataChanged(QModelIndex,QModelIndex)),this,SLOT(lotSelected()));

}

void HProduction::getClients()
{
    QSqlQuery q(db);
    qmClienti=new QSqlQueryModel();

    QString sql="SELECT ID,ragione_sociale from anagrafica where cliente=1 or subcliente=1 order by ragione_sociale ASC";

    q.exec(sql);

    qmClienti->setQuery(q);

    //qDebug()<<q.lastError().text();

    ui->cbClienti->setModel(qmClienti);
    ui->cbClienti->setModelColumn(1);

    connect(ui->cbClienti,SIGNAL(currentIndexChanged(int)),this,SLOT(getRecipesForClient()));
    ui->cbClienti->setCurrentIndex(0);
    QCompleter *cmp=new QCompleter(qmClienti);
    cmp->setCompletionColumn(1);
    cmp->setCompletionMode(QCompleter::PopupCompletion);
    cmp->setCaseSensitivity(Qt::CaseInsensitive);
    ui->cbClienti->setCompleter(cmp);
}
void HProduction::getLotToModify(QString lot)
{

    ui->tableView->setEnabled(true);
    ui->lvRicette->setEnabled(false);

    ui->pushButton_5->setVisible(false);
    ui->pushButton_6->setVisible(true);
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->label->setVisible(true);
    ui->cbQuanti->setVisible(true);
    ui->lvLastLots->setVisible(true);
    ui->leQtyTotal->setReadOnly(false);
    ui->leQtyTotal->setEnabled(true);
    ui->cbTipoLotto->setEnabled(false);


    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);

    double quantitatotale;
    QStandardItemModel *model=new QStandardItemModel();
   // QString lot;
    //ricavo lo id del lotto
    QSqlQuery k(db);
    int idlotto;
    QString sqlot="SELECT ID from lotdef where lot=:lot";
    k.prepare(sqlot);
    k.bindValue(":lot",QVariant(lot));
    k.exec();
    k.first();
    lottomodifica=k.value(0).toInt();
    //qDebug()<<"idlotto="<<QString::number(idlotto);


    //QString sql="SELECT operazioni.IDProdotto,prodotti.descrizione,operazioni.quantita,lotdef.ID,lotdef.lot from operazioni,prodotti,lotdef  where operazioni.IDprodotto=prodotti.ID and lotdef.ID=operazioni.IDlotto and operazioni.ID in (select operazione from composizione_lot where ID_lotto=:idlotto)";
    QString sql="SELECT operazioni.IDProdotto,prodotti.descrizione,operazioni.quantita,lotdef.ID,lotdef.lot,operazioni.ID from operazioni,prodotti,lotdef where operazioni.IDprodotto=prodotti.ID and operazioni.ID and lotdef.ID=operazioni.IDlotto and operazioni.ID in (select operazione from composizione_lot where ID_lotto=:idlotto)";
    k.prepare(sql);
    k.bindValue(":idlotto",QVariant(lottomodifica));
    k.exec();
//qDebug()<< k.lastError().text()<<k.lastQuery();

    model = new QStandardItemModel(0,7);

    model->setHeaderData(0,Qt::Horizontal,"ID prodotto",0);
    model->setHeaderData(1,Qt::Horizontal,"Prodotto",0);
    model->setHeaderData(2,Qt::Horizontal,"Quantità",0);
    model->setHeaderData(3,Qt::Horizontal,"ID lotto",0);
    model->setHeaderData(4,Qt::Horizontal,"Lotto",0);
    model->setHeaderData(5,Qt::Horizontal,"Quantità",0);


    quantitatotale=0.0;

  //  q.first();
    while(k.next())
    {

       quantitatotale +=k.value(2).toDouble();
     //  model->appendRow(createRecipeRow(q.value(1).toString(),q.value(2).toString(),QString::number(q.value(3).toDouble(),'f',2),"","pippo"));
        QList<QStandardItem*> columns;
     //   QStandardItem* IDriga=new QStandardItem(q.value(0).toString());

        QStandardItem* ID_prodotto=new QStandardItem(k.value(0).toString());
        QStandardItem* prodotto=new QStandardItem(k.value(1).toString());
        QStandardItem* quantita=new QStandardItem(QString::number(k.value(2).toDouble(),'f',4));
        QStandardItem* idlotto=new QStandardItem(k.value(3).toString());
        QStandardItem* lotto=new QStandardItem(k.value(4).toString());
        QStandardItem* quanteff=new QStandardItem(k.value(2).toString());
        QStandardItem* IDriga=new QStandardItem (k.value(5).toString());


        //columns.append(IDLotto);

        columns.append(ID_prodotto);
        columns.append(prodotto);
        columns.append(quantita);
        columns.append(idlotto);
        columns.append(lotto);
        columns.append(quanteff);
        columns.append(IDriga);

        model->appendRow(columns);

    }

    ui->leQtyTotal->setText(QString::number(quantitatotale,'f',2));

   // qmrighe->setQuery(q);
    ui->tableView->setModel(model);
    //ui->tableView->horizontalHeader()->setStretchLastSection(true);
   // ui->tableView->resizeColumnsToContents();
     ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

   // connect(ui->lvRicette->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(updateTotals()));                                                                                                 );
    connect(ui->tableView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(productSelected()));
     connect(ui->tableView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(updateTotals()));


}

void HProduction::getRecipesForClient()
{
    int idcliente;
    if (ui->checkBox->isChecked())
    {
        idcliente=ui->lvSubclienti->model()->index(ui->lvSubclienti->currentIndex().row(),0).data(0).toInt();
    }
    else
    {
        idcliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    }



 //   QString qs="SELECT select prodotti.ID,ricette.ID,prodotti.descrizione from ricette,associazioni,prodotti,anagrafica where prodotti.ID=ricette.ID_prodotto and ricette.ID=associazioni.ID_ricetta and associazioni.ID_cliente=anagrafica.ID and associazioni.ID_cliente="+idcliente;
  QString qs="select ricette.ID,prodotti.ID,prodotti.descrizione from prodotti, ricette, associazioni where ricette.ID=associazioni.ID_ricetta and prodotti.ID=ricette.ID_prodotto and associazioni.visualizza=1 and associazioni.visualizza=1 and associazioni.ID_cliente=:idcliente";
    QSqlQuery q(db);
    q.prepare(qs);
    q.bindValue(":idcliente",QVariant(idcliente));

    qmRicette=new QSqlQueryModel();

    q.exec();

    //qDebug()<<q.lastError().text();

    qmRicette->setQuery(q);

    ui->lvRicette->setModel(qmRicette);
    ui->lvRicette->setModelColumn(2);
    
    connect(ui->lvRicette->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getRecipe()));
}

void HProduction::getRecipe()
{
    //selezionato un prodotto ne prendo la ricetta


    int idricetta=ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),0).data(0).toInt();

    //note

  //  connect(ui->tableView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(findProduct()));
    // tmOperazioni->setHeaderData(8,Qt::Horizontal,QObject::tr("Note"));

    ui->tableView->horizontalHeader()->resizeSections(QHeaderView::Stretch);

    //note

    QSqlQuery n(db);
    QString sql2;
    sql2="SELECT ricette.note from prodotti,ricette where prodotti.ID=ricette.ID_prodotto and ricette.ID=:idricetta";
    n.prepare(sql2);
    n.bindValue(":idricetta",QVariant(idricetta));
    n.exec();
    n.first();
    ui->textBrowser->setText(n.value(0).toString());
    ui->lbRicetta->setText(ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),2).data(0).toString());


    //--------------------




    //QString idprodotto,descrizione,quantita,lotto,quantitaeffettivadaaggiungere;


    QStandardItemModel *model=new QStandardItemModel();

    //QString sql="SELECT righe_ricette.ID,righe_ricette.ID_prodotto,righe_ricette.ID_ricetta,prodotti.descrizione,righe_ricette.quantita FROM righe_ricette,prodotti WHERE prodotti.ID=righe_ricette.ID_prodotto AND righe_ricette.ID_ricetta=:idricetta AND righe_ricette.show_prod=1 ORDER BY righe_ricette.quantita DESC";
  //  QString sql="SELECT distinct righe_ricette.ID,righe_ricette.ID_prodotto,prodotti.descrizione,righe_ricette.quantita FROM righe_ricette,prodotti WHERE prodotti.ID=righe_ricette.ID_prodotto AND righe_ricette.ID_ricetta=:idricetta AND righe_ricette.show_prod=1 ORDER BY righe_ricette.quantita DESC";
    QString sql="select distinct prodotti.ID ,prodotti.descrizione,righe_ricette.quantita from prodotti,righe_ricette where righe_ricette.ID_prodotto=prodotti.ID and righe_ricette.ID_ricetta=:idricetta order by righe_ricette.quantita desc";

    QSqlQuery q(db);
  //  QStandardItemModel *qmrighe=new QStandardItemModel();
  //  QStandardItemModel *qmrighecreate = new QStandardItemModel();
    q.prepare(sql);
    q.bindValue(":idricetta",QVariant(idricetta));

    q.exec();
    //qDebug()<<q.lastError().text();

    // int righe=q.size();

    // //qDebug()<<q.size()<<q.lastError().text();

    model = new QStandardItemModel(0,6);

    model->setHeaderData(0,Qt::Horizontal,"ID Prodotto",0);
    model->setHeaderData(1,Qt::Horizontal,"Prodotto",0);
    model->setHeaderData(2,Qt::Horizontal,"Quantità ricetta",0);
    model->setHeaderData(3,Qt::Horizontal,"ID Lotto",0);
    model->setHeaderData(4,Qt::Horizontal,"Lotto",0);
    model->setHeaderData(5,Qt::Horizontal,"Quantità aggiunta",0);


   double quantitatotale=0.0;

  //  q.first();
    while(q.next())
    {

       quantitatotale +=q.value(2).toDouble();
     //  model->appendRow(createRecipeRow(q.value(1).toString(),q.value(2).toString(),QString::number(q.value(3).toDouble(),'f',2),"","pippo"));
        QList<QStandardItem*> columns;
        /*model->setHeaderData(0,Qt::Horizontal,"ID Prodotto",0);
    model->setHeaderData(1,Qt::Horizontal,"Prodotto",0);
    model->setHeaderData(2,Qt::Horizontal,"Quantità ricetta",0);
    model->setHeaderData(3,Qt::Horizontal,"ID Lotto",0);
    model->setHeaderData(4,Qt::Horizontal,"Lotto",0);
    model->setHeaderData(5,Qt::Horizontal,"Quantità aggiunta",0);*/

        QStandardItem* ID_prodotto=new QStandardItem(q.value(0).toString());
        QStandardItem* prodotto=new QStandardItem(q.value(1).toString());
        QStandardItem* quantita=new QStandardItem(QString::number(q.value(2).toDouble(),'f',3));
        QStandardItem* IDLotto=new QStandardItem("");
        QStandardItem* lotto=new QStandardItem("");
        QStandardItem* quadd=new QStandardItem("");
      //  QStandardItem* lot=new QStandardItem();

        //columns.append(IDLotto);
        columns.append(ID_prodotto);
        columns.append(prodotto);
        columns.append(quantita);
        columns.append(IDLotto);
        columns.append(lotto);
        columns.append(quadd);


    model->appendRow(columns);

    }

    ui->leQtyTotal->setText(QString::number(quantitatotale,'f',4));

   // qmrighe->setQuery(q);
    ui->tableView->setModel(model);
    //ui->tableView->horizontalHeader()->setStretchLastSection(true);
   // ui->tableView->resizeColumnsToContents();
     ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    connect(ui->lvRicette->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(recalculateTotal()));
    connect(ui->tableView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(productSelected()));

   // ui->tableView->setColumnHidden(0,true);
  //  ui->tableView->setColumnHidden(1,true);
  //  ui->tableView->setColumnHidden(3,true);

    ui->pushButton_8->setEnabled(true);
    ui->pushButton_10->setEnabled(true);
}



void HProduction::printProduction()
{
    HPrint *f=new HPrint();

    QString title;

    title=ui->lbRicetta->text();
    title.append(" - ");
    title.append(ui->cbClienti->currentText());
    title.append(QDate::currentDate().toString(" - dd\MM\yyyy"));


    int rows=ui->tableView->model()->rowCount();
    int cols=3;

    QTextTable *table= f->addTable(rows,cols);
    QTextCursor t=f->getCursor();
    t.movePosition(QTextCursor::Start);
    f->cursorToStart();
    f->append(title,false);
    f->append("",false);
    f->cursorToEnd();
    f->append("",false);
    QString col1,col2,col3;

      for (int i=0;i<rows;i++)
        {

          col1=ui->tableView->model()->index(i,1).data(0).toString();
          col2=ui->tableView->model()->index(i,4).data(0).toString();
          col3=ui->tableView->model()->index(i,5).data(0).toString();

          f->writeTableContent(table,i,0,col1);

          f->writeTableContent(table,i,1,col2);
          f->writeTableContent(table,i,2,col3);

        }



    f->append(ui->textBrowser->toPlainText(),false);

    f->show();
}

void HProduction::printRecipe()
{
    HPrint *f=new HPrint();
    QString title;

    title=ui->lbRicetta->text();
    title.append(" - ");
    title.append(ui->cbClienti->currentText());


    int rows=ui->tableView->model()->rowCount();
    int cols=2;



    QTextCursor t=f->getCursor();
    t.movePosition(QTextCursor::Start);
    f->cursorToStart();
    f->append(title,false);
    f->append("",false);
    f->cursorToEnd();
    f->append("",false);
    QString col1,col2;

    QTextTable *table= f->addTable(rows,cols);

      for (int i=0;i<rows;i++)
        {

          col1=ui->tableView->model()->index(i,1).data(0).toString();
          col2=ui->tableView->model()->index(i,2).data(0).toString();

          f->writeTableContent(table,i,0,col1);

          f->writeTableContent(table,i,1,col2);

          f->cursorToEnd();


          }

    f->cursorToEnd();

    f->append("QUANTITA': " +ui->leQtyTotal->text(),false);

    f->cursorToEnd();







    f->append(ui->textBrowser->toPlainText(),false);


    f->show();


}

void HProduction::productSelected()
{

       lastFiveLots();
     //  connect (ui->lvLastLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(addLotProd()));


}

void HProduction::lotSelected()
{
    QString lottoadd=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),1).data(0).toString();
    QString quantita=ui->tableView->model()->index(ui->tableView->currentIndex().row(),2).data(0).toString();


    ui->leLotToadd->setText(lottoadd);
    ui->leqtytoAdd->setText(quantita);


}


void HProduction::on_pushButton_clicked()
{
    addLotProd();
}

/* QList<QStandardItem*> HProduction::addTableRow()
 {
     QList<QStandardItem*> list;

 }*/

void HProduction::addLotProd()
{


    int idlot;
    int prod;
    QString descprod;
    QString peso;
    QString lotToadd;
    QString qty;
  //  QString qp="SELECT descrizione from prodotti where ID="+prod;
   // QList<QString> list;

    QStandardItemModel *qm=static_cast<QStandardItemModel*>(ui->tableView->model());

    lotToadd=ui->leLotToadd->text();

    QModelIndex idProdotto =qm->index(ui->tableView->currentIndex().row(),0);
    QModelIndex prodotto =qm->index(ui->tableView->currentIndex().row(),1);
    QModelIndex quantita =qm->index(ui->tableView->currentIndex().row(),2);
    QModelIndex idlotto =qm->index(ui->tableView->currentIndex().row(),3);
    QModelIndex lotto =qm->index(ui->tableView->currentIndex().row(),4);
    QModelIndex quanteff =qm->index(ui->tableView->currentIndex().row(),5);

    int row=ui->tableView->currentIndex().row();


    qm->setData(idlotto,ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),0).data(0).toString());
    qm->setData(lotto,ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),1).data(0).toString());
    qm->setData(quanteff,qm->index(row,2).data(0).toString());



    ui->leLotToadd->setText("");
    ui->leqtytoAdd->setText("");
  //   qmLots->appendRow(createRecipeRow(prod));


}

void HProduction::addLotFuoriRicetta()
{
    int prod;
    QString descprod;
    QString peso;
    QString lotToadd;
    double qty;

    QList<QString> list;
    QList<QStandardItem*> row;

   // disconnect(ui->lvLastLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(lotSelected()));
    //disconnect(ui->lvLastLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(addLotProd()));
    lotToadd=ui->leLotToadd->text();



    list=lotToadd.split('-');

    prod=list.at(1).toInt();




    QSqlQuery p(db);
    QString qps="SELECT descrizione from prodotti where ID=:id";
    p.prepare(qps);
    p.bindValue(":id",QVariant(prod));

    if(p.exec())
    {
        p.first();
        descprod=p.value(0).toString();
    }

    peso=ui->leqtytoAdd->text();
    qty=ui->leqtytoAdd->text().toDouble();

    qps="SELECT ID from lotdef WHERE lot=:lot";
    p.prepare(qps);
    p.bindValue(":lot",QVariant(lotToadd));
    p.exec();
    p.first();
    int id_lotto=p.value(0).toInt();

    if (id_lotto<1)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"ERRORE\Il lotto inserito non esiste",QMessageBox::Ok);
        return;
    }


    QStandardItem *idprodotto=new QStandardItem(QString::number(prod));
    QStandardItem *prodotto=new QStandardItem(descprod);
    QStandardItem *quantita=new QStandardItem("0.0");
    QStandardItem *idlotto=new QStandardItem(QString::number(id_lotto));
    QStandardItem *lotto =new QStandardItem(lotToadd);
    QStandardItem *qua=new QStandardItem(ui->tableView->model()->index(ui->tableView->currentIndex().row(),5).data(0).toString());


    row.append(idprodotto);
    row.append(prodotto);
    row.append(quantita);
    row.append(idlotto);
    row.append(lotto);
    row.append(qua);

    QStandardItemModel *mod=static_cast<QStandardItemModel*>(ui->tableView->model());
    mod->insertRow(ui->tableView->currentIndex().row(),row);
   // connect(ui->lvLastLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(addLotProd()));
    ui->tableView->setCurrentIndex(ui->tableView->model()->index(ui->tableView->currentIndex().row()+1,0));

    ui->leLotToadd->setText("");
    ui->leqtytoAdd->setText("");

}

QString HProduction::getNewLot(int prod)
{
    QSqlQuery qLotQr(db);
    QString sLot="SELECT createID(:sprod)";
    QString ret;
    qLotQr.prepare(sLot);
    qLotQr.bindValue(":sprod",QVariant(prod));
    qLotQr.exec();
    qLotQr.first();
    ret = qLotQr.value(0).toString();

    //qDebug()<<ret;
    return ret;
}


void HProduction::on_pushButton_5_clicked()
{
    ui->tableView->setEnabled(true);
    ui->lvRicette->setEnabled(false);

    QString nlot=getNewLot(ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),1).data(0).toInt());
    ui->leNuovoLot->setText(nlot);

    ui->pushButton_5->setVisible(false);
    ui->pushButton_6->setVisible(true);
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->label->setVisible(true);
    ui->cbQuanti->setVisible(true);
    ui->lvLastLots->setVisible(true);
    ui->leQtyTotal->setReadOnly(false);
    ui->leQtyTotal->setEnabled(true);
    ui->cbTipoLotto->setEnabled(false);
    ui->checkBox->setEnabled(false);




}

void HProduction::on_pushButton_6_clicked()
{
    ui->tableView->setEnabled(false);
    ui->lvRicette->setEnabled(true);
    ui->pushButton_5->setVisible(true);
    ui->pushButton_6->setVisible(false);
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->label->setVisible(false);
    ui->cbQuanti->setVisible(false);
    ui->lvLastLots->setVisible(false);
    ui->leNuovoLot->setText("");
    ui->leQtyTotal->setReadOnly(false);
    ui->cbTipoLotto->setEnabled(true);
    ui->checkBox->setEnabled(true);
    getRecipe();
    updateTotals();
    modifyLot=false;
    ui->tableView->setModel(0);

}

bool HProduction::saveNewLot(QString lot, int prodotto)
{
    bool b;
    QSqlQuery q(db);

    //qDebug()<<lot<<prodotto<<data<<"saveNewLot()";

    QString sql="INSERT INTO `lotdef`(`lot`,`prodotto`,`data`,`giacenza`,`um`,`scadenza`,`anagrafica`,`lot_fornitore`, `EAN`, `tipo`, `attivo`,`note`) VALUES(:lot,:prodotto,:data,:giacenza,:um,:scadenza ,:anagrafica,:lotf,:ean,:tipo,:attivo,:note)";
    QString giacenza=ui->leQtyTotal->text();
    QDate scadenza=ui->dateEdit->date();
qDebug()<<scadenza.toString("yyyy-MM-dd");
    QString anagrafica=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toString();
    QString lotf="PRODUZIONE";
    QString ean="";
    QString tipo="3"/*ui->cbTipoLotto->model()->index(ui->cbTipoLotto->currentIndex(),0).data(0).toString();*/;
    QString attivo="1";
    QString um=ui->cbUm->model()->index(ui->cbUm->currentIndex(),0).data(0).toString();
    QString note=ui->tNote->toPlainText();
    QDateTime data=QDateTime::currentDateTime();

    q.prepare(sql);

    q.bindValue(":lot",QVariant(lot));
    q.bindValue(":prodotto",QVariant(prodotto));
    q.bindValue(":data",QVariant(data));
    q.bindValue(":giacenza",QVariant(giacenza));
    q.bindValue(":um",QVariant(um));
    q.bindValue(":scadenza",QVariant(scadenza));
    q.bindValue(":anagrafica",QVariant(anagrafica));
    q.bindValue(":lotf",QVariant(lotf));
    q.bindValue(":ean",QVariant(ean));
    q.bindValue(":tipo",QVariant(tipo));
    q.bindValue(":attivo",QVariant(attivo));
    q.bindValue(":note",QVariant(note));
    b = q.exec();
qDebug()<<q.boundValue(5).toString()<<q.boundValue(4).toString()<<q.boundValue(6).toString();
    if(!b)
    {
        //qDebug()<<q.lastError().text()<<q.lastQuery();
        QMessageBox::warning(this,"savenewlot",q.lastError().text()+"\n"+prodotto,QMessageBox::Ok);

    }

    return b;


}
//--saveNewLot()-------------------------------

bool HProduction::saveLotLoad(int idlotto, int prodotto)
{
qDebug()<<"SaveLotLoad()"<<QString::number(idlotto)<<QString::number(prodotto);

    QSqlQuery q(db);

    QString sql="INSERT INTO `operazioni`(`IDlotto`,`data`,`utente`,`IDprodotto`,`azione`,`quantita`,`um`)VALUES(:idl,:data,:utente,:prodotto,:azione,:quantita,:um)";


    double giacenza=ui->leQtyTotal->text().toDouble();
    int um=ui->cbUm->model()->index(ui->cbUm->currentIndex(),0).data(0).toInt();
    QDateTime data=QDateTime::currentDateTime();

    q.prepare(sql);
    q.bindValue(":idl",QVariant(idlotto));
    q.bindValue(":data",QVariant(data));
    q.bindValue(":utente",QVariant(userID));
    q.bindValue(":prodotto",QVariant(prodotto));
    q.bindValue(":azione",QVariant(1));
    q.bindValue(":quantita",QVariant(giacenza));
    q.bindValue(":um",QVariant(um));
    qDebug()<<"prima di eseguire la query di lotload";
    bool b=q.exec();
    qDebug()<<q.lastError().text()<<q.lastQuery();
    return b;
}
//--saveLotLoad()------------------------------

int HProduction::lastInsertId()
{
    QSqlQuery q(db);
    QString sql="SELECT last_insert_id();";
    q.prepare(sql);
    q.exec();

    q.first();

    return q.value(0).toInt();


}

 bool HProduction::saveOperation(int row,int action)//carico=1 - scarico= 2
 {
     QSqlQuery q(db);
     QString sql;

     QString data,note;


     int idlotto=ui->tableView->model()->index(row,3).data(0).toInt();
     int idprodotto=ui->tableView->model()->index(row,0).data(0).toInt();
     int utente=userID.toInt();
     double quant= ui->tableView->model()->index(row,5).data(0).toDouble();
     int um=ui->cbUm->model()->index(ui->cbUm->currentIndex(),0).data(0).toInt();

     data=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
     note="";


     sql="INSERT INTO `operazioni` (`IDlotto`,`data`,`utente`, `IDprodotto`,`azione`,`quantita`,`um`) VALUES (:idlotto,:data,:utente,:idprodotto,:azione,:quantita,:um)";
     q.prepare(sql);

     q.bindValue(":idlotto",QVariant(idlotto));
     q.bindValue(":data",QVariant(data));
     q.bindValue(":utente",QVariant(utente));
     q.bindValue(":idprodotto",QVariant(idprodotto));
     q.bindValue(":azione",QVariant(action));
     q.bindValue(":quantita",QVariant(quant));
     q.bindValue(":um",QVariant(um));


     bool b;

     b=q.exec();

     if(!b)
     {
        //qDebug() << q.lastError().text();
        QMessageBox::warning(this,QApplication::applicationName(),"Errore in saveOperazione(" + QString::number(row) +")\nIDlotto:"+idlotto,QMessageBox::Ok);

     }

     return b;
 }


//---saveOperation

//*----save Composizione----------------

 bool HProduction::saveComposizione(int lottotarget,int operazione)
 {
     lottotarget;
     bool b=false;

     QSqlQuery q(db);
     QString sql;

    // int operazione=lastInsertId();

//qDebug()<<"lottotarget: "<<QString::number(lottotarget)<<" operazione: "<<QString::number(operazione);
          sql="INSERT INTO composizione_lot (ID_lotto,operazione) VALUES (:lottotarget,:operazione)";
          q.prepare(sql);
          q.bindValue(":lottotarget",QVariant(lottotarget));
          q.bindValue(":operazione",QVariant(operazione));
          //qDebug()<<q.boundValue(0).toString()<<q.boundValue(1).toString();

          b=q.exec();
          //qDebug()<< "savecomposizione"<<q.lastError().text();

     return b;

 }
//-------- saveComposition();

bool HProduction::saveProduction()
{
    QSqlQuery q(db);
    QSqlQuery qop(db);
    QString sql;
    QString lotto,utente;
    int idprodotto;
    int newlotid;
    QDateTime data;
    QDate scadenza;
    int op;

    bool fb;

    data=QDateTime::currentDateTime();
    scadenza=ui->dateEdit->date();
    idprodotto=ui->lvRicette->model()->index(ui->lvRicette->currentIndex().row(),1).data(0).toInt();
    lotto=getNewLot(idprodotto);
    qDebug()<<"INIZIO A SALVARE"<<"lotto="<<lotto<<" Prodotto="<<QString::number(idprodotto);

    db.transaction();
//creo un nuovo lotto

 fb=saveNewLot(lotto,idprodotto);
 qDebug()<<"saveNewLot"<<fb;

  newlotid=lastInsertId();
  qDebug()<<QString::number(newlotid);
 if(!fb)
   {
       QMessageBox::warning(this,QApplication::applicationName(),"Errore creando il nuovo lotto\n"+db.lastError().text(),QMessageBox::Ok);
       db.rollback();
       return fb;
   }

//carico il nuovo lotto


  fb=saveLotLoad(newlotid,idprodotto);
 // int lastopid=lastInsertId();
  qDebug()<<"savelotload";

  if(!fb)
  {
    QMessageBox::warning(this,QApplication::applicationName(),"Errore in saveLotLoad()",QMessageBox::Ok);
    db.rollback();
    return fb;
  }
  //ultimo ID di operazioni)
  //qDebug()<<QString::number(k);

//scarico i componenti e salvo la composizione del lotto
  int rows=ui->tableView->model()->rowCount();
  qDebug()<<QString::number(rows);

   for (int x=0;x<rows;x++)
   {

       fb=saveOperation(x,2);
       qDebug()<<"saveoperazione"<<QString::number(x);
       op=lastInsertId();
      // recupero l'id dell'ultima operazione di scarico(cioè lo scarico della prima riga di  tableview se x=0
       if (fb)
       {
           //se l'operazione è salvata senza errori
           // la salvo in composizone_lot,new lotid è il lotto di cui voglio salvare la composizione (lotid) e op è l'id dell'operazione
           bool j=saveComposizione(newlotid,op);
           qDebug()<<"newlotid="<<QString::number(newlotid)<<"operazione:"<<QString::number(op);
           op=lastInsertId();
           if (!j)
           {
               QMessageBox::warning(this,QApplication::applicationName(),"Errore in saveComposizione",QMessageBox::Ok);
               db.rollback();
               return false;
           }
           qDebug()<<"saveComposizione()";
       }
       else
       {
           QMessageBox::warning(this,QApplication::applicationName(),"Errore in saveOperation("+ QString::number(x) +")",QMessageBox::Ok);
           db.rollback();
           return fb;
       } //se saveoperazione



   }//for (per ogni riga della tabella)



       db.commit();
       QMessageBox::information(this,QApplication::applicationName(),"Produzione salvata",QMessageBox::Ok);
       ui->tableView->setModel(0);




}

bool HProduction::saveUpdatedComposizione()
{

       // int rows=ui->tableView->model()->rowCount();
        bool b=false;

        QSqlQuery q(db);
        QString sql;

        int operazione=lastInsertId();


             sql="INSERT INTO composizione_lot (ID_lotto,operazione) VALUES (:lottotarget,:operazione)";
             q.prepare(sql);
             q.bindValue(":lottotarget",QVariant(lottomodifica));
             q.bindValue(":operazione",QVariant(operazione));

             b=q.exec();
             //qDebug()<< "savecomposizione"<<QString::number(b);

        return b;
}




void HProduction::on_pushButton_3_clicked()
{
   if (!modifyLot){
       saveProduction();
   }
   else
   {
       updateComposition();
   }
   ui->tableView->setEnabled(false);
   ui->lvRicette->setEnabled(true);
   ui->pushButton_5->setVisible(true);
   ui->pushButton_6->setVisible(false);
   ui->pushButton->setEnabled(false);
   ui->pushButton_2->setEnabled(false);
   ui->pushButton_7->setEnabled(false);
   ui->label->setVisible(false);
   ui->cbQuanti->setVisible(false);
   ui->lvLastLots->setVisible(false);
   ui->leNuovoLot->setText("");
   ui->leQtyTotal->setReadOnly(false);
   ui->cbTipoLotto->setEnabled(true);
   ui->checkBox->setEnabled(true);
   getRecipe();
   updateTotals();
   modifyLot=false;
   ui->tableView->setModel(0);

}

void HProduction::on_leQtyTotal_textChanged(const QString &arg1)
{
    //
}

void HProduction::on_leQtyTotal_returnPressed()
{
  // calcola pesi
    //qDebug()<<"going into updateTotals();";
    updateTotals();
}

void HProduction::on_pushButton_7_clicked()
{
    if (ui->lvLastLots->model()==0)
    {
        return;
    }

  ui->leLotToadd->setText(ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),1).data(0).toString());
}

void HProduction::on_pushButton_4_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        this->close();
    }
}

void HProduction::on_pushButton_2_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Eliminare la riga?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        QModelIndex ix=ui->tableView->currentIndex();
        ui->tableView->model()->removeRow(ix.row());

    }
}

void HProduction::on_pushButton_7_toggled(bool checked)
{
   setAddProductFuoriRicettaUI(checked);
}

void HProduction::setAddProductFuoriRicettaUI(bool visible)
{
    ui->label_6->setVisible(visible);
    ui->label_2->setVisible(visible);
    ui->label_4->setVisible(visible);
    ui->leqtytoAdd->setVisible(visible);
    ui->leLotToadd->setVisible(visible);
  //  ui->cbTipoLotto->setVisible(visible);
    ui->pbAddLottoFuoriRicetta->setVisible(visible);
    ui->pbAnnulla->setVisible(visible);

}

void HProduction::on_pbAddLottoFuoriRicetta_clicked()
{

    addLotFuoriRicetta();
    setAddProductFuoriRicettaUI(false);
    ui->pushButton_7->setChecked(false);
}


void HProduction::on_pushButton_8_clicked()
{
    printRecipe();
}

void HProduction::on_pushButton_9_clicked()
{
    modifyLot=true;
    getLotToModify(ui->leLotToEdit->text());
}

void HProduction::updateComposition()
{

   // int rows=ui->tableView->model()->rowCount();

  //  int idprodotto;
  //  double quantita;
  //  int idlotto;
  // double quanteff;
 //   int idoperazione;

    QString sql;
    QSqlQuery q(db);

    db.transaction();

    //cancello la composizione del lotto
    sql="delete from composizione_lot where ID_lotto=:lotto";

    q.prepare(sql);
    q.bindValue(":lotto",QVariant(lottomodifica));
    q.exec();
    if (!q.exec())
    {
        QMessageBox::warning(this,QApplication::applicationName(),"errore aggiornando la composizione (step 1)",QMessageBox::Ok);
        db.rollback();
        return;
    }


 bool fb;

 //salvo le operazioni nuove

    for (int x=0;x<ui->tableView->model()->rowCount();x++)
    {
        fb=saveUpdatedOperazione(x);
        if (fb)
        {
            bool j=saveUpdatedComposizione();
            if (!j)
            {
                QMessageBox::warning(this,QApplication::applicationName(),"Errore in saveUpdatedComposizione",QMessageBox::Ok);
                db.rollback();
                return ;
            }
        }
        else
        {
            QMessageBox::warning(this,QApplication::applicationName(),"Errore in saveUpdatedOperation("+ QString::number(x) +")",QMessageBox::Ok);
            db.rollback();
            return ;
        }



    }

    db.commit();
    QMessageBox::information(this,QApplication::applicationName(),"Composizione aggiornata",QMessageBox::Ok);


}

bool HProduction::saveUpdatedOperazione(int row)
{
        bool b;
        QSqlQuery q(db);
        QString sql;

        QString data,azione,note;


        int idlotto=ui->tableView->model()->index(row,3).data(0).toInt();
        int idprodotto=ui->tableView->model()->index(row,0).data(0).toInt();
        int utente=userID.toInt();
        double quant= ui->tableView->model()->index(row,5).data(0).toDouble();
        int um=ui->cbUm->model()->index(ui->cbUm->currentIndex(),0).data(0).toInt();

        data=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        azione="2";
        note="";


        sql="INSERT INTO `operazioni` (`IDlotto`,`data`,`utente`, `IDprodotto`,`azione`,`quantita`,`um`,`note`) VALUES (:idlotto,:data,:utente,:idprodotto,:azione,:quantita,:um,:note)";
        q.prepare(sql);

        q.bindValue(":idlotto",QVariant(idlotto));
        q.bindValue(":data",QVariant(data));
        q.bindValue(":utente",QVariant(utente));
        q.bindValue(":idprodotto",QVariant(idprodotto));
        q.bindValue(":azione",QVariant(azione));
        q.bindValue(":quantita",QVariant(quant));
        q.bindValue(":um",QVariant(um));
        q.bindValue(":note",QVariant(note));


        b=q.exec();

        if(!b)
        {
           //qDebug() << q.lastError().text();
          // QMessageBox::warning(this,QApplication::applicationName(),"saveOperazione(" + QString::number(row) +")\noperazione:"+operazione,QMessageBox::Ok);

        }

        return b;


}

void HProduction::on_pushButton_10_clicked()
{
    printProduction();
}

void HProduction::on_checkBox_toggled(bool checked)
{
    if (checked)
    {
        getSubclients();
        ui->lvSubclienti->setVisible(true);
        getRecipesForClient();
    }
    else
    {
        ui->lvSubclienti->setVisible(false);
        getRecipesForClient();
    }
}

void HProduction::on_pbAnnulla_clicked()
{

}
