#include "hricette.h"
#include "ui_hricette.h"
#include <QDebug>
#include <QDataWidgetMapper>
#include <QItemDelegate>

HRicette::HRicette(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HRicette)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal);
    setupForm();
    this->showMaximized();
}

HRicette::~HRicette()
{
    delete ui;
}

void HRicette::setupForm()
{
    db = QSqlDatabase::database("temporary");

    promodel = new QSqlRelationalTableModel(0,db);
    promodel->setTable("prodotti");
    ricmodel = new QSqlRelationalTableModel(0,db);
    ricmodel->setTable("ricette");
    ui->lvRicette->setModel(promodel);
    ui->lvRicette->setModelColumn(1);
    promodel->setFilter("tipo=1");
    promodel->select();

    rrmodel = new QSqlRelationalTableModel(0,db);


    int index = promodel->fieldIndex("ID_prodotto");

    ricmodel->setRelation(index,QSqlRelation("prodotti","ID","descrizione"));
    ricmodel->select();

    rcmpr = new QDataWidgetMapper(0);



   // rrmodel->setFilter();
    rrmodel->setRelation(index,QSqlRelation("prodotti", "ID","descrizione"));
    rrmodel->setRelation(index,QSqlRelation("ricette", "ID","ID_ricetta"));

    rcmpr->setModel(ricmodel);
    rcmpr->addMapping(ui->leID,0);
    rcmpr->addMapping(ui->teNote,1);
    ricmodel->select();
    rcmpr->toFirst();



    ui->cvRigric->setModel(rrmodel);
    rrmodel->select();
    rrmpr = new QDataWidgetMapper();
    rrmpr->setModel(rrmodel);
    rrmpr->setItemDelegate(new QItemDelegate(this));
    rrmpr->addMapping(ui->cvRigric, 0,"currentIdex");
    rrmodel->select();
    rrmpr->toFirst();


    connect(ui->lvRicette->selectionModel(), SIGNAL(currentRowChanged(QModelIndex,QModelIndex)), this, SLOT(caricaRicetta()));
    qDebug()<< "connected";
}

int HRicette::SetDB()
{


    db = QSqlDatabase::database("QMYSQL","temporary");

    if(db.isOpen())
    {

     setupForm();
     return 0;

    }


return -1;
}

void HRicette::addRecipe()
{
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();

}

void HRicette::caricaRicetta()
{
    qDebug()<<"carica ricetta";


   QModelIndex current = ui->lvRicette->currentIndex();

   QString id = promodel->data(promodel->index(current.row(),0)).toString();

   qDebug()<< id;

    QString flt = "ID = " + id ;

    qDebug()  << flt;

    ricmodel->select();
    ricmodel->setFilter(flt);

    rcmpr = new QDataWidgetMapper(0);
    rcmpr->setModel(ricmodel);
    rcmpr->addMapping(ui->leID,0);
    rcmpr->addMapping(ui->teNote,1);
    rcmpr->setItemDelegate(new QItemDelegate(this));
    ricmodel->select();
    rcmpr->toFirst();
qDebug()  << "fino a SETUP rcmpr";
   /* mprprod= new QDataWidgetMapper();
    mprprod->setModel(detModel);
    mprprod->setItemDelegate(new QSqlRelationalDelegate(this));
    mprprod->addMapping(ui->tvRicette,0);
    detModel->setFilter("ID_ricetta=" + id);
    ui->tvRicette->setModel(detModel);
    detModel->select();*/

qDebug()  << "fino a SETUP rrmodel";
    rrmodel = new QSqlRelationalTableModel();
    rrmodel->setTable("righe_ricette");
    rrmodel->select();
  //  rrmodel->setFilter(ricmodel->);
  //  rrmodel->setRelation(index,QSqlRelation("prodotti", "ID","descrizione"));

   // int index = promodel->fieldIndex("ID");

    rrmpr = new QDataWidgetMapper(0);

    rrmpr->setModel(rrmodel);

    rrmpr->setItemDelegate(new QItemDelegate(this));
    rrmpr->addMapping(ui->cvRigric,0);
    rrmodel->setFilter("ID_ricetta=" + id);
    ui->cvRigric->setModel(rrmodel);
    rrmodel->select();



}

