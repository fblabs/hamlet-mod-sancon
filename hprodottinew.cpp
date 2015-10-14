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

HProdottiNew::HProdottiNew(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HProdottiNew)
{
    ui->setupUi(this);
}

HProdottiNew::~HProdottiNew()
{
    delete ui;
}

void HProdottiNew::init(QString conn)
{
    sConn=conn;

    setWindowModality(Qt::ApplicationModal);

    db=QSqlDatabase::database(sConn);

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

    connect(tmProdotti,SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)),this,SLOT(save()));


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

    //qDebug()<<"tipo"+tmProdotti->filter();

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
    tmProdotti->submitAll();
    tmProdotti->select();
}


void HProdottiNew::on_pushButton_2_clicked()
{
    close();
}

void HProdottiNew::on_pushButton_clicked()
{
    HNewProduct *f=new HNewProduct();
    f->init(sConn);
    f->show();
}

void HProdottiNew::on_checkBox_toggled(bool checked)
{
    QString lastfilter=tmProdotti->filter();
    QString attivo;
    QString filter;

    if(checked)
    {
        attivo="attivo=1";
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
    //qDebug()<<filter;

}

void HProdottiNew::on_lineEdit_textChanged(const QString &arg1)
{
    QString filter;

    filter ="prodotti.descrizione LIKE '%"+ ui->lineEdit->text()+"%'";

    tmProdotti->setFilter(filter);
}
