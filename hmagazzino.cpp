#include "hmagazzino.h"
#include "ui_hmagazzino.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QHeaderView>
#include <QSqlError>
#include <QDebug>
#include <QCursor>
#include <QShortcut>
#include <QCompleter>
#include "hnuovaoperazione.h"
#include "hwarehousedetails.h"
#include "hpackagesunload.h"
#include "hmodifylot.h"


HMagazzino::HMagazzino(QSqlDatabase pdb,HUser *puser,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HMagazzino)
{
    ui->setupUi(this);
    db=pdb;
    user=puser;
    ui->deFrom->setMaximumDate(QDate::currentDate());
    ui->deFrom->setDate(QDate::currentDate().addMonths(-3));
    ui->deTo->setDate(QDate::currentDate().addDays(1));
   // ui->deTo->setMinimumDate(QDate::currentDate().addDays(1));
    loadProdotti();

    queryOperations();
    QShortcut *ok= new QShortcut(this);
    ok->setKey(Qt::Key_Return);

    connect(ok,SIGNAL(activated()),this,SLOT(queryOperations()));
    connect(ui->deFrom,SIGNAL(dateChanged(QDate)),this,SLOT(queryOperations()));
    connect(ui->deTo,SIGNAL(dateChanged(QDate)),this,SLOT(queryOperations()));



}

HMagazzino::~HMagazzino()
{
    delete ui;
}

void HMagazzino::on_pushButton_clicked()
{
    close();
}

void HMagazzino::queryOperations()
{
    ui->tableView->setFocus();
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QSqlQuery q(db);
    QSqlQueryModel *mod=new QSqlQueryModel();
   QString where=QString();
    QString dateRange=" o.data BETWEEN '" + ui->deFrom->date().toString("yyyy-MM-dd") + "' AND '" + ui->deTo->date().toString("yyyy-MM-dd") +"'";

    where = " where";
    where.append(dateRange);


    if (ui->cbP->isChecked())
    {
        QString prodcond=" and p.ID="+ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toString();
        where.append(prodcond);


    }

    if (!ui->cbC->isChecked()&& ui->cbS->isChecked())
    {
       where.append(" and o.azione=2");

    }
    if (ui->cbC->isChecked()&& !ui->cbS->isChecked())
    {
       where.append(" and o.azione=1");

    }

    where.append(" order by o.data desc");

    QString sql="SELECT o.ID,o.IDlotto, o.data as 'DATA',p.descrizione as 'PRODOTTO',l.ID as 'IDLotto',l.lot as 'LOTTO',l.lot_fornitore as 'LOTTO FORNITORE',l.giacenza as 'GIACENZA',a.descrizione as 'AZIONE',o.quantita as 'QUANTITA',m.descrizione as 'UNITA DI MISURA',u.nome AS 'UTENTE',o.note AS 'NOTE' \
            FROM operazioni as o\
            INNER JOIN lotdef as l\
            ON l.ID=o.IDlotto\
            INNER JOIN prodotti as p\
            on p.ID = o.IDprodotto\
            inner join azioni as a\
            on a.ID=o.azione\
            inner join utenti as u\
            on u.ID=o.utente\
            inner join unita_di_misura as m\
            on m.ID=o.um"+ where;

            // where p.ID="+ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toString()+" and o.data BETWEEN '" + ui->deFrom->date().toString("yyyy-MM-dd") + "' AND '" + ui->deTo->date().toString("yyyy-MM-dd") +"'";

    q.prepare(sql);
    q.exec();
    mod->setQuery(q);




    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->setModel(mod);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setColumnHidden(4,true);

    QApplication::setOverrideCursor(Qt::ArrowCursor);

}

void HMagazzino::loadProdotti()
{
    QSqlQueryModel *productsMod=new QSqlQueryModel();
    QCompleter *com=new QCompleter();
    com->setModel(productsMod);
    com->setCaseSensitivity(Qt::CaseInsensitive);
    com->setCompletionColumn(1);
    com->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbProdotti->setCompleter(com);
    QSqlQuery q(db);
    QString sql="SELECT ID,descrizione from prodotti order by descrizione ASC";
    q.exec(sql);
    productsMod->setQuery(q);

    ui->cbProdotti->setModel(productsMod);
    ui->cbProdotti->setModelColumn(1);



}

void HMagazzino::updateOperation()
{
    int id=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
    int idlotto=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),1).data(0).toInt();
    HWarehouseDetails *f=new HWarehouseDetails(db,id,idlotto);
    connect(f,SIGNAL(confirm()),this,SLOT(queryOperations()));
    f->show();
}



void HMagazzino::on_pushButton_3_clicked()
{
    HnuovaOperazione *f = new HnuovaOperazione(user,db);
    connect(f,SIGNAL(trigger()),this,SLOT(queryOperations()));
    f->show();
}

void HMagazzino::on_pushButton_2_clicked()
{
    updateOperation();
}

void HMagazzino::on_pushButton_4_clicked()
{
    HPackagesUnload *f=new HPackagesUnload(user,db);
    f->show();
}

void HMagazzino::on_cbP_toggled(bool checked)
{
       queryOperations();
}

void HMagazzino::on_cbC_toggled(bool checked)
{
    //if(checked)
        queryOperations();
}

void HMagazzino::on_cbS_toggled(bool checked)
{
   /* if(checked)*/ queryOperations();
}

void HMagazzino::on_cbProdotti_currentIndexChanged(int index)
{
    if (ui->cbP->isChecked()) queryOperations();
}

void HMagazzino::on_tableView_doubleClicked(const QModelIndex &index)
{
    updateOperation();
}

void HMagazzino::on_pbLotInfo_clicked()
{
    QSqlQueryModel *mod=static_cast<QSqlQueryModel*>(ui->tableView->model());
    int r=0;
    int c=4;
    r=ui->tableView->selectionModel()->currentIndex().row();
    const int idlotto=mod->index(r,c).data(0).toInt();
    qDebug()<<"POIPPO"<<idlotto<<r<<c;
    HModifyLot *f=new HModifyLot(idlotto,user,db);
    f->show();
}

