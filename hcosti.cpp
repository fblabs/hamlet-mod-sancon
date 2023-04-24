#include "hcosti.h"
#include "ui_hcosti.h"
#include <QSqlQuery>
#include <QTextStream>
#include "hcosti_model.h"
#include "hproducts_for_calcolo_costi.h"
#include "hpdfprint.h"
#include <QCompleter>
#include "hcomponenti_model.h"
#include "hcalcolo_costi_item.h"
#include "hcalcolo_costi_item_set.h"
#include <QDebug>


HCosti::HCosti(QSqlDatabase p_db,HUser *p_user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HCosti)
{
    ui->setupUi(this);
    db=p_db;
    get_clienti();


    recipe_model=new HCosti_model();

    ui->tvComponentiCosto->setModel(componenti_costo_model);

    connect(ui->tvRicetta->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_recipe()));
    connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));


    ui->tvComponentiCosto->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    ui->cbClienti->completer()->setCompletionMode(QCompleter::PopupCompletion);
}

HCosti::~HCosti()
{
    delete ui;
}

void HCosti::get_clienti()
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

QSqlQueryModel *HCosti::get_client_products()
{
    int idcliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    QSqlQueryModel *cmod=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="select prodotti.ID,prodotti.descrizione from prodotti,ricette WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT associazioni.ID_ricetta FROM associazioni WHERE associazioni.visualizza>0 AND associazioni.ID_cliente=:idc)";
    q.prepare(sql);
    q.bindValue(":idc",idcliente);
    q.exec();

    cmod->setQuery(q);
    ui->lv_prodotti->setFocus();

    return cmod;
}

HComponenti_model *HCosti::build_componenti_model()
{
    HComponenti_model* mod=new HComponenti_model();


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

    row<<new QStandardItem("CAPSULA:")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("ETICHETTA:")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("VASSOIO:")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SCATOLA:")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SPESE FISSE:")<<new QStandardItem("ENERGIA")<<new QStandardItem("0.0000");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SPESE FISSE:")<<new QStandardItem("COSTO PERSONALE:")<<new QStandardItem("0.0000");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SPESE FISSE::")<<new QStandardItem("SPESE GENERALI")<<new QStandardItem("0.0000");
    mod->appendRow(row);
    row.clear();


    mod->setHeaderData(0,Qt::Horizontal,"VOCE");
    mod->setHeaderData(1,Qt::Horizontal,"ITEM");
    mod->setHeaderData(2,Qt::Horizontal,"COSTO");









    return mod;
}

void HCosti::get_ricetta()
{

    int row=ui->lv_prodotti->currentIndex().row();
    int idp=ui->lv_prodotti->model()->index(row,0).data(0).toInt();
    double formato=ui->leFormato->text().toDouble();

    //  QSqlQueryModel* raw_mod=new QSqlQueryModel();
    QSqlQuery q(db);
    /* QString sql="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as \"QUANTITA\'\",prodotti.prezzo as 'COSTO UNITARIO (€*Kg)',righe_ricette.quantita*prodotti.prezzo as 'COSTO PER RICETTA','PIPPO' as 'COSTO FORMATO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.ID";
    q.prepare(sql);
    q.bindValue(":idp",idp);
    q.exec();
    raw_mod->setQuery(q);
   // factor=calculate_factor(raw_mod);*/
    QString sql=QString();
    QSqlQueryModel *recipe_q_mod=new QSqlQueryModel();


    //     ="select distinct prodotti.ID ,prodotti.descrizione,prodotti.allergenico,righe_ricette.quantita from prodotti,righe_ricette where righe_ricette.ID_prodotto=prodotti.ID and righe_ricette.ID_ricetta=:idricetta order by righe_ricette.quantita desc";

    // sql ="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as \"QUANTITA\'\",prodotti.prezzo as 'COSTO UNITARIO (€)',righe_ricette.quantita*prodotti.prezzo as 'COSTO PER RICETTA', FORMAT((prodotti.prezzo  * righe_ricette.quantita)* :f,4 )as 'COSTO FORMATO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.ID";
    sql ="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as \"QUANTITA\'\",prodotti.prezzo as 'COSTO UNITARIO (€*Kg)',FORMAT(righe_ricette.quantita*prodotti.prezzo,4) as 'COSTO PER RICETTA', FORMAT(prodotti.prezzo*:f,4) as 'COSTO FORMATO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.ID";
    q.prepare(sql);
    q.bindValue(":f",formato);
    q.bindValue(":idp",idp);
    q.exec();
   // qDebug()<<q.lastError().text()<<formato;
    recipe_q_mod->setQuery(q);
    recipe_model=QueryToCosti(recipe_q_mod);



    ui->tvRicetta->setModel(recipe_model);

    //ui->tvRicetta->setColumnHidden(3,true);


    recipe_model->setHeaderData(0,Qt::Horizontal,"MATERIALE");
    recipe_model->setHeaderData(1,Qt::Horizontal,"QUANTITA\'*");
    recipe_model->setHeaderData(2,Qt::Horizontal,"COSTO UNITARIO (€*Kg)*");
    recipe_model->setHeaderData(3,Qt::Horizontal,"COSTO PER RICETTA");
    recipe_model->setHeaderData(4,Qt::Horizontal,"COSTO FORMATO");
    ui->tvRicetta->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //ui->leCosto_formato->setText()

    double costo_formato=0.0;
    double costo_ricetta=0.0;
    double tot_quantita=0.0;
    double costo_kilo=0.0;

    for (int r=0;r<recipe_model->rowCount();r++)
    {
        //costo_formato+=ricmod->index(r,4).data(0).toDouble();
        costo_ricetta+=recipe_model->index(r,3).data(0).toDouble();
        tot_quantita+=recipe_model->index(r,1).data(0).toDouble();
        //qDebug()<<"CF"<<costo_formato<<"QR"<<tot_quantita<<"CR"<<costo_ricetta;
    }



    costo_kilo=costo_ricetta/tot_quantita;
    costo_formato=costo_kilo*formato;

   // qDebug()<<"CK"<<costo_kilo<<"FM"<<formato<<"CF"<<costo_formato;


    ui->lbCostoFormato->setText(QString::number(costo_formato,'f',4));
    ui->lbTotQuantita->setText(QString::number(tot_quantita,'f',2));
    ui->lbCostoRicetta->setText(QString::number(costo_ricetta,'f',4));



    QString prod=ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),1).data(0).toString();


    componenti_costo_model->setData(componenti_costo_model->index(0,1),prod);
    componenti_costo_model->setData(componenti_costo_model->index(0,2),QString::number(costo_formato,'f',4));
    connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));
    calculate_components_cost();


    ui->leFormato->setFocus();
    ui->tvComponentiCosto->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void HCosti::on_cbClienti_currentIndexChanged(int index)
{

    QSqlQueryModel* mod=get_client_products();


    ui->lv_prodotti->setModel(mod);
    ui->lv_prodotti->setModelColumn(1);


    QModelIndex ix=mod->index(0,0);
    ui->lv_prodotti->setCurrentIndex(ix);
    ui->lv_prodotti->selectionModel()->select(ix,QItemSelectionModel::SelectCurrent);
    connect(ui->lv_prodotti->selectionModel(),
            SIGNAL(selectionChanged(QItemSelection,QItemSelection)),
            this, SLOT(get_ricetta()));
    componenti_costo_model=build_componenti_model();
    ui->tvComponentiCosto->setModel(componenti_costo_model);
    connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));

}


void HCosti::on_leFormato_returnPressed()
{

    componenti_costo_model=build_componenti_model();
    ui->tvComponentiCosto->setModel(componenti_costo_model);
    connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));


    get_ricetta();

   /* recipe_model->setHeaderData(0,Qt::Horizontal,"MATERIALE");
    recipe_model->setHeaderData(1,Qt::Horizontal,"QUANTITA\'*");
    recipe_model->setHeaderData(2,Qt::Horizontal,"COSTO UNITARIO (€*Kg)*");
    recipe_model->setHeaderData(3,Qt::Horizontal,"COSTO PER RICETTA");
    recipe_model->setHeaderData(4,Qt::Horizontal,"COSTO FORMATO");*/


    QModelIndex index=componenti_costo_model->index(0,0);
    QString value=ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),1).data(0).toString();
    qDebug()<<value;
    set_componenti_index(index,1,value);


  //  QString value2=ui->lbTotQuantita->text();
  //  set_componenti_index(index,2,value2);

    //calculate_components_cost();
}


void HCosti::on_pbClose_clicked()
{
    close();
}

void HCosti::set_componenti_index(QModelIndex index,int column,QString value)
{
    QModelIndex ix=componenti_costo_model->index(index.row(),1);
    componenti_costo_model->setData(ix,value);
    calculate_components_cost();
}


void HCosti::on_pbAggiungi_componente_costo_clicked()
{
    HProducts_for_calcolo_costi *f=new HProducts_for_calcolo_costi(-1,user,db);
    // connect(f,SIGNAL(sg_item_added(QString,QString)),this,SLOT(add_item(QString item,QString costo)));
    connect(f,SIGNAL(sg_item_added(QString,QString)),this,SLOT(add_item(QString,QString)));
    f->show();
}

void HCosti::add_item(QString item, QString costo)
{
    qDebug()<<"addItem";

    QList<QStandardItem*> row;

    row<<new QStandardItem("COMPONENTE COSTO:")<<new QStandardItem(item)<<new QStandardItem(costo);
    componenti_costo_model->appendRow(row);

    ui->tvComponentiCosto->horizontalHeader()->sectionResizeMode(QHeaderView::ResizeToContents);

    calculate_components_cost();


}

void HCosti::calculate_components_cost()
{
    double cost=0.0;

    for (int r=0;r<componenti_costo_model->rowCount();++r)
    {
        cost+=componenti_costo_model->index(r,2).data(0).toDouble();
    }

    ui->leCosto_formato->setText(QString::number(cost,'f',4));


}


void HCosti::on_pbJolly_clicked(bool checked)
{
    reset();

       /* QSqlQueryModel *local=static_cast<QSqlQueryModel*>(ui->tvRicetta->model());
        recipe_model=QueryToCosti(local);
        //componenti_costo_model=StandardCopy(componenti_costo_model);
        recipe_model->setHeaderData(0,Qt::Horizontal,"MATERIALE");
        recipe_model->setHeaderData(1,Qt::Horizontal,"QUANTITA\'*");
        recipe_model->setHeaderData(2,Qt::Horizontal,"COSTO UNITARIO (€*Kg)*");
        recipe_model->setHeaderData(3,Qt::Horizontal,"COSTO PER RICETTA");
        recipe_model->setHeaderData(4,Qt::Horizontal,"COSTO FORMATO");


        ui->tvRicetta->setModel(recipe_model);
        ui->tvRicetta->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        componenti_costo_model->setHeaderData(0,Qt::Horizontal,"ITEM");
        componenti_costo_model->setHeaderData(1,Qt::Horizontal,"VOCE");
        componenti_costo_model->setHeaderData(2,Qt::Horizontal,"COSTO");

        ui->tvComponentiCosto->setModel(componenti_costo_model);
        ui->tvComponentiCosto->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        connect(ui->tvRicetta->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_recipe()));
        connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));*/
}


void HCosti::on_pbMargin_clicked()
{
    double costo_default=ui->leCosto_formato->text().toDouble();
    double percentuale=ui->leMargine->text().toDouble()/100;
    double costo_pezzo=costo_default * percentuale+ costo_default;

    ui->leResult->setText(QString::number(costo_pezzo,'f',4));
}

HCosti_model *HCosti::QueryToCosti(QSqlQueryModel *from)
{
    HCosti_model *to=new HCosti_model();

    for (int r = 0 ; r < from->rowCount() ; ++r)
    {
        QList<QStandardItem*>row;
        for(int c=0;c<from->columnCount();++c){

            QStandardItem *item=new QStandardItem(from->index(r,c).data(0).toString());
            row<<item;
        }
        to->appendRow(row);
    }



    return to;
}

 QStandardItemModel* HCosti::StandardCopy(QStandardItemModel *from)
{
    QStandardItemModel *to=new QStandardItemModel();


    for (int r = 0 ; r < from->rowCount() ; r++)
    {
        QList<QStandardItem*>row;
        for(int c=0;c<from->columnCount();c++){

            QStandardItem *item=from->item(r,c)->clone();
            row<<item;
        }
        to->appendRow(row);
    }

    return to;
}

void HCosti::print()
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

    HPDFPrint *f=new HPDFPrint(user,strStream);
    f->show();
}

void HCosti::calculate_recipe()
{

    double tot_quantita=0.0;
    double tot_costo_ricetta=0.0;
    double tot_costo_formato=0.0;
    double formato=ui->leFormato->text().toDouble();
    double costo_kilo=0.0;

    double costo_formato=0.0;
    double c_row=0.0;
    double q_row=0.0;
    double costo_row=0.0;



    for(int row=0;row<recipe_model->rowCount();++row)
    {
        c_row=recipe_model->index(row,2).data(0).toDouble();
        q_row=recipe_model->index(row,1).data(0).toDouble();
        costo_row=c_row*q_row;

        costo_kilo=recipe_model->index(row,2).data(0).toDouble();
        costo_formato=costo_kilo*formato;
        recipe_model->setData(recipe_model->index(row,3),QString::number(costo_row,'f',4));
        recipe_model->setData(recipe_model->index(row,4),QString::number(costo_formato,'f',4));

        tot_quantita+=recipe_model->index(row,1).data(0).toDouble();
        tot_costo_ricetta+=recipe_model->index(row,3).data(0).toDouble();
        tot_costo_formato+=recipe_model->index(row,4).data(0).toDouble();

    }

    ui->lbTotQuantita->setText(QString::number(tot_quantita,'f',4));
    ui->lbCostoRicetta->setText(QString::number(tot_costo_ricetta,'f',4));
    ui->lbCostoFormato->setText(QString::number(tot_costo_formato,'f',4));

    componenti_costo_model->setData(componenti_costo_model->index(0,2),tot_costo_ricetta);

   // costo_kilo=costo_ricetta/tot_quantita;
    // costo_formato=costo_kilo*formato;
}

void HCosti::reset()
{
    componenti_costo_model=build_componenti_model();

    get_ricetta();



}

void HCosti::modify_index(QModelIndex index, QString item, QString costo)
{
    qDebug()<<"modify";

    QModelIndex ix_prod=componenti_costo_model->index(index.row(),1);
    QModelIndex ix_cost=componenti_costo_model->index(index.row(),2);

    componenti_costo_model->setData(ix_prod,item);
    componenti_costo_model->setData(ix_cost,costo);
    emit item_modified();

}





void HCosti::on_pbPrint_clicked()
{
    print();
}


void HCosti::on_pbRimuovi_componente_costo_clicked()
{
    QModelIndex ix=ui->tvComponentiCosto->currentIndex();
    int row=ix.row();
    if(ui->pbJolly->isChecked())
    {
        componenti_costo_model->removeRow(row);
        calculate_components_cost();
    }


}


void HCosti::on_tvComponentiCosto_doubleClicked(const QModelIndex &index)
{
    connect(this,SIGNAL(item_modified()),this,SLOT(calculate_components_cost()));

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
    case 4:
        tipology=3;
        break;
    case 5:
        tipology=3;
        break;
    case 6:
        tipology=3;
        break;
    }


    /*qDebug()<<index.row();*/
    if(index.row()<=6)
    {
        qDebug()<<"ITEM_SET";




        HCalcolo_costi_item_set *f=new HCalcolo_costi_item_set(index,tipology,db);
            connect(f,SIGNAL(item_modified(QModelIndex,QString,QString)),this,SLOT(modify_index(QModelIndex,QString,QString)));
        f->show();



    }

}


void HCosti::on_pbJolly_clicked()
{
    reset();
}

