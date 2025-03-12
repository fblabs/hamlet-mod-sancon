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
#include <QDoubleValidator>

HLastLots::HLastLots(QWidget *parent, QSqlDatabase pdb, double qrecipe, QString product) :
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
    ui->cbLastLots->setCurrentIndex(0);

    ui->cbUI->addItem("KG",1);
    ui->cbUI->addItem("Pz.",2);
    ui->cbUI->setCurrentIndex(0);

    QSqlTableModel *lmod=new QSqlTableModel(this,db);

    lmod->setTable("lotdef");
    lmod->setSort(3,Qt::DescendingOrder);
    lmod->setSort(2,Qt::AscendingOrder);
    lmod->setFilter("attivo>0");
    lmod->select();

    QCompleter *cmp=new QCompleter();
    cmp->setModel(lmod);
    cmp->setCompletionColumn(1);
    cmp->setCompletionMode(QCompleter::InlineCompletion);
    cmp->setCaseSensitivity(Qt::CaseInsensitive);
    ui->leSearch->setCompleter(cmp);


    QValidator *iv=new QDoubleValidator(0.000,999999,3);
    ui->leQua->setValidator(iv);


    prodModel=new QSqlTableModel(0,db);
    prodModel->setTable("prodotti");
    prodModel->setFilter("attivo=1 and tipo in(1,2,3,4,5)");
    prodModel->setSort(1,Qt::AscendingOrder);
    prodModel->select();
    ui->cbProducts->setModel(prodModel);
    ui->cbProducts->setModelColumn(1);
    int row=ui->cbProducts->findText(product);
    ui->cbProducts->setCurrentIndex(row);

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




        QSqlQuery qlots(db);
        QSqlQueryModel *qmLots=new QSqlQueryModel();


        QString sql="select lotdef.ID,lotdef.lot,lotdef.prodotto,prodotti.descrizione,lotdef.giacenza,prodotti.allergenico ,prodotti.allergene_usa from lotdef,prodotti where lotdef.prodotto=:prd and prodotti.ID=lotdef.prodotto and lotdef.attivo>0 ORDER by data DESC LIMIT :quanti";
        qlots.prepare(sql);
        qlots.bindValue(":prd",prd);
        quanti=ui->cbLastLots->currentData().toInt();
        if(ui->cbLastLots->currentIndex()==0)
        {
            quanti=100.000;
        }

        qlots.bindValue(":quanti",quanti);
        qlots.exec();


        qmLots->setQuery(qlots);


       // ui->tvLots->clearSelection();
        ui->tvLots->setModel(qmLots);
       // ui->tvLots->setCurrentIndex(ui->tvLots->model()->index(0,0));
        ui->tvLots->setColumnHidden(0,true);
        ui->tvLots->setColumnHidden(2,true);
        ui->tvLots->setColumnHidden(3,true);
        ui->tvLots->setColumnHidden(5,true);
        ui->tvLots->setColumnHidden(6,true);
        ui->tvLots->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
        ui->tvLots->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Stretch);







}

void HLastLots::lastLotsByLot(QString plot)
{

    qDebug()<<plot;
    int quanti=ui->cbLastLots->currentData().toInt();

    QSqlQuery q(db);
    QSqlQueryModel *qmLots=new QSqlQueryModel();

   // QString sql="select lotdef.ID,lotdef.lot,lotdef.prodotto,prodotti.descrizione,prodotti.allergenico,lotdef.data from lotdef,prodotti where prodotti.ID=lotdef.prodotto and lotdef.attivo>0 and lotdef.lot LIKE :lot ORDER BY lotdef.data desc";
    //QString sql="select lotdef.ID,lotdef.lot,lotdef.prodotto,prodotti.descrizione,lotdef.giacenza,prodotti.allergenico from lotdef,prodotti where lotdef.prodotto=:prd and prodotti.ID=lotdef.prodotto and lotdef.attivo>0 and lotdef.lot LIKE ':lot' ORDER by data DESC LIMIT :quanti";

    QString sql="select lotdef.ID,lotdef.lot,lotdef.prodotto,prodotti.descrizione,lotdef.giacenza,prodotti.allergenico,prodotti.allergene_usa from lotdef,prodotti where prodotti.ID=lotdef.prodotto and lotdef.attivo>0 and lotdef.lot LIKE :lot ORDER by data DESC LIMIT :quanti";
    q.prepare(sql);
    q.bindValue(":lot",plot);
    q.bindValue(":quanti",quanti);
    q.exec();
    qDebug()<<"ERR"<<plot<<q.lastError().text()<<q.size()<<quanti<<q.boundValue(0).toString()<<q.boundValue(1).toString();
    qmLots->setQuery(q);

    ui->tvLots->setModel(qmLots);
    ui->tvLots->setColumnHidden(0,true);
    ui->tvLots->setColumnHidden(2,true);
    ui->tvLots->setColumnHidden(5,true);
    ui->tvLots->setColumnHidden(6,true);
    ui->tvLots->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    ui->tvLots->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Stretch);

    int ix=-1;
    qDebug()<<qmLots->index(ui->tvLots->currentIndex().row(),3).data(0).toString();
    ix=ui->cbProducts->findText(qmLots->index(0,3).data(0).toString());
    ui->cbProducts->setCurrentIndex(ix);


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
    int idlotto = ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),0).data(0).toInt();
    QString desclotto=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),1).data(0).toString();
    QString idprodotto=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),2).data(0).toString();
    QString descprodotto=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),3).data(0).toString();
    bool ballergene =ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),5).data(0).toBool();
    bool ballergene_usa=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),6).data(0).toBool();
   // qDebug()<<QString::number(ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),6).data(0).toString();
    QString sgiacenza=QString::number(ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),4).data(0).toDouble(),'f',3);
    bool ok;
    double quantitaeff=ui->leQua->text().toDouble(&ok);
    double dgiacenza=ui->tvLots->model()->index(ui->tvLots->currentIndex().row(),4).data(0).toDouble();

    if (!ok)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Quantità errata!",QMessageBox::Ok);
        ui->leQua->setText(QString());
       // quantitaeff=0.0;
        return;

    }
     QString sallergene;




    QStandardItem* sidProdotto=new QStandardItem(idprodotto);
    QStandardItem* sdescprodotto=new QStandardItem(descprodotto);
    QStandardItem* squaRicetta=new QStandardItem("");
    QStandardItem* sidLotto=new QStandardItem(QString::number(idlotto));
    QStandardItem* sLotto=new QStandardItem(desclotto);
    QStandardItem* quaEff=new QStandardItem(QString::number(quantitaeff,'f',3));
    QStandardItem* allergene=new QStandardItem(sallergene);
    QStandardItem* giacenza=new QStandardItem(sgiacenza);
    QStandardItem* allergene_usa=new QStandardItem(ballergene_usa);



    if(ballergene)
    {

        sdescprodotto->setForeground(QColor("red"));
        sdescprodotto->setIcon(QIcon(":/Resources/Flag-red64.png"));
        allergene->setTextAlignment(Qt::AlignCenter);
        allergene->setCheckState(Qt::Checked);



    }
    if(ballergene_usa)
    {
        allergene_usa->setCheckState(Qt::Checked);
        sdescprodotto->setIcon(QIcon(":/Resources/Flag-yellow64.png"));
    }
    if(dgiacenza<=0)
    {
        sidProdotto->setBackground(Qt::red);
        sidProdotto->setForeground(Qt::white);
        sdescprodotto->setBackground(Qt::red);
        sdescprodotto->setForeground(Qt::white);
        squaRicetta->setBackground(Qt::red);
        squaRicetta->setForeground(Qt::white);
        sLotto->setBackground(Qt::red);
        sLotto->setForeground(Qt::white);
        quaEff->setBackground(Qt::red);
        quaEff->setForeground(Qt::white);
        allergene->setBackground(Qt::red);
        allergene->setForeground(Qt::white);
        giacenza->setBackground(Qt::red);
        giacenza->setForeground(Qt::white);
        allergene_usa->setBackground(Qt::red   );
        allergene_usa->setForeground(Qt::black);
    }

    QList<QStandardItem*> list;

    list.append(sidProdotto);
    list.append(sdescprodotto);
    list.append(squaRicetta);
    list.append(sidLotto);
    list.append(sLotto);
    list.append(quaEff);
    list.append(allergene);
    list.append(allergene_usa);
    list.append(giacenza);



    emit rowAdded(list);

    close();

}

void HLastLots::on_leSearch_returnPressed()
{
    QString s_search=ui->leSearch->text();

    if(ui->leSearch->text().length()>=3){
    lastLotsByLot(s_search);
    }
}


