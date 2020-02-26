#include "hworkprogram.h"
#include "ui_hworkprogram.h"
#include "hwpmanager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRelationalDelegate>
#include <QSqlTableModel>
#include "huser.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include "hprint.h"
#include "hworkprogressmodel.h"
#include "hmodifyrow.h"
#include <QHeaderView>

HWorkProgram::HWorkProgram(HUser *p_user,QSqlDatabase p_db,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWorkProgram)
{
    ui->setupUi(this);
    user=p_user;
    db=p_db;
    ui->deDal->setDate(QDate::currentDate());
    ui->deAl->setDate(QDate::currentDate().addDays(7));



    getSheets();

}

HWorkProgram::~HWorkProgram()
{
    delete ui;
}

void HWorkProgram::on_pbAdd_clicked()
{

           id=ui->tvStorico->model()->index(ui->tvStorico->selectionModel()->currentIndex().row(),0).data(0).toInt();
           HWpManager *f=new HWpManager(id,user,db);
           connect(f,SIGNAL(rowAdded()),this,SLOT(refreshSheet()));
           f->show();


}


bool HWorkProgram::createSheet()
{
    QSqlQuery q(db);
    QString datedal=ui->deDal->date().toString("yyyy-MM-dd");
    QString dateal= ui->deAl->date().toString("yyyy-MM-dd");

    QString sql="INSERT INTO produzione(dal,al,note) VALUES(:datedal,:dateal,:note)";
    q.prepare(sql);
    q.bindValue(":datedal",datedal );
    q.bindValue(":dateal", dateal);
    q.bindValue(":note","");
    bool b=q.exec();
    if (b)
    {
        QMessageBox::information(this,QApplication::applicationName(),"Foglio creato",QMessageBox::Ok);
        qDebug()<<datedal<<dateal<<q.lastQuery();
    }
    getSheets();

    return b;
}

void HWorkProgram::getSheets()
{
    QSqlTableModel *mod=new QSqlTableModel(0,db);
    mod->setTable("produzione");
    mod->select();
    ui->tvStorico->setModel(mod);
    ui->tvStorico->setColumnHidden(0,true);
    ui->tvStorico->setColumnHidden(3,true);
    ui->tvStorico->horizontalHeader()->setStretchLastSection(true);
    ui->tvGeneral->verticalHeader()->setSectionsMovable(true);




}




void HWorkProgram::on_tvStorico_clicked(const QModelIndex &index)
{
    id=ui->tvStorico->model()->index(index.row(),0).data(0).toInt();
    ui->deDal->setDate(ui->tvStorico->model()->index(index.row(),1).data(0).toDate());
    ui->deAl->setDate(ui->tvStorico->model()->index(index.row(),2).data(0).toDate());
       /*HWpManager *f=new HWpManager(id,user,db);
       f->show();*/
    refreshSheet();


    //connect(ui->tvGeneral->verticalHeader(),SIGNAL(sectionMoved(int,int,int)),this,SLOT(updateSheet(int,int,int)));

}

void HWorkProgram::refreshSheet()
{
    wpmod=0;
    wpmod = new HWorkProgressModel(0,db);
    wpmod->setEditStrategy(HWorkProgressModel::OnFieldChange);
    ui->tvGeneral->setModel(wpmod);
    QSqlRelationalDelegate *rdel=new QSqlRelationalDelegate();
    wpmod->setTable("righe_produzione");
    wpmod->setFilter("idproduzione="+QString::number(id));
    wpmod->setRelation(1,QSqlRelation("produzione","ID","ID"));
    wpmod->setRelation(3,QSqlRelation("anagrafica","ID","ragione_sociale"));
    wpmod->setRelation(4,QSqlRelation("prodotti","ID","descrizione"));
    wpmod->setRelation(9,QSqlRelation("prodotti","ID","descrizione"));
    wpmod->setSort(2,Qt::AscendingOrder);
    wpmod->select();
    ui->tvGeneral->setModel(wpmod);
    ui->tvGeneral->setColumnHidden(0,true);
    ui->tvGeneral->setColumnHidden(1,true);
    ui->tvGeneral->setColumnHidden(2,true);
    ui->tvGeneral->setItemDelegate(rdel);
    setHeaders();

}


void HWorkProgram::on_pbNewSheet_clicked()
{
    if(QMessageBox::question(this,QApplication::applicationName(),"Creare un nuovo foglio produzione (dal "+ui->deDal->date().toString("dd-MM-yyyy")+ " al "+ ui->deAl->date().toString("dd-MM-yyyy")+"?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        createSheet();
    }
}

void HWorkProgram::updateSheet(int lix,int oldix, int newix)
{

    qDebug()<<"lix"<<lix<<"oldix"<<oldix<<"newix"<<newix;
    QSqlQuery q(db);
    QString sql ="update righe_produzione set num_riga=:num where IDProduzione=:idp and num_riga=:oldnum";
    bool b=false;
    db.transaction();
    int i=oldix;

    for (int i=0;i<wpmod->rowCount();i++)
       {
        q.prepare(sql);
        q.bindValue("idp",id);
       if (i==newix)
       {
           q.bindValue(":num",newix);
       }
        q.bindValue(":oldnum",i);
        b=q.exec();

        if(!b)
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"Errore durante la transazione\n"+q.lastError().text(),QMessageBox::Ok);

            return;
        }

    }
    db.commit();

  refreshSheet();
  QMessageBox::information(this,QApplication::applicationName(),"Foglio aggiornato correttamente",QMessageBox::Ok);

}



void HWorkProgram::on_pbSave_clicked()
{
    wpmod->submitAll();
    refreshSheet();
    ui->cbshowrows->setChecked(false);

}

void HWorkProgram::on_pbClose_clicked()
{
    close();
}



void HWorkProgram::on_cbshowrows_toggled(bool checked)
{
   ui->tvGeneral->setColumnHidden(2,!checked);
}


void HWorkProgram::on_pbRemove_clicked()
{
    wpmod->removeRow(ui->tvGeneral->currentIndex().row());
    refreshSheet();
}


void HWorkProgram::on_tvGeneral_doubleClicked(const QModelIndex &index)
{
  if (!ui->cbshowrows->isChecked()) showModRow();
}

void HWorkProgram::on_pbModify_clicked()
{
    showModRow();
}

void HWorkProgram::showModRow()
{
    int pid=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),1).data(0).toInt();
    int currentrow=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),2).data(0).toInt();

    HModifyRow *f=new HModifyRow(pid,currentrow,user,db);
    connect(f,SIGNAL(done()),this,SLOT(refreshSheet()));
    f->show();
}

void HWorkProgram::on_deDal_dateChanged(const QDate &date)
{
   // ui->deAl->setDate(date.addDays(7));
}

void HWorkProgram::setHeaders()
{
    wpmod->setHeaderData(2,Qt::Horizontal,QObject::tr("Num. Riga"));
    wpmod->setHeaderData(3,Qt::Horizontal,QObject::tr("Cliente"));
    wpmod->setHeaderData(4,Qt::Horizontal,QObject::tr("Prodotto"));
    wpmod->setHeaderData(5,Qt::Horizontal,QObject::tr("Ordine"));
    wpmod->setHeaderData(6,Qt::Horizontal,QObject::tr("Grammi vaso"));
    wpmod->setHeaderData(7,Qt::Horizontal,QObject::tr("Quantità vasi"));
    wpmod->setHeaderData(8,Qt::Horizontal,QObject::tr("Olio"));
    wpmod->setHeaderData(9,Qt::Horizontal,QObject::tr("Tappo"));
    wpmod->setHeaderData(10,Qt::Horizontal,QObject::tr("Sanificazione"));
    wpmod->setHeaderData(11,Qt::Horizontal,QObject::tr("Allergeni"));
    wpmod->setHeaderData(12,Qt::Horizontal,QObject::tr("Fresco"));
    wpmod->setHeaderData(13,Qt::Horizontal,QObject::tr("Pastorizzato"));
    wpmod->setHeaderData(14,Qt::Horizontal,QObject::tr("Note"));
    wpmod->setHeaderData(15,Qt::Horizontal,QObject::tr("Totale (gr.)"));
}
