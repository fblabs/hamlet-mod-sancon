#include "hgroups.h"
#include "ui_hgroups.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

HGroups::HGroups(QWidget *parent, QString conn) :
    QWidget(parent),
    ui(new Ui::HGroups)
{
    ui->setupUi(this);

    sConn=conn;

    db=QSqlDatabase::database(sConn);
    mod=new QSqlTableModel(0,db);
    mod->setTable("gruppi");
    mod->setSort(1,Qt::AscendingOrder);
    mod->select();
    ui->lvGruppi->setModel(mod);
    ui->lvGruppi->setModelColumn(1);
    setWindowModality(Qt::WindowModal);
    connect(ui->lvGruppi->selectionModel(),SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),this,SLOT(loadData()));

}

HGroups::~HGroups()
{
    delete ui;
}

void HGroups::loadData()
{
    QString nome;
    bool canUpdate,canUpdateAna;

    nome=ui->lvGruppi->model()->index(ui->lvGruppi->currentIndex().row(),1).data(0).toString();
    canUpdate=ui->lvGruppi->model()->index(ui->lvGruppi->currentIndex().row(),2).data(0).toBool();
    canUpdateAna=ui->lvGruppi->model()->index(ui->lvGruppi->currentIndex().row(),3).data(0).toBool();


    ui->leNome->setText(nome);
    ui->cbCanUpdate->setChecked(canUpdate);
    ui->cbCanUpdateAna->setChecked(canUpdateAna);
}

void HGroups::on_pushButton_2_clicked()
{
    close();
}

void HGroups::on_pushButton_clicked()
{
    QSqlQuery q(db);
    QString nome;
    bool canUpdate;
    bool canUpdateAna;
    QString id;

    nome=ui->leNome->text();
    canUpdate=ui->cbCanUpdate->isChecked();
    canUpdateAna=ui->cbCanUpdateAna->isChecked();
    id=ui->lvGruppi->model()->index(ui->lvGruppi->currentIndex().row(),0).data(0).toString();





    if(QMessageBox::question(this,QApplication::applicationName(),"Salvare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        QString sql="update gruppi set descrizione=:nome,canupdate=:canupdate,canupdateana=:canupdateana where ID=:id";
        q.prepare(sql);
        q.bindValue(0,nome);
        q.bindValue(1,canUpdate);
        q.bindValue(2,canUpdateAna);
        q.bindValue(3,id);
        bool b=q.exec();
        if(!b)
        {
            QMessageBox::warning(this,QApplication::applicationName(),"Errore!\n"+q.lastError().text(),QMessageBox::Ok);
        }

    }

   // mod->submit();
    mod->select();
}
