#include "hrecipesforingredient.h"
#include "ui_hrecipesforingredient.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QMessageBox>
#include "huser.h"
#include <QFileDialog>
#include <QTextDocument>
#include <QPrinter>
#include <QDesktopServices>

#include <QSqlError>

HRecipesForIngredient::HRecipesForIngredient(HUser* puser,QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HRecipesForIngredient)
{
    ui->setupUi(this);
    user=puser;
    db=pdb;

    getIngredients();
}

HRecipesForIngredient::~HRecipesForIngredient()
{
    delete ui;
}

void HRecipesForIngredient::getIngredients()
{
    QString sql=QString();
    QSqlTableModel* cbMod=new QSqlTableModel(nullptr,db);
    cbMod->setTable("prodotti");
    cbMod->setFilter("tipo=1");
    cbMod->setSort(1,Qt::AscendingOrder);


    ui->cbIngredients->setModel(cbMod);
    ui->cbIngredients->setModelColumn(1);
    cbMod->select();
    ui->cbIngredients->setCurrentIndex(0);



}

void HRecipesForIngredient::getRecipes(int pid)
{
    mod=new QSqlQueryModel();
    QString sql=QString();
    QSqlQuery q(db);



    sql="SELECT prodotti.descrizione FROM ricette,righe_ricette,prodotti where ricette.ID=righe_ricette.ID_ricetta and prodotti.id=ricette.ID_prodotto and ricette.id=righe_ricette.ID_ricetta and righe_ricette.ID_prodotto=:id order by prodotti.descrizione ASC" ;

   q.prepare(sql);
   q.bindValue(":id",QVariant(pid));
   q.exec();
  // q.next();

   qDebug()<<q.lastQuery()<<q.lastError().text();

   mod->setQuery(q);
   ui->tvResult->setModel(mod);
   ui->tvResult->horizontalHeader()->setStretchLastSection(true);
   mod->setHeaderData(0,Qt::Horizontal,QObject::tr("RICETTE (contenenti l'ingrediente selezionato)"));

}

void HRecipesForIngredient::print()
{
    QString strStream;
    QString filename;



    QApplication::setOverrideCursor(Qt::WaitCursor);
    filename= QFileDialog::getSaveFileName(this,"Scegli il nome del file",QString(),"Pdf (*.pdf)");

    if (filename.isEmpty() && filename.isNull()){
        qDebug()<<"annullato";
        return;
    }

    qDebug()<<"filename="<<filename;




    QTextStream out(&strStream);

    const int rowCount = ui->tvResult->model()->rowCount();
    const int columnCount = ui->tvResult->model()->columnCount();

    QString title="STAMPA RICETTE PER INGREDIENTE: "+ui->cbIngredients->currentText();



    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th width=98%>"+ title +"</th></tr>";
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
                QString data = ui->tvResult->model()->data(ui->tvResult->model()->index(row, column)).toString().simplified();
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

    QPrinter printer;
    printer.setPageOrientation(QPageLayout::Portrait);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPrinter::A4);
    printer.setOutputFileName(filename);

    qDebug()<<filename;

    document->print(&printer);

    QDesktopServices::openUrl(QUrl(filename));

    delete document;
     QApplication::setOverrideCursor(Qt::ArrowCursor);
}

void HRecipesForIngredient::on_cbIngredients_currentIndexChanged( int index)
{
  int ix=ui->cbIngredients->model()->index(/*ui->cbIngredients->currentIndex()*/index,0).data(0).toInt();
  getRecipes(ix);
}


void HRecipesForIngredient::on_pbPrint_clicked()
{
    print();
}


void HRecipesForIngredient::on_pbClose_clicked()
{
   if(QMessageBox::question(this,QApplication::applicationName(),"Chiudere la finestra?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
   {

       close();
   }else{
       return;
   }











}

