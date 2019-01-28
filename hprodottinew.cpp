#include "hprodottinew.h"
#include "ui_hprodottinew.h"
#include <QSqlDatabase>
#include <QCompleter>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QCompleter>
#include "hnewproduct.h"
#include <QDebug>
#include <QSqlError>

HProdottiNew::HProdottiNew(  HUser *puser,QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HProdottiNew)
{
    ui->setupUi(this);

    db=pdb;
    user=puser;

    if(!user->getCanUpdate())
    {
       ui->tvProdotti->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }







    tmProdotti=new QSqlRelationalTableModel(0,db);
    tmTipi=new QSqlRelationalTableModel(0,db);

    tmTipi->setTable("tipi_prodotto");
    tmTipi->select();


    tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);
    tmProdotti->setEditStrategy(QSqlRelationalTableModel::OnFieldChange);


    tmProdotti->setRelation(2,QSqlRelation("tipi_prodotto","ID","descrizione"));
    ui->tvProdotti->setItemDelegate(new QSqlRelationalDelegate(tmProdotti));
    tmProdotti->select();

    ui->tvProdotti->setModel(tmProdotti);

    ui->tvProdotti->horizontalHeader()->stretchLastSection();
  //  ui->tvProdotti->horizontalHeader()->res
    ui->tvProdotti->resizeColumnsToContents();

    QCompleter *comp=new QCompleter;
    comp->setCompletionColumn(1);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setModel(tmProdotti);
    ui->lineEdit->setCompleter(comp);

   // // qDebug()<<tmProdotti->query().lastError();

    connect(tmProdotti,SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)),this,SLOT(save()));

  //  ui->tvProdotti->horizontalHeader()->setSe
    tmProdotti->setHeaderData(0,Qt::Horizontal,"ID");
    tmProdotti->setHeaderData(1,Qt::Horizontal,"Descrizione");
    tmProdotti->setHeaderData(2,Qt::Horizontal,"Tipo");
    tmProdotti->setHeaderData(3,Qt::Horizontal,"Allergene");
    tmProdotti->setHeaderData(4,Qt::Horizontal,"Attivo");
}

HProdottiNew::~HProdottiNew()
{
    delete ui;
}

void HProdottiNew::on_radioButton_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("");
    }
}

void HProdottiNew::on_radioButton_2_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=1");
    }

    //// qDebug()<<"tipo"+tmProdotti->filter();

}

void HProdottiNew::on_radioButton_3_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=2");
    }
}


void HProdottiNew::on_radioButton_4_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=3");
    }
}



void HProdottiNew::on_radioButton_5_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=4");
    }
}



void HProdottiNew::on_radioButton_6_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=5");
    }
}

void HProdottiNew::save()
{
    if(user->getCanUpdate())
    {
    tmProdotti->submitAll();

    }

    tmProdotti->select();
}


void HProdottiNew::on_pushButton_2_clicked()
{
    close();
}

void HProdottiNew::on_pushButton_clicked()
{
    HNewProduct *f=new HNewProduct(user,db);

    f->show();
}

void HProdottiNew::on_checkBox_toggled(bool checked)
{
    QString lastfilter=tmProdotti->filter();
    QString attivo;
    QString filter;

    if(checked)
    {
        attivo="attivo > 0";
    }
    else
    {
        attivo="";
    }

    if(lastfilter.contains("tipo=") && !lastfilter.contains(attivo))
    {
        if(checked)
        {
            filter=lastfilter.append(" and " + attivo);
        }
        else
        {
            filter=lastfilter;
        }
    }


        tmProdotti->setFilter(filter);
    //// qDebug()<<filter;

}

void HProdottiNew::on_lineEdit_textChanged(const QString &arg1)
{
    QString filter;

    filter ="prodotti.descrizione LIKE '%"+ ui->lineEdit->text()+"%'";

    tmProdotti->setFilter(filter);
}





void HProdottiNew::on_rbBio_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("bio>0");
    }
}
