#include "hwpmanager.h"
#include "ui_hwpmanager.h"
#include "huser.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QSQlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QStringListModel>

HWpManager::HWpManager(int p_id,HUser* p_user, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWpManager)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;
    id=p_id;

    getClients();
    getProducts();
    getTappi();
    initSanityModel();
}

HWpManager::~HWpManager()
{
    delete ui;
}

void HWpManager::getClients()
{
    QSqlTableModel *cmod=new QSqlTableModel(0,db);
    cmod->setTable("anagrafica");
    cmod->setFilter("cliente >0");
    cmod->setSort(1,Qt::AscendingOrder);
    cmod->select();

    ui->cbCliente->setModel(cmod);
    ui->cbCliente->setModelColumn(1);
}


void HWpManager::getProducts()
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

void HWpManager::getTappi()
{
    QSqlTableModel *tmod=new QSqlTableModel(0,db);
    tmod->setTable("prodotti");
    tmod->setFilter("tipo=4");
    tmod->setSort(1,Qt::AscendingOrder);
    tmod->select();
    ui->cbTappo->setModel(tmod);
    ui->cbTappo->setModelColumn(1);

}

void HWpManager::initSanityModel()
{
    QStringListModel *smod=new QStringListModel();
    QStringList items;

    items<<"---"<<"L"<<"XS";
    smod->setStringList(items);
    ui->cbSanty->setModel(smod);
}

void HWpManager::addSheetRow()
{
    QSqlQuery q(db);
    QSqlQuery qrw(db);
    QString sqlrw="SELECT count(num_riga) from righe_produzione where IDproduzione="+QString::number(id);
    int row=0;
    if (qrw.exec(sqlrw))
    {
        qrw.next();
        row=qrw.value(0).toInt();

    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore caricando il numero di riga",QMessageBox::Ok);
        return;
    }

    bool vok=false;
    bool qok=false;
    int cliente=ui->cbCliente->model()->index(ui->cbCliente->currentIndex(),0).data(0).toInt();
    int prodotto=ui->cbProdotto->model()->index(ui->cbProdotto->currentIndex(),1).data(0).toInt();
    QString ordine=ui->leNumOrd->text();
    double vaso=ui->leVaso->text().toDouble(&vok);
    if(!vok)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore di formato della cifra per quantità vaso",QMessageBox::Ok);
        return;
    }
    double quant=ui->leQuant->text().toDouble(&qok);
    if(!qok)
    {
       QMessageBox::warning(this,QApplication::applicationName(),"Errore di formato della cifra per quantità vaso",QMessageBox::Ok);
       return;
    }
    QString olio=ui->leOlio->text();
    int tappo=ui->cbTappo->model()->index(ui->cbTappo->currentIndex(),0).data(0).toInt();

    QString sanificazione=ui->cbSanty->currentText();
    QString allergeni=ui->leAllergeni->text();
    int fresco=0;
    int pastorizzato=0;
    if(ui->rbFresh->isChecked())
    {
        fresco=1;
    }
    if(ui->rbPastorized->isChecked())
    {
        pastorizzato=1;
    }
    if(QMessageBox::question(this,QApplication::applicationName(),"Salvare?",QMessageBox::Ok)==QMessageBox::Cancel)
    {
        return;
    }
    QString note=ui->ptNote->toPlainText();
    double totale=quant*vaso;
    ui->leTotal->setText(QString::number(totale,'f',3));


    QString sql="insert into righe_produzione(IDProduzione,num_riga, idcliente,idprodotto,numero_ordine,vaso_gr,quantita,olio,tappo,sanificazione,allergeni,fresco,pastorizzato,note,totale)"
                " VALUES(:idproduzione,:numriga,:idcliente,:idprodotto,:numord,:vaso,:quantita,:olio,:tappo,:sanificazione,:allergeni,:fresco,:pastorizzato,:note,:totale)";
    q.prepare(sql);
    q.bindValue(":idproduzione",id);
    q.bindValue(":numriga",row);
    q.bindValue(":idcliente",cliente);
    q.bindValue(":idprodotto",prodotto);
    q.bindValue(":numord",ordine);
    q.bindValue(":vaso",vaso);
    q.bindValue(":quantita",quant);
    q.bindValue(":olio",ui->leOlio->text());
    q.bindValue(":tappo",tappo);
    q.bindValue(":sanificazione",sanificazione);
    q.bindValue(":allergeni",allergeni);
    q.bindValue(":fresco",fresco);
    q.bindValue(":pastorizzato",pastorizzato);
    q.bindValue(":note",note);
    q.bindValue(":totale",totale);

    bool b=q.exec();

    if(b)
    {emit rowAdded();}
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando la riga\n"+q.lastError().text(),QMessageBox::Ok);
        return;
    }



}


void HWpManager::on_pbClose_clicked()
{
    close();
}

void HWpManager::on_cbCliente_currentIndexChanged(int index)
{
    getProducts();
}

void HWpManager::on_pbSave_clicked()
{
    addSheetRow();
}

void HWpManager::on_leTotal_returnPressed()
{
  double totale =calcTotale();
  ui->leTotal->setText(QString::number(totale,'f',3));
}

double HWpManager::calcTotale()
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

    double totale=quant*vaso;
    return totale;
}

void HWpManager::on_leQuant_returnPressed()
{
    double totale =calcTotale();
    ui->leTotal->setText(QString::number(totale,'f',3));
}
