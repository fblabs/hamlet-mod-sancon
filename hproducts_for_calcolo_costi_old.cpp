#include "hcalcolo_costi.h"
#include "ui_hcalcolo_costi.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QModelIndex>
#include "hproducts_for_calcolo_costi.h"
#include <QFileDialog>
#include <QDesktopServices>
#include <QPrinter>
#include <QTextDocument>
#include <QDebug>
#include <QSqLError>

HCalcolo_costi::HCalcolo_costi(HUser *p_user, QSqlDatabase p_db, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HCalcolo_costi)
{
    ui->setupUi(this);
    user=p_user;
    db=p_db;
    factor=0.0;

    componenti_costo_model=build_componenti_model();
    ui->tvComponentiCosto->setModel(componenti_costo_model);

    QDoubleValidator *formato_validator=new QDoubleValidator(0,100,3);
    ui->leFormato->setValidator(formato_validator);
    QDoubleValidator *energia_validator=new QDoubleValidator(0,100000,2);
    ui->leCosto_energia->setValidator(energia_validator);
    QDoubleValidator *personale_validator=new QDoubleValidator(0,100000,2);
    ui->leCosto_personale->setValidator(personale_validator);
    QDoubleValidator *generali_validator=new QDoubleValidator(0,100000,2);
    ui->leCosto_spese_generali->setValidator(generali_validator);

    ui->tvComponentiCosto->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvComponentiCosto->verticalHeader()->setSectionsMovable(true);


    get_clienti();
    ui->leFormato->setFocus();





}

HCalcolo_costi::~HCalcolo_costi()
{
    delete ui;
}

void HCalcolo_costi::get_clienti()
{
    QSqlQueryModel* cust_mod=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="SELECT ID,ragione_sociale FROM anagrafica WHERE cliente>0 ORDER BY ragione_sociale ASC";

    q.prepare(sql);
    q.exec();
    cust_mod->setQuery(q);

    ui->cbClienti->setModel(cust_mod);
    ui->cbClienti->setModelColumn(1);
}

QSqlQueryModel *HCalcolo_costi::get_client_products()
{
    int idcliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    QSqlQueryModel *cmod=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="select prodotti.ID,prodotti.descrizione from prodotti,ricette WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT associazioni.ID_ricetta FROM associazioni WHERE associazioni.visualizza>0 AND associazioni.ID_cliente=:idc)";
    q.prepare(sql);
    q.bindValue(":idc",idcliente);
    q.exec();

    cmod->setQuery(q);

    return cmod;

}

void HCalcolo_costi::on_cbClienti_currentIndexChanged(int index)
{

    ui->lv_prodotti->setModel(get_client_products());
    ui->lv_prodotti->setModelColumn(1);
    QModelIndex ix=ui->lv_prodotti->model()->index(0,0);
    ui->lv_prodotti->setCurrentIndex(ix);
    connect(ui->lv_prodotti->selectionModel(),
            SIGNAL(selectionChanged(QItemSelection,QItemSelection)),
            this, SLOT(get_ricetta()));


}

void HCalcolo_costi::get_ricetta()
{

    int row=ui->lv_prodotti->currentIndex().row();
    int idp=ui->lv_prodotti->model()->index(row,0).data(0).toInt();
    double factor=ui->leFormato->text().toDouble();


    QSqlQuery q(db);
    //     ="select distinct prodotti.ID ,prodotti.descrizione,prodotti.allergenico,righe_ricette.quantita from prodotti,righe_ricette where righe_ricette.ID_prodotto=prodotti.ID and righe_ricette.ID_ricetta=:idricetta order by righe_ricette.quantita desc";

    QString sql ="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as \"QUANTITA\'\",prodotti.prezzo as 'COSTO UNITARIO (€)',righe_ricette.quantita*prodotti.prezzo as 'COSTO PER RICETTA',prodotti.prezzo * :f as 'COSTO FORMATO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.ID";
    q.prepare(sql);
    q.bindValue(":f",factor);
    q.bindValue(":idp",idp);
    q.exec();

    QSqlQueryModel* ricmod=new QSqlQueryModel();
    ricmod->setQuery(q);
    ui->tvRicetta->setModel(ricmod);
    /*ui->tvRicetta->setColumnHidden(1,true);*/
    ui->tvRicetta->setColumnHidden(3,true);
    ui->tvRicetta->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    // ui->tvRicetta->setColumnHidden(2,true);


}



QStandardItemModel *HCalcolo_costi::build_componenti_model()
{
    QStandardItemModel* mod=new QStandardItemModel(0,2);

    mod->setHeaderData(0,Qt::Horizontal,"ITEM");
    mod->setHeaderData(1,Qt::Horizontal,"COSTO");



    return mod;
}


void HCalcolo_costi::on_pbClose_clicked()
{
    close();
}


void HCalcolo_costi::on_leFormato_returnPressed()
{
    double costo_totale_formato=0.0;

    get_ricetta();

    QSqlQueryModel *ricetta_mod=static_cast<QSqlQueryModel*>(ui->tvRicetta->model());
    qDebug()<<ricetta_mod->rowCount()<<ricetta_mod->columnCount();

    for (int x=0; x<ricetta_mod->rowCount();++x)
    {
        costo_totale_formato+=ricetta_mod->index(x,4).data(0).toDouble();
    }

    QList<QStandardItem*>row;
    QString item,costo=QString();

    int mrow=ui->lv_prodotti->currentIndex().row();
    ui->leCosto_formato->setText(QString::number(costo_totale_formato,'f',2));

    // qDebug()<<ui->lv_prodotti->model()->index(mrow,4).data(0).toString()<<costo_totale_formato;
    item=ui->lv_prodotti->model()->index(mrow,1).data(0).toString();
    costo=costo_totale_formato;
    row<<new QStandardItem(item)<<new QStandardItem(QString::number(costo_totale_formato));
    componenti_costo_model->appendRow(row);


}

void HCalcolo_costi::calcolo_per_formato(const QSqlQueryModel *model)
{


    double formato=ui->leFormato->text().toDouble();

    QSqlQueryModel* model_2=new QSqlQueryModel();

    int idp=ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),0).data(0).toInt();

    QSqlQuery q(db);
    QString sql ="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as 'QUANTITA',prodotti.prezzo as 'COSTO UNITARIO (€)', prodotti.prezzo * :f as 'COSTO FORMATO' PIPPO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.ID";
    q.prepare(sql);
    q.bindValue(":idp",idp);
    q.bindValue(":f", formato);
    q.exec();


    model_2->setQuery(q);


    ui->tvRicetta->setModel(model_2);

}



void HCalcolo_costi::on_pbCalcolo_clicked()
{
   // on_leFormato_returnPressed();

    double costo_totale=0.0;
    int rows=0;
    rows=ui->tvComponentiCosto->model()->rowCount();

    for(int i;i<rows;++i)
    {
        costo_totale += ui->tvComponentiCosto->model()->index(i,1).data(0).toDouble();
    }

    ui->leCosto_formato->setText(QString::number(costo_totale));
}





void HCalcolo_costi::on_pbAggiungi_componente_costo_clicked()
{
    HProducts_for_calcolo_costi *f=new HProducts_for_calcolo_costi(user,db);
    // connect(f,SIGNAL(sg_item_added(QString,QString)),this,SLOT(add_item(QString item,QString costo)));
    connect(f,SIGNAL(sg_item_added(QString,QString)),this,SLOT(add_item(QString,QString)));
    f->show();
}


void HCalcolo_costi::on_pbRimuovi_componente_costo_clicked()
{
    QModelIndex ix=ui->tvComponentiCosto->currentIndex();
    int row=ix.row();

    componenti_costo_model->removeRow(row);
}


void HCalcolo_costi::on_leCosto_energia_returnPressed()
{
    //QModelIndex ix=componenti_costo_model->index(2,1);
    QList<QStandardItem*> row;

    row<<new QStandardItem("COSTO ENERGIA")<<new QStandardItem(ui->leCosto_energia->text());
    componenti_costo_model->appendRow(row);
}


void HCalcolo_costi::on_leCosto_personale_returnPressed()
{
    QList<QStandardItem*> row;

    row<<new QStandardItem("COSTO PERSONALE")<<new QStandardItem(ui->leCosto_personale->text());
    componenti_costo_model->appendRow(row);
}


void HCalcolo_costi::on_leCosto_spese_generali_returnPressed()
{
    QList<QStandardItem*> row;

    row<<new QStandardItem("SPESE GENERALI")<<new QStandardItem(ui->leCosto_spese_generali->text());
    componenti_costo_model->appendRow(row);
}

void HCalcolo_costi::add_item(QString item, QString costo)
{
    qDebug()<<"add-item()"<<item<<costo;

    QList<QStandardItem*> row;

    row<<new QStandardItem(item)<<new QStandardItem(costo);
    componenti_costo_model->appendRow(row);
}



void HCalcolo_costi::on_leMargine_returnPressed()
{
    on_pbCalcolo_clicked();

    double costo_default=ui->leCosto_formato->text().toDouble();
    double percentuale=ui->leMargine->text().toDouble()/100;
    double costo_pezzo=costo_default * percentuale+ costo_default;

    ui->leResult->setText(QString::number(costo_pezzo,'f',2));
}

void HCalcolo_costi::print()
{
    QString strStream;


    QTextStream out(&strStream);

    const int rowCount = ui->tvComponentiCosto->model()->rowCount();
    const int columnCount = ui->tvComponentiCosto->model()->columnCount();

    QString title="COSTO: " +ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),1).data(0).toString()+" - FORMATO: "+QString::number(ui->leFormato->text().toDouble(),'f',3);

    //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table  width=100% border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='2'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tvComponentiCosto->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tvComponentiCosto->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tvComponentiCosto->isColumnHidden(column)) {
                QString data = ui->tvComponentiCosto->model()->data(ui->tvComponentiCosto->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1").arg((!data.isEmpty()) ? data.append("</td>") : QString("</td>"));
            }

        }
        out<<"</tr>";
    }

        out << QString("<tr><td>").append("COSTO FORMATO:</td><td>"+ui->leCosto_formato->text()+"</td></tr>");
        out << QString("<tr><td>").append("MARGINE:</td><td>"+ui->leMargine->text()+"</td></tr>");
        out << QString("<tr><td>").append("PREZZO SUGGERITO:</td><td>"+ui->leResult->text()+"</td></tr>");

        out <<  "</table>\n"
            "</body>\n"
            "</html>";


    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);
    qDebug()<<strStream;

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

}



void HCalcolo_costi::on_pbPrint_clicked()
{
    print();
}

