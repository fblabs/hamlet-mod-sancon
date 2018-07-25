#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
//// #include <QDebug>
#include <QSqlError>
#include "hprodotti.h"
#include "hutenti.h"
#include "hmodricette.h"
#include "hproduzione.h"
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
#include "hanalyze_a.h"
#include "hnuovaoperazione.h"
#include "hanalyze_a.h"
#include "hgestioneutenti.h"
#include "hassociazioni.h"
#include "hproduction.h"
#include "hprodottinew.h"
#include "hnuovaricetta.h"
#include "hwarehouse.h"
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
//#include "hschede.h"
#include "hnschede.h"
#include "hgraphicprint.h"
#include  "hexpirations.h"
#include "hcalcost.h"
#include "hrecipesforclient.h"
#include <QCryptographicHash>
#include "hmagazzino.h"



#include <QDebug>
#include <QInputDialog>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  QSettings settings("hamletmod");
 // user=new HUser(0);

    ui->setupUi(this);
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pbVerifyLabels->setVisible(false);

    //enableDB();
    setFocusPolicy(Qt::StrongFocus);
    sConn=settings.value("conn").toString();

    ui->pbOldCards->setVisible(false);
    ui->toolButton->click();

  //  installEventFilter(this);





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

    if(usr)
    {


        bool b=db.isOpen();
        qDebug()<<"userLogged Main"<<QString::number(b);
        enableButtonsForRole();
       // ui->toolButton->click();
       // checkNotifications();
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
   // ui->pbNuovaRicetta->setEnabled(false);
    ui->tbSettings->setEnabled(true);
    ui->tnProduzione->setEnabled(false);
    ui->tbAnalisi->setEnabled(false);
  //  ui->pbRicercaLotto->setEnabled(true);
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
    ui->pbVerifyLabels->setEnabled(false);
    ui->pbOldCards->setEnabled(false);
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



    //// qDebug()<<QString::number(rol);

    ui->pbVerifyLabels->setEnabled(true);

    switch(user->getRole())
    {
    case 1:

        //produzione

        ui->tnProduzione->setEnabled(true);
        ui->pbUnload->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->toolButton->setEnabled(false);
        ui->tbMagaz->setEnabled(true);
        ui->tbLotti->setEnabled(true);
        ui->tbAnag->setEnabled(true);
        ui->tbClose->setEnabled(true);
        ui->tbProdotti->setEnabled(true);
        ui->tbRicette->setEnabled(true);
        ui->tbModificaLotti->setEnabled(true);
        ui->tbSettings->setEnabled(false);
        ui->tnProduzione->setEnabled(true);
        ui->tbAnalisi->setEnabled(true);
        ui->pBNewOperation->setEnabled(true);
        ui->pbSchede->setEnabled(true);
        ui->pbOldCards->setEnabled(true);
        ui->tbAssociazioni->setEnabled(false);
        ui->tbUtenti->setEnabled(false);
        ui->tbLogout->setEnabled(true);
        ui->pbPackages->setEnabled(true);
        ui->pbNotifiche->setEnabled(false);
        ui->pbContacts->setEnabled(false);
        ui->pbCkeckNotifications->setEnabled(true);
        ui->pbExpirations->setEnabled(true);
        ui->pbC4R->setEnabled(true);


        break;

    case 2:
        // magazzino


     //   ui->pbRicercaLotto->setEnabled(true);
        ui->tnProduzione->setEnabled(false);
        ui->tbLogout->setEnabled(true);
        ui->toolButton->setEnabled(true);
        ui->tbMagaz->setEnabled(true);
        ui->tbLotti->setEnabled(true);
        ui->tbAnag->setEnabled(true);
        ui->tbClose->setEnabled(true);
        ui->tbProdotti->setEnabled(true);
        ui->tbRicette->setEnabled(true);
        ui->tbModificaLotti->setEnabled(true);
        ui->tbSettings->setEnabled(false);
        ui->tnProduzione->setEnabled(true);
        ui->tbAnalisi->setEnabled(true);
        ui->pBNewOperation->setEnabled(true);
        ui->pbSchede->setEnabled(true);
        ui->tbAssociazioni->setEnabled(true);
        ui->pbOldCards->setEnabled(true);
        ui->tbUtenti->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->pbPackages->setEnabled(true);
        ui->pbUnload->setEnabled(true);
        ui->pbContacts->setEnabled(false);
        ui->pbNotifiche->setEnabled(false);
        ui->pbCkeckNotifications->setEnabled(true);
        ui->pbExpirations->setEnabled(true);
        ui->pbC4R->setEnabled(true);



        break;

    case 3:
        //uffici
        ui->tbMagaz->setEnabled(true);
        ui->pBNewOperation->setEnabled(true);
        ui->tbAnag->setEnabled(true);
        ui->tbLotti->setEnabled(true);
        ui->tbProdotti->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->pbSchede->setEnabled(true);
        ui->pbOldCards->setEnabled(true);
        ui->tbModificaLotti->setEnabled(false);
        ui->tnProduzione->setEnabled(true);
        ui->tbRicette->setEnabled(true);
        ui->tbAnalisi->setEnabled(true);
        ui->pbUnload->setEnabled(true);
        ui->pbContacts->setEnabled(true);
        ui->pbNotifiche->setEnabled(true);
        ui->pbCkeckNotifications->setEnabled(true);
        ui->pbExpirations->setEnabled(true);
        ui->pbC4R->setEnabled(true);
        ui->tbSettings->setEnabled(false);


        break;
    case 4://simone
        ui->tbMagaz->setEnabled(true);
        ui->pBNewOperation->setEnabled(true);
        ui->tbAnag->setEnabled(true);
        ui->tbLotti->setEnabled(true);
        ui->tbProdotti->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->pbSchede->setEnabled(true);
        ui->pbOldCards->setEnabled(true);
        ui->tbModificaLotti->setEnabled(false);
        ui->tnProduzione->setEnabled(true);
        ui->tbRicette->setEnabled(true);
        ui->tbAnalisi->setEnabled(true);
        ui->tbModificaLotti->setEnabled(true);
        ui->pbUnload->setEnabled(true);
        ui->pbContacts->setEnabled(false);
        ui->pbNotifiche->setEnabled(false);
        ui->pbCkeckNotifications->setEnabled(true);
        ui->pbExpirations->setEnabled(true);
        ui->pbC4R->setEnabled(true);
        ui->tbSettings->setEnabled(false);


        break;
     case 5://amministrativo
        ui->toolButton->setEnabled(false);
        ui->tbMagaz->setEnabled(true);
        ui->tbLotti->setEnabled(true);
        ui->tbAnag->setEnabled(true);
        ui->tbClose->setEnabled(true);
        ui->tbProdotti->setEnabled(true);
        ui->tbRicette->setEnabled(true);
        ui->tbModificaLotti->setEnabled(true);
        ui->tbSettings->setEnabled(true);
        ui->tnProduzione->setEnabled(true);
        ui->tbAnalisi->setEnabled(true);
        ui->pBNewOperation->setEnabled(true);
        ui->pbSchede->setEnabled(true);
        ui->pbOldCards->setEnabled(true);
        ui->tbAssociazioni->setEnabled(true);
        ui->tbUtenti->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->pbPackages->setEnabled(true);
        ui->pbUnload->setEnabled(true);
        ui->pbContacts->setEnabled(true);
        ui->pbNotifiche->setEnabled(true);
        ui->pbCkeckNotifications->setEnabled(true);
        ui->pbExpirations->setEnabled(true);
        ui->pbCalcoloCosti->setEnabled(true);
        ui->pbC4R->setEnabled(true);
        ui->tbSettings->setEnabled(false);


        break;
     case 6:
        ui->tnProduzione->setEnabled(false);
        ui->tbLogout->setEnabled(false);
        ui->toolButton->setEnabled(true);
        ui->tbMagaz->setEnabled(false);
        ui->tbLotti->setEnabled(false);
        ui->tbAnag->setEnabled(false);
        ui->tbClose->setEnabled(false);
        ui->tbProdotti->setEnabled(false);
        ui->tbRicette->setEnabled(false);
        ui->tbModificaLotti->setEnabled(false);
        ui->tbSettings->setEnabled(false);
        ui->tnProduzione->setEnabled(false);
        ui->tbAnalisi->setEnabled(false);
        ui->pBNewOperation->setEnabled(false);
        ui->pbSchede->setEnabled(false);
        ui->pbOldCards->setEnabled(false);
        ui->tbAssociazioni->setEnabled(false);
        ui->tbUtenti->setEnabled(false);
        ui->tbLogout->setEnabled(false);
        ui->pbPackages->setEnabled(true);
        ui->pbUnload->setEnabled(false);
        ui->pbContacts->setEnabled(false);
        ui->pbNotifiche->setEnabled(false);
        ui->pbNotifiche->setEnabled(false);
        ui->pbCkeckNotifications->setEnabled(false);
        ui->pbExpirations->setEnabled(true);
        ui->pbC4R->setEnabled(true);
        ui->tbSettings->setEnabled(false);





    }



}


void MainWindow::on_tbMagaz_clicked()
{
    HMagazzino *f=new HMagazzino(db,user);
    f->showMaximized();

}

void MainWindow::on_tbLotti_clicked()
{

    HLotti *f = new HLotti(db,user);
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
  //  passHashCrypt.hash(passHash,QCryptographicHash::Sha1);
    QString input_pass_hash=QString(passHashCrypt.hash(passHash,QCryptographicHash::Sha1).toHex());

  //  qDebug()<<"license :"+readCodeFromLicense.replace("\n","").replace("\r","")<<"input:"+input_pass_hash;

   // QString hash = QString("%1").arg(QString(QCryptographicHash::hash(str.toUtf8(),QCryptographicHash::Sha1).toHex()))



    if (input_pass_hash==readCodeFromLicense.replace("\n","").replace("\r",""))
    {
        HSettings *f = new HSettings();
        f->show();

    }
    else
    {

        QMessageBox::warning(this,QApplication::applicationName(),"Attenzione:codice di sblocco errato\nRivolgersi all'amministrazione",QMessageBox::Ok);
        //QApplication::quit();
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
        this->close();
        QApplication::quit();
    }
}

void MainWindow::on_tbAnalisi_clicked()
{
    HAnalisi *f=new HAnalisi(db);


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
  //  f->setDatabase(sConn);
    connect(f,SIGNAL(userLogged(HUser*,QSqlDatabase)),this,SLOT(userLogged(HUser*,QSqlDatabase)));

    f->show();




}

void MainWindow::on_tbLogout_clicked()
{

    user=0;
    db.close();
    disableUI();
}



void MainWindow::on_tbAssociazioni_clicked()
{
    HAssociazioni* f = new HAssociazioni(user,db);
 //   connect(this,SIGNAL(onConnectionName()),f,SLOT(setConnectionName(QString)));
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
    HGestioneUtenti *f=new HGestioneUtenti(db);
    f->show();
}

/*void MainWindow::on_pushButton_clicked()
{

}*/

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

void MainWindow::on_pbOldCards_clicked()
{
     HSchedeClienti *f = new HSchedeClienti();
     f->init(sConn,user);
     f->showMaximized();
}

void MainWindow::on_pbExpirations_clicked()
{
    HExpirations *f = new HExpirations(db,user);
    f->show();
}

void MainWindow::on_pbCalcoloCosti_clicked()
{
    HCalcost *f= new HCalcost(db,user);
    f->show();
}


void MainWindow::on_pbC4R_clicked()
{
    HRecipesForClient *f=new HRecipesForClient(db,-1);
    f->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    QApplication::setOverrideCursor(QCursor(Qt::BusyCursor));
    HWarehouse *f=new HWarehouse(user,db);
    f->showMaximized();

}
