#include "hutenti.h"
#include "ui_hutenti.h"
#include <QtGui>
#include <QtCore>
#include <QDebug>
#include <QItemSelectionModel>
#include <QItemDelegate>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include <QSqlQueryModel>
#include<QSqlQuery>
#include <hnewanagrafica.h>
#include <QCompleter>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QSqlError>
#include "huser.h"
#include <QMessageBox>
#include "halarm.h"
#include <QDebug>

HUtenti::HUtenti(HUser *pusr,QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HUtenti)
{
    ui->setupUi(this);
    db=pdb;
    user=pusr;


    if(user->get_anagrafica_u()>0)
    {
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->tnote->setReadOnly(false);
    }else{
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_3->setEnabled(false);
        ui->tnote->setReadOnly(true);

    }


   QSqlTableModel *cmod=new QSqlTableModel(0,db);
   cmod->setTable("anagrafica");
   cmod->setSort(1,Qt::AscendingOrder);
   cmod->select();

   tm = new QSqlRelationalTableModel(0,db);
   tm->setTable("anagrafica");

    tm->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tm->setSort(1, Qt::AscendingOrder);
    tm->select();

    ui->lvUtenti->setModel(tm);
    ui->lvUtenti->setModelColumn(1);



    QCompleter *completer=new QCompleter(cmod);
    completer->setCompletionColumn(1);
    completer->setCaseSensitivity(Qt::CaseInsensitive);

    ui->cbxMasterCli->setCompleter(completer);
    ui->cbxMasterCli->setModel(cmod);
    ui->cbxMasterCli->setModelColumn(1);


    dwMapper = new QDataWidgetMapper();

    dwMapper->setModel(tm);
    dwMapper->setItemDelegate(new QSqlRelationalDelegate(this));
    dwMapper->addMapping(ui->lragsoc,1);
    dwMapper->addMapping(ui->lind,2);
    dwMapper->addMapping(ui->lcap,3);
    dwMapper->addMapping(ui->lcit,4);
    dwMapper->addMapping(ui->lpro,5);
    dwMapper->addMapping(ui->lnaz,6);
    dwMapper->addMapping(ui->ltel,7);
    dwMapper->addMapping(ui->tcon,8);
    dwMapper->addMapping(ui->cbcli,9);
    dwMapper->addMapping(ui->cbfor,10);
    dwMapper->addMapping(ui->cbtra,11);
    dwMapper->addMapping(ui->tnote,12);
    dwMapper->addMapping(ui->cbsub,13);
    dwMapper->addMapping(ui->cbVisible,15);
    dwMapper->addMapping(ui->cbStamp,16);




    dwMapper->toFirst();

    /*QModelIndex ix=ui->lvUtenti->model()->index(ui->lvUtenti->currentIndex().row(),0);
    ui->lvUtenti->selectionModel()->setCurrentIndex(ix,QItemSelectionModel::ClearAndSelect);*/


     connect(ui->lvUtenti->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), dwMapper, SLOT(setCurrentModelIndex(QModelIndex)));
     connect(ui->lvUtenti->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), this, SLOT(selectMasterClient()));



    // connect(ui->lsearch,SIGNAL(textChanged(QString)) , this, SLOT(productSearch()));
     connect(ui->cbsub,SIGNAL(stateChanged(int)),this,SLOT(hidesubclienti()));
     //connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(addreset()));

   setFilter();
   hidesubclienti();



}

HUtenti::~HUtenti()
{
    delete ui;
}



void HUtenti::selectMasterClient()
{
     int id=tm->index(ui->lvUtenti->selectionModel()->currentIndex().row(),0).data(0).toInt();
     int i;
// qDebug()<<QString::number(id);

     QSqlQuery q(db);
     QString sql ="SELECT IDCliente from anagrafica where ID=:id";
     QString rsc;


     q.prepare(sql);
     q.bindValue(":id",QVariant(id));
     q.exec();
     q.first();


     QSqlQuery f(db);
     sql="select ID,ragione_sociale from anagrafica where ID=:id";
     f.prepare(sql);
     f.bindValue(":id",q.value(0));
     f.exec();
     f.first();
     rsc=f.value(1).toString();
     i= ui->cbxMasterCli->findText(rsc);
     ui->cbxMasterCli->setCurrentIndex(i);

}

void HUtenti::updateSubclient()
{
    QSqlQuery q(db);
    QString sql;
    int idc=ui->cbxMasterCli->model()->index(ui->cbxMasterCli->currentIndex(),0).data(0).toInt();
    int id=ui->lvUtenti->model()->index(ui->lvUtenti->currentIndex().row(),0).data(0).toInt();


    if(ui->cbsub->isChecked())
    {
        sql="update anagrafica set IDCliente=:idc where ID=:id";
        q.prepare(sql);
        q.bindValue(":idc",idc);
        q.bindValue(":id",id);
        q.exec();
    }
    else
    {
        sql="update anagrafica set IDCliente=NULL whereID=:id";
        q.prepare(sql);
        q.bindValue(":id",id);
        q.exec();

    }

}

void HUtenti::productSearch()
{
   QString flt = "ragione_sociale LIKE '%" + ui->lsearch->text() + "%'";
   tm->setFilter(flt);
}


//void carica



void HUtenti::hidesubclienti()
{
    ui->cbxMasterCli->setVisible(ui->cbsub->isChecked());
}

void HUtenti::on_pushButton_3_clicked()
{
   if(save())
   {
       tm->select();
       ui->lvUtenti->setCurrentIndex(tm->index(0,0));
       QMessageBox::information(this,QApplication::applicationName(),"Modifiche salvate",QMessageBox::Ok);


   }
   else
   {
       QMessageBox::warning(this,QApplication::applicationName(),"ERRORE!!! Contattare l'assistenza\n"+tm->lastError().text(),QMessageBox::Ok);
   }
}

bool HUtenti::save()
{
    if(!db.isOpen())
    {
        QMessageBox::information(0,"ERRORE","il database è chiuso...perchè mai?",QMessageBox::Ok);
        return false;
    }

    db.transaction();

       updateSubclient();

       bool b= tm->submitAll();


       b?db.commit():db.rollback();

       qDebug()<<tm->query().lastError().text();

    return b;

}




void HUtenti::on_pushButton_2_clicked()
{
    tm->revertAll();
    tm->select();
}



void HUtenti::on_pushButton_clicked()
{
    HNewAnagrafica *f=new HNewAnagrafica(db);

    connect(f,SIGNAL(done()),this,SLOT(refresh()));

    f->show();

}

void HUtenti::refresh()
{
    tm->select();
}



void HUtenti::on_cbxMasterCli_currentIndexChanged(int index)
{
    Q_UNUSED(index);

}

void HUtenti::on_pushButton_5_clicked()
{

    HAlarm *f=new HAlarm(0,db,user);

    f->show();
}



void HUtenti::on_rbAll_toggled(bool checked)
{
    if(checked)
    {
        setFilter();
    }
}

void HUtenti::on_rbClients_toggled(bool checked)
{
    if(checked)
    {
        // tm->setFilter("cliente>0 and fornitore <1");
        setFilter();

    }
}

void HUtenti::on_rbSuppliers_toggled(bool checked)
{
    if(checked)
    {

       setFilter();


    }
}




void HUtenti::on_rbTrasports_toggled(bool checked)
{
    if(checked)
    {
        //tm->setFilter("trasportatore>0");
        setFilter();
    }
}

void HUtenti::on_cbVisible_2_toggled(bool checked)
{
    Q_UNUSED(checked)
    setFilter();
    ui->lvUtenti->setCurrentIndex(tm->index(0,0));

}

void HUtenti::setFilter()
{
    QString filter="";
    QString visible="";

    if(ui->cbVisible_2->isChecked())
    {
        visible="visibile>0";
    }
    else
    {
        visible="visibile<1";
    }


    if(ui->rbAll->isChecked())
    {
        filter=""+visible;
    }
    else if (ui->rbClients->isChecked())
    {
       filter="cliente>0 and " + visible;
    }
    else if (ui->rbSuppliers->isChecked())
    {
        filter="fornitore>0 and " + visible;
    }
    else if (ui->rbTrasports->isChecked())
    {
        filter="trasportatore>0 and " + visible;
    }
    else if(ui->rbGraphics->isChecked())
    {
        filter="stampatore>0 and " + visible;
    }
    tm->setFilter(filter);
    qDebug()<<tm->filter()<<tm->lastError().text()<<filter;



}

void HUtenti::print()
{
    HPrint *f =new HPrint();

    int rows=tm->rowCount();
    //int cols=1;



    f->append("       ANAGRAFICA ");
    f->append("");
    f->toggleImageUI(false);
    f->showMaximized();
    QTextTable *tb=f->addTable(rows,1,QTextTableFormat());
    QTextCharFormat cf=QTextCharFormat();
    QString txt;

   int r;


    f->showMaximized();

    for (r=0;r<rows;r++)
    {



            txt=tm->index(r,1).data(0).toString();
           // f->writeTableContent(tb,r,0,"   "+txt+"   ");
            f->writeTableContent(tb,r,0,cf,"   "+txt+"   ");
            QApplication::processEvents();





    }
    QApplication::processEvents();


}

void HUtenti::on_pbPrint_clicked()
{
  print();
}



void HUtenti::on_lsearch_returnPressed()
{
    productSearch();

}

void HUtenti::on_pushButton_6_clicked()
{
    ui->lsearch->setText("");
    productSearch();
}

void HUtenti::on_rbGraphics_toggled(bool checked)
{
    if (checked){
        setFilter();
    }
}

void HUtenti::checkText(QString pt)
{
   /* pt.truncate(2);

    ui->tcon->setPlainText(pt);*/

}



void HUtenti::on_tcon_textChanged()
{
   // checkText(ui->tcon->toPlainText());
}

