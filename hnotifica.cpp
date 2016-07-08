#include "hnotifica.h"
#include "ui_hnotifica.h"
#include <QSqlQuery>

HNotifica::HNotifica(QWidget *parent, int id, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HNotifica)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    db=pdb;
    idnotifica=id;
    QSqlQuery q(db);
    QString sql;
    sql = "SELECT descrizione FROM notifiche where ID=:id";
    q.prepare(sql);
    q.bindValue(":id",idnotifica);
    q.exec();
    q.first();
    ui->label->setText(q.value(0).toString());
    q.clear();

}

HNotifica::~HNotifica()
{
    delete ui;
}






void HNotifica::on_pbChiudi_clicked()
{
    close();
}
