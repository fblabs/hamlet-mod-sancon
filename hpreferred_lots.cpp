#include "hpreferred_lots.h"
#include "ui_hpreferred_lots.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSettings>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextStream>
#include <QPrinter>
#include <QDesktopServices>
#include "hprint.h"

HPreferred_Lots::HPreferred_Lots(QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HPreferred_Lots)
{
    ui->setupUi(this);
    db=pdb;
    loadPreferredLots();
}

HPreferred_Lots::~HPreferred_Lots()
{
    delete ui;
}

void HPreferred_Lots::loadPreferredLots()
{
    QSettings settings("hamletmod.ini",QSettings::IniFormat);
    QString s_pref_db=QString();
    s_pref_db=settings.value("preferred_lots").toString();


    QSqlDatabase prefdb=QSqlDatabase::addDatabase("QSQLITE","PREFERENCES");
    prefdb.setDatabaseName(s_pref_db);
    prefdb.open();

    QSqlQuery q(prefdb);
    QString sql_count="SELECT count(*) from pref";
    q.exec(sql_count);
    q.next();

    int rcount=q.value(0).toInt();

    QString sql="SELECT prod,lot FROM pref ORDER BY prod ASC";
    QStandardItemModel *mod=new QStandardItemModel();
    q.exec(sql);
    q.next();





    for (int r=0;r<rcount;++r)
    {
        QList<QStandardItem*> row;

        QSqlQuery q_prod(db);
        QString desc_prod=QString();
        QString s_sql_prod="SELECT descrizione from prodotti WHERE ID=" + q.value(0).toString();
        q_prod.exec(s_sql_prod);
        q_prod.next();
        desc_prod=q_prod.value(0).toString();



        QStandardItem *idprod=new QStandardItem(q.value(0).toString());
        QStandardItem *descprod=new QStandardItem(desc_prod);
        QStandardItem *pref_lot=new QStandardItem(q.value(1).toString());

        q.next();

        row<<idprod<<descprod<<pref_lot;

        mod->appendRow(row);


    }

    mod->setHeaderData(0,Qt::Horizontal,"ID PRODOTTO");
    mod->setHeaderData(1,Qt::Horizontal,"PRODOTTO");
    mod->setHeaderData(2,Qt::Horizontal,"LOTTO PREDEFINITO");
    mod->sort(1,Qt::AscendingOrder);
    ui->tvPreferredLots->setModel(mod);

    ui->tvPreferredLots->horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
    ui->tvPreferredLots->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);




    prefdb.close();


}

void HPreferred_Lots::on_pbClose_clicked()
{
    close();
}

void HPreferred_Lots::print()
{
    QString strStream;

    QStandardItemModel *model =static_cast<QStandardItemModel*>(ui->tvPreferredLots->model());


    QTextStream out(&strStream);

    const int rowCount = model->rowCount();
    const int columnCount = model->columnCount();

    QString title="Lotti predefiniti";

    //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='5'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tvPreferredLots->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(model->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tvPreferredLots->isColumnHidden(column)) {
                QString data = model->data(model->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
           "</body>\n"
           "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    bool pdf=true; //magic!

    if (pdf)
    {
        QString filename;

        // qDebug()<<"filename="<<filename;
        filename= QFileDialog::getSaveFileName(this,"Scegli il nome del file",QString(),"Pdf (*.pdf)");

        if (filename.isEmpty() && filename.isNull()){
            //  qDebug()<<"annullato";
            return;
        }

        QPrinter printer;
        printer.setOrientation(QPrinter::Portrait);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(filename);

        document->print(&printer);

        delete document;

        QDesktopServices::openUrl(filename);
    }else{

        HPrint *f =new HPrint();
        f->setHtml(strStream);
        f->show();

    }

}


void HPreferred_Lots::on_pbPrint_clicked()
{
    print();
}

