#include "hclientfiles.h"
#include "ui_hclientfiles.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include "hprint.h"
#include "hnewfile.h"

HClientFiles::HClientFiles(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HClientFiles)
{
    ui->setupUi(this);
}

HClientFiles::~HClientFiles()
{
    delete ui;
}

void HClientFiles::setConnectionName(QString conn)
{
    sConn = conn;
    db=QSqlDatabase::database(sConn);
    setupForm();


}

void HClientFiles::setupForm()
{
    tmProdotti = new QSqlTableModel(0,db);
    tmClienti=new QSqlTableModel(0,db);


    tmClienti->setTable("anagrafica");
    tmClienti->setSort(1,Qt::AscendingOrder);
    tmClienti->setFilter("cliente=1");


    tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);
    tmProdotti->setFilter ("tipo=1");

    tmProdotti->select();
    tmClienti->select();

    ui->lvRight->setModel(tmProdotti);
    ui->lvRight->setModelColumn(1);
    ui->lvRight->setCurrentIndex(tmProdotti->index(0,0));
    ui->lvLeft->setModel(tmClienti);
    ui->lvLeft->setModelColumn(1);
    ui->lvLeft->setCurrentIndex(tmClienti->index(0,0));


    connect(ui->lvRight->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(checkRecipe()));
    connect(ui->checkBox,SIGNAL(toggled(bool)),this,SLOT(getAssociations()));

}

void HClientFiles::getIDS()
{
    if(ui->rbLeft->isChecked())
    {
        clientID=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
        productID=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    }
    else
    {
        productID=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
        clientID=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    }

    checkRecipe();
}

void HClientFiles::on_pushButton_clicked()
{
 //   QString idC, idP;
    QSqlQueryModel *qrm= new QSqlQueryModel();
    QSqlQuery q(db);

    ui->lineEdit->setText("");
    ui->leProd->setText ("");


    //idC=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
    //idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();

    if(ui->rbLeft->isChecked())
    {

     //   idC=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
     //   idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    }
    else
    {

    //    idP=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
    //    idC=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    }

    QString qs="SELECT * FROM schede where prodotto=" + productID +" and cliente=" + clientID;
    q.exec(qs);

    qrm->setQuery(qs);

    int s  =q.size();
    if (s>0)
    {
        ui->pushButton->setEnabled(true);
    }
    else
    {
        ui->pushButton->setEnabled(false);
    }

    HPrint *p=new  HPrint();
    p->show();
    q.next();
    p->append("SCHEDA CLIENTE",true);
    p->append("==========================================",false);

    //idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    p->append(ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),1).data(0).toString() + "-" + ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),1).data(0).toString(),false);
    p->append("==========================================",false);
    p->append("OLIO:" +q.value("olio").toString(),false);
    p->append("VASO: "+q.value("vaso").toString(),false);
    p->append("TAPPO: "+q.value("tappo").toString(),false);
    p->append("ETICHETTE: "+q.value("etichette").toString(),false);
    p->append("SCATOLE: "+q.value("scatole").toString(),false);
    p->append("NOTE "+q.value("note").toString(),false);

}

void HClientFiles::checkRecipe()
{
  //  QString idC, idP;
    QSqlQueryModel *qrm= new QSqlQueryModel();
    QSqlQuery q(db);



 //   if(ui->rbLeft->isChecked()) // ////////////////////////////////////////////////rbleft////////////////////////////
 //   {
      //  tmod=tmProdotti;  //lv dx
       // idC=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
     //  idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();

      //   qDebug()<<"idc:"+idC<<idP<<"----checkRecipe()----";
 //   }
 //   else
 //   {
       // tmod=tmClienti; //lv dx
     //   idP=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
    //    idC=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();

  //   qDebug()<<" idc: ""idp;"+idC<<"idp: " +idP<<"----checkRecipe()----";
    //}

  getIDS();

    QString qs="SELECT * FROM schede where prodotto=" + productID +" and cliente=" + clientID;

qDebug()<<qs;
    q.exec(qs);

    qrm->setQuery(q);

    int s  =q.size();
    if (s>0)
    {
        ui->pushButton->setEnabled(true);
    }
    else
    {
        ui->pushButton->setEnabled(false);
    }
}
// //////////////////////////////////////////////
void HClientFiles::getAssociations()
{
    QString idC="-1";
    QString idP="-1";
    QString filter="";
   // QSqlTableModel *tmod;

  //  idC=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
  //  idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();

getIDS();
    if(ui->rbLeft->isChecked()) // ////////////////////////////////////////////////rbleft////////////////////////////
    {
      //  tmod=tmProdotti;  //lv dx
        //idC=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
//qDebug()<<"idc: "<<idC;
 //       idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    }
    else
    {
       // tmod=tmClienti; //lv dx
    //    idP=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
     //   idC=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
    }

  //  qDebug()<<" idc: ""idp;"+idC<<"idp: " +idP<<"----getAssociations----";

  /////////////////////////////////////////////////////////////////////////////////////////////

    if (ui->checkBox->isChecked()) // se devo filtrare
    {

        if(ui->rbLeft->isChecked()) // filtro per prodotto
        {
           // prodotti a sinistra
            //filtro per destra
          //  qDebug()<< filter;
            filter = "prodotti.tipo=1 and prodotti.ID IN (select prodotto from schede where cliente = ";
         //   qDebug()<< filter;
            filter.append(clientID);
          //  qDebug()<<idC<< filter;
            filter.append(")");
    qDebug()<<"filter:"<<filter<<clientID;
            tmProdotti->setFilter(filter);
    qDebug()<<"Dopo setFilter"<<tmProdotti->filter()<<clientID;
            tmClienti->setFilter("cliente=1");

          //  qDebug()<<"tmprod filt"<<filter;


        }
        else //filtro per cliente
        {
            filter= "cliente=1 and anagrafica.ID in (select cliente from schede where prodotto=";
            filter.append(productID);
            filter.append(")");
            tmClienti->setFilter(filter);
            tmProdotti->setFilter("tipo=1");


        }

    }
    else // se no resetto i filtri
    {
        //qDebug()<<"Prodotti:"<<tmProdotti->filter();
        //qDebug()<<"Clienti:"<<tmClienti->filter();


            tmProdotti->setFilter("prodotti.tipo=1");
            tmClienti->setFilter("anagrafica.cliente=1");



    }


}

void HClientFiles::on_pushButton_2_clicked()
{
   QString idC=ui->lvLeft->model()->index(ui->lvLeft->currentIndex().row(),0).data(0).toString();
   QString  idP=ui->lvRight->model()->index(ui->lvRight->currentIndex().row(),0).data(0).toString();
   HNewFile *f= new HNewFile();
    f->setConnectionName(sConn);
    f->setParameters(idC,idP);

    ui->lineEdit->setText("");
    ui->leProd->setText ("");

     f->show();
}

void HClientFiles::on_lineEdit_textChanged(const QString &arg1)
{

    QString filt="anagrafica.ragione_sociale LIKE '%"+ arg1 + "%'";
    tmClienti->setFilter(filt);
}

void HClientFiles::on_leProd_textChanged(const QString &arg1)
{
    QString filt="prodotti.descrizione LIKE '%"+ arg1 + "%'";
    tmProdotti->setFilter(filt);
}

void HClientFiles::on_pushButton_3_clicked()
{
    this->close();
}



void HClientFiles::on_rbRight_toggled(bool checked)
{
 // getIDS();

    if(checked)
   {
    ui->lvLeft->setModel(tmProdotti);
    ui->lvLeft->setModelColumn(1);
    ui->lvRight->setModel(tmClienti);
    ui->lvRight->setModelColumn(1);
   }
   else
   {
        ui->lvLeft->setModel(tmClienti);
        ui->lvLeft->setModelColumn(1);
        ui->lvRight->setModel(tmProdotti);
        ui->lvRight->setModelColumn(1);
   }

    getIDS();
}



void HClientFiles::on_checkBox_toggled(bool checked)
{
    if (checked)
    {
        connect(ui->lvLeft->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getAssociations()));
    }
    else
    {
        disconnect(ui->lvLeft->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getAssociations()));
    }
}

void HClientFiles::on_rbLeft_toggled(bool checked)
{
    getIDS();
}
