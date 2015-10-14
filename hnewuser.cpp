#include "hnewuser.h"
#include "ui_hnewuser.h"

#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>

HNewUser::HNewUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HNewUser)
{
    ui->setupUi(this);
}

HNewUser::~HNewUser()
{
    delete ui;
}

void HNewUser::init(QString conn)
{
    sConn=conn;
    db =QSqlDatabase::database(sConn);

    tmRole=new QSqlTableModel(0,db);
    tmRole->setTable("gruppi");
    tmRole->select();
    ui->cbxRoles->setModel(tmRole);
    ui->cbxRoles->setModelColumn(1);
    tmRole->setSort(1,Qt::AscendingOrder);
}

void HNewUser::on_cbShow_toggled(bool checked)
{
    if (checked)
    {
        ui->lePassword->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->lePassword->setEchoMode(QLineEdit::Password);
    }
}

void HNewUser::on_pushButton_2_clicked()
{
    this->close();
}

void HNewUser::on_pushButton_clicked()
{
    QString username=ui->leUserName->text();
    QString name=ui->leNome->text();
    QString password=ui->lePassword->text();
    QString role=ui->cbxRoles->model()->index(ui->cbxRoles->currentIndex(),0).data(0).toString();
    QMessageBox::information(this,QApplication::applicationName(),ui->cbxRoles->model()->index(ui->cbxRoles->currentIndex(),0).data(0).toString());

    QString sql="INSERT INTO utenti(username,pwd,gruppo,nome)values('"+username+"',sha1('"+password+"'),"+ role +",'"+name+"')";

    QSqlQuery q(db);

    if(q.exec(sql))
    {
        QMessageBox::information(this,QApplication::applicationName(),"Nuovo utente salvato",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando il nuovo utente",QMessageBox::Ok);

    }
}
