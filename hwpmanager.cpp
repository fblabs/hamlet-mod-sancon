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
#include "hprint.h"
#include <QCompleter>

HWpManager::HWpManager(int p_id,HUser* p_user, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWpManager)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;
    id=p_id;

     ui->leVaso->installEventFilter(this);



    ui->dePartenza->setStyleSheet("color: 'white'");
    ui->dePartenza->setDate(QDate::currentDate());
    ui->dePartenza->setEnabled(false);


    getClients();
    getProducts();
    //getTappi();
    initSanityModel();

    if(!user->get_wp_u()>0)
    {
        ui->ptLotti->setEnabled(false);
    }


}

HWpManager::~HWpManager()
{
    delete ui;
}

void HWpManager::getClients()
{
    QSqlTableModel *cmod=new QSqlTableModel(0,db);
    cmod->setTable("anagrafica");
    cmod->setFilter("cliente >0 and visibile > 0");
    cmod->setSort(1,Qt::AscendingOrder);
    cmod->select();

    ui->cbCliente->setModel(cmod);
    ui->cbCliente->setModelColumn(1);
    QCompleter *comp=new QCompleter(cmod);
    comp->setCompletionColumn(1);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbCliente->setCompleter(comp);
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

/*void HWpManager::getTappi()
{
    QSqlTableModel *tmod=new QSqlTableModel(0,db);
    tmod->setTable("prodotti");
    tmod->setFilter("tipo=4");
    tmod->setSort(1,Qt::AscendingOrder);
    tmod->select();
    ui->cbTappo->setModel(tmod);
    ui->cbTappo->setModelColumn(1);

}*/

void HWpManager::initSanityModel()
{
    QStringListModel *smod=new QStringListModel();
    QStringList items;

    items<<""<<"---"<<"L"<<"XS";
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
        row=qrw.value(0).toInt()+1;

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
    calcTotale();
    QString olio=ui->leOlio->text();
    QString specolio=ui->leSpecOlio->text();
    QString tappo=ui->leTappo->text();

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

    QString note=ui->ptNote->toPlainText();
    QString lotti=ui->ptLotti->toPlainText();
    bool tok=false;
    double totale=ui->leTotal->text().toDouble(&tok);
    if(!tok)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore di formato della quantità totale",QMessageBox::Ok);
        return;
    }
    QString lotscad=ui->leLotScad->text();






    QString sql="insert into righe_produzione(IDProduzione,num_riga, idcliente,idprodotto,numero_ordine,vaso_gr,quantita,specificaolio,olio,tappo,sanificazione,allergeni,fresco,pastorizzato,lotti,note,totale,lotto_scadenza,stato,partenza)"
                " VALUES(:idproduzione,:numriga,:idcliente,:idprodotto,:numord,:vaso,:quantita,:specolio,:olio,:tappo,:sanificazione,:allergeni,:fresco,:pastorizzato,:lotti,:note,:totale,:lot_scad,:stato,:part)";
    q.prepare(sql);
    q.bindValue(":idproduzione",id);
    q.bindValue(":numriga",row);
    q.bindValue(":idcliente",cliente);
    q.bindValue(":idprodotto",prodotto);
    q.bindValue(":numord",ordine);
    q.bindValue(":vaso",vaso);
    q.bindValue(":quantita",quant);
    q.bindValue(":specolio",specolio);
    q.bindValue(":olio",olio);
    q.bindValue(":tappo",tappo);
    q.bindValue(":sanificazione",sanificazione);
    q.bindValue(":allergeni",allergeni);
    q.bindValue(":fresco",fresco);
    q.bindValue(":pastorizzato",pastorizzato);
    q.bindValue(":lotti",lotti);
    q.bindValue(":note",note);
    q.bindValue(":totale",totale);
    q.bindValue(":lot_scad",lotscad);
    q.bindValue(":stato",0);

    QDate dp=ui->dePartenza->date();
    if(dp!=ui->dePartenza->minimumDate() && dp.isValid())
    {
        q.bindValue(":part",ui->dePartenza->date());
    }

    bool b=false;

    if(QMessageBox::question(this,QApplication::applicationName(),"Salvare?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        db.transaction();

        b=q.exec();



        if(b)
        {
            db.commit();
            emit rowAdded();
            close();
        }
        else
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando la riga\n"+q.lastError().text(),QMessageBox::Ok);
            return;
        }
    }
    else
    {
        QMessageBox::information(this,QApplication::applicationName(),"Salvataggio annullato",QMessageBox::Ok);
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

    QString s_tot=QString::number(totale,'f',3);

    if(s_tot.contains(".000"))
    {
        s_tot=s_tot.left(s_tot.size()-4);
    }

    ui->leTotal->setText(s_tot);

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

    double totale=(quant*vaso)/1000;




    return totale;
}

bool HWpManager::eventFilter(QObject *target, QEvent *event)
{

    if(target==ui->leVaso)
    {
        if (event->type()==QEvent::KeyPress)
        {
            QKeyEvent* key = static_cast<QKeyEvent *>(event);

            if (key->key()==Qt::Key_Tab)
            {

                double totale =calcTotale();

                QString s_tot=QString::number(totale,'f',3);

                if(s_tot.contains(".000"))
                {
                    s_tot=s_tot.left(s_tot.size()-4);
                }

                ui->leTotal->setText(s_tot);



                ui->leOlio->setFocus();

                return true;
            }
        }
    }
    return false;
}


void HWpManager::on_leVaso_returnPressed()
{
    double totale =calcTotale();

    QString s_tot=QString::number(totale,'f',3);

    if(s_tot.contains(".000"))
    {
        s_tot=s_tot.left(s_tot.size()-4);
    }

    ui->leTotal->setText(s_tot);


}

void HWpManager::on_cbPartenza_toggled(bool checked)
{
    ui->dePartenza->setEnabled(checked);

    if(checked)
    {

        ui->dePartenza->setStyleSheet("color: 'black'");
        ui->dePartenza->setDate(QDate::currentDate());

    }
    else
    {

        ui->dePartenza->setStyleSheet("color: 'white'");
        ui->dePartenza->setDate(ui->dePartenza->minimumDate());
    }
}

