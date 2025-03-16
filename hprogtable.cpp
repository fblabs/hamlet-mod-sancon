#include "hprogtable.h"
#include "ui_hprogtable.h"
#include "hpdfprint.h"
#include <QSqlQueryModel>
#include <QDate>
#include <QDebug>

HProgTable::HProgTable(QStandardItemModel *mod, QString ing,QString p_title, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HProgTable)
{

    ui->setupUi(this);
    setWindowTitle(p_title);
    ingred=ing;


    // qDebug()<< mod<<mod->rowCount();


    ui->view->setModel(mod);
    ui->view->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->view->setColumnHidden(1,true);

}


HProgTable::~HProgTable()
{
    delete ui;
}

void HProgTable::on_pbClose_clicked()
{
    close();
}

void HProgTable::print()
{

    QString strStream;

    QAbstractItemModel *mod=ui->view->model();

    QTextStream out(&strStream);
    QString bgcol=QString();
    QString title=QString();


    const int rowCount = mod->rowCount();
    const int columnCount = mod->columnCount();



    title=QDate::currentDate().toString("dd-MM-yyyy")+" - USO INGREDIENTE ["+ingred+"]";


    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table width=100% border=1 cellspacing=0 cellpadding=2>\n";

    // headers



    QList<int> column_indexes;
    for (int column = 0 ; column < columnCount; column++)
    {
        if (!ui->view->isColumnHidden(column))
        {
            column_indexes.append(column);
        }

    }




    out << "<thead><tr bgcolor='#5cabff'><th colspan='"+QString::number(column_indexes.size())+"'>"+ title +"</th></tr><tr bgcolor='lightgrey'>";


    for (int column = 0 ; column < column_indexes.size(); column++)
    {


        out << QString("<th>%1</th>").arg(mod->headerData(column_indexes.at(column),Qt::Horizontal).toString());


    }

    out << "</tr></th></thead>\n";

    QString data=QString();

    // data table
    for (int row = 0; row < rowCount; row++) {

        out << "<tr>";
        if(row%2)
        {
            bgcol="lightgreen";
        }
        else
        {
            bgcol="white";
        }
        for (int column = 0; column < columnCount; column++) {
            if (!ui->view->isColumnHidden(column)) {
                data = mod->index(row, column).data().toString().simplified();
                out << QString("<td bgcolor='"+bgcol+"'>%1</td>").arg(data);


            }

        }
    }
    out << "</tr>\n";

    out <<  "</table>\n"
           "</body>\n"
           "</html>\n";




    HPDFPrint *f =new HPDFPrint(nullptr,strStream);

    QPageLayout::Orientation orientation;
    orientation=QPageLayout::Portrait;
    f->set_orientation(orientation);
    f->show();




}


void HProgTable::on_pbPrint_clicked()
{
    print();
}

