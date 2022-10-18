#include "hmodifyprod.h"
#include "ui_hmodifyprod.h"

#include <QSqlDatabase>
//#include <QSqlRelationalTableModel>
#include "hreadonlymodellots.h"
#include <QSqlRelationalDelegate>
#include <QSqlRelation>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QCompleter>
#include <QDate>
#include <QDebug>
#include <huser.h>
#include "hlotcomposition.h"
#include "hchooselot.h"


#include <QMessageBox>

enum MP_ACTION
{
    NOACTION=-1,
    ADDROW=0,
    UPDATEROW=1,
    DELETEROW=2
};



HModifyProd::HModifyProd(HUser *puser,QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModifyProd)
{
    ui->setupUi(this);
    db=pdb;
    user=puser;
    ACTION=MP_ACTION::NOACTION;

    ui->deDal->setDate(QDate::currentDate().addYears(-2));
    ui->deAl->setDate(QDate::currentDate());
    dfrom=ui->deDal->date();
    dto=ui->deAl->date().addDays(1);
    tipo="lotdef.tipo=3";




    tmLots=new HReadOnlyModelLots(0,db);
    tmLots->setTable("lotdef");
    tmLots->setSort(3,Qt::DescendingOrder);


    tmLots->setRelation(2,QSqlRelation("prodotti","ID","descrizione"));
    tmLots->setRelation(5,QSqlRelation("unita_di_misura","ID","descrizione"));
    tmLots->setRelation(7,QSqlRelation("anagrafica","ID","ragione_sociale"));
    tmLots->setRelation(10,QSqlRelation("tipi_lot","ID","descrizione"));

    QSqlRelationalDelegate *del=new QSqlRelationalDelegate(0);
    QDate to = dto.addDays(1);
    tmLots->setFilter(tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + to.toString("yyyy-MM-dd")+"'");

    tmLots->select();
    qDebug()<<tmLots->lastError().text();



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


    ui->tvLots->setColumnHidden(0,true);

    ui->tvLots->setColumnHidden(5,true);
    ui->tvLots->setColumnHidden(6,true);
    ui->tvLots->setColumnHidden(7,true);
    ui->tvLots->setColumnHidden(8,true);

    tmLots->setHeaderData(1,Qt::Horizontal,QObject::tr("Lotto"));
    tmLots->setHeaderData(2,Qt::Horizontal,QObject::tr("Prodotto"));
    tmLots->setHeaderData(3,Qt::Horizontal,QObject::tr("Data"));
    tmLots->setHeaderData(4,Qt::Horizontal,QObject::tr("Giacenza"));
    tmLots->setHeaderData(9,Qt::Horizontal,QObject::tr("Lot. Uscita"));
    tmLots->setHeaderData(10,Qt::Horizontal,QObject::tr("Tipo"));

    ui->tvLots->setColumnHidden(11,true);
    ui->tvLots->setColumnHidden(12,true);

    ui->tvLots->selectionModel()->setCurrentIndex(tmLots->index(0,0),QItemSelectionModel::Select);

    //  ui->tvDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    connect(ui->tvLots->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getComponentsLot()));

}

HModifyProd::~HModifyProd()
{
    delete ui;
}

void HModifyProd::getComponentsLot()
{
    qDebug()<<"getComponentsLot";
    QSqlQuery q(db);
    idlot=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),0).data(0).toInt();
    QString sql="select operazioni.ID,operazioni.IDlotto,lotdef.lot,prodotti.ID,prodotti.descrizione,operazioni.quantita,unita_di_misura.ID,unita_di_misura.descrizione from operazioni,lotdef,prodotti,unita_di_misura where prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and unita_di_misura.ID=operazioni.um and  operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid )order by operazioni.quantita desc";
    qmod = new QSqlQueryModel();
    q.prepare(sql);
    q.bindValue(":lotid",QVariant(idlot));
    q.exec();
    qmod->setQuery(q);
    // // qDebug()<<q.lastQuery();*/
    ui->tvDetails->setModel(qmod);
    //   connect(ui->tvDetails->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getLotRowData()));
    //// qDebug()<<q.lastError().text();
    qmod->setHeaderData(4,Qt::Horizontal,QObject::tr("Ingrediente"));
    qmod->setHeaderData(5,Qt::Horizontal,QObject::tr("Quantità"));
    ui->tvDetails->setColumnHidden(0,true);
    ui->tvDetails->setColumnHidden(1,true);
    ui->tvDetails->setColumnHidden(3,true);
    ui->tvDetails->setColumnHidden(6,true);
    ui->tvDetails->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    QString lbtxt;
    lbtxt=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),1).data(0).toString();
    lbtxt.append(" - ");
    lbtxt.append(ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),2).data(0).toString());
    ui->lbProd->setText(lbtxt);


    ui->tvDetails->selectionModel()->clearSelection();


    connect(ui->tvDetails->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(getLotRowData()));

}

void HModifyProd::getLotRowData()
{
    qDebug()<<"getLotRowData";
    ui->leLotto->setText(ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),2).data(0).toString());
    // int opid=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toInt();

    QString toSearchUm=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),7).data(0).toString();

    int k=ui->cbUm->findText(toSearchUm);
    // qDebug()<<toSearchUm<<QString::number(k);
    ui->cbUm->setCurrentIndex(k);

    QString qty=QString::number(ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),5).data(0).toDouble(),'f',3);

    ui->leQuantita->setText(qty);

}

bool HModifyProd::updateRow()
{
    QSqlQuery q(db);
    QString sql="UPDATE operazioni set operazioni.quantita=:quantita,um=:um where operazioni.ID=:idr";
    bool ok;
    // int lot=ui->cbProdotto->model()->index(ui->cbProdotto->currentIndex(),1).data(0).toInt();
    int um = ui->cbUm->model()->index(ui->cbUm->currentIndex(),0).data(0).toInt();
    // um++;
    // // qDebug()<<"umupdate"<<QString::number(um)<<q.lastError()<<q.lastQuery();
    int idr=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toInt();
    double quantita=ui->leQuantita->text().toDouble(&ok);

    q.prepare(sql);
    q.bindValue(":idr",QVariant(idr));
    q.bindValue(":um",QVariant(um));
    q.bindValue(":quantita",QVariant(quantita));


    bool b= q.exec();
    qDebug()<<q.lastError().text();
    getComponentsLot();
    return b;


}

bool HModifyProd::deleteRow()
{
    QSqlQuery q(db);
    QString sql="delete from operazioni where ID=:id";
    QString comp="delete from composizione_lot where operazione=:id";
    QString id=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toString();
    bool b=false;



    q.prepare(comp);
    q.bindValue(":id",QVariant(id));


    b=q.exec();

    if(!b)
    {
       return false;
    }

    q.prepare(sql);
    id=ui->tvDetails->model()->index(ui->tvDetails->currentIndex().row(),0).data(0).toString();
    q.bindValue(":id",id);
    b=q.exec();
    if(!b)
    {
        return false;
    }

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
    QString lotto=ui->leLotto->text();

    QSqlQuery q(db);
    sql="SELECT ID from lotdef where lot=:lot";
    q.prepare(sql);
    q.bindValue(":lot",lotto);
    q.exec();
    q.first();
    idl=q.value(0).toInt();
    qDebug()<<idl<<lotto;




    sql="INSERT INTO `operazioni`(`IDlotto`,`data`,`utente`,`IDprodotto`,`azione`,`quantita`,`um`)VALUES(:idlotto,:data,:utente,:idprodotto,:azione,:quantita,:um)";
    db.transaction();
    q.prepare(sql);
    q.bindValue(":idlotto",QVariant(idl));
    q.bindValue(":data",QVariant(data));
    q.bindValue(":utente",QVariant(utente));
    q.bindValue(":idprodotto",QVariant(idprod));
    q.bindValue(":azione",QVariant(azione));
    q.bindValue(":quantita",QVariant(quantita));
    q.bindValue(":um",QVariant(um));
    bool b =q.exec();
    qDebug()<<"insert:"<<idl<<q.lastError().text();
    if(!b) return false;
    int idop=q.lastInsertId().toInt();

    qDebug()<<QString::number(idl)<<QString::number(idop);

    sql="INSERT into composizione_lot(`ID_lotto`,`operazione`) VALUES(:lot,:operazione)";
    q.prepare(sql);
    q.bindValue(":lot",QVariant(idlot));
    q.bindValue(":operazione",QVariant(idop));

    b=q.exec();
    qDebug()<<"compB"<<q.lastError().text()<<q.lastQuery()<<QString::number(idlot)<<QString::number(idop);

    if(b)
    {
        db.commit();


    }
    else
    {

        db.rollback();
    }
    updateGiacenza();
    getComponentsLot();

    return b;

}

void HModifyProd::updateProduction()
{
    HLotComposition *f=new HLotComposition(idlot,ui->lbProd->text(),static_cast<QSqlQueryModel*>(ui->tvDetails->model()),db);
    connect(f,SIGNAL(composition_updated()),this, SLOT(refreshData()));
    f->show();
}

void HModifyProd::on_pushButton_2_clicked()
{



    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok | QMessageBox::Cancel))
    {
        close();

    }
}


void HModifyProd::on_pushButton_clicked()
{


    if (ACTION==MP_ACTION::UPDATEROW)
    {
        db.transaction();
        if(updateRow())
        {
            updateGiacenza();
            getComponentsLot();
            db.commit();
            tmLots->select();
            QMessageBox::information(this,QApplication::applicationName(),"Riga modificata",QMessageBox::Ok);


        }
        else
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"MODERRORACCIO!!!\n" + db.lastError().text()  ,QMessageBox::Ok);
        }

        ui->rbNoAction->setChecked(true);
    }
    else if (ACTION==MP_ACTION::ADDROW)
    {
        db.transaction();
        if(addRow())
        {
            updateGiacenza();
            getComponentsLot();
            db.commit();
            tmLots->select();

            QMessageBox::information(this,QApplication::applicationName(),"Riga aggiunta",QMessageBox::Ok);

        }
        else
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"MODERRORINO!!!\n" + db.lastError().text()  ,QMessageBox::Ok);
        }

        ui->rbNoAction->setChecked(true);

    }

   else  if(ACTION==DELETEROW)
    {
        db.transaction();
        if(deleteRow()){
            updateGiacenza();
            getComponentsLot();
            db.commit();
            QMessageBox::information(this,QApplication::applicationName(),"Riga eliminata",QMessageBox::Ok);
        }
        else
        {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"ERRORE\nrimuovendo la riga\n" + db.lastError().text()  ,QMessageBox::Ok);
        }

        ui->rbNoAction->setChecked(true);


    }
   else if (ACTION==MP_ACTION::NOACTION){
        QMessageBox::information(this,QApplication::applicationName(),"Selezionare una azione",QMessageBox::Ok);
        return;

    }

    ui->leLotto->setText(QString());
    ui->leQuantita->setText(QString());



}


void HModifyProd::on_radioButton_clicked()
{

    // tmLots->select();
    tipo="lotdef.tipo=4";
    tmLots->setFilter(tipo + " and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'");
    //// qDebug()<<tmLots->query().lastError().text();
}

void HModifyProd::on_radioButton_2_clicked()
{
    //  tmLots->select();
    tipo="lotdef.tipo=3";
    tmLots->setFilter(tipo + " and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'");

    //// qDebug()<<tmLots->query().lastError().text();
}


void HModifyProd::on_deDal_dateChanged(const QDate &date)
{
    dfrom=date;
}

void HModifyProd::on_deAl_dateChanged(const QDate &date)
{
    dto=date;
}

void HModifyProd::findIt(QString arg)
{  QString filter;
    QDate to=ui->deAl->date().addDays(1);


    if (ui->rblots->isChecked())
    {
        if(ui->leSearch->text().length()==0)
        {
            filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + to.toString("yyyy-MM-dd")+"'";

        }
        else
        {
            filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + to.toString("yyyy-MM-dd")+"' and lotdef.lot like '%" +arg+"%'";

        }

    }
    else
    {
        if(ui->leSearch->text().length()==0)
        {
            filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"'";

        }
        else
        {
            filter=tipo +" and lotdef.data between '" + dfrom.toString("yyyy-MM-dd") + "' and '" + dto.toString("yyyy-MM-dd")+"' and relTblAl_2.descrizione like '%" +arg+"%'";

        }
    }


    tmLots->setFilter(filter);
    //ui->tvDetails->setModel(0);

    //// // qDebug()<<tmLots->query().lastError().text();
    qDebug()<<tmLots->query().lastQuery()<<tmLots->lastError();
}

void HModifyProd::on_leSearch_textChanged(const QString &arg1)
{

    findIt(arg1);


}

void HModifyProd::on_rbprod_toggled(bool checked)
{
    ui->leSearch->setText("");

}


void HModifyProd::on_pbUpdateAmount_clicked()
{
    QModelIndex ix=ui->tvLots->selectionModel()->currentIndex();
    updateProduction();
    refreshData();
    ui->tvLots->selectionModel()->setCurrentIndex(ix,QItemSelectionModel::Select);
}



void HModifyProd::on_radioButton_2_toggled(bool checked)
{
    ui->pbUpdateAmount->setEnabled(checked);
}

void HModifyProd::refreshData()
{
    getComponentsLot();
    tmLots->select();
}

void HModifyProd::on_leQuantita_returnPressed()
{
    ui->pushButton->setEnabled(true);
}


void HModifyProd::on_leLotto_returnPressed()
{

    HChooseLot *f=new HChooseLot(ui->leLotto->text(),db);
    f->connect(f,SIGNAL(sg_lotSelected(QString)),ui->leLotto,SLOT(setText(QString)));
    f->show();

}





void HModifyProd::on_leLotto_textChanged(const QString &arg1)
{
    if(arg1.length()<10)
    {
        ui->pushButton->setEnabled(false);

    }
    else
    {
        ui->pushButton->setEnabled(true);

    }
}

void HModifyProd::updateGiacenza()
{


    int firstLoadId=findLotFirstLoad();
    double firstLoadAmount=0.0;


    for (int i=0;i<ui->tvDetails->model()->rowCount();++i)
    {
        firstLoadAmount+=ui->tvDetails->model()->index(i,5).data(0).toDouble();
    }

    qDebug()<<firstLoadAmount;

    QSqlQuery q(db);
    QString sql="update operazioni set quantita=:q where id=:id";
    q.prepare(sql);
    q.bindValue(":id",firstLoadId);
    q.bindValue(":q",firstLoadAmount);
    q.exec();
    qDebug()<<"UPDATE"<<q.lastError().text();

}

int HModifyProd::findLotFirstLoad()
{

    int idLotto=ui->tvLots->model()->index(ui->tvLots->selectionModel()->currentIndex().row(),0).data(0).toInt();
    int result=0;

    QString sql="SELECT MIN(ID) from operazioni where IDLotto=:id";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":id",idLotto);
    q.exec();
    q.first();
    result=q.value(0).toInt();

    return result;

}

void HModifyProd::on_rbNoAction_toggled(bool checked)
{
     if(checked){ACTION=MP_ACTION::NOACTION;}
}


void HModifyProd::on_rbAdd_toggled(bool checked)
{
     if(checked){ACTION=MP_ACTION::ADDROW;}
}


void HModifyProd::on_rbDelete_toggled(bool checked)
{
     if(checked){ACTION=MP_ACTION::DELETEROW;}
}


void HModifyProd::on_rbUpdate_toggled(bool checked)
{
     if(checked){ACTION=MP_ACTION::UPDATEROW;}
}

