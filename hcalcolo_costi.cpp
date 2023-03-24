#include "hcalcolo_costi.h"
#include "ui_hcalcolo_costi.h"
#include "hcomponenti_costo_item.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QModelIndex>
#include "hproducts_for_calcolo_costi.h"
#include <QFileDialog>
#include <QDesktopServices>
#include <QPrinter>
#include <QTextDocument>
#include <QTextStream>
//#include <QDebug>
#include <QSqLError>
#include <hcontainer_generic_product.h>
#include <hcontainer_cartoni.h>
#include <hproducts_for_calcolo_costi.h>
#include "hcalcolo_costi_item.h"
#include "hpdfprint.h"
#include <QHeaderView>
#include <QMessageBox>

//#include  "hprint.h"


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

    //ui->tvComponentiCosto->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
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
    factor=0.0;
    QSqlQueryModel* raw_mod=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql ="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as \"QUANTITA\'\",prodotti.prezzo as 'COSTO UNITARIO (€)',righe_ricette.quantita*prodotti.prezzo as 'COSTO PER RICETTA','PIPPO' as 'COSTO FORMATO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.ID";
    q.prepare(sql);
    q.bindValue(":idp",idp);
    q.exec();
    raw_mod->setQuery(q);
    factor=calculate_factor(raw_mod);

    //     ="select distinct prodotti.ID ,prodotti.descrizione,prodotti.allergenico,righe_ricette.quantita from prodotti,righe_ricette where righe_ricette.ID_prodotto=prodotti.ID and righe_ricette.ID_ricetta=:idricetta order by righe_ricette.quantita desc";

    sql ="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as \"QUANTITA\'\",prodotti.prezzo as 'COSTO UNITARIO (€)',righe_ricette.quantita*prodotti.prezzo as 'COSTO PER RICETTA', FORMAT((prodotti.prezzo  * righe_ricette.quantita)* :f,4 )as 'COSTO FORMATO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.ID";
    q.prepare(sql);
    q.bindValue(":f",factor);
    q.bindValue(":idp",idp);
    q.exec();
    // qDebug()<<"GET_RICETTA"<<q.lastError().text();

    QSqlQueryModel* ricmod=new QSqlQueryModel();
    ricmod->setQuery(q);
    ui->tvRicetta->setModel(ricmod);

    //ui->tvRicetta->setColumnHidden(3,true);

    ui->tvRicetta->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    //ui->leCosto_formato->setText()

    double costo_formato=0.0;

    for (int r=0;r<ricmod->rowCount();r++)
    {
        costo_formato+=ricmod->index(r,4).data(0).toDouble();
        //    qDebug()<<r<<costo_formato;

    }

    // ui->tvRicetta->setColumnHidden(2,true);

    ui->leCosto_formato->setText(QString::number(costo_formato,'f',4));


}



QStandardItemModel *HCalcolo_costi::build_componenti_model()
{
    QStandardItemModel* mod=new QStandardItemModel(0,3);

    mod->setHeaderData(0,Qt::Horizontal,"");
    mod->setHeaderData(1,Qt::Horizontal,"ITEM");
    mod->setHeaderData(2,Qt::Horizontal,"COSTO");

    QList<QStandardItem*> row;

    row<<new QStandardItem("PRODOTTO")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("OLIO DI COLMATURA")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("VASO:")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("CAPSULA:")<<new QStandardItem("")<<new QStandardItem("");;
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("ETICHETTA:")<<new QStandardItem("")<<new QStandardItem("");;
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("VASSOIO:")<<new QStandardItem("")<<new QStandardItem("");;
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SCATOLA:")<<new QStandardItem("")<<new QStandardItem("");;
    mod->appendRow(row);
    row.clear();



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


    for (int x=0; x<ricetta_mod->rowCount();++x)
    {
        costo_totale_formato+=ricetta_mod->index(x,4).data(0).toDouble();
    }

    // costo_totale_formato=QString::number(ui->leCosto_formato->text().toDouble(),'f',4);

    QList<QStandardItem*>row;
    QString item,costo=QString();
    int mrow=ui->lv_prodotti->currentIndex().row();


    // qDebug()<<ui->lv_prodotti->model()->index(mrow,4).data(0).toString()<<costo_totale_formato;
    item=ui->lv_prodotti->model()->index(mrow,1).data(0).toString();
    costo=QString::number(costo_totale_formato,'f',4);

    QModelIndex ix=componenti_costo_model->index(0,1);
    componenti_costo_model->setData(ix,item);


    ix=componenti_costo_model->index(0,2);
    componenti_costo_model->setData(ix,costo);




}

void HCalcolo_costi::calcolo_per_formato(const QSqlQueryModel *model)
{


    /*  double formato=ui->leFormato->text().toDouble();

    QSqlQueryModel* model_2=new QSqlQueryModel();

    int idp=ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),0).data(0).toInt();

    QSqlQuery q(db);
    QString sql ="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as 'QUANTITA',prodotti.prezzo as 'COSTO UNITARIO (€)', prodotti.prezzo * :f as 'COSTO FORMATO' PIPPO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.ID";
    q.prepare(sql);
    q.bindValue(":idp",idp);
    q.bindValue(":f", formato);
    q.exec();


    model_2->setQuery(q);


    ui->tvRicetta->setModel(model_2);*/

}



void HCalcolo_costi::on_pbCalcolo_clicked()
{
    // on_leFormato_returnPressed();

    double costo_totale=0.0;
    int rows=0;
    rows=ui->tvComponentiCosto->model()->rowCount();

    for(int i=0;i<rows;++i)
    {
        costo_totale += ui->tvComponentiCosto->model()->index(i,2).data(0).toDouble();
    }

    ui->leCosto_formato->setText(QString::number(costo_totale));
}





void HCalcolo_costi::on_pbAggiungi_componente_costo_clicked()
{
    HProducts_for_calcolo_costi *f=new HProducts_for_calcolo_costi(-1,user,db);
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

    row<<new QStandardItem("COSTO ENERGIA")<<new QStandardItem("")<<new QStandardItem(ui->leCosto_energia->text());
    componenti_costo_model->appendRow(row);
}


void HCalcolo_costi::on_leCosto_personale_returnPressed()
{
    QList<QStandardItem*> row;

    row<<new QStandardItem("COSTO PERSONALE")<<new QStandardItem("")<<new QStandardItem(ui->leCosto_personale->text());
    componenti_costo_model->appendRow(row);
}


void HCalcolo_costi::on_leCosto_spese_generali_returnPressed()
{
    QList<QStandardItem*> row;

    row<<new QStandardItem("SPESE GENERALI")<<new QStandardItem("")<<new QStandardItem(ui->leCosto_spese_generali->text());
    componenti_costo_model->appendRow(row);
}

void HCalcolo_costi::add_item(QString item, QString costo)
{
    //  qDebug()<<"add-item()"<<item<<costo;

    QList<QStandardItem*> row;

    row<<new QStandardItem("item:")<<new QStandardItem(item)<<new QStandardItem(costo);
    componenti_costo_model->appendRow(row);
}

void HCalcolo_costi::update_componenti_costo_row(QString item, QString costo)
{
    QModelIndex row_index=ui->tvComponentiCosto->currentIndex();

    QModelIndex ix_item=componenti_costo_model->index(row_index.row(),1);
    componenti_costo_model->setData(ix_item,item);
    QModelIndex ix_costo=componenti_costo_model->index(row_index.row(),2);
    componenti_costo_model->setData(ix_costo,costo);

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


    //   qDebug()<<filename;
    out << "<html>";
    out <<  "<head>\n<meta Content=\"Text/html; charset=Windows-1251\"></head>\n<body bgcolor=#ffffff link=#5000A0><table width=100% border=1 cellspacing=0 cellpadding=2>";
    //-------------------------
    const int c_rowCount = ui->tvComponentiCosto->model()->rowCount();
    const int c_columnCount = ui->tvComponentiCosto->model()->columnCount();

    QString title="COSTO: " +ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),1).data(0).toString()+" - FORMATO: "+QString::number(ui->leFormato->text().toDouble(),'f',3);

    out <<"<table width=100% border=1 cellspacing=0 cellpadding=2>";
    out << "<thead><tr bgcolor='lightyellow'><th colspan='3'>"+ title +"</th></tr>";

    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < c_columnCount; column++)
        if (!ui->tvComponentiCosto->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tvComponentiCosto->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>";

    QString data=QString();

    // data table
    for (int row = 0; row < c_rowCount; row++) {
        out << "<tr>";

        for (int column = 0; column < c_columnCount; ++column) {

            if (!ui->tvComponentiCosto->isColumnHidden(column)) {
                QString data = ui->tvComponentiCosto->model()->data(ui->tvComponentiCosto->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1").arg((!data.isEmpty()) ? data.append("</td>") : QString("</td>"));
            }


        }

        out <<"</tr>";

    }



    out << QString("<tr><td>").append("COSTO FORMATO:</td><td></td><td>"+ui->leCosto_formato->text()+"</td></tr>");
    out << QString("<tr><td>").append("MARGINE:</td><td></td><td>"+ui->leMargine->text()+"</td></tr>");
    out << QString("<tr><td>").append("PREZZO SUGGERITO:</td><td></td><td>"+ui->leResult->text()+"</td></tr>");
    out<<"</table>";
    out<<"</table>";


    //-------------------------

    const int r_rowCount = ui->tvRicetta->model()->rowCount();
    const int r_columnCount = ui->tvRicetta->model()->columnCount();

    out<<"<br><br>";
    out <<"<table width=100% border=1 cellspacing=0 cellpadding=2>";
    out << "<thead></style><tr bgcolor='lightyellow'><th colspan='5'>RICETTA</th></tr>";

    out << "<tr bgcolor=#f0f0f0>";
    for (int col = 0; col < r_columnCount; col++)
        if (!ui->tvRicetta->isColumnHidden(col))
            out << QString("<th>%1</th>").arg(ui->tvRicetta->model()->headerData(col, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < r_rowCount; row++) {

        out << "<tr bgcolor=#ffffff>";
        for (int column = 0; column < r_columnCount; column++) {
            if (!ui->tvRicetta->isColumnHidden(column)) {
                QString data = ui->tvRicetta->model()->data(ui->tvRicetta->model()->index(row, column)).toString().simplified();
                if(column==2 || column==3)
                {
                    double res=0.0;
                    res=ui->tvRicetta->model()->data(ui->tvRicetta->model()->index(row, column),0).toDouble();
                    data=QString::number(res,'f',4);
                    out << QString("<td bkcolor=0>%1").arg((!data.isEmpty()) ? data.append("</td>") : QString("</td>"));
                } else if(column==4)
                {
                    double res=0.0;
                    res=ui->tvRicetta->model()->data(ui->tvRicetta->model()->index(row, 4),0).toDouble();
                    data=QString::number(res,'f',4);
                    out << QString("<td bkcolor=0>%1").arg((!data.isEmpty()) ? data.append("</td>") : QString("</td>"));
                }
                else
                {
                out << QString("<td bkcolor=0>%1").arg((!data.isEmpty()) ? data.append("</td>") : QString("</td>"));
                }
            }

        }

    }
    out<<"</tr>";
    out<<"</table><br><br>";

    //------------

    out <<"</body>";
    out <<"</html>";





    /*  QString filename;

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
    QTextDocument *doc= new QTextDocument();
    doc->setHtml(strStream);*


    qDebug()<<strStream;*/
    HPDFPrint *f=new HPDFPrint(user,strStream);
    f->showMaximized();

    // delete doc;

    // QDesktopServices::openUrl(filename);

}

void HCalcolo_costi::updateComponenti_model(int row,double value)
{
    QModelIndex ix=componenti_costo_model->index(row,1);
    componenti_costo_model->setData(ix,value);
}



void HCalcolo_costi::on_pbPrint_clicked()
{
   if(ui->tvRicetta->model()&&ui->tvComponentiCosto->model())
   {
       print();
   }
   else
   {
       QMessageBox::warning(this,QApplication::applicationName(),"Dati non ancora inizializzati",QMessageBox::Ok);
   }
}

double HCalcolo_costi::calculate_factor(QSqlQueryModel *model)
{
    double tot_formato = ui->leFormato->text().toDouble();
    double tot_ricetta=0.0;
    double factor=0.0;

    //QStandardItemModel* model=static_cast<QStandardItemModel*>(ui->tvRicetta->model());

    for (int x=0;x<model->rowCount();x++)
    {
        tot_ricetta += model->index(x,1).data(0).toDouble();
    }

    //  qDebug()<<"SOMMARIGHE"<<tot_formato<<tot_ricetta<<tot_formato/tot_ricetta;


    factor = tot_formato / tot_ricetta;

    /* for (int j=0;j<model->rowCount();j++)
    {
       QModelIndex i = model->index(j,2);
       QModelIndex i_res = model->index(j,4);
       result =i.data().toDouble()* factor;
      // QString resulttoadd=QString::number(result,'f',2);
       QString resulttoadd="PIPPOO";

       model->setData(i_res,QVariant(resulttoadd));

    }*/



    return factor;


}



void HCalcolo_costi::on_tvComponentiCosto_doubleClicked(const QModelIndex &index)
{


    int tipology=-1;

    switch(index.row())
    {
    case 1:
        tipology=1;
        break;
    case 2:
        tipology=5;
        break;
    case 3:
        tipology=4;
        break;
    case 5:
        tipology=3;
        break;
    case 6:
        tipology=3;
        break;
    }



    HCalcolo_costi_item *f=new HCalcolo_costi_item(tipology,db);
    connect(f,SIGNAL(item_added(QString,QString)),this,SLOT(update_componenti_costo_row(QString,QString)));
    f->show();








}

