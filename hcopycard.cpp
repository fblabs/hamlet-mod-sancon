#include "hcopycard.h"
#include "ui_hcopycard.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QCompleter>
#include <QMessageBox>
//#include <QDebug>
#include <QSqlError>



HCopyCard::HCopyCard(QWidget *parent, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HCopyCard)
{
    ui->setupUi(this);


    db=pdb;
    QSqlTableModel *modclienti=new QSqlTableModel(0,db);
    modclienti->setTable("anagrafica");
    modclienti->setFilter("cliente > 0");
    modclienti->setSort(1,Qt::AscendingOrder);
    modclienti->select();
    ui->lvC->setModel(modclienti);
    ui->lvC->setModelColumn(1);
    ui->lvC->setCurrentIndex(ui->lvC->model()->index(0,0));
   /* QCompleter *cc = new QCompleter(modclienti);
    cc->setCaseSensitivity(Qt::CaseInsensitive);
    cc->setCompletionColumn(1);
    cc->setCompletionMode(QCompleter::PopupCompletion);
    ui->lvC->setCompleter(cc);*/
    getProducts();






}

HCopyCard::~HCopyCard()
{
    delete ui;
}


void HCopyCard::getProducts()
{

    int  cliente=ui->lvC->model()->index(ui->lvC->currentIndex().row(),0).data(0).toInt();

    QString query="SELECT ricette.ID_prodotto, prodotti.descrizione FROM ricette, prodotti WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT ID_ricetta FROM associazioni WHERE ID_cliente=:id and visualizza=1)order by prodotti.descrizione";
    QSqlQuery q(db);
    q.prepare(query);
    q.bindValue(":id",QVariant(cliente));
    q.exec();

    QSqlQueryModel *qrm=new QSqlQueryModel();
    //qDebug()<<"getProds"<<q.lastError().text();


    qrm->setQuery(q);

    ui->cbP->setModel(qrm);
    ui->cbP->setModelColumn(1);


    QCompleter *cp = new QCompleter(qrm);
    cp->setCaseSensitivity(Qt::CaseInsensitive);
    cp->setCompletionColumn(1);
    cp->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbP->setCompleter(cp);

    ui->cbP->setCurrentIndex(0);



}



void HCopyCard::on_pushButton_clicked()
{
    int client,product;
    QString scheda;

    client=ui->lvC->model()->index(ui->lvC->currentIndex().row(),0).data(0).toInt();
    product=ui->cbP->model()->index(ui->cbP->currentIndex(),0).data(0).toInt();
   // QString newHeader="SCHEDA: "+ui->lvC->currentText()+" - "+ui->lvP->currentText();
    QString nC=ui->lvC->model()->index(ui->lvC->currentIndex().row(),1).data(0).toString();
    QString nP=ui->cbP->currentText();
    QSqlQuery q(db);
    q.prepare("select scheda from schede_n where cliente=:cli and prodotto=:prod" );
        q.bindValue(":cli",client);
        q.bindValue(":prod",product);
      bool b=q.exec();
               q.first();
      if(b)
      {
          scheda=QString(q.value(0).toString());
          emit doCopy(client,product,nC,nP,scheda);
      }









    close();
}

void HCopyCard::on_pushButton_2_clicked()
{
         close();
}

void HCopyCard::on_lvC_clicked(const QModelIndex &index)
{
    getProducts();
}

void HCopyCard::on_lineEdit_textChanged(const QString &arg1)
{

    QSqlTableModel* mod=dynamic_cast<QSqlTableModel*>(ui->lvC->model());
    mod->setFilter("anagrafica.ragione_sociale like '" +arg1+"%'");
}
