#include "hmodifyprod.h"
#include "ui_hmodifyprod.h"

#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlRelation>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QCompleter>
#include <QDate>
#include <QDebug>
#include <huser.h>

#include <QMessageBox>



HModifyProd::HModifyProd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModifyProd)
{
    ui->setupUi(this);
}

HModifyProd::~HModifyProd()
{
    delete ui;
}

void HModifyProd::init(QString conn,HUser *usr)
{
    sConn=conn;
    user=usr;
    action=0;

    ui->deDal->setDate(QDate::currentDate().addYears(-2));
    ui->deAl->setDate(QDate::currentDate());
    dfrom=ui->deDal->date();
    dto=ui->deAl->date();
    tipo="lotdef.tipo=4";



    db=QSqlDatabase::database(sConn);
    tmLots=new QSqlRelationalTableModel(0,db);
    tmLots->setTable("lotdef");
    tmLots->setSort(3,Qt::DescendingOrder);


    tmLots->setRelation(2,QSqlRelation("prodotti","ID","descrizione"));
    tmLots->setRelation(5,QSqlRelation("unita_di_misura","ID","descrizione"));
    tmLots->setRelation(7,QSqlRelation("anagrafica","ID","ragione_sociale"));
    tmLots->setRelation(10,QSqlRelation("tipi_lot","ID","descrizione"));

    QSqlRelationalDelegate *del=new QSqlRelationalDelegate(0);

    tmLots->select();
    tmLots->setFilter(tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'");



    ui->tvLots->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tmLots->setEditStrategy(QSqlRelationalTableModel::OnFieldChange);
    tmLots->select();

    ui->tvLots->setItemDelegate(del);
    ui->tvLots->setModel(tmLots);

    QSqlTableModel *umm=new QSqlTableModel(0,db);
    umm->setTable("unita_di_misura");
    umm->setSort(1,Qt::AscendingOrder);
    umm->select();
    ui->cbUm->setModel(umm);
    ui->cbUm->setModelColumn(1);


    comp=new QCompleter();
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    comp->setCompletionColumn(2);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setModel(tmLots);


   ui->tvLots->setColumnHidden(0,true);
   ui->tvLots->setColumnHidden(4,true);
   ui->tvLots->setColumnHidden(5,true);
   ui->tvLots->setColumnHidden(6,true);
   ui->tvLots->setColumnHidden(7,true);
   ui->tvLots->setColumnHidden(8,true);

   //  ui->tvLots->setColumnHidden(9,true);
//   ui->tvLots->setColumnHidden(10,true);
 //  ui->tvLots->setColumnHidden(11,true);

   /* tmProdotti=new QSqlTableModel(0,db);
    tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);
    tmProdotti->setFilter("tipo = 2");
    tmProdotti->select();*/

   /* QSqlTableModel *mprods=new QSqlTableModel(0,db);
    mprods->setTable("prodotti");
    mprods->setFilter("tipo = 2");
    mprods->setSort(1,Qt::AscendingOrder);
    mprods->select();*/



   // prodcomp=new QCompleter(mprods,this);
   // prodcomp->setCaseSensitivity(Qt::CaseInsensitive);
   // prodcomp->setCompletionColumn(1);
  //  prodcomp->setCompletionMode(QCompleter::UnfilteredPopupCompletion);
  //  prodcomp->setModelSorting(QCompleter::UnfilteredPopupCompletion);
  //  ui->leSearch->setCompleter(prodcomp);
  //  connect(prodcomp,SIGNAL(activated(QModelIndex)),this,SLOT(on_leSearch_returnPressed()));


   ui->tvDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
   // ui->comboBox->setModel(tmLots);
   // ui->comboBox->setModelColumn(1);


    connect(ui->tvLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getIDLot()));


}

void HModifyProd::getComponetsLot()
{
    QSqlQuery q(db);
  //  idlot=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),0).data(0).toInt();
    QString sql="select operazioni.ID,operazioni.IDlotto,lotdef.lot,prodotti.ID,prodotti.descrizione,operazioni.quantita,unita_di_misura.ID,unita_di_misura.descrizione from operazioni,lotdef,prodotti,unita_di_misura where prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and unita_di_misura.ID=operazioni.um and  operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid )order by operazioni.quantita desc";
    QSqlQueryModel *qmod = new QSqlQueryModel();
    q.prepare(sql);
    q.bindValue(":lotid",QVariant(idlot));
    q.exec();
    qmod->setQuery(q);
    qDebug()<<q.lastQuery();

    ui->tvDetails->setModel(qmod);
    connect(ui->tvDetails->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getLotRowData()));
    //qDebug()<<q.lastError().text();
    qmod->setHeaderData(3,Qt::Horizontal,QObject::tr("Ingrediente"));
    qmod->setHeaderData(4,Qt::Horizontal,QObject::tr("Quantità"));
    ui->tvDetails->setColumnHidden(0,true);
    ui->tvDetails->setColumnHidden(1,true);
    ui->tvDetails->setColumnHidden(3,true);
    ui->tvDetails->setColumnHidden(6,true);


    QString lbtxt;
    lbtxt=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),1).data(0).toString();
    lbtxt.append(" - ");
    lbtxt.append(ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),2).data(0).toString());
    ui->lbProd->setText(lbtxt);



qDebug()<<QString::number(idlot);


}

void HModifyProd::getLotRowData()
{
   ui->leLotto->setText(ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),2).data(0).toString());
   int opid=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toInt();

   QString toSearchUm=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),7).data(0).toString();

   int k=ui->cbUm->findText(toSearchUm);
qDebug()<<toSearchUm<<QString::number(k);
   ui->cbUm->setCurrentIndex(k);

   ui->leQuantita->setText(ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),5).data(0).toString());




 /*  QString toSearch=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),4).data(0).toString();

   int x=ui->cbProdotto->findText(toSearch);

   ui->cbProdotto->setCurrentIndex(x);

   ui->leQuantita->setText(ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),5).data(0).toString());*/

}

bool HModifyProd::updateRow()
{
    QSqlQuery q(db);
    QString sql="UPDATE operazioni set operazioni.quantita=:quantita,um=:um where operazioni.ID=:idr";
    bool ok;
   // int lot=ui->cbProdotto->model()->index(ui->cbProdotto->currentIndex(),1).data(0).toInt();
    int um = ui->cbUm->model()->index(ui->cbUm->currentIndex(),0).data(0).toInt();
   // um++;
 qDebug()<<"umupdate"<<QString::number(um)<<q.lastError()<<q.lastQuery();
    int idr=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toInt();
      double quantita=ui->leQuantita->text().toDouble(&ok);
    if (!ok)
    {

        return false;
    }


    q.prepare(sql);
    q.bindValue(":idr",QVariant(idr));
    q.bindValue(":um",QVariant(um));
    q.bindValue(":quantita",QVariant(quantita));


    bool b= q.exec();
    qDebug()<<q.lastError().text();
    return b;
    return false;
    getComponetsLot();
}

bool HModifyProd::deleteRow()
{
    QSqlQuery q(db);
    QString sql="delete from operazioni where ID=:id";
    QString id=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toString();
    bool b=q.exec();



    q.prepare(sql);
    id=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toString();
    //qDebug()<<id;
    q.bindValue(":id",id);

    b=q.exec();
    if(!b)
    {
        QMessageBox::question(this,QApplication::applicationName(),"ERRORE\n"+q.lastError().text()+"\n"+q.lastQuery(),QMessageBox::Ok | QMessageBox::Cancel);
    }
    getComponetsLot();
    return b;
}



bool HModifyProd::addRow(){


    QDateTime data=QDateTime::currentDateTime();
    int idl;
    int utente=user->getID();
    int idprod;
    QStringList list=ui->leLotto->text().split('-');
    idprod=list.at(1).toInt();
    int azione=2;
    double quantita=ui->leQuantita->text().toDouble();
    int um=ui->cbUm->model()->index(ui->cbUm->currentIndex(),0).data(0).toInt();
    QString sql;

    QSqlQuery q(db);
    sql="SELECT ID from lotdef where lot=:lot";
    q.prepare(sql);
    q.bindValue(":lot",QVariant(ui->leLotto->text()));
    q.exec();
    q.first();
    idl=q.value(0).toInt();




    sql="INSERT INTO `fbgmdb260`.`operazioni`(`IDlotto`,`data`,`utente`,`IDprodotto`,`azione`,`quantita`,`um`)VALUES(:idlotto,:data,:utente,:idprodotto,:azione,:quantita,:um)";
db.transaction();
    q.prepare(sql);
    q.bindValue(":idlotto",QVariant(idl));
    q.bindValue(":data",QVariant(data));
    q.bindValue(":utente",QVariant(utente));
    q.bindValue(":idprodotto",QVariant(idprod));
    q.bindValue(":azione",QVariant(azione));
    q.bindValue(":quantita",QVariant(quantita));
    q.bindValue(":um",QVariant(um));
   bool   b =q.exec();
   qDebug()<<"insert"<<q.lastError().text();
   if(!b) return false;
   int idop=q.lastInsertId().toInt();

   qDebug()<<QString::number(idlot)<<QString::number(idop);

   sql="INSERT into composizione_lot(`ID_lotto`,`operazione`) VALUES(:lot,:operazione)";
   q.prepare(sql);
   q.bindValue(":lot",QVariant(idlot));
   q.bindValue(":operazione",QVariant(idop));

   b=q.exec();
   qDebug()<<"compB"<<q.lastError().text()<<q.lastQuery()<<QString::number(idlot)<<QString::number(idop);



    if(b)
    {
        db.commit();
        tmLots->select();
        qDebug()<<"compA"<<q.lastError().text()<<q.lastQuery()<<QString::number(idlot)<<QString::number(idop);
    }
    else
    {

        db.rollback();
    }

    return b;

}

void HModifyProd::on_pushButton_2_clicked()
{



    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok | QMessageBox::Cancel))
    {
        close();

    }
}

void HModifyProd::getIDLot()
{
    idlot=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),0).data(0).toInt();
    getComponetsLot();
}


void HModifyProd::on_pushButton_clicked()
{
    if (action==0)
    {

    if(updateRow())
        {
          getComponetsLot();
          QMessageBox::information(this,QApplication::applicationName(),"Riga modificata",QMessageBox::Ok);

        }
        else
        {
            QMessageBox::warning(this,QApplication::applicationName(),"MODERRORACCIO!!!\n" + db.lastError().text()  ,QMessageBox::Ok);
        }
    }
    else
    {
        if(addRow())
            {
              getComponetsLot();

            QMessageBox::information(this,QApplication::applicationName(),"Riga aggiunta",QMessageBox::Ok);

            }
            else
            {
                QMessageBox::warning(this,QApplication::applicationName(),"MODERRORINO!!!\n" + db.lastError().text()  ,QMessageBox::Ok);
            }
         action=0;
    }

}

void HModifyProd::on_pushButton_3_clicked()
{
  if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Rimuovere la riga?\n Attenzione!! La cancellazione è definitiva",QMessageBox::Ok|QMessageBox::Cancel))
  {
  bool b= deleteRow();
   if(b)
   {
       QMessageBox::information(this,QApplication::applicationName(),"Riga rimossa",QMessageBox::Ok);
   }
   else
   {
       QMessageBox::warning(this,QApplication::applicationName(),"ERRORACCIO!!!\n" + db.lastError().text()  ,QMessageBox::Ok);
   }
  }


}



void HModifyProd::on_radioButton_clicked()
{

   // tmLots->select();
    tipo="lotdef.tipo=4";
    tmLots->setFilter(tipo + " and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'");
    //qDebug()<<tmLots->query().lastError().text();
}

void HModifyProd::on_radioButton_2_clicked()
{
  //  tmLots->select();
    tipo="lotdef.tipo=3";
    tmLots->setFilter(tipo + " and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'");

    //qDebug()<<tmLots->query().lastError().text();
}

void HModifyProd::on_pushButton_4_clicked()
{

    ui->leLotto->setText("");
    ui->leQuantita->setText("");
    QSqlTableModel *lotm=new QSqlTableModel(0,db);
    lotm->setTable("lotdef");
    lotm->setFilter("tipo=1");
    lotm->setSort(3,Qt::DescendingOrder);
    lotm->select();
    QCompleter *lcmp=new QCompleter(lotm);
    lcmp->setCaseSensitivity(Qt::CaseInsensitive);
    lcmp->setCompletionMode(QCompleter::PopupCompletion);
    lcmp->setCompletionColumn(1);


    action=1;



    ui->leLotto->setCompleter(lcmp);
}



void HModifyProd::on_cbUm_currentIndexChanged(int index)
{
    qDebug()<<QString::number(index);
}

void HModifyProd::on_pushButton_5_clicked()
{
    action=0;
}

void HModifyProd::on_deDal_dateChanged(const QDate &date)
{
    dfrom=ui->deDal->date();
}

void HModifyProd::on_deAl_dateChanged(const QDate &date)
{
    dto=ui->deAl->date();
}

void HModifyProd::on_pushButton_6_clicked()
{
    filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'";
    tmLots->setFilter(filter);
    qDebug()<<tmLots->filter()<<tmLots->query().lastError().text();
}






/*void HModifyProd::on_leSearch_returnPressed()
{
   int key;

   QModelIndex index = ui->leSearch->completer()->currentIndex();


    if(ui->leSearch->text().length()==0)
    {
       filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'";
    }
    else
    {
        if (index.isValid()) {
            int row = index.row();
            key= prodcomp->model()->index(row, 0).data().toInt();
            qDebug() << key<<prodcomp->currentCompletion();
        }

        filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"' and lotdef.prodotto="+ QString::number(key);
    }

    tmLots->setFilter(filter);
    qDebug()<<filter<<prodcomp->currentIndex().data(0).toString();

}*/

void HModifyProd::on_leSearch_textChanged(const QString &arg1)
{
    QString filter;

    if(ui->leSearch->text().length()==0)
    {
       filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'";

    }
    else
    {
       filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"' and relTblAl_2.descrizione like '%" +arg1+"%'";

    }


    tmLots->setFilter(filter);
    ui->tvDetails->setModel(0);




}

void HModifyProd::on_pushButton_7_clicked()
{
    ui->leSearch->setText("");
}


