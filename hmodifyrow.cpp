#include "hmodifyrow.h"
#include "ui_hmodifyrow.h"
#include "huser.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSQlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QCompleter>
#include <QStringListModel>

HModifyRow::HModifyRow(int p_id, int p_row, HUser *p_user, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModifyRow)
{
    ui->setupUi(this);
    idp=p_id;
    row=p_row;
    user=p_user;
    db=p_db;

    setPermissions(user);

    getClients();
    getProducts();
   // getTappi();
    initSanityModel();
    loadRow();

}

HModifyRow::~HModifyRow()
{
    delete ui;
}

void HModifyRow::setPermissions(HUser *p_user)
{

    ui->cbCliente->setEnabled(p_user->getCanUpdate());
    ui->cbProdotto->setEnabled(p_user->getCanUpdate());

}

void HModifyRow::getClients()
{
    QSqlTableModel *cmod=new QSqlTableModel(0,db);
    cmod->setTable("anagrafica");
    cmod->setFilter("cliente >0");
    cmod->setSort(1,Qt::AscendingOrder);
    cmod->select();

    QCompleter *comp=new QCompleter(cmod);
    comp->setCompletionColumn(1);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    comp->setCompletionMode(QCompleter::PopupCompletion);

    ui->cbCliente->setModel(cmod);
    ui->cbCliente->setModelColumn(1);
    ui->cbCliente->setCompleter(comp);
}

void HModifyRow::getProducts()
{
    QSqlQueryModel *pmod=new QSqlQueryModel();
    int cliente=ui->cbCliente->model()->index(ui->cbCliente->currentIndex(),0).data(0).toInt();
    QString sql="select ricette.ID,prodotti.ID,prodotti.descrizione from prodotti, ricette, associazioni where ricette.ID=associazioni.ID_ricetta and prodotti.ID=ricette.ID_prodotto and associazioni.visualizza=1 and associazioni.visualizza=1 and associazioni.ID_cliente=:idcliente order by prodotti.descrizione asc";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":idcliente", cliente);
    q.exec();
    pmod->setQuery(q);

    ui->cbProdotto->setModel(pmod);
    ui->cbProdotto->setModelColumn(2);

}

//REMOVED
/*void HModifyRow::getTappi()
{
    QSqlTableModel *tmod=new QSqlTableModel(0,db);
    tmod->setTable("prodotti");
    tmod->setFilter("tipo=4");
    tmod->setSort(1,Qt::AscendingOrder);
    tmod->select();
    ui->cbTappo->setModel(tmod);
    ui->cbTappo->setModelColumn(1);

}*/

void HModifyRow::initSanityModel()
{
    QStringListModel *smod=new QStringListModel();
    QStringList items;

    items<<"---"<<"L"<<"XS";
    smod->setStringList(items);
    ui->cbSanty->setModel(smod);
}

void HModifyRow::loadRow()
{
qDebug()<<"loadRow";

    QSqlTableModel *rows_model=new QSqlTableModel(0,db);
    rows_model->setTable("righe_produzione");
    rows_model->setFilter("IDProduzione="+QString::number(idp)+" and num_riga="+QString::number(row));
    rows_model->select();
    qDebug()<<rows_model->rowCount();
//setup controls
   QSqlTableModel *clientimod=static_cast<QSqlTableModel*>(ui->cbCliente->model());
   clientimod->setFilter("ID="+rows_model->index(0,9).data(0).toString());
   ui->cbCliente->setCurrentIndex(0);
   QString texttofind=ui->cbCliente->currentText();
   clientimod->setFilter("cliente >0");
   int ixc=ui->cbCliente->findText(texttofind);
   ui->cbCliente->setCurrentIndex(ixc);

   QSqlQueryModel *productsmod=static_cast<QSqlQueryModel*>(ui->cbProdotto->model());
   int r=rows_model->index(0,6).data(0).toInt();
   qDebug()<<QString::number(r);
   QString sxp;

   for(int ix=0;ix<productsmod->rowCount();++ix)
   {
       if(productsmod->record(ix).value(1).toInt()==r)
       {
           sxp=productsmod->record(ix).value(2).toString();
       }
   }

   qDebug()<<"prodotto"<<sxp;
   ui->cbProdotto->setCurrentText(sxp);




   ui->leQuant->setText(rows_model->index(0,3).data(0).toString());
   ui->leVaso->setText(rows_model->index(0,4).data(0).toString());
   ui->leSpecificaOlio->setText(rows_model->index(0,5).data(0).toString());
   ui->leOlio->setText(rows_model->index(0,7).data(0).toString());
   ui->leTappo->setText(rows_model->index(0,8).data(0).toString());
   ui->cbSanty->setCurrentText(rows_model->index(0,11).data(0).toString());
   ui->leAllergeni->setText(rows_model->index(0,15).data(0).toString());
   ui->leNumOrd->setText(rows_model->index(0,12).data(0).toString());
   int fresco=rows_model->index(0,13).data(0).toInt();
   int pastorizzato=rows_model->index(0,14).data(0).toInt();

   qDebug()<<fresco<<pastorizzato;
   if(fresco>0)
   {
       ui->rbFresh->setChecked(true);
   }
   else if(pastorizzato>0)
   {
       ui->rbPastorized->setChecked(true);
   }
   else
   {
       ui->rbNone->setChecked(true);
   }
   QString note=rows_model->index(0,16).data(0).toString();
   ui->ptNote->setPlainText(note);

   bool vok=false;
   bool qok=false;
   double tot=rows_model->index(0,10).data(0).toDouble(&vok);
   ui->leTotal->setText(QString::number(tot,'f',3));




}

void HModifyRow::on_cbCliente_currentIndexChanged(int index)
{
    getProducts();
}

void HModifyRow::on_pbClose_clicked()
{
    close();
}

void HModifyRow::on_pbSave_clicked()
{

    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Salvare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel))
    {


        saveRow();

    }

}

void HModifyRow::saveRow(){


    int idcliente=ui->cbCliente->model()->index(ui->cbCliente->currentIndex(),0).data(0).toInt();
    int idprodotto=ui->cbProdotto->model()->index(ui->cbProdotto->currentIndex(),1).data(0).toInt();
    QString numord=ui->leNumOrd->text();
    QString vaso=ui->leVaso->text();
    QString qua=ui->leQuant->text();
    QString olio=ui->leOlio->text();
    QString specOlio=ui->leSpecificaOlio->text();
    QString tappo=ui->leTappo->text();
    QString san=ui->cbSanty->currentText();
    QString allerg=ui->leAllergeni->text();
    int fresco=0;
    int pastorizzato=0;
    if(ui->rbFresh->isChecked())
    {
        fresco=1;
    }else if(ui->rbPastorized->isChecked())
    {
        pastorizzato=1;
    }

    QSqlQuery q(db);
    QString sql="update righe_produzione set idcliente=:idcliente,idprodotto=:idprod,numero_ordine=:nord,vaso_gr=:vasog,quantita=:quan,specificaolio=:spolio,olio=:olio,tappo=:tappo,sanificazione=:sanif,allergeni=:alrg,fresco=:fresco,pastorizzato=:pasto,note=:note,totale=:tot where IDproduzione=:idproduzione and num_riga=:num";
    db.transaction();
    q.prepare(sql);
    q.bindValue(":idcliente",idcliente);
    q.bindValue(":idprod",idprodotto);
    q.bindValue(":nord",numord);
    q.bindValue(":vasog",vaso);
    q.bindValue(":quan",qua);
    q.bindValue(":spolio",specOlio);
    q.bindValue(":olio",olio);
    q.bindValue(":tappo",tappo);
    q.bindValue(":sanif",san);
    q.bindValue(":alrg",allerg);
    q.bindValue(":fresco",fresco);
    q.bindValue(":pasto",pastorizzato);
    q.bindValue(":note",ui->ptNote->toPlainText());
    bool ok=false;
    q.bindValue(":tot",ui->leTotal->text().toDouble(&ok));
    if(!ok)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore nel formato del totale"+q.lastError().text(),QMessageBox::Ok);
    }
    q.bindValue(":idproduzione",idp);
    q.bindValue(":num",row);

    if (!q.exec())
    {
        db.rollback();
        QMessageBox::warning(this,QApplication::applicationName(),"Errore aggiornando i dati\n"+q.lastError().text(),QMessageBox::Ok);
    }
    else
    {
        db.commit();
        emit done();
        QMessageBox::information(this,QApplication::applicationName(),"Modifiche salvate",QMessageBox::Ok);

    }


}

  double  HModifyRow::calcTotale()
    {
        bool vok=false;
        bool qok=false;

        double vaso=ui->leVaso->text().toDouble(&vok);
        if(!vok)
        {
            QMessageBox::warning(this,QApplication::applicationName(),"Errore di formato della cifra per quantità vaso",QMessageBox::Ok);
            return -1;
        }
        double quant=ui->leQuant->text().toDouble(&qok);
        if(!qok)
        {
           QMessageBox::warning(this,QApplication::applicationName(),"Errore di formato della cifra per quantità vaso",QMessageBox::Ok);
           return -1;
        }

        double totale=(quant*vaso)/1000;
        return totale;
    }


void HModifyRow::on_leTotal_returnPressed()
{
    double totale=calcTotale();


    ui->leTotal->setText(QString::number(totale,'f',3));


}

