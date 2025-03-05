#include "hcreategroup.h"
#include "ui_hcreategroup.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

HCreateGroup::HCreateGroup(HUser *p_user, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HCreateGroup)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;

}

HCreateGroup::~HCreateGroup()
{
    delete ui;
}

void HCreateGroup::save_new_group()
{
    QSqlQuery q(db);
    QString sql="INSERT INTO gruppi (descrizione,note) VALUES (:descrizione,:note)";

    QString descrizione=ui->leDefinition->text();
    QString note=ui->leNote->text();

    q.prepare(sql);
    q.bindValue(":descrizione",descrizione);
    q.bindValue(":note",note);

     db.transaction();

    if(QMessageBox::question(this,QApplication::applicationName(),"Creare nuovo gruppo "+descrizione+" ?'",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {


         if(q.exec())
         {
             QMessageBox::information(this,QApplication::applicationName(),"gruppo permessi creato",QMessageBox::Ok);
             db.commit();
             emit group_created();
         }else{
             QMessageBox::information(this,QApplication::applicationName(),"Errore creando nuovo gruppo permessi"+q.lastError().text(),QMessageBox::Ok);
             db.rollback();
         }




    }
    else
    {
         db.rollback();
        QMessageBox::information(this,QApplication::applicationName(),"Creazione gruppo permessi cancellata ",QMessageBox::Ok);

    }

}

void HCreateGroup::on_pbSave_clicked()
{
    save_new_group();
}

void HCreateGroup::on_pbClose_clicked()
{
    close();
}

