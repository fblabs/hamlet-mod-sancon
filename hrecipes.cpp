#include "hrecipes.h"
#include "ui_hrecipes.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QSqlError>
#include <QSqlQuery>
#include <QSettings>
#include <QDataWidgetMapper>
#include <QSqlQueryModel>
#include <QModelIndex>
#include <QSqlDatabase>
#include <QStandardItem>
#include "hprint.h"
#include <QModelIndex>
#include <QStandardItemModel>
#include <QMessageBox>

#include <QSqlTableModel>
#include <QSqlQueryModel>
#include "hnuovaricetta.h"
#include "hmodricette.h"




HRecipes::HRecipes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HRecipes)
{
    ui->setupUi(this);
    //setupForm();
    mode=0;
   // mod-(QSqlTableModel::OnManualSubmit);



}

HRecipes::~HRecipes()
{
    delete ui;
}

void HRecipes::setConnectionName(QString conn, bool upd)
{
    sConnection=conn;
    setDB();
    canupdate=upd;



}

void HRecipes::onConnectionNameSet()
{
    setupForm();
}

void HRecipes::setupForm()
{


    tmProdotti = new QSqlRelationalTableModel(0,db);
    tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);
    tmProdotti->setEditStrategy(QSqlTableModel::OnFieldChange);
    tmProdotti->setFilter("tipo=2 and ID IN (SELECT ID_prodotto from ricette)");

    tmProdotti->select();

    ui->lvProdotti->setModel(tmProdotti);
    ui->lvProdotti->setModelColumn(1);

     QModelIndex imi=ui->lvProdotti->model()->index(0,0);
     ui->lvProdotti->setCurrentIndex(imi);
     ui->tvRecipe->resizeColumnsToContents();
     ui->tvRecipe->horizontalHeader()->resizeSections(QHeaderView::Stretch);
     //ui->tvRecipe->horizontalHeader()->setStretchLastSection(true);
     ui->lvProdotti->setCurrentIndex(imi);
     connect (ui->lvProdotti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(caricaRicetta()));


}

int HRecipes::setDB()
{


  db = QSqlDatabase::database(sConnection);
  qDebug()<<"setupForm"<<sConnection;
  setupForm();

    return 0;
}

void HRecipes::on_lineEdit_textChanged(const QString &arg1)
{
    QString flt = "descrizione LIKE '%" + ui->lineEdit->text() + "%'";
     this->tmProdotti->setFilter(flt);
}

void HRecipes::caricaRicetta()
{
    ui->tvRecipe->horizontalHeader()->resizeSections(QHeaderView::Stretch);
    ui->tvRecipe->resizeColumnsToContents();
    QModelIndex current = ui->lvProdotti->currentIndex();
    sIDProdotto = tmProdotti->data(tmProdotti->index(current.row(),0)).toString();
    QSqlQuery rc(db);
    QString query("SELECT ID from ricette where ricette.ID_prodotto="+sIDProdotto);
    rc.exec(query);
    rc.first();
    sIdRicetta=rc.value(0).toString();
    QString sNomeProdotto=tmProdotti->index(current.row(),1).data().toString();
    QSqlQueryModel *qmr=new QSqlQueryModel();
    QSqlQuery c(db);

    QSqlQuery qNote(db);
    qNote.exec("SELECT note FROM ricette WHERE ricette.ID="+sIdRicetta);
    qNote.first();
     ui->teNote->setText(qNote.value(0).toString());
    QString sql="select distinct prodotti.ID,prodotti.descrizione,righe_ricette.quantita from prodotti,righe_ricette where righe_ricette.ID_prodotto=prodotti.ID and righe_ricette.ID_ricetta=:idricetta order by righe_ricette.quantita desc";
    c.prepare(sql);
    c.bindValue(":idricetta",QVariant(sIdRicetta));
    c.exec();
    qmr->setQuery(c);
    ui->leNomeRicetta->setText(sNomeProdotto);

     ui->tvRecipe->setModel(qmr);
     ui->tvRecipe->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void HRecipes::updateNote()
{
    QSqlQuery q(db);
    QString sql="UPDATE ricette SET note=:note where ricette.ID="+sIdRicetta;
    q.prepare(sql);
    q.bindValue(":note",QVariant(ui->teNote->toPlainText()));

    if(q.exec())
    {
        QMessageBox::information(this,QApplication::applicationName(),"Modifica salvata",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore dureante il salvataggio",QMessageBox::Ok);
    }

}

void HRecipes::on_pushButton_5_clicked()
{
    this->close();
}

int HRecipes::getMaxID()
{

qDebug()<<"getmaxid";

    QSqlQuery ap(db);


    //QModelIndex index = ui->lvProdotti->currentIndex();

    ap.exec("select max(ID)from ricette");/*+tmProdotti->data(tmProdotti->index(index.row(),0)).toString());*/
  //  ap.exec("select * from righe_ricette,ricette where righe_ricette.ID_ricetta =ricette.ID and ricette.ID = 70");
    ap.next();
    qDebug()<< ap.lastError().text();
    qDebug()<<ap.value(0).toString()<<db.password();
    maxID= ap.value(0).toInt();
    qDebug()<< maxID;
    return maxID+1;

}

void HRecipes::setUI(bool pbtn, bool pbtn2, bool pbtn3, bool pbtn4,bool btx)
{
    ui->pushButton->setEnabled(pbtn);
}

void HRecipes::updateDataRecipe()
{
    this->tmProdotti->select();
    this->tmRecipe->select();
    this->tmRecipeRows->select();
}

void HRecipes::on_pushButton_clicked()
{

 /*   HNewRecipe *f=new HNewRecipe();
    connect(f,SIGNAL(newRecipeSaved()),this,SLOT(updateDataRecipe()));
    f->setConnectionName(sConnection);

    int inx=tmProdotti->data(tmProdotti->index(ui->lvProdotti->selectionModel()->currentIndex().row(),0)).toInt();
    f->setIdProdotto(inx);
    f->setMemoName(tmProdotti->data(tmProdotti->index(ui->lvProdotti->selectionModel()->currentIndex().row(),1)).toString());
    qDebug()<<inx;

    f->show();*/

    HNuovaRicetta *f=new HNuovaRicetta();
    f->init(sConnection);

    f->setWindowModality(Qt::ApplicationModal);
    f->show();





}



void HRecipes::on_pushButton_6_clicked()
{
    //stampa Ricetta

    HPrint *f=new HPrint();

    f->show();

    f->setText("======================================================");

    f->append(ui->leNomeRicetta->text(),false);

    f->append("======================================================\n",false);



    int righe = ui->tvRecipe->model()->rowCount();
    int colonne=ui->tvRecipe->model()->columnCount();

    f->cursorToEnd();

    QTextTable* table=f->addTable(righe,colonne-1);

    for (int i=0;i<righe;i++)
    {
      // f->append(ui->tvRecipe->model()->index(i,1).data(Qt::DisplayRole).toString() + " - " + ui->tvRecipe->model()->index(i,2).data(Qt::DisplayRole).toString(),false);
      f->writeTableContent(table,i,0,ui->tvRecipe->model()->index(i,1).data(0).toString());
      f->writeTableContent(table,i,1,QString::number(ui->tvRecipe->model()->index(i,2).data(0).toDouble(),'f',2));



    }

    f->append(ui->teNote->toPlainText(),false);
}

void HRecipes::on_pushButton_4_clicked()
{
    mode=0;

    if (QMessageBox::Ok == QMessageBox::question(this,QApplication::applicationName(),"Salvare questa ricetta?",QMessageBox::Ok|QMessageBox::Cancel))
    {
      //salvo la ricetta
      QModelIndex current;

      current = ui->lvProdotti->currentIndex();

      QString sIDProd = tmProdotti->data(tmProdotti->index(current.row(),0)).toString();
      QSqlQuery q(db);

      db.transaction();
      if(q.exec("INSERT INTO ricette (ID,nome,ID_prodotto,note) values (-1,"+ sIDProd+ ",'')"))
      {
          qDebug()<<q.lastQuery();

      }
      else
      {
qDebug()<< q.lastQuery();
qDebug()<<q.lastError().text();
          QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando la ricetta",QMessageBox::Ok);
          db.rollback();
          return;
      }



      QString sIng;
      QString sShow;
      QString sQ;

      idNuovaRicetta = getMaxID();

      for (int x=0; x<ui->tvRecipe->model()->rowCount();x++)
      {
          sIng = ui->tvRecipe->model()->data(ui->tvRecipe->model()->index(x,0)).toString();

qDebug()<<"sIng "+sIng;
          sShow = ui->tvRecipe->model()->data(ui->tvRecipe->model()->index(x,4)).toString();

  qDebug()<<"sShow "+sShow;
          sQ=ui->tvRecipe->model()->data(ui->tvRecipe->model()->index(x,2)).toString();
  qDebug()<<"sQ"+sQ;


          QString s="INSERT INTO righe_ricette (ID_ricetta,riga,ID_prodotto,quantita,show_prod) VALUES("+ QString::number(idNuovaRicetta) + "," + QString::number(x) + ","+ sIng + ","+sQ+"," + sShow +")";
qDebug()<< s;

          if(!q.exec(s))
          {
qDebug()<<q.lastError().text();
              db.rollback();
              QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando righe ricetta",QMessageBox::Ok);
              return;
          }

      }

      db.commit();
      QMessageBox::information(this,QApplication::applicationName(),"ricetta salvata",QMessageBox::Ok);
    }



}

void HRecipes::on_pushButton_3_clicked()
{
  mode=0;

    setUI(true,false,false,false,true);
    tmProdotti->setFilter("tipo=1");
}

QList<QStandardItem*> HRecipes::recipeRowNew(int ricetta, int riga, int idprd,QString pro, float iquantita, int ishprod)
{

    qDebug()<<"entro in recipeRowNew";
    QString idr =QString::number(ricetta);
    QString prod =QString::number(idprd);
    QString iriga=QString::number(riga);
    QString qua = QString::number(iquantita);
    QString shpro = QString::number(ishprod);

    qDebug()<< "seto gli item";
    QStandardItem *iRicetta = new QStandardItem(idr);
    QStandardItem *iRiga = new QStandardItem(iriga);
    QStandardItem *iProd = new QStandardItem(prod);
    QStandardItem *ipro=new QStandardItem(pro);
    QStandardItem *iQuantita = new QStandardItem(qua);
    QStandardItem *ishowProd = new QStandardItem(shpro);


    qDebug()<<"finito di setare gli item";


    QList<QStandardItem*> list;
    list<<iRicetta<<iRiga<<iProd<<ipro<<iQuantita<<ishowProd;


    qDebug()<<"getTotalQuantity";
    float ps = getTotalQuantity();



    ui->labelPeso->setText(QString::number(ps));

    return list;

qDebug()<<"esco da recipeRowNew";


   QSqlQuery q(db);


   q.exec("select descrizione from prodotti where ID="+QString::number(idProdottoMaster));
   q.next();
       QString prodesc=q.value(0).toString();
  // q.clear();
qDebug()<<"fino a prima di setare il modellooo" << mod;
 //  mod->appendRow(recipeRowNew(idNuovaRicetta,mod->rowCount()+1,idProdottoMaster,prodesc,qt,ui->checkBox->isChecked()? 1:0));
qDebug()<<"settato";
   getTotalQuantity();


   ui->tvRecipe->setModel(tmRecipe);
   ui->tvRecipe->setColumnHidden(0,true);
   ui->tvRecipe->setColumnHidden(1,true);
   ui->tvRecipe->setColumnHidden(2,true);
//   ui->tvRecipe->setColumnHidden(5,true);

}

float HRecipes::getTotalQuantity()
{
    float qt=0;

    for (int i=0;i<ui->tvRecipe->model()->rowCount();i++)
    {
        qt=qt+ui->tvRecipe->model()->data(ui->tvRecipe->model()->index(i,2)).toFloat();
    }

    ui->labelPeso->setText(QString::number(qt));

    return qt;
}

void HRecipes::on_pushButton_7_clicked()
{


    QModelIndexList indexes=ui->tvRecipe->selectionModel()->selectedIndexes();

    ui->tvRecipe->model()->removeRow(ui->tvRecipe->currentIndex().row());

    qDebug() << "Row:" + QString::number(ui->tvRecipe->selectionModel()->currentIndex().row());
}

void HRecipes::on_tvRecipe_clicked(const QModelIndex &index)
{

}

void HRecipes::on_pbNote_clicked()
{
    updateNote();
}

void HRecipes::on_pushButton_2_clicked()
{
  //  qDebug()<<sIdRicetta<<": id ricetta"<<sConnection;
 //  HModRicette *f=new HModRicette();


  //f->init(sConnection,canupdate);
 // f->show();
}


