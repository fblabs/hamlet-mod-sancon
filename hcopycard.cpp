#include "hcopycard.h"
#include "ui_hcopycard.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QCompleter>
#include <QMessageBox>
#include <QDebug>
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
    ui->cbC->setModel(modclienti);
    ui->cbC->setModelColumn(1);
    QCompleter *cc = new QCompleter(modclienti);
    cc->setCaseSensitivity(Qt::CaseInsensitive);
    cc->setCompletionColumn(1);
    cc->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbC->setCompleter(cc);
    getProducts();



    connect(ui->cbC,SIGNAL(currentIndexChanged(int)),this,SLOT(getProducts()));


}

HCopyCard::~HCopyCard()
{
    delete ui;
}


void HCopyCard::getProducts()
{

    int  cliente=ui->cbC->model()->index(ui->cbC->currentIndex(),0).data(0).toInt();

    QString query="SELECT ricette.ID_prodotto, prodotti.descrizione FROM ricette, prodotti WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT ID_ricetta FROM associazioni WHERE ID_cliente=:id and visualizza=1)order by prodotti.descrizione";
    QSqlQuery q(db);
    q.prepare(query);
    q.bindValue(":id",QVariant(cliente));
    q.exec();

    QSqlQueryModel *qrm=new QSqlQueryModel();
    qDebug()<<"getProds"<<q.lastError().text();


    qrm->setQuery(q);

    ui->cbP->setModel(qrm);
    ui->cbP->setModelColumn(1);


    QCompleter *cp = new QCompleter(qrm);
    cp->setCaseSensitivity(Qt::CaseInsensitive);
    cp->setCompletionColumn(1);
    cp->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbP->setCompleter(cp);

    ui->cbP->setCurrentIndex(-1);

    ui->cbP->setCurrentIndex(0);

}



void HCopyCard::on_pushButton_clicked()
{
    int client,product;

    client=ui->cbC->model()->index(ui->cbC->currentIndex(),0).data(0).toInt();
    product=ui->cbP->model()->index(ui->cbP->currentIndex(),0).data(0).toInt();

    emit copyRecipe(client,product);
}

void HCopyCard::on_pushButton_2_clicked()
{
         close();
}
