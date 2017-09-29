#include "hlastlots.h"
#include "ui_hlastlots.h"
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QCompleter>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>

HLastLots::HLastLots(QWidget *parent, QSqlDatabase pdb, double qrecipe) :
    QWidget(parent),
    ui(new Ui::HLastLots)
{
    ui->setupUi(this);
    ui->leQua->setText(QString::number(qrecipe,'f',3));

    db=pdb;

    ui->cbLastLots->addItem("Tutti",100000);
    ui->cbLastLots->addItem("Ultimi 5 lotti",5);
    ui->cbLastLots->addItem("Ultimi 10 lotti",10);
    ui->cbLastLots->addItem("Ultimi 50 lotti",50);
    ui->cbLastLots->setCurrentIndex(1);

    ui->cbUI->addItem("KG",1);
    ui->cbUI->addItem("Pz.",2);
    ui->cbUI->setCurrentIndex(0);




    prodModel=new QSqlTableModel(0,db);
    prodModel->setTable("prodotti");
    prodModel->setFilter("attivo=1 and tipo in(1,2,3,4,5)");
    prodModel->setSort(1,Qt::AscendingOrder);
    prodModel->select();
    ui->cbProducts->setModel(prodModel);
    ui->cbProducts->setModelColumn(1);
    QCompleter *compprods=new QCompleter();
    compprods->setCompletionColumn(1);
    compprods->setModel(prodModel);
    compprods->setCompletionMode(QCompleter::PopupCompletion);
    compprods->setCaseSensitivity(Qt::CaseInsensitive);

    ui->cbProducts->setCompleter(compprods);

    lastLots();

    connect(ui->cbProducts,SIGNAL(currentIndexChanged(int)),this,SLOT(lastLots()));
    connect(ui->cbLastLots,SIGNAL(currentIndexChanged(int)),this,SLOT(lastLots()));
}

void HLastLots::lastLots()
{


        int prd =ui->cbProducts->model()->index(ui->cbProducts->currentIndex(),0).data(0).toInt();
        int quanti=ui->cbLastLots->currentData().toInt();

        qDebug()<<"quanti"<<quanti;


        QSqlQuery qlots(db);
        QSqlQueryModel *qmLots=new QSqlQueryModel(0);



        QString sql="select lotdef.ID,lotdef.lot,lotdef.prodotto,prodotti.descrizione,prodotti.allergenico from lotdef,prodotti where lotdef.prodotto=:prd and prodotti.ID=lotdef.prodotto and lotdef.attivo>0 ORDER by data DESC LIMIT :quanti";
        qlots.prepare(sql);
        qlots.bindValue(":prd",prd);
        qlots.bindValue(":quanti",quanti);
        qlots.exec();

        qDebug()<<qlots.lastError().text()<<"quanti"<<quanti;
        qmLots->setQuery(qlots);


        ui->lvLastLots->clearSelection();
        ui->lvLastLots->setModel(qmLots);
        ui->lvLastLots->setModelColumn(1);
        ui->lvLastLots->setCurrentIndex(ui->lvLastLots->model()->index(0,0));




}


HLastLots::~HLastLots()
{
    delete ui;
}

void HLastLots::on_pushButton_2_clicked()
{
   close();
}

void HLastLots::on_pushButton_clicked()
{
    int idlotto = ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),0).data(0).toInt();
    QString desclotto=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),1).data(0).toString();
    QString idprodotto=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),2).data(0).toString();
    QString descprodotto=ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),3).data(0).toString();
    bool ballergene =ui->lvLastLots->model()->index(ui->lvLastLots->currentIndex().row(),4).data(0).toBool();
    bool ok;
    double quantitaeff=ui->leQua->text().toDouble(&ok);

    if (!ok)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Quantità errata!",QMessageBox::Ok);
        ui->leQua->setText(QString());
        quantitaeff=0.0;
        return;

    }
     QString sallergene;

     if(ballergene)
     {sallergene="1";}
     else
     {sallergene="0";}


    QStandardItem* sidProdotto=new QStandardItem(idprodotto);
    QStandardItem* sdescprodotto=new QStandardItem(descprodotto);
    QStandardItem* squaRicetta=new QStandardItem("");
    QStandardItem* sidLotto=new QStandardItem(QString::number(idlotto));
    QStandardItem* sLotto=new QStandardItem(desclotto);
    QStandardItem* quaEff=new QStandardItem(QString::number(quantitaeff,'f',3));
    QStandardItem* allergene=new QStandardItem(sallergene);

    if(ballergene)
    {
        sdescprodotto->setForeground(QColor("red"));
        sdescprodotto->setIcon(QIcon(":/Resources/Flag-red64.png"));
    }

    QList<QStandardItem*> list;

    list.append(sidProdotto);
    list.append(sdescprodotto);
    list.append(squaRicetta);
    list.append(sidLotto);
    list.append(sLotto);
    list.append(quaEff);
    list.append(allergene);

    emit rowAdded(list);

    close();

}
