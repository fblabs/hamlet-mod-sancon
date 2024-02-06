#include "hrecipesoverview.h"
#include "ui_hrecipesoverview.h"
#include <QHeaderView>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QStandardItem>
#include <QTime>
#include <QThread>
#include <QDebug>
#include "hprogdlg.h"
#include <QTextDocument>
#include "hpdfprint.h"
#include <QPrinter>
#include <QFileDialog>
#include <QDesktopServices>





HRecipesOverview::HRecipesOverview(QSqlDatabase pdb, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HRecipesOverview)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    this->show();

    db=pdb;

    loadData();



}

HRecipesOverview::~HRecipesOverview()
{
    delete ui;
}

void HRecipesOverview::loadData()
{
    QSqlQuery q(db);
    QSqlQueryModel *mod=new QSqlQueryModel();
    QString sql;
    double tot=0.0;



    HProgDlg *f=new HProgDlg();
    f->show();

    delay();




    sql="SELECT SUM(ricette.q_tot) from ricette";

    q.prepare(sql);
    q.exec();
    q.next();
    tot=q.value(0).toDouble();
    QApplication::setOverrideCursor(Qt::WaitCursor);





    //sql="SELECT righe_ricette.ID_prodotto,prodotti.descrizione, SUM(righe_ricette.quantita) as TOTALE from righe_ricette,ricette,prodotti where righe_ricette.ID_prodotto=prodotti.ID group by righe_ricette.ID_prodotto order by TOTALE desc";
    sql="SELECT p.ID,p.descrizione,righe_ricette.ID_Ricetta,righe_ricette.ID_prodotto,i.descrizione AS 'Ingrediente',righe_ricette.quantita AS 'Quantità',ricette.q_tot,righe_ricette.show_prod AS 'Mostra in produzione',i.allergenico,CONCAT(FORMAT((righe_ricette.quantita/ricette.q_tot)*100,2),'%') as'percent'\
        from righe_ricette,prodotti i,prodotti p,ricette\
                                where i.ID=righe_ricette.ID_prodotto  and p.id=ricette.ID_prodotto and righe_ricette.ID_ricetta=ricette.ID order by righe_ricette.ID_ricetta";
    q.prepare(sql);
    q.exec();

    mod->setQuery(q);

    QSortFilterProxyModel *sortmod=new QSortFilterProxyModel();
    sortmod->setSourceModel(mod);

    QApplication::restoreOverrideCursor();

    f->close();
    delete f;


    ui->tvResult->setModel(mod);
    ui->tvResult->setColumnHidden(0,true);
    ui->tvResult->setColumnHidden(2,true);
    ui->tvResult->setColumnHidden(3,true);
    ui->tvResult->setColumnHidden(7,true);
    ui->tvResult->setColumnHidden(8,true);
    ui->tvResult->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvResult->horizontalHeader()->setStretchLastSection(true);

    mod->setHeaderData(1,Qt::Horizontal,"RICETTA");
    mod->setHeaderData(4,Qt::Horizontal,"INGREDIENTE");
    mod->setHeaderData(5,Qt::Horizontal,"QUANTITA\'");
    mod->setHeaderData(6,Qt::Horizontal,"QUANTITA\' TOTALE");
    mod->setHeaderData(9,Qt::Horizontal,"PERCENTUALE");

}

void HRecipesOverview::delay()
{


        QTime dieTime= QTime::currentTime().addSecs(1);
        while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);


}

void HRecipesOverview::print()
{

    QApplication::setOverrideCursor(Qt::WaitCursor);

    QString strStream;


    QTextStream out(&strStream);

    const int rowCount = ui->tvResult->model()->rowCount();
    const int columnCount = ui->tvResult->model()->columnCount();

    QString title="PERCENTUALE INGREDIENTI"+QDate().toString("dd/mm/yyyy");

    //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='5'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tvResult->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tvResult->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {

       out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tvResult->isColumnHidden(column)) {

                if(column!=6)
                {
                QString data = ui->tvResult->model()->data(ui->tvResult->model()->index(row, column)).toString()/*.simplified()*/;

                QString color = QString();

                    color="<td bgcolor='white'>%1</td>";


                out << QString(color).arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
                else
                {
                    double d=ui->tvResult->model()->data(ui->tvResult->model()->index(row, column)).toDouble();
                    QString data = QString::number(d,'f',2);

                    QString color = QString();

                    color="<td bgcolor='white'>%1</td>";


                    out << QString(color).arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }



            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
           "</body>\n"
           "</html>\n";

    HPDFPrint *f =new HPDFPrint(nullptr,strStream);

    QPageLayout::Orientation orientation;
    orientation=QPageLayout::Portrait;
    f->set_orientation(orientation);
    f->show();
    QApplication::restoreOverrideCursor();


}


void HRecipesOverview::on_pbPrint_clicked()
{
    //loadData();
    print();
}


void HRecipesOverview::on_pbClose_clicked()
{
    close();
}

