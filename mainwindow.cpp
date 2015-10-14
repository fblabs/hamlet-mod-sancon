#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include "hprodotti.h"
#include "hutenti.h"
#include "hmodricette.h"
#include "hmagazzino.h"
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
#include "hschedeclienti.h"
#include "hassociazioni.h"
#include "hproduction.h"
#include "hprodottinew.h"
#include "hnuovaricetta.h"
#include "hwarehouse.h"
#include "hmodifyprod.h"
#include "hpackages.h"
#include <QDir>
#include <QProcess>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  QSettings settings("DB");

    ui->setupUi(this);
  //  enableDB();
//enableButtonsForRole(true);
   // this->showMaximized();

   // enableDB();

  sConn=settings.value("conn").toString();
  user= new HUser();
  user->init(sConn);

this->showMaximized();

disableUI();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    user=new HUser();
    user->init(sConn);
}



void MainWindow::userLogged(int id, int gruppo, bool update,bool updateanag)
{
    qDebug()<< "main->userLogged: id"+QString::number(id) << "Role: " + QString::number(gruppo);


    user->setID(id);
    user->setRole(gruppo);
    user->setCanUpdate(update);
    user->setCanUpdateAnag(updateanag);

    enableButtonsForRole();


}

void MainWindow::enableDB()
{
    QSettings settings("DB");
    QString conn = settings.value("conn").toString();

  //  db.removeDatabase(conn);
    db = QSqlDatabase::addDatabase("QMYSQL",conn);
    db.setHostName(settings.value("address").toString());
    db.setDatabaseName(settings.value("database").toString());
    db.setPort(settings.value("port").toInt());
    db.setUserName(settings.value("user").toString());
    db.setPassword(settings.value("pwd").toString());

  //  db.setUserName("root");
  // db.setPassword("joepass%2k13");


    db.open();


}

void MainWindow::enableUI()
{

    ui->toolButton->setEnabled(false);
    ui->tbMagaz->setEnabled(true);
    ui->tbLotti->setEnabled(true);
    ui->tbAnag->setEnabled(true);
    ui->tbClose->setEnabled(true);
    ui->tbProdotti->setEnabled(true);
    ui->tbRicette->setEnabled(true);
    //ui->pbNuovaRicetta->setEnabled(true);
    ui->tbSettings->setEnabled(true);
    ui->tnProduzione->setEnabled(true);
    ui->tbAnalisi->setEnabled(true);
    ui->pBNewOperation->setEnabled(true);
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
}

void MainWindow::enableButtonsForRole()
{


    if (user->getID()==-1)
    {
        //disabilito tutto>logout
        disableUI();

    }

    int rol=user->getRole();

    qDebug()<<QString::number(rol);

    switch(user->getRole())
    {
    case 1:

        ui->tnProduzione->setEnabled(true);
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
        ui->tbAssociazioni->setEnabled(false);
        ui->tbUtenti->setEnabled(false);
        ui->tbLogout->setEnabled(true);
        ui->pbPackages->setEnabled(true);
        break;

    case 2:
        // qui abilito tutto essendo un utente con privilegi amministrativi


     //   ui->pbRicercaLotto->setEnabled(true);

        break;

    case 3:
        ui->tbMagaz->setEnabled(true);
        ui->pBNewOperation->setEnabled(true);
        ui->tbAnag->setEnabled(true);
        ui->tbLotti->setEnabled(true);
        ui->tbProdotti->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->pbSchede->setEnabled(true);
        ui->tbModificaLotti->setEnabled(false);
        ui->tnProduzione->setEnabled(true);
        ui->tbRicette->setEnabled(true);
        ui->tbAnalisi->setEnabled(true);
        break;
    case 4://simone
        ui->tbMagaz->setEnabled(true);
        ui->pBNewOperation->setEnabled(true);
        ui->tbAnag->setEnabled(true);
        ui->tbLotti->setEnabled(true);
        ui->tbProdotti->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->pbSchede->setEnabled(true);
        ui->tbModificaLotti->setEnabled(false);
        ui->tnProduzione->setEnabled(true);
        ui->tbRicette->setEnabled(true);
        ui->tbAnalisi->setEnabled(true);
        ui->tbModificaLotti->setEnabled(true);

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
        ui->tbAssociazioni->setEnabled(true);
        ui->tbUtenti->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->pbPackages->setEnabled(true);
        break;
     case 6:
        ui->tnProduzione->setEnabled(true);
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
        ui->tbAnalisi->setEnabled(false);
        ui->pBNewOperation->setEnabled(true);
        ui->pbSchede->setEnabled(true);
        ui->tbAssociazioni->setEnabled(false);
        ui->tbUtenti->setEnabled(true);
        ui->tbLogout->setEnabled(true);
        ui->pbPackages->setEnabled(true);



    }


}


void MainWindow::on_tbMagaz_clicked()
{
 /*   QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    HMagazzino *f = new HMagazzino();
    connect(this,SIGNAL(onConnectionName()),f,SLOT(onConnectionNameSet()));
    f->setUser(currentUsr->getID());
    f->setConn(sConn);
    emit onConnectionName();
    f->showMaximized();*/
    QApplication::setOverrideCursor(QCursor(Qt::BusyCursor));
    HWarehouse *f=new HWarehouse();
    f->init(sConn,QString::number(user->getID()));
    f->showMaximized();
    
}

void MainWindow::on_tbLotti_clicked()
{
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    HLotti *f = new HLotti();
    connect (this,SIGNAL(onConnectionName()),f,SLOT(onConnectionNameSet()));
    f->setConnectionName(sConn);
    f->setUser(user->getID());
    emit onConnectionName();
    f->showMaximized();
}

void MainWindow::on_tbRicette_clicked()
{
    HModRicette*f = new HModRicette();
    f->init(sConn,user);



   // connect(this,SIGNAL(onConnectionName()),f,SLOT(onConnectionNameSet()));
   // f->SetDB();

    f->show();
}

void MainWindow::on_tbAnag_clicked()
{
    HUtenti* f = new HUtenti();

    f->setConnectionName(sConn,user);

    connect(this,SIGNAL(onConnectionName()),f,SLOT(onConnectionNameSet()));
    emit onConnectionName();

    f->setWindowModality(Qt::ApplicationModal);
    f->showMaximized();
}

void MainWindow::on_tnProduzione_clicked()
{

  //  HProduzione *f = new HProduzione();
   // f->init(sConn,QString::number(currentUsr->getID()));
  //  f->setConnection(sConn);
 //   connect(this,SIGNAL(onConnectionName()),f,SLOT(onConnectionNameSet()));
 //   emit onConnectionName();

    HProduction *f=new HProduction();
    f->init(sConn,QString::number(user->getID()));

  //  f->setUserId(currentUsr->getID());
    f->show();
}

void MainWindow::on_tbSettings_clicked()
{
    HSettings *f = new HSettings();
    f->setWindowModality(Qt::ApplicationModal);
    f->show();
}

void MainWindow::on_tbProdotti_clicked()
{
    HProdottiNew* f = new HProdottiNew();

    f->init(sConn);
    f->show();
 //  f->setConnection(sConn);

 //   f->setWindowModality(Qt::ApplicationModal);
  //  f->setMain(this);
//   f->show();
}



void MainWindow::on_tbClose_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Uscire dall'applicazione?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        this->close();
    }
}

void MainWindow::on_tbAnalisi_clicked()
{
    HAnalisi *f=new HAnalisi();
    f->init(sConn);

    f->showMaximized();
}

void MainWindow::on_toolButton_clicked()
{

login();

}

void MainWindow::on_pBNewOperation_clicked()
{
   HnuovaOperazione *f = new HnuovaOperazione();

  f->setConnectionName(sConn,QString::number(user->getID()));
  f->show();
}

void MainWindow::login()
{

    HLogin2 *f = new HLogin2();
    f->setDatabase(sConn);
    connect(f,SIGNAL(userLogged(int,int,bool,bool)),this,SLOT(userLogged(int,int,bool,bool)));

    f->show();




}

void MainWindow::on_tbLogout_clicked()
{

    user->init(sConn);
     disableUI();
}



void MainWindow::on_tbAssociazioni_clicked()
{
    HAssociazioni* f = new HAssociazioni();
 //   connect(this,SIGNAL(onConnectionName()),f,SLOT(setConnectionName(QString)));
    f->init(sConn);
    f->show();
}

void MainWindow::on_pbSchede_clicked()
{

    HSchedeClienti *f = new HSchedeClienti();
    f->init(sConn,user);
    f->show();

}

void MainWindow::on_tbUtenti_clicked()
{
    int i=1;
    HGestioneUtenti *f=new HGestioneUtenti();
    f->init(sConn);
    f->show();
}

/*void MainWindow::on_pushButton_clicked()
{

}*/

void MainWindow::on_tbModificaLotti_clicked()
{
    HModifyProd *h = new HModifyProd();
    h->init(sConn,user);
    h->show();
}

void MainWindow::on_pbPackages_clicked()
{
    HPackages *f =new HPackages();
    f->init(sConn,QString::number(user->getID()));
    f->show();
}

void MainWindow::on_pushButton_clicked()
{

    if(QMessageBox::Ok==QMessageBox::information(this,QApplication::applicationName(),"L'applicazione verrà chiusa per permettere l'aggiornamento. Continuare?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        QString file="./EasyUpdater/EasyUpdater.exe";
        QProcess::startDetached(file);
        QApplication::quit();

    }


}

