#include "hexpirations.h"
#include "ui_hexpirations.h"
#include <QSqlDatabase>
#include "huser.h"
#include "hprint.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QDesktopServices>
#include <QFileDialog>

HExpirations::HExpirations(QSqlDatabase pdb,HUser *puser,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HExpirations)
{
    ui->setupUi(this);
    user=puser;
    db=pdb;

    ui->pushButton_3->setVisible(false);

    ui->deFrom->setDate(QDate::currentDate());
    ui->deLimit->setDate(QDate::currentDate());

    getExpirations();

    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setColumnHidden(4,true);


}

HExpirations::~HExpirations()
{
    delete ui;
}

void HExpirations::getExpirations()
{
    QDate datefrom=ui->deFrom->date();
    QDate dateto=ui->deLimit->date();

    QSqlQueryModel *mod=new QSqlQueryModel();
    QSqlQuery q(db);


    QString sql="SELECT lotdef.ID AS 'ID LOTTO',tipi_lot.Id AS 'ID tipi_lot',tipi_lot.descrizione AS 'TIPO LOTTO',lotdef.lot as 'LOTTO',prodotti.ID AS 'ID prodotto',prodotti.descrizione as 'PRODOTTO',lotdef.EAN as 'LOTTO ESTERNO',lotdef.scadenza as 'SCADENZA',giacenza AS 'GIACENZA' FROM fbgmdb260.lotdef,prodotti,tipi_lot WHERE tipi_lot.ID=lotdef.tipo AND prodotti.ID=lotdef.prodotto AND lotdef.scadenza  BETWEEN '"+ datefrom.toString("yyyy-MM-dd") +"'  AND '"+ dateto.toString("yyyy-MM-dd")+"' order by lotdef.scadenza desc";

    q.prepare(sql);
    q.bindValue(":da",datefrom.toString("yyyy-MM-dd"));
    q.bindValue(":a",dateto.toString("yyyy-MM-dd"));

    q.exec();

    mod->setQuery(q);

    ui->tableView->setModel(mod);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void HExpirations::print()
{
    QString strStream;


    QTextStream out(&strStream);

    const int rowCount = ui->tableView->model()->rowCount();
    const int columnCount = ui->tableView->model()->columnCount();

    QString title="SCADENZE dal "+ui->deFrom->date().toString("dd-MM-yyyy")+" al "+ ui->deLimit->date().toString("dd-MM-yyyy");

    //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='5'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tableView->isColumnHidden(column)) {
                QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
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
        printer.setOrientation(QPrinter::Landscape);
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


    /* HPrint *f =new HPrint();

    int rows=ui->tableView->model()->rowCount()+2;
    int cols=ui->tableView->model()->columnCount();
    


        f->append("LOTTI IN SCADENZA TRA IL " + ui->deFrom->text().toUpper()+ " E IL "+ ui->deLimit->text().toUpper(),false);



    f->append("",false);

    f->toggleImageUI(false);
    f->showMaximized();
    QTextTable *tb=f->addTable(rows,cols,QTextTableFormat());
    QString txt;

    f->writeTableContent(tb,0,2,QTextCharFormat(),"TIPO LOTTO");
    f->writeTableContent(tb,0,3,QTextCharFormat(),"LOTTO");
    f->writeTableContent(tb,0,5,QTextCharFormat(),"PRODOTTO");
    f->writeTableContent(tb,0,6,QTextCharFormat(),"SCADENZA");
    f->writeTableContent(tb,0,7,QTextCharFormat(),"LOT ESTERNO");



   int r,c;


    f->showMaximized();

    for (r=0;r<rows;r++)
    {


        for (c=0; c<7; c++)
        {
            if (c != 0 && c !=1 && c !=4 && c !=7)
            {
            txt=ui->tableView->model()->index(r-2,c).data(0).toString();
            f->writeTableContent(tb,r,c,QTextCharFormat(),txt);
            QApplication::processEvents();
            }





        }
        QApplication::processEvents();

    }
    QApplication::processEvents();*/
}

void HExpirations::on_pushButton_clicked()
{
    close();
}



void HExpirations::on_deLimit_dateChanged(const QDate &date)
{
    getExpirations();

}
void HExpirations::on_deFrom_dateChanged(const QDate &date)
{
    getExpirations();
}


void HExpirations::on_pushButton_2_clicked()
{
   print();
}
void HExpirations::on_pushButton_3_clicked()
{
   getExpirations();
}
