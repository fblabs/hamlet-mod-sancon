#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QSqlError>
//#include "hprodotti.h"
#include "hutenti.h"
#include "hmodricette.h"
#include "hproduction.h"
#include "hlotti.h"
#include "hsettings.h"
#include <QSettings>
#include <QMessageBox>
#include "huser.h"
#include "hanalisi.h"
#include "hlogin2.h"
#include "hnewop.h"
#include "hassociations.h"
#include "hclientfiles.h"
#include "hnuovaoperazione.h"
#include "hgestioneutenti.h"
#include "hassociazioni.h"
#include "hproduction.h"
#include "hprodottinew.h"
#include "hnuovaricetta.h"
#include "hwarehouse.h"
#include "hexpirations.h"
#include "hmodifyprod.h"
#include "hpackages.h"
#include "hpackagesunload.h"
#include "hcontacts.h"
#include <QDir>
#include <QProcess>
#include "halarm.h"
#include "hnotifica.h"
#include "hverifylabels.h"
#include "hschedeclienti.h"
#include "hnschede.h"
#include "hgraphicprint.h"
//#include "hcalcost.h"
#include "hcosti.h"
#include "hrecipesforclient.h"
#include <QCryptographicHash>
#include "hmagazzino.h"
#include "hworkprogram.h"
#include <QDebug>
#include <QInputDialog>
#include <QMessageBox>
#include "hlotti_new.h"

#include <QDesktopServices>



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    createPreferencesDB();

    // if (!bp){QMessageBox::warning(nullptr,QApplication::applicationName(),"Errore creando il database lotti preferiti, la funzionalità non sarà disponible ",QMessageBox::Ok);}

    QSettings settings("hamletmod.ini",QSettings::IniFormat);


    ui->setupUi(this);

    setFocusPolicy(Qt::StrongFocus);
    sConn=settings.value("conn").toString();

    ui->lbUser_label->setVisible(false);
    ui->tbModificaLotti->setVisible(false);
    ui->pbUnload->setVisible(false);
    ui->toolButton->click();







    this->showMaximized();



    disableUI();

}

void MainWindow::keyPressEvent(QKeyEvent *ke)
{
    if(ke->key()==Qt::Key_Enter or ke->key()==Qt::Key_Return)
    {
        login();
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::userLogged(HUser* usr,QSqlDatabase pdb)
{
    user=usr;
    db=pdb;

    user->get_permissions();

    if(usr)
    {
        // bool b=db.isOpen();
        ui->lbUser_label->setVisible(true);
        ui->lbCurrentUser->setVisible(true);
        ui->lbCurrentUser->setText(usr->getUsername()+" ("+usr->getName()+")");
        enableButtonsForRole();

    }
}




void MainWindow::disableUI()
{
    ui->toolButton->setEnabled(true);
    ui->tbMagaz->setEnabled(false);
    ui->tbLotti->setEnabled(false);
    ui->tbAnag->setEnabled(false);
    ui->tbClose->setEnabled(true);
    ui->tbProdotti->setEnabled(false);
    ui->tbRicette->setEnabled(false);
    ui->tbSettings->setEnabled(true);
    ui->tnProduzione->setEnabled(false);
    ui->tbAnalisi->setEnabled(false);
    ui->tbModificaLotti->setEnabled(false);
    ui->pBNewOperation->setEnabled(false);
    ui->tbUtenti->setEnabled(false);
    ui->tbLogout->setEnabled(false);
    ui->tbAssociazioni->setEnabled(false);
    ui->pbSchede->setEnabled(false);
    ui->pbPackages->setEnabled(false);
    ui->pbUnload->setEnabled(false);
    ui->pbContacts->setEnabled(false);
    ui->pbNotifiche->setEnabled(false);
    ui->pbCkeckNotifications->setEnabled(false);
    ui->pbExpirations->setEnabled(false);
    ui->pbCalcoloCosti->setEnabled(false);
    ui->pbC4R->setEnabled(false);
}

void MainWindow::enableButtonsForRole()
{


    if (user->getID()==-1)
    {
        //disabilito tutto>logout
        disableUI();

    }


    qDebug()<<"EnablebottonsforRole";

    user->get_permissions();



    ui->tbUtenti->setEnabled(user->get_utenti_v()>0);
    ui->pBNewOperation->setEnabled(user->get_operazioni_u()>0);
    ui->pbCalcoloCosti->setEnabled(user->get_costi_v()>0);
    ui->tbAnag->setEnabled(user->get_anagrafica_v()>0);
    ui->pbNotifiche->setEnabled(user->get_notifiche_v()>0);
    ui->pbCkeckNotifications->setEnabled(user->get_notifiche_v()>0);
    ui->pbContacts->setEnabled(user->get_contatti_v()>0);
    ui->tbLotti->setEnabled(user->get_lotti_v()>0);
    ui->tbMagaz->setEnabled(user->get_operazioni_v()>0);
    ui->pBNewOperation->setEnabled(user->get_operazioni_u()>0);
    ui->tbProdotti->setEnabled( user->get_prodotti_v()>0);
    ui->pbSchede->setEnabled( user->get_schede_v()>0);
    ui->tbRicette->setEnabled( user->get_ricette_v()>0);
    ui->tbAssociazioni->setEnabled( user->get_ricette_v()>0);
    ui->pbC4R->setEnabled( user->get_ricette_v()>0);
    ui->pbProgrammazione->setEnabled(user->get_programmi_v()>0);
    ui->tnProduzione->setEnabled(user->get_produzione_v()>0);
    ui->pbPackages->setEnabled(user->get_packages_v()>0);
    ui->tbAnalisi->setEnabled(user->get_analisi_v()>0);
    ui->pbCalcoloCosti->setEnabled(user->get_lotti_v()>0);
    ui->tbAnalisi->setEnabled(user->get_analisi_v()>0);



    ui->pbExpirations->setEnabled(true);
    ui->toolButton->setEnabled(false);
    ui->tbLogout->setEnabled(true);



}


void MainWindow::on_tbMagaz_clicked()
{
    HMagazzino *f=new HMagazzino(db,user);
    f->showMaximized();

}

void MainWindow::on_tbLotti_clicked()
{


    HLotti_new *f=new HLotti_new(db,user);
    f->showMaximized();
}

void MainWindow::on_tbRicette_clicked()
{
    HModRicette*f = new HModRicette(user,db);
    f->show();
}

void MainWindow::on_tbAnag_clicked()
{
    HUtenti* f = new HUtenti(user,db);


    //connect(this,SIGNAL(onConnectionName()),f,SLOT(onConnectionNameSet()));
    //emit onConnectionName();

    // f->setWindowModality(Qt::ApplicationModal);
    f->showMaximized();
}

void MainWindow::on_tnProduzione_clicked()
{
    HProduction *f=new HProduction(user,db);
    f->showMaximized();
}

void MainWindow::on_tbSettings_clicked()
{
    //QString licensefile=QDir::currentPath()+"/LICENSEKEY";
    QFile license(QDir::currentPath()+"/LICENSEKEY");

    if (!license.exists())
    {
        QMessageBox::warning(this,QApplication::applicationName(),"E' necessario il file di licenza\nRivolgersi all'amministrazione",QMessageBox::Ok);
        return;
    }
    license.open(QFile::ReadOnly);
    QString readCodeFromLicense =license.readLine();
    license.close();

    bool ok;
    QString input_pass_azienda=QInputDialog::getText(this,"AUTENTICAZIONE","Codice Azienda",QLineEdit::Normal,"codice azienda",&ok);
    if(ok)
    {
        QByteArray passHash=input_pass_azienda.toLatin1().toHex();
        QCryptographicHash passHashCrypt(QCryptographicHash::Sha1);
        QString input_pass_hash=QString(passHashCrypt.hash(passHash,QCryptographicHash::Sha1).toHex());


        if (input_pass_hash==readCodeFromLicense.replace("\n","").replace("\r",""))
        {
            HSettings *f = new HSettings();
            f->show();

        }
        else
        {

            QMessageBox::warning(this,QApplication::applicationName(),"Attenzione:codice di sblocco errato\nRivolgersi all'amministrazione",QMessageBox::Ok);
            disableUI();
        }
    }
    else
    {
        return;
    }



}

void MainWindow::on_tbProdotti_clicked()
{
    HProdottiNew* f = new HProdottiNew(user,db);
    f->show();

}



void MainWindow::on_tbClose_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Uscire dall'applicazione?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

        db.close();
        QSqlDatabase::removeDatabase(sConn);
        this->close();

        QApplication::quit();
    }
}

void MainWindow::on_tbAnalisi_clicked()
{
    HAnalisi *f=new HAnalisi(db,user);


    f->showMaximized();
}

void MainWindow::on_toolButton_clicked()
{

    login();


}

void MainWindow::on_pBNewOperation_clicked()
{

    HnuovaOperazione *f = new HnuovaOperazione(user,db);
    f->show();


}

void MainWindow::login()
{

    HLogin2 *f = new HLogin2();

    connect(f,SIGNAL(userLogged(HUser*,QSqlDatabase)),this,SLOT(userLogged(HUser*,QSqlDatabase)));

    f->show();

}

void MainWindow::on_tbLogout_clicked()
{

    user=nullptr;
    ui->lbUser_label->setVisible(false);
    ui->lbCurrentUser->setVisible(false);
    ui->lbCurrentUser->setText("");
    db.close();
    QSqlDatabase::removeDatabase(sConn);
    disableUI();
}



void MainWindow::on_tbAssociazioni_clicked()
{
    HAssociazioni* f = new HAssociazioni(user,db);
    f->show();
}

void MainWindow::on_pbSchede_clicked()
{
    // QApplication::setOverrideCursor(Qt::WaitCursor);
    // HSchedeClienti *f = new HSchedeClienti();
    // f->init(sConn,user);
    // f->showMaximized();


    /* HSchede *f =new HSchede(0,db);
    f->show();**/

    HNSChede *f= new HNSChede("","",db,user);
    f->showMaximized();

}

void MainWindow::on_tbUtenti_clicked()
{
    // int i=1;
    HGestioneUtenti *f=new HGestioneUtenti(user,db);
    connect(f,SIGNAL(permissions_updated()),this,SLOT(enableButtonsForRole()));

    f->show();
}


void MainWindow::on_tbModificaLotti_clicked()
{
    HModifyProd *h = new HModifyProd(user,db);

    h->showMaximized();
}

void MainWindow::on_pbPackages_clicked()
{
    HPackages *f =new HPackages(user,db);
    //  f->init(sConn,QString::number(user->getID()));
    f->show();
}

void MainWindow::on_pushButton_clicked()
{

    /* if(QMessageBox::Ok==QMessageBox::information(this,QApplication::applicationName(),"L'applicazione verrà chiusa per permettere l'aggiornamento. Continuare?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        QString file="./EasyUpdater/EasyUpdater.exe";
        QProcess::startDetached(file);
        QApplication::quit();

    }*/
    HGraphicPrint *f=new HGraphicPrint(0);
    f->show();


}


void MainWindow::on_pbUnload_clicked()
{
    HPackagesUnload *f=new HPackagesUnload(user,db);
    f->show();
}



void MainWindow::on_pbContacts_clicked()
{
    HContacts *f=new HContacts(0,user,db);

    f->show();
}

void MainWindow::on_pbNotifiche_clicked()
{

    HAlarm *f =new HAlarm(0,db,user);
    f->show();
}

void MainWindow::checkNotifications()
{
    QSqlQuery q(db);
    QString sql="";

    int userID=user->getID(); // l'utente corrente
    int groupID=user->getRole(); // il gruppo dell'utente corrente

    qDebug()<<userID<<groupID;




    sql="SELECT ID,IDUtente,IDGruppo,descrizione from notifiche WHERE (IDUtente LIKE CONCAT('%',:userid,'%')) or (IDGruppo LIKE CONCAT('%',:groupid,'%')) and (attiva > 0) and (data >=CURDATE())";


    q.prepare(sql);
    q.bindValue(":userid",userID);
    q.bindValue(":groupid",groupID);
    bool b=q.exec();
    qDebug()<<"check: "<<userID<<groupID<<q.lastQuery()<<q.lastError().text()<<"size:"<<q.size();
    if(b)
    {
        qDebug()<<"b:true"<<q.lastError().text();
        while (q.next())
        {
            qDebug()<<"check open form: "<<q.value(1).toString();
            HNotifica *f= new HNotifica(0,q.value(0).toInt(),db);
            f->show();
        }
    }

}


void MainWindow::on_pbCkeckNotifications_clicked()
{
    checkNotifications();
}

void MainWindow::on_pbVerifyLabels_clicked()
{
    HVerifyLabels *f = new HVerifyLabels();
    f->show();
}


void MainWindow::on_pbExpirations_clicked()
{
    HExpirations *f = new HExpirations(db,user);
    f->show();
}

void MainWindow::on_pbCalcoloCosti_clicked()
{
  // HCalcost *f= new HCalcost(db,user);
    HCosti  *f=new HCosti(db);
    f->showMaximized();
}

bool MainWindow::createPreferencesDB()
{
    QSettings settings("hamletmod.ini",QSettings::IniFormat);
    QString preferences_db=settings.value("preferred_lot").toString();

    if(!QFile::exists(preferences_db))
    {
        QSqlDatabase prefs=QSqlDatabase::addDatabase("QSQLITE");
        prefdb.setDatabaseName(preferences_db);
        prefdb.open();
        QString sql="CREATE TABLE 'pref' ( 'prod'	TEXT, 'lot'	TEXT )";
        QSqlQuery q(prefdb);
        q.exec(sql);
        qDebug()<<q.lastError().text();
        prefdb.close();

    }

    return QFile::exists("preferences.db");

}


void MainWindow::on_pbC4R_clicked()
{
    HRecipesForClient *f=new HRecipesForClient(db,-1);
    f->show();
}




void MainWindow::on_pbProgrammazione_clicked()
{
    HWorkProgram *f=new HWorkProgram(user,db);
    f->showMaximized();
}






