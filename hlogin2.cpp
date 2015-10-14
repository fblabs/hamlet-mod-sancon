#include "hlogin2.h"
#include "ui_hlogin2.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSettings>
#include <QSqlError>
#include <QDebug>
#include <QShortcut>
#include "huser.h"

HLogin2::HLogin2(QWidget *parent) :
    ui(new Ui::HLogin2)
{
    ui->setupUi(this);
    enableDB();
    QShortcut *ok= new QShortcut(this);
    ok->setKey(Qt::Key_Enter);

    //db = QSqlDatabase::database("QMYSQL","temporary");
    connect(ok,SIGNAL(activated()),this,SLOT(on_pushButton_clicked()));
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint);


}

void HLogin2::init(QString conn)
{
    db=QSqlDatabase::database(conn);
}

HLogin2::~HLogin2()
{
    delete ui;
}

void HLogin2::login()
{



    QSqlQuery qrLogin(db);
    HUser* usr=new HUser();


    bool b=qrLogin.exec("Select utenti.ID,utenti.username,utenti.gruppo,gruppi.canupdate,gruppi.canupdateana,utenti.attivo from utenti,gruppi where gruppi.ID=utenti.gruppo and utenti.username='" + ui->leUser->text() + "' and pwd=SHA1('" + ui->lePwd->text() + "')");

    if(!b)
    {
      // QMessageBox::critical(this,QApplication::applicationName(),"Errore di connessione: "+ qrLogin.lastError().text(),QMessageBox::Ok);
       QMessageBox::information(this,QApplication::applicationName(),"Errore di autenticazione utente" + db.lastError().text(),QMessageBox::Ok);


    }

    qrLogin.first();

    if (qrLogin.size()==1)
    {



        usr->setID(qrLogin.value(0).toInt());
        usr->setUserName(qrLogin.value(1).toString());
        usr->setRole(qrLogin.value(2).toInt());
        usr->setCanUpdate(qrLogin.value(3).toBool());
        usr->setCanUpdateAnag(qrLogin.value(4).toBool());
        emit userLogged(usr->getID(),usr->getRole(),usr->getCanUpdate(),usr->getCanUpdateAnag());

// qDebug()<<"HLogin2"<<usr->getUsername()<<QString::number(usr->getRole())<<usr->getCanUpdate()<<usr->getCanUpdateAnag();
        close();
     }
  else
  {
        QMessageBox::information(this,QApplication::applicationName(),"Errore di autenticazione utente",QMessageBox::Ok);

        ui->leUser->setText("");
        ui->lePwd->setText("");
  }


}



void HLogin2::on_pushButton_clicked()
{
    login();

}

void HLogin2::on_pushButton_2_clicked()
{
    close();
}

void HLogin2::enableDB()
{


        QSettings settings("DB");


        sConnec=settings.value("conn").toString();
        db = QSqlDatabase::addDatabase("QMYSQL",sConnec);
        db.setHostName(settings.value("address").toString());
        db.setDatabaseName(settings.value("database").toString());
        db.setPort(settings.value("port").toInt());
        db.setUserName(settings.value("user").toString());
        db.setPassword(settings.value("pwd").toString());


        db.open();


}


void HLogin2::setDatabase(QString connessione)
{
    sConnec = connessione;
}

void HLogin2::onConnectionNameSet()
{
    enableDB();
}

void HLogin2::on_lePwd_editingFinished()
{

}




void HLogin2::on_checkBox_toggled(bool checked)
{
    if(checked)
    {
        ui->lePwd->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->lePwd->setEchoMode(QLineEdit::Password);
    }
}
