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
#include <QValidator>
#include <QShortcut>
#include <QDate>

HModifyRow::HModifyRow(const int p_id,const int p_idrow,const int p_row, HUser *p_user, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModifyRow)
{
    ui->setupUi(this);
    idp=p_id;
    idrow=p_idrow;
    row=p_row;
    user=p_user;
    db=p_db;

    setPermissions(user);
    ui->leVaso->installEventFilter(this);

    /* QShortcut *ok= new QShortcut(ui->leVaso);
    ok->setKey(Qt::Key_Tab);
    ui->leVaso->setFocusPolicy(Qt::NoFocus);
    connect(ok,SIGNAL(activated()),this,SLOT(calcTotale()));*/

    QDoubleValidator *quant_val=new QDoubleValidator();
    quant_val->setNotation(QDoubleValidator::StandardNotation);
    ui->leQuant->setValidator(quant_val);

    QDoubleValidator *vaso_val=new QDoubleValidator();
    vaso_val->setNotation(QDoubleValidator::StandardNotation);
    ui->leVaso->setValidator(vaso_val);

    QDoubleValidator *tot_val=new QDoubleValidator();
    tot_val->setNotation(QDoubleValidator::StandardNotation);
    ui->leTotal->setValidator(tot_val);



    ui->label_6->setVisible(false);
    ui->leOlio->setVisible(false);


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

    ui->cbCliente->setEnabled(p_user->get_programmi_u()>0);
    ui->cbProdotto->setEnabled(p_user->get_programmi_u()>0);
    ui->pbSave->setEnabled(p_user->get_programmi_u()>0);
    ui->ptLotti->setEnabled(p_user->get_wp_u()>0);
    ui->pbSaveLots->setEnabled(p_user->get_wp_u()>0);
    ui->leVasiProdotti->setEnabled(p_user->get_wp_u()>0);

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

    items<<" "<<"---"<<"L"<<"XS";
    smod->setStringList(items);
    ui->cbSanty->setModel(smod);
}

void HModifyRow::loadRow()
{


    rows_model=new QSqlTableModel(0,db);
    rows_model->setTable("righe_produzione");
    rows_model->setFilter("IDProduzione="+QString::number(idp)+" and num_riga="+QString::number(row));
    rows_model->select();
    //setup controls
    QSqlTableModel *clientimod=static_cast<QSqlTableModel*>(ui->cbCliente->model());
    clientimod->setFilter("ID="+rows_model->index(0,9).data(0).toString());
    ui->cbCliente->setCurrentIndex(0);
    QString texttofind=ui->cbCliente->currentText();
    clientimod->setFilter("cliente >0 and visibile >0");
    int ixc=ui->cbCliente->findText(texttofind);
    ui->cbCliente->setCurrentIndex(ixc);

    QSqlQueryModel *productsmod=static_cast<QSqlQueryModel*>(ui->cbProdotto->model());
    int r=rows_model->index(0,6).data(0).toInt();
    QString sxp;

    for(int ix=0;ix<productsmod->rowCount();++ix)
    {
        if(productsmod->record(ix).value(1).toInt()==r)
        {
            sxp=productsmod->record(ix).value(2).toString();
        }
    }


    int x=ui->cbProdotto->findText(sxp);
    ui->cbProdotto->setCurrentIndex(x);


    ui->leQuant->setText(rows_model->index(0,3).data(0).toString());
    ui->leVaso->setText(rows_model->index(0,4).data(0).toString());
    ui->leSpecificaOlio->setText(rows_model->index(0,5).data(0).toString());
    ui->leOlio->setText(rows_model->index(0,7).data(0).toString());
    ui->leTappo->setText(rows_model->index(0,8).data(0).toString());
    ui->cbSanty->setCurrentText(rows_model->index(0,11).data(0).toString());
    ui->leAllergeni->setText(rows_model->index(0,15).data(0).toString());
    ui->leNumOrd->setText(rows_model->index(0,12).data(0).toString());
    ui->leLotScad->setText(rows_model->index(0,17).data(0).toString());
    int fresco=rows_model->index(0,13).data(0).toInt();
    int pastorizzato=rows_model->index(0,14).data(0).toInt();
    QString lotti=rows_model->index(0,17).data(0).toString();
    QString lotScad=rows_model->index(0,18).data(0).toString();
    QString note=rows_model->index(0,16).data(0).toString();
    QString vasi_p=rows_model->index(0,19).data(0).toString();
    int completato=rows_model->index(0,20).data(0).toInt();






    fresco>0 ? ui->rbFresh->setChecked(true):ui->rbFresh->setChecked(false);
    pastorizzato>0 ? ui->rbPastorized->setChecked(true):ui->rbPastorized->setChecked(false);
    fresco+pastorizzato<1? ui->rbNone->setChecked(true): ui->rbNone->setChecked(false);

    QDate dpart=rows_model->index(0,22).data().toDate();

    if(dpart.isValid())
    {
        ui->dePartenza->setDate(dpart);
        ui->dePartenza->setStyleSheet("color: 'black'");
        ui->cbPartenza->setChecked(true);

    }
    else
    {
        ui->dePartenza->setDate(QDate::currentDate());
        ui->dePartenza->setStyleSheet("color: 'white'");
        ui->cbPartenza->setChecked(false);
    }





    completato>0 ? ui->cbDone->setChecked(true):ui->cbDone->setChecked(false);


    ui->ptNote->setPlainText(note);
    ui->ptLotti->setPlainText(lotti);
    ui->leLotScad->setText(lotScad);
    ui->leVasiProdotti->setText(vasi_p);

    bool vok=false;
    double tot=rows_model->index(0,10).data(0).toDouble(&vok);

    QString s_tot=QString::number(tot,'f',3);

    if(s_tot.contains(".000"))
    {
        s_tot=s_tot.left(s_tot.size()-4);
    }

    ui->leTotal->setText(s_tot);








}

void HModifyRow::on_cbCliente_currentIndexChanged(int index)
{
    Q_UNUSED(index);
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
    QString lotScad=ui->leLotScad->text();
    QString vasi_p=ui->leVasiProdotti->text();
    int fresco=0;
    int pastorizzato=0;
    int completato=0;
    if(ui->rbFresh->isChecked())
    {
        fresco=1;
        pastorizzato=0;

    }else if(ui->rbPastorized->isChecked())
    {
        fresco=0;
        pastorizzato=1;

    }
    else if(ui->rbNone->isChecked())
    {
        fresco=0;
        pastorizzato=0;
    }


    if(ui->cbDone->isChecked())
    {
        completato=1;

    }



    QSqlQuery q(db);
    QString sql="update righe_produzione set idcliente=:idcliente,idprodotto=:idprod,numero_ordine=:nord,vaso_gr=:vasog,quantita=:quan,specificaolio=:spolio,olio=:olio,tappo=:tappo,sanificazione=:sanif,allergeni=:alrg,fresco=:fresco,pastorizzato=:pasto,note=:note,lotti=:lotti,lotto_scadenza=:lotscad,totale=:tot,vasi_prodotti=:vp,completato=:comp,partenza=:part where IDproduzione=:idproduzione and num_riga=:num";
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
    q.bindValue(":lotti",ui->ptLotti->toPlainText());
    q.bindValue(":lotscad",lotScad);
    q.bindValue(":vp",vasi_p);
    q.bindValue(":comp",completato);

    if(ui->cbPartenza->isChecked())
    {

        q.bindValue(":part",ui->dePartenza->date());
    }

    qDebug()<<ui->dePartenza->date();



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

    loadRow();


}

void HModifyRow::calcTotale()
{
    bool vok=false;
    bool qok=false;

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

    double totale=(quant*vaso)/1000;

    QString s_tot=QString::number(totale,'f',3);

    if(s_tot.contains(".000"))
    {
        s_tot=s_tot.left(s_tot.size()-4);
    }




    ui->leTotal->setText(s_tot);

}


void HModifyRow::on_leTotal_returnPressed()
{
    calcTotale();
}


void HModifyRow::on_pbSaveLots_clicked()
{
    QSqlQuery q(db);

    QString sql="update righe_produzione set lotti=:lotti, vasi_prodotti=:vasi where id=:id";
    q.prepare(sql);
    q.bindValue(":lotti",ui->ptLotti->toPlainText());
    q.bindValue(":id",idrow);
    q.bindValue(":vasi",ui->leVasiProdotti->text().simplified());
    qDebug()<<"IDROWP"<<idrow;

    if(QMessageBox::question(this,QApplication::applicationName(),"Salvare i lotti produzione?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        bool b= q.exec();

        if(!b)QMessageBox::warning(this,QApplication::applicationName(),"Errore durante il salvataggio\n"+q.lastError().text(),QMessageBox::Ok);
        emit done();
    }
}

void HModifyRow::on_leQuant_returnPressed()
{
    calcTotale();
}


void HModifyRow::on_leVaso_returnPressed()
{
    calcTotale();



}

bool HModifyRow::eventFilter(QObject *target, QEvent *event)
{

    if(target==ui->leVaso)
    {
        if (event->type()==QEvent::KeyPress)
        {
            QKeyEvent* key = static_cast<QKeyEvent *>(event);

            if (key->key()==Qt::Key_Tab)
            {
                calcTotale();
                ui->leOlio->setFocus();

                return true;
            }
        }
    }
    return false;
}






void HModifyRow::on_cbPartenza_toggled(bool checked)
{
    ui->dePartenza->setEnabled(checked);

    if(checked)
    {

        ui->dePartenza->setStyleSheet("color: 'black'");
        if(!ui->dePartenza->date().isValid())
        {
         ui->dePartenza->setDate(QDate::currentDate());
        }
    }
    else
    {

        ui->dePartenza->setStyleSheet("color: 'white'");
       // ui->dePartenza->setDate(ui->dePartenza->minimumDate());
    }
}

