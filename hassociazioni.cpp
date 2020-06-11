#include "hassociazioni.h"
#include "ui_hassociazioni.h"
#include "hnschede.h"
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QMessageBox>
#include "huser.h"

#include <QSqlError>
// #include <QDebug>
#include <QItemDelegate>
#include "hprint.h"

HAssociazioni::HAssociazioni(HUser *puser, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HAssociazioni)
{
    ui->setupUi(this);

    user=puser;
    db=pdb;

    tmClienti= new QSqlTableModel(0,db);
    tmClienti->setTable("anagrafica");
    tmClienti->setFilter("cliente=1");
    tmClienti->setSort(1,Qt::AscendingOrder);
    tmClienti->select();

    ui->cbClienti->setModel(tmClienti);
    ui->cbClienti->setModelColumn(1);

    tvqm=new QSqlQueryModel();

  //  delegate=new HCheckBoxDelegate();
 //   ui->tableView->setItemDelegateForColumn(3,delegate);

    ui->cbClienti->setCurrentIndex(0);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);

    getRecipes();
    getRecipesForTable();

   // ui->tableView->setColumnHidden(1,true);


    connect(ui->cbClienti,SIGNAL(currentIndexChanged(QString)),this,SLOT(getRecipesForTable()));
}

HAssociazioni::~HAssociazioni()
{
    delete ui;
}

void HAssociazioni::getRecipes()
{
    QString qs="SELECT ricette.ID,prodotti.descrizione from prodotti,ricette where prodotti.ID=ricette.ID_prodotto and prodotti.tipo=2 order by prodotti.descrizione ASC";
    QSqlQuery q(db);
    qm=new QSqlQueryModel();

    q.exec(qs);
   //// qDebug()<<q.lastError().text();

    qm->setQuery(q);

    ui->cbRicette->setModel(qm);
    ui->cbRicette->setModelColumn(1);



}

void HAssociazioni::getRecipesForTable()
{
    int c=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();


    QSqlQuery q(db);
    QString sql;

    sql="select ricette.ID,prodotti.ID,prodotti.descrizione,associazioni.visualizza from prodotti, ricette, associazioni where ricette.ID=associazioni.ID_ricetta and prodotti.ID=ricette.ID_prodotto and associazioni.ID_cliente=:idcliente order by prodotti.descrizione asc";
    q.prepare(sql);
    q.bindValue(":idcliente",QVariant(c));
    q.exec();
    tvqm->setQuery(q);


    ui->tableView->setModel(tvqm);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);

    ui->tableView->resizeColumnsToContents();

    ////// qDebug()<<q.lastError().text();



}

void HAssociazioni::saveAssociation()
{
    QString idRicetta;
    QString idCliente;
    QString sQuery;

     idCliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toString();
     idRicetta=ui->cbRicette->model()->index(ui->cbRicette->currentIndex(),0).data(0).toString();

    QSqlQuery q(db);

        sQuery="insert into associazioni(ID_ricetta,ID_cliente,visualizza) values (" + idRicetta +  ","+ idCliente + ",1)";
       if (q.exec(sQuery))
       {
           tvqm->clear();
           getRecipesForTable();
       }
       else
       {
           QMessageBox::warning(this,QApplication::applicationName(),"Errore salvando l'associazione\n"+q.lastError().text(),QMessageBox::Ok);
       }

}

void HAssociazioni::deleteAssociation()
{
    QSqlQuery q(db);
    int idr;
    int idc;
    QString sql;
    bool b;

     idr=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
     idc=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();


     if(QMessageBox::question(this,QApplication::applicationName(),"Rimuovere l'associazione?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
     {
         sql="delete from associazioni where ID_ricetta=:idr and ID_cliente=:idc";
         q.prepare(sql);
         q.bindValue(":idr",QVariant(idr));
         q.bindValue(":idc",QVariant(idc));
         b =q.exec();

        if (b)
        {

             getRecipesForTable();
        }
        else
        {
             QMessageBox::warning(this,QApplication::applicationName(),"Errore:\n"+ q.lastError().text(),QMessageBox::Ok);


        }

       // // qDebug()<<q.lastQuery()<<q.lastError()<<QString::number(idr)<<QString::number(idc);



     }

}

void HAssociazioni::setVisibility(bool visible)
{
    QSqlQuery q(db);
    QString query;

    QString idRicetta;
    QString idCliente;


     idCliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toString();
     idRicetta=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toString();

    if (visible)
    {
        query="UPDATE associazioni SET visualizza=1 where ID_ricetta=" + idRicetta + " and ID_cliente="+idCliente;
    }
    else
    {
        query="UPDATE associazioni SET visualizza=0 where ID_ricetta=" + idRicetta + " and ID_cliente="+idCliente;

    }

    if(q.exec(query))
    {
          getRecipesForTable();
    }
    else
    {
        //// qDebug()<<q.lastError().text()<<q.lastQuery();
    }





}

void HAssociazioni::on_pushButton_2_clicked()
{
    saveAssociation();
}

void HAssociazioni::on_pushButton_3_clicked()
{
    deleteAssociation();
}

void HAssociazioni::on_pushButton_clicked()
{
    this->close();
}

void HAssociazioni::on_pushButton_4_clicked()
{
    QString sCliente=ui->cbClienti->currentText();
    QString sRicetta=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2).data(0).toString();



    HNSChede *f = new HNSChede(sCliente,sRicetta,db,user);



  //  f->loadCard();
    f->show();
}

void HAssociazioni::on_pushButton_5_clicked()
{
    setVisibility(true);
}

void HAssociazioni::on_pushButton_6_clicked()
{
    setVisibility(false);
}



/*void HAssociazioni::on_leCliente_textChanged(const QString &arg1)
{
    QString sql;

    QString local="%";
    local.append(arg1);
    local.append("%");
    QSqlQuery q(db);

    sql="SELECT ricette.ID,prodotti.ID,prodotti.descrizione from prodotti,ricette where prodotti.ID=ricette.ID_prodotto and prodotti.tipo=2 and prodotti.descrizione LIKE :src order by prodotti.descrizione ASC";
    q.prepare(sql);
    q.bindValue(":src",QVariant(local));
    q.exec();
    qm=new QSqlQueryModel();

    qm->setQuery(q);

    ui->cbRicette->setModel(qm);
    ui->cbRicette->setModelColumn(1);



}*/

void HAssociazioni::print()
    {


        HPrint *f =new HPrint();

        int rows=ui->tableView->model()->rowCount();
        int cols=ui->tableView->model()->columnCount();



        f->append("RICETTE PER IL CLIENTE: "+ ui->cbClienti->currentText(),false);
        f->append("");
        f->toggleImageUI(false);
        f->showMaximized();
        QTextTable *tb=f->addTable(rows,1,QTextTableFormat());
        QString txt;

       int r,c;
       c=2;


        f->showMaximized();

        for (r=0;r<rows;r++)
        {

                txt=ui->tableView->model()->index(r,c).data(0).toString();
                f->writeTableContent(tb,r,0,QTextCharFormat(),txt);
                QApplication::processEvents();

        }

        QApplication::processEvents();


 }



void HAssociazioni::on_pbPrint_clicked()
{
    print();
}
