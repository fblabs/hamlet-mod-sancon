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
    Q_UNUSED(parent);
    ui->setupUi(this);

    QShortcut *ok= new QShortcut(this);
    ok->setKey(Qt::Key_Enter);

    connect(ok,SIGNAL(activated()),this,SLOT(on_pushButton_clicked()));
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint);


}

//void HLogin2::init(QString conn)
//{
//   // sConnec=conn;
//   // db=QSqlDatabase::database(sConnec);
//}

HLogin2::~HLogin2()
{
    delete ui;
}

void HLogin2::login()
{

    QSettings settings("hamletmod");

    QString host,database,username,password,conname;
    int port;

    host=settings.value("server").toString();
    database=settings.value("database").toString();
    port=settings.value("port").toInt();
    username=settings.value("user").toString();
    password=settings.value("pwd").toString();
    conname=settings.value("conn").toString();



    db = QSqlDatabase::addDatabase("QMYSQL",conname);
    db.setHostName(host);
    db.setDatabaseName(database);
    db.setPort(port);
    db.setUserName(username);
    db.setPassword(password);

    QString s="settings: "+host+" "+database;

    if (!db.open())
    {
        QMessageBox::information(this,"Errore","\n Non posso aprire la connessione\n"+s+db.lastError().text(),QMessageBox::Ok);
        close();
    }

    QSqlQuery qrLogin(db);
    HUser* usr=new HUser();


    bool b=qrLogin.exec("Select utenti.ID,utenti.username,utenti.gruppo,gruppi.canupdate,gruppi.canupdateana,utenti.nome,utenti.attivo from utenti,gruppi where gruppi.ID=utenti.gruppo and utenti.username='" + ui->leUser->text() + "' and pwd=SHA1('" + ui->lePwd->text() + "') and utenti.attivo=1");

    if(!b)
    {

       QMessageBox::information(this,QApplication::applicationName(),"Errore di autenticazione utente!! Errore query\n" + qrLogin.lastError().text() ,QMessageBox::Ok);
       return;

    }

    qrLogin.first();

    if (qrLogin.size()==1)
    {



        usr->setID(qrLogin.value(0).toInt());
        usr->setUserName(qrLogin.value(1).toString());
        usr->setRole(qrLogin.value(2).toInt());
        usr->setCanUpdate(qrLogin.value(3).toBool());
        usr->setCanUpdateAnag(qrLogin.value(4).toBool());
        usr->setNome(qrLogin.value(5).toString());
      //  emit userLogged(usr->getID(),usr->getRole(),usr->getCanUpdate(),usr->getCanUpdateAnag(),db);
        emit userLogged(usr,db);


    // // qDebug()<<"HLogin2"<<usr->getUsername()<<QString::number(usr->getRole())<<usr->getCanUpdate()<<usr->getCanUpdateAnag();
        close();
     }
  else
  {
        QMessageBox::information(this,QApplication::applicationName(),"Errore di autenticazione utente\nErrore Risposta database- query size= "+QString::number(qrLogin.size())+qrLogin.lastError().text()+"*",QMessageBox::Ok);

        ui->leUser->setText("");
        ui->lePwd->setText("");
        ui->leUser->setFocus();
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
