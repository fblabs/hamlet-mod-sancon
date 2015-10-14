#include "hnewop.h"
#include "ui_hnewop.h"
#include "huser.h"
#include "mainwindow.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlField>

HNewOp::HNewOp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HNewOp)
{
    ui->setupUi(this);

    this->setWindowModality(Qt::ApplicationModal);
    usr=user;
  //qDebug() <<user<<"user";
    setupForm();
    createUmModel();
    APEX="'";
    QUOTE='"';
}

HNewOp::~HNewOp()
{
    delete ui;
}

void HNewOp::setUser(int userl)
{
    usr = userl;

}

void HNewOp::setConnectionName(QString conn)
{
    sConn=conn;
    setupForm();

}

void HNewOp::createUmModel()
{
    ui->cbUm->addItem("Kg",QVariant(0));
    ui->cbUm->addItem("Pz",QVariant(1));
   // ui->cbUm->addItem("Kg", QVariant(0));
  //  ui->cbUm->addItem("Pz", QVariant(1));

}

void HNewOp::setupForm()
{



    db = QSqlDatabase::database(sConn);
    db.open();
    //ui->cbUm->addItem("Kg", QVariant(0));
    //ui->cbUm->addItem("Pz", QVariant(1));
    tbm = new  QSqlTableModel(this,db);
    tbm->setTable("prodotti");
    tbm->setFilter("tipo!=1");
    ui->lvprodotti->setModel(tbm);
    ui->lvprodotti->setModelColumn(1);
    tbm->select();

    tfr = new  QSqlTableModel(this,db);
    tfr->setTable("anagrafica");
    tfr->setFilter("fornitore=1");
    ui->listView->setModel(tfr);
    ui->listView->setModelColumn(1);
    tfr->select();

    tmtipi = new QSqlTableModel(this,db);
    tmtipi->setTable("tipi_lot");
    ui->cbTipoLotto->setModel(tmtipi);
    ui->cbTipoLotto->setModelColumn(1);

//model->index(ui->combobox->currentIndex(), 0).data(0).toString().toInt()
    tmtipi->select();

    cbTipiLotSet();
    cbunitaMisura();

    connect(ui->leLot,SIGNAL(textChanged(QString)),this,SLOT(elabLeLot()));
   // connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(saveOp()));
    connect(ui->lvprodotti->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)), this, SLOT(productSelected()));
    connect(ui->listView->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(fornitoreSelected()));

}

void HNewOp::elabLeLot()
{
    sLot = ui->leLot->text();

    int tm =sLot.size()- sLot.lastIndexOf('-');

    //qDebug() << tm;

    if (tm<8)
        return;


    QSqlQuery *qlot= new QSqlQuery(db);
    QSqlQuery *qprod = new QSqlQuery(db);
    qlot->exec("select getprodid('" + sLot + "')" );
    qlot->next();
    ilot =  qlot->value(0).toString();
    qprod->exec("select descrizione from prodotti where ID=" + ilot);
    qprod->next();





}

/*void HNewOp::saveOpScarico()
{
    //qDebug()<<"utente"<<usr;

       QSqlQuery* qsaveOp = new QSqlQuery(db);

       QString sLot0=ui->leLot->text();

       float quantita =ui->leQuantity->text().toFloat();

       if(quantita >0)
       {
           quantita *= -1;
       }

       QString qry = "insert into operazioni(ID,lot,data,utente,IDprodotto,azione,quantita,note) values(-1,'"+ sLot0 +"',NOW()," + QString::number(usr) + "," + parseLotForProductID(sLot0) +",2 ," + QString::number(quantita)+ ",'" + ui->leNote->text()+"')";



       if (qsaveOp->exec(qry))
       {
           QMessageBox::information(this,QApplication::applicationName(),"Operazione salvata",QMessageBox::Ok);
       }
       else
       {
           QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando l'operazione",QMessageBox::Ok);
           //qDebug()<<qry<<qsaveOp->lastError().text();
       }
}*/

QString HNewOp::saveOperationString(QString plot,bool isLoad)
{
    QString sQuery;
    QString id,lot,data,utente,IDprodotto,azione,quantita,um,note;
    QString virg=",";

    id="-1";
    lot=plot;
    data=ui->leY->text() +"-"+ui->leM->text()+"-"+ui->leG->text();
    utente=QString::number(user);
    IDprodotto= this->parseLotForProductID(lot);


    double quant;



   if(isLoad)
   {
       //carico
       azione="1";
       quant=ui->leQuantity->text().toDouble();

   }
   else
   {
       //scarico
       quant=ui->leQuantity->text().toDouble();

       quant *=-1;
       azione="2";
   }

   quantita=QString::number(quant,'f',2);



   sQuery="INSERT INTO operazioni(ID,lot,data,utente,IDprodotto,azione,quantita,um,note VALUES("+id+virg+lot+virg+APEX+data+APEX+virg+user+virg+IDprodotto+virg+azione+virg+quantita+virg+ui->cbUm->currentData().toString()+virg+QUOTE+note+QUOTE;


  return sQuery;

}

QString HNewOp::saveNewLotString(bool isLoad=true)
{
    QString prodotto,data,scadenza,anagrafica,lot_fornitore,ean,quantita,tipo,attivo,sQuery;

    QString virg=",";

    prodotto=sCurProd;
    data="NOW()";
    double quant;
    tipo=ui->cbTipoLotto->currentData().toString();

    if(isLoad)
    {
        //carico

        quant=ui->leQuantity->text().toDouble();

    }
    else
    {
        //scarico
        quant=ui->leQuantity->text().toDouble();

        quant *=-1;

    }
    quantita=QString::number(quant,'f',2);

    scadenza=ui->leY->text()+"-"+ui->leM->text()+"-"+ui->leG->text();
    anagrafica=sFornID0;
    lot_fornitore=ui->leLotFornitore->text();
    ean="''";
    tipo=ui->cbTipoLotto->currentData().toString();
    attivo="1";
    quantita=QString::number(quant,'f',2);
    newLot=getNewLot();

    sQuery="insert into lotdef(lot,prodotto,data,giacenza,scadenza,anagrafica,lot_fornitore,EAN,tipo,attivo) values('" + newLot+APEX+virg + sCurProd + ",'"+data+"'," + quantita + ",'"+ data +"', " + sFornID0 + " ,'" + lot_fornitore + "','',"+ tipo +",1)";


    return sQuery;

}

/*void HNewOp::saveOpCarico()
{
    //qDebug()<<"newOp"<<usr;

    QString tipolot = tmtipi->index(ui->cbTipoLotto->currentIndex(), 0).data(0).toString();
    //qDebug()<<tipolot;

    sLot0 = getNewLot();

    QSqlQuery* qsavec0 = new QSqlQuery(db);
    QSqlQuery* qsaveLot = new QSqlQuery(db);

    float quantita = ui->leQty->text().toFloat();

     if (quantita <0)
    {
        quantita *= -1;
    }

    QString qryLot = "insert into lotdef(lot,prodotto,data,giacenza,scadenza,anagrafica,lot_fornitore,EAN,tipo,attivo) values('" + sLot0+"'," + sCurProd + ",NOW()," + QString::number(quantita) + ",'" + ui->leY->text() +"-"+ ui->leM->text()+"-"+ui->leG->text()+"', " + sFornID0 + " ,'" + ui->leLotForn->text() + "','',"+ tipolot +",1)";


    QString qryop0 = "insert into operazioni (lot,data,utente,IDprodotto,azione,quantita,note) values('"+ sLot0 +"',NOW(),"+ QString::number(usr) +"," + sCurProd + ",1 ," + QString::number(quantita) + ",'')";

    ////qDebug()<<"tipolot:" + tipolot;
    ////qDebug() <<qryLot;
    ////qDebug()<<qryop0;

    db.transaction();
   if(qsaveLot->exec(qryLot))
   {
       if (!qsavec0->exec(qryop0))
       {
           QMessageBox::information(this,QApplication::applicationName(), qsavec0->lastError().text(),QMessageBox::Ok|QMessageBox::Cancel);
//qDebug()<<qsavec0->lastError().text()<<qsavec0->lastError();
           //qDebug()<<"not qsavec0"<<qsavec0;

          db.rollback();

       }
       else
       {

        emit(trigger());
        QMessageBox::information(this,QApplication::applicationName(), "operazione salvata, creato lot " +sLot,QMessageBox::Ok|QMessageBox::Cancel);

        }

       db.commit();

   }else
   {
       //qDebug()<<"not qryLot"<<qryLot;
   }

  }
*/


QString HNewOp::parseLotForProductID(QString lot)
{
    QString prod;
    QString delimiter="-";
    QStringList result=lot.split(delimiter);

    QString id=result.at(1);

    return id;

}



void HNewOp::on_pushButton_2_clicked()
{
    if (QMessageBox::warning(this,QApplication::applicationName(),"Si desidera chiudere la finestra?",QMessageBox::Ok | QMessageBox::Cancel)==QMessageBox::Ok)
       {
        emit(trigger());
        this->close();

       }

}

void HNewOp::productSelected()
{
    sCurProd= ui->lvprodotti->model()->data(ui->lvprodotti->model()->index(ui->lvprodotti->currentIndex().row(),0)).toString();


}

int HNewOp::saveOperation()
{
    QSqlQuery q(db),qo(db);
    bool a,b;
    QString sQuery;
    QString newLot;
    QString newLotString;
    if (ui->radioButton->isChecked()) //carico
    {
        newLot=getNewLot();
        newLotString=saveNewLotString();
        sQuery=saveOperationString(newLot,true);

     db.transaction();

     a=q.exec(newLotString);
       if(a)
       {
           b=qo.exec(sQuery);

           if(!b)
           {
               //qDebug()<<q.lastQuery()<<q.lastError().text()<<"line:352";
               db.rollback();
               return -1;

           }
           else
           {
             db.commit();
             return 0;
           }


       }
       else
       {
           db.rollback();
           //qDebug()<<q.lastQuery()<<q.lastError().text()<<"line:368";
           return -1;
       }

    }
    else
    {
        sQuery=saveOperationString(newLot,false);

        b=q.exec(sQuery);

        if(!b)
        {
            //qDebug()<<q.lastQuery()<<q.lastError().text()<<"line:379";

            db.rollback();
            return-1;


        }

       db.commit();
       return 0;
    }

    //qDebug()<<q.lastQuery()<<q.lastError().text();

    return -1;
}

QString HNewOp::getNewLot()
{
   QSqlQuery qLotQr(db);
   qLotQr.exec("SELECT createID('" + this->sCurProd +"'); ");

   qLotQr.next();
   sLot0 = qLotQr.value(0).toString();

   return sLot0;

}

void HNewOp::fornitoreSelected()
{
    sFornID0 = ui->listView->model()->data(ui->listView->model()->index(ui->listView->currentIndex().row(),0)).toString();

}

void HNewOp::cbTipiLotSet()
{
    //ui->cbTipiLot->addItem("Carico", 1);
    //ui->cbTipiLot->addItem("Scarico",2);

}

void HNewOp::cbunitaMisura()
{
    ui->cbUm->addItem("Kg",0);
    ui->cbUm->addItem("Pz",1);
    ui->cbUm->addItem("N/A",2);
}

void HNewOp::onConnectionNameSet()
{
   setupForm();
}


void HNewOp::on_pushButton_clicked()
{
    int r=saveOperation();

    if(r==0)
    {
      emit(trigger());
    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando l'operazione",QMessageBox::Ok);
    }

}

void HNewOp::on_radioButton_2_toggled(bool checked)
{

        ui->radioButton->setChecked(!checked);
        ui->radioButton_2->setChecked(checked);

}
