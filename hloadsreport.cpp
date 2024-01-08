#include "hloadsreport.h"
#include "ui_hloadsreport.h"

#include<QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include "hpdfprint.h"


HLoadsReport::HLoadsReport(QSqlDatabase p_db,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HLoadsReport)
{
    ui->setupUi(this);
    db=p_db;
    ui->deFrom->setDate(QDate::currentDate().addYears(-1));
    ui->deTo->setDate(QDate::currentDate());

    QLocale loc;

    ui->tvReport->setLocale(loc);


    get_types();
    connect(ui->cbTipo,SIGNAL(currentIndexChanged(int)),this,SLOT(loadData()));
    connect(ui->deFrom,SIGNAL(dateChanged(QDate)),this,SLOT(loadData()));
    connect(ui->deTo,SIGNAL(dateChanged(QDate)),this,SLOT(loadData()));
    ui->cbTipo->setCurrentIndex(0);

    ui->leCerca->setFocus();


}

HLoadsReport::~HLoadsReport()
{
    delete ui;
}

void HLoadsReport::on_pbClose_clicked()
{
    close();
}

void HLoadsReport::loadData()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);

    QSqlQueryModel *mod=new QSqlQueryModel();
    int idtipo=ui->cbTipo->model()->index(ui->cbTipo->currentIndex(),0).data().toInt();
    int azione=1;
    ui->rbL->isChecked()?azione=1:azione=2;

    QSqlQuery q(db);
    QString sql=QString();

    QString fnd=QString();
    QString head=QString();

    ui->rbL->isChecked()?head="CARICO":head="SCARICO";

    ui->leCerca->text().length()<1?fnd="%":fnd="%"+ui->leCerca->text()+"%";



    if (idtipo>2 && idtipo < 6)
    {
        sql="SELECT operazioni.IDProdotto AS 'ID PRODOTTO',prodotti.descrizione as PRODOTTO,FORMAT(SUM(operazioni.quantita),0) as :head from operazioni,prodotti where azione=:azione and prodotti.tipo =:tipo and IDprodotto=prodotti.ID and operazioni.data between :from and :to and prodotti.descrizione LIKE :fnd group by operazioni.IDprodotto order by prodotti.descrizione";
    }
    else
    {
        sql="SELECT operazioni.IDProdotto as 'ID PRODOTTO',prodotti.descrizione as PRODOTTO,FORMAT(SUM(operazioni.quantita),2) as :head from operazioni,prodotti where azione=:azione and prodotti.tipo =:tipo and IDprodotto=prodotti.ID and operazioni.data between :from and :to and prodotti.descrizione LIKE :fnd group by operazioni.IDprodotto order by prodotti.descrizione";

    }


    q.prepare(sql);
    q.bindValue(":head",head);
    q.bindValue(":azione",azione);
    q.bindValue(":tipo",idtipo);
    q.bindValue(":from",ui->deFrom->date());
    q.bindValue(":to",ui->deTo->date());
    q.bindValue(":fnd",fnd);
    q.exec();

    qDebug()<<q.lastError().text();

    mod->setQuery(q);

    ui->tvReport->setModel(mod);
    ui->tvReport->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);



    QApplication::restoreOverrideCursor();


}

void HLoadsReport::get_types()
{
    QSqlQueryModel *mod=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="SELECT ID,descrizione from tipi_prodotto order by descrizione asc";
    q.prepare(sql);
    q.exec();
    mod->setQuery(q);


    ui->cbTipo->setModel(mod);
    ui->cbTipo->setModelColumn(1);

    ui->cbTipo->setCurrentIndex(-1);
    ui->cbTipo->setFocus();



}

void HLoadsReport::print()
{
    QString strStream;


    QTextStream out(&strStream);

    const int rowCount = ui->tvReport->model()->rowCount();
    const int columnCount = ui->tvReport->model()->columnCount();

    QString title=QString();
    QString bgcol=QString();

    if(ui->rbL->isChecked())
    {
    title="Carichi dal "+ui->deFrom->date().toString("dd-MM-yyyy")+" al "+ ui->deTo->date().toString("dd-MM-yyyy");
    }
    else
    {
       title="Scarichi dal "+ui->deFrom->date().toString("dd-MM-yyyy")+" al "+ ui->deTo->date().toString("dd-MM-yyyy");
    }

    //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table width=100% border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='3'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tvReport->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tvReport->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {

        QString bgcol=QString();

       if(row%2)
        {
            bgcol="lightgreen";
        }
        else
        {
            bgcol="white";
        }


       out << "<tr>";
       for (int column = 0; column < columnCount; column++) {
            if (!ui->tvReport->isColumnHidden(column)) {
               // QString data = ui->tvReport->model()->data(ui->tvReport->model()->index(row, column)).toString().simplified();
                QString data = ui->tvReport->model()->index(row, column).data().toString().simplified();

               // !data.isEmpty() ? out<<data : out<<QString("&nbsp;");
               //out<<"<td>"<<data<<"</td>";
                out << QString("<td bgcolor='"+bgcol+"'>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));

            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
           "</body>\n"
           "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    HPDFPrint *f =new HPDFPrint(nullptr,strStream);

    QPageLayout::Orientation orientation;
    orientation=QPageLayout::Portrait;
    f->set_orientation(orientation);
    f->show();




}


void HLoadsReport::on_rbL_toggled(bool checked)
{
    loadData();
}


void HLoadsReport::on_leCerca_returnPressed()
{
    loadData();
}


void HLoadsReport::on_pbPrint_clicked()
{
    print();
}

