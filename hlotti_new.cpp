#include "hlotti_new.h"
#include "ui_hlotti_new.h"
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QTextStream>
#include <QPrinter>
#include <QFileDialog>
#include <QCursor>
#include "hprint.h"
#include "hmodifylot.h"
#include <QCompleter>

HLotti_new::HLotti_new(QSqlDatabase pdb, HUser *p_user, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLotti_new)
{
    ui->setupUi(this);

    ui->deFrom->setDate(QDate::currentDate().addMonths(-1));
    ui->deTo->setDate(QDate::currentDate());
    db=pdb;
    getLotTypes();
    ui->cbProduct->setModel(getProducts());
    ui->cbProduct->setModelColumn(1);

    ui->tvLotti->setModel(loadLotsData());




}

HLotti_new::~HLotti_new()
{
    delete ui;
}

QSqlQueryModel* HLotti_new::loadLotsData()
{
    QSqlQueryModel * local_mod=new QSqlQueryModel();
    QString sql=QString();

    int tipo=-1;
    int prodotto=-1;



    if(ui->ckbUseType->isChecked())
    {
       tipo=ui->cbType->model()->index(ui->cbType->currentIndex(),0).data(0).toInt();
    }
    if (ui->ckbUseProduct->isChecked())
    {
        prodotto=ui->cbProduct->model()->index(ui->cbProduct->currentIndex(),0).data(0).toInt();
    }

    sql=buildLotsQuery(tipo,prodotto);

    qDebug()<<sql;

    if(!db.isOpen())qDebug()<<"NOT OPEN";

    QSqlQuery q(db);
    q.prepare (sql);
    q.bindValue(":tipo",tipo);
    q.bindValue(":prodotto",prodotto);
    q.bindValue(":dfrom",ui->deFrom->date());
    q.bindValue(":dto",ui->deTo->date());


    q.exec();

    qDebug()<<q.lastError().text();

    local_mod->setQuery(q);
    return local_mod;
}







void HLotti_new::on_deFrom_userDateChanged(const QDate &date)
{
    ui->tvLotti->setColumnHidden(0,true);
    ui->tvLotti->setModel(loadLotsData());
}


void HLotti_new::on_deTo_userDateChanged(const QDate &date)
{
    ui->tvLotti->setColumnHidden(0,true);
    ui->tvLotti->setModel(loadLotsData());

}


void HLotti_new::on_pbClose_clicked()
{
    close();
}


void HLotti_new::on_tvLotti_doubleClicked(const QModelIndex &index)
{
    int idlotto=ui->tvLotti->model()->index(ui->tvLotti->currentIndex().row(),0).data(0).toInt();

    HModifyLot *f=new HModifyLot(idlotto,db/*,ui->deFrom->date(),ui->deTo->date()*/);
    //   connect(f,SIGNAL(updatedLot()),this,SLOT(updateTableView()));
    f->show();
}


void HLotti_new::on_pbLotInfo_clicked()
{
    int idlotto=ui->tvLotti->model()->index(ui->tvLotti->currentIndex().row(),0).data(0).toInt();
    HModifyLot *f=new HModifyLot(idlotto,db/*,ui->deFrom->date(),ui->deTo->date()*/);
    f->show();
}

void HLotti_new::getLotTypes()
{
    QSqlTableModel *type_mod=new QSqlTableModel(nullptr,db);
    type_mod->setTable("tipi_lot");
    type_mod->select();
    ui->cbType->setModel(type_mod);
    ui->cbType->setModelColumn(1);

}


void HLotti_new::on_ckbUseType_toggled(bool checked)
{
    ui->tvLotti->setModel(loadLotsData());
}


void HLotti_new::on_cbType_currentIndexChanged(int index)
{
    ui->tvLotti->setModel(loadLotsData());
}

void HLotti_new::print()
{
    QString strStream;


    QTextStream out(&strStream);

    const int rowCount = ui->tvLotti->model()->rowCount();
    const int columnCount = ui->tvLotti->model()->columnCount();

    qDebug()<<rowCount<<columnCount;

    QString title="Lotti dal "+ui->deFrom->date().toString("dd-MM-yyyy")+" al "+ ui->deTo->date().toString("dd-MM-yyyy");

    //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='5'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tvLotti->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tvLotti->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tvLotti->isColumnHidden(column)) {
                QString data = ui->tvLotti->model()->data(ui->tvLotti->model()->index(row, column)).toString().simplified();
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
        filename= QFileDialog::getOpenFileName(this,"Scegli il nome del file",QString(),"Pdf (*.pdf)");

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
    }else{

        HPrint *f =new HPrint();
        f->setHtml(strStream);
        f->show();

    }



}

void HLotti_new::on_pbPrint_clicked()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    print();
    QApplication::setOverrideCursor(Qt::ArrowCursor);
}

QString HLotti_new::buildLotsQuery(int tipo,int prodotto)
{
    QString lots_query=QString();

    //NON USO NE' TIPO LOTTO NE' PRODOTTO


    if(tipo<0 && prodotto<0)
    {
        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO'\
                from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto\
                AND anagrafica.ID=lotdef.anagrafica and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
    }

    // USO SOLO IL TIPO LOTTO

    if(tipo>-1 && prodotto<0)
    {
        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO'\
                FROM lotdef,prodotti,anagrafica, tipi_lot\
                 WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.tipo=:tipo and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
    }

    //USO SOLO IL PRODOTTO

    if(tipo<0 && prodotto>-1)
    {
        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO'\
                FROM lotdef,prodotti,anagrafica, tipi_lot WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.prodotto=:prodotto and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
    }

    //USO TIPO LOTTO E PRODOTTI

    if(tipo>-1 && prodotto > -1)
    {

        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO'\
        from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.tipo=:tipo and lotdef.prodotto=:prodotto and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";

    }

    return lots_query;
}


QSqlQueryModel* HLotti_new::getProducts()
{
    QSqlQuery q(db);
    QSqlQueryModel *mod=new QSqlQueryModel();
    QString sql="select ID,descrizione FROM prodotti ORDER BY descrizione asc;";

    q.prepare(sql);
    q.exec();
    mod->setQuery(q);

    return mod;



}


void HLotti_new::on_cbProduct_currentIndexChanged(int index)
{
     ui->tvLotti->setModel(loadLotsData());
}


void HLotti_new::on_ckbUseProduct_toggled(bool checked)
{
   ui->tvLotti->setModel(loadLotsData());
}

