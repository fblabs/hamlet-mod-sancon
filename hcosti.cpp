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
#include "hcomponenti_model.h"
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include <QShortcut>


HCosti::HCosti(QSqlDatabase p_db,HUser *p_user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HCosti)
{
    ui->setupUi(this);
    ui->tvComponentiCosto->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    db=p_db;
    get_clienti();
    modify=false;
    ui->cbModify->setText("DATI ORIGINALI (F4)");


    componenti_costo_model=build_componenti_model();

    QShortcut *ok= new QShortcut(this);
    ok->setKey(Qt::Key_F4);

    connect(ok,SIGNAL(activated()),this,SLOT(toggle_modify()));



    recipe_model=new HCosti_model();
    recipe_org_model=new QSqlQueryModel();


    connect(ui->cbModify,SIGNAL(toggled(bool)),this,SLOT(change_modify_state(bool)));

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
    ui->cbClienti->completer()->setCompletionColumn(1);
    ui->cbClienti->completer()->setCompletionMode(QCompleter::PopupCompletion);

    connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));
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

    row<<new QStandardItem("PRODOTTO")<<new QStandardItem("")<<new QStandardItem("1")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("OLIO DI COLMATURA")<<new QStandardItem("")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
     row.clear();

    row<<new QStandardItem("VASO:")<<new QStandardItem("")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("CAPSULA:")<<new QStandardItem("")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("ETICHETTA:")<<new QStandardItem("")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("VASSOIO:")<<new QStandardItem("")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SCATOLA:")<<new QStandardItem("")<<new QStandardItem("")<<new QStandardItem("");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SPESE FISSE:")<<new QStandardItem("COSTO ELETTRICITA'")<<new QStandardItem("--")<<new QStandardItem("0.0000");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SPESE FISSE:")<<new QStandardItem("COSTO PERSONALE:")<<new QStandardItem("--")<<new QStandardItem("0.0000");
    mod->appendRow(row);
    row.clear();

    row<<new QStandardItem("SPESE FISSE::")<<new QStandardItem("SPESE GENERALI")<<new QStandardItem("--")<<new QStandardItem("0.0000");
    mod->appendRow(row);
    row.clear();


    mod->setHeaderData(0,Qt::Horizontal,"VOCE");
    mod->setHeaderData(1,Qt::Horizontal,"ITEM");
    mod->setHeaderData(2,Qt::Horizontal,"QUANTITA'");
    mod->setHeaderData(3,Qt::Horizontal,"COSTO");

    return mod;
}

void HCosti::get_ricetta()
{

    int row=ui->lv_prodotti->currentIndex().row();
    int idp=ui->lv_prodotti->model()->index(row,0).data(0).toInt();
    qDebug()<<idp<<"GET_RICETTA";
    double formato=ui->leFormato->text().toDouble();
    double tot_costo_formato=0.0;
    double quantita_riga=0.0;
    double costo_riga=0.0;;
    double tot_costo_ricetta=0.0;
    double tot_quantita=0.0;

    QSqlQuery q(db);
    QString sql=QString();

    double tot_peso_ricetta=get_peso_totale_ricetta();

    recipe_org_model=new QSqlQueryModel();
    recipe_model=new HCosti_model();
    recipe_model=QueryToCosti(recipe_org_model);


    sql="SELECT prodotti.descrizione as 'MATERIALE',righe_ricette.quantita as 'QUANTITA',@p:=(righe_ricette.quantita/:tot_q)*100 as '%', prodotti.prezzo as 'COSTO UNITARIO (€*Kg)',FORMAT(righe_ricette.quantita*prodotti.prezzo,4) as 'COSTO PER RICETTA',FORMAT ((prodotti.prezzo*:f)*(@p/100),4) as 'COSTO FORMATO' FROM righe_ricette,prodotti,ricette WHERE righe_ricette.ID_ricetta=ricette.ID and prodotti.ID=righe_ricette.ID_prodotto and ricette.ID=(SELECT ID from ricette where ricette.ID_prodotto=:idp) group by prodotti.ID,ricette.ID,righe_ricette.Id";


    q.prepare(sql);
    q.bindValue(":f",formato);
    q.bindValue(":tot_q",tot_peso_ricetta);
    q.bindValue(":idp",idp);
    q.exec();
    qDebug()<<q.lastError().text();
    recipe_org_model->setQuery(q);
    recipe_model=QueryToCosti(recipe_org_model);


    double percent_riga=0.0;


    tot_quantita=get_peso_totale_ricetta();

    if(modify)
    {

         connect(ui->tvRicetta->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_recipe()));
         ui->tvRicetta->setModel(recipe_model);
         recipe_model->setHeaderData(0,Qt::Horizontal,"MATERIALE");
         recipe_model->setHeaderData(1,Qt::Horizontal,"QUANTITA\'*");
         recipe_model->setHeaderData(2,Qt::Horizontal,"PERCENTUALE");
         recipe_model->setHeaderData(3,Qt::Horizontal,"COSTO UNITARIO (€*Kg)*");
         recipe_model->setHeaderData(4,Qt::Horizontal,"COSTO PER RICETTA");
         recipe_model->setHeaderData(5,Qt::Horizontal,"COSTO FORMATO");

         for (int r=0;r<recipe_model->rowCount();r++)
        {

             quantita_riga=recipe_model->index(r,1).data(0).toDouble();
             percent_riga=recipe_org_model->index(r,2).data(0).toDouble()/100;
             costo_riga=recipe_model->index(r,3).data(0).toDouble()*quantita_riga;
             tot_costo_ricetta+=costo_riga;
             tot_costo_formato+=costo_riga*percent_riga;

        }
    }else {

        disconnect(ui->tvRicetta->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_recipe()));
        ui->tvRicetta->setModel(recipe_org_model);
        ui->tvRicetta->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        recipe_org_model->setHeaderData(0,Qt::Horizontal,"MATERIALE");
        recipe_org_model->setHeaderData(1,Qt::Horizontal,"QUANTITA\'*");
        recipe_org_model->setHeaderData(2,Qt::Horizontal,"PERCENTUALE");
        recipe_org_model->setHeaderData(3,Qt::Horizontal,"COSTO UNITARIO (€*Kg)*");
        recipe_org_model->setHeaderData(4,Qt::Horizontal,"COSTO PER RICETTA");
        recipe_org_model->setHeaderData(5,Qt::Horizontal,"COSTO FORMATO");

         for (int r=0;r<recipe_org_model->rowCount();r++)
         {

              quantita_riga=recipe_org_model->index(r,1).data(0).toDouble();
              percent_riga=recipe_org_model->index(r,2).data(0).toDouble()/100;
              costo_riga=tot_costo_ricetta* percent_riga;
              tot_costo_ricetta+=costo_riga;
              tot_costo_formato+=costo_riga*percent_riga;
            }

    }


    ui->lbCostoFormato->setText(QString::number(tot_costo_formato,'f',4));
    ui->lbTotQuantita->setText(QString::number(tot_quantita,'f',4));
    ui->lbCostoRicetta->setText(QString::number(tot_costo_ricetta,'f',4));


    ui->tvComponentiCosto->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    ui->tvRicetta->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    ui->tvRicetta->setColumnHidden(2,true);

    connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));
    ui->tvComponentiCosto->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->leFormato->setFocus();

    QModelIndex index=componenti_costo_model->index(0,0);
    QString value=ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),1).data(0).toString();
    set_componenti_index(index,1,value);


    QString value2=QString::number(tot_costo_formato,'f',4);
    set_componenti_index(index,3,value2);
    ui->tvComponentiCosto->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    calculate_recipe();
    ui->leFormato->setFocus();



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
   // componenti_costo_model=build_componenti_model();
   // ui->tvComponentiCosto->setModel(componenti_costo_model);


}


void HCosti::on_leFormato_returnPressed()
{


    connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));


    get_ricetta();


     ui->tvComponentiCosto->setModel(componenti_costo_model);
     ui->tvRicetta->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);

    QModelIndex index=componenti_costo_model->index(0,0);

    QString value=ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),1).data(0).toString();
    set_componenti_index(index,1,value);


    QString value2=ui->leFormato->text();
    set_componenti_index(index,2,value2);

    QString value3=ui->lbCostoFormato->text();
    set_componenti_index(index,3,value3);

    calculate_recipe();

}


void HCosti::on_pbClose_clicked()
{
    close();
}

void HCosti::set_componenti_index(QModelIndex index,int column,QString value)
{
    QModelIndex ix;
      ix=componenti_costo_model->index(index.row(),column);
        componenti_costo_model->setData(ix,value);

    calculate_components_cost();
    ui->tvComponentiCosto->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


void HCosti::on_pbAggiungi_componente_costo_clicked()
{
    HProducts_for_calcolo_costi *f=new HProducts_for_calcolo_costi(-1,user,db);

    connect(f,SIGNAL(sg_item_added(QString,QString,QString)),this,SLOT(add_item(QString,QString,QString)));
    f->show();
}

void HCosti::add_item(QString item, QString quantita,QString costo)
{


    QList<QStandardItem*> row;

    row<<new QStandardItem("COMPONENTE COSTO:")<<new QStandardItem(item)<<new QStandardItem(quantita)<<new QStandardItem(costo);
    componenti_costo_model->appendRow(row);

    ui->tvComponentiCosto->horizontalHeader()->sectionResizeMode(QHeaderView::ResizeToContents);

    calculate_components_cost();


}

void HCosti::calculate_components_cost()
{
    double cost=0.0;


        for (int r=0;r<componenti_costo_model->rowCount();++r)
        {
            cost+=componenti_costo_model->index(r,3).data(0).toDouble();
        }


    ui->leCosto_formato->setText(QString::number(cost,'f',4));


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

              if(c==2)
            {

                QStandardItem *item=new QStandardItem(QString::number(from->index(r,c).data(0).toDouble()));
                row<<item;

              }else{

                QStandardItem *item=new QStandardItem(from->index(r,c).data(0).toString());
                row<<item;
              }

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


    QString spec=QString();

    modify? spec="(DATI MODIFICATI)":spec="(DATI ORIGINALI)";


    QString title="COSTO: " +ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),1).data(0).toString()+" - FORMATO: "+QString::number(ui->leFormato->text().toDouble(),'f',3)+" " +spec;

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

    double peso_totale=get_peso_totale_ricetta();
    double tot_quantita=0.0;
    double tot_costo_ricetta=0.0;
    double tot_costo_formato=0.0;
    double formato=ui->leFormato->text().toDouble();
    double costo_formato=0.0;
    double c_row=0.0;
    double q_row=0.0;
  //  double costo_row=0.0;
    double costo_formato_row;
 //   double costo_kilo=0.0;
    double percentile=0.0;

    //----------formato/tot_quantita

    int idp=ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),0).data(0).toInt();



    tot_quantita=get_peso_totale_ricetta();
    qDebug()<<tot_quantita;




   if(modify){



        for(int row=0;row<recipe_model->rowCount();++row)
        {
                c_row=recipe_model->index(row,3).data(0).toDouble();
                q_row=recipe_model->index(row,1).data(0).toDouble();
                percentile=recipe_model->index(row,2).data(0).toDouble()/100;
                costo_formato_row=c_row*percentile;
                tot_costo_formato+=costo_formato_row;
                tot_costo_ricetta+=c_row;
                recipe_model->setData(recipe_model->index(row,4),QString::number(c_row*q_row,'f',4));
                //recipe_model->setData(recipe_model->index(row,4),QString::number(c_row,'f',4));
                recipe_model->setData(recipe_model->index(row,5),QString::number(costo_formato_row,'f',4));

         }
   }else{

       for(int row=0;row<recipe_org_model->rowCount();++row)
        {
                c_row=recipe_org_model->index(row,3).data(0).toDouble();
                q_row=recipe_org_model->index(row,1).data(0).toDouble();
                percentile=recipe_org_model->index(row,2).data(0).toDouble()/100;
                costo_formato_row=c_row*percentile;
                tot_costo_formato+=costo_formato_row;
                tot_costo_ricetta+=c_row;
              /*  recipe_org_model->setData(recipe_org_model->index(row,4),QString::number(c_row,'f',4));
                recipe_org_model->setData(recipe_org_model->index(row,5),QString::number(costo_formato_row,'f',4));*/

        }


   }



   ui->lbTotQuantita->setText(QString::number(tot_quantita,'f',4));
   ui->lbCostoRicetta->setText(QString::number(tot_costo_ricetta,'f',4));
   ui->lbCostoFormato->setText(QString::number(tot_costo_formato,'f',4));

   set_componenti_index(componenti_costo_model->index(0,2),2,ui->leFormato->text());
   set_componenti_index(componenti_costo_model->index(0,3),3,QString::number(tot_costo_formato,'f',4));





   calculate_components_cost();



}

void HCosti::reset()
{
    ui->cbModify->setChecked(false);

    get_ricetta();
    componenti_costo_model=build_componenti_model();
    QString prod=ui->lv_prodotti->model()->index(ui->lv_prodotti->currentIndex().row(),1).data(0).toString();

    componenti_costo_model->setData(componenti_costo_model->index(0,1),prod);
    componenti_costo_model->setData(componenti_costo_model->index(0,2),ui->lbCostoFormato->text());
    connect(ui->tvComponentiCosto->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_components_cost()));
    calculate_components_cost();
    ui->tvComponentiCosto->setModel(componenti_costo_model);
    ui->tvComponentiCosto->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);



}

void HCosti::modify_index(QModelIndex index, QString item,QString amount, QString costo)
{
    QModelIndex ix_prod;
    QModelIndex ix_quant;
    QModelIndex ix_cost;


    ix_prod=componenti_costo_model->index(index.row(),1);
    ix_quant=componenti_costo_model->index(index.row(),2);
    ix_cost=componenti_costo_model->index(index.row(),3);
    componenti_costo_model->setData(ix_prod,item);
    componenti_costo_model->setData(ix_quant,amount);
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

    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Rimuovere il componente costo selezionato?",QMessageBox::Ok|QMessageBox::Cancel))
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




        QString prod=ui->tvComponentiCosto->model()->index(ui->tvComponentiCosto->currentIndex().row(),1).data(0).toString();
        HCalcolo_costi_item_set *f=new HCalcolo_costi_item_set(prod,index,tipology,db);
        connect(f,SIGNAL(item_modified(QModelIndex,QString,QString,QString)),this,SLOT(modify_index(QModelIndex,QString,QString,QString)));
        f->show();



    }

}


void HCosti::on_pbJolly_clicked()
{
    if(QMessageBox::Ok==QMessageBox::question(this, QApplication::applicationName(),"Resettare i dati?",QMessageBox::Ok | QMessageBox::Cancel))
    {
        reset();
    }


}


void HCosti::on_leMargine_returnPressed()
{
    on_pbMargin_clicked();
}



void HCosti::on_cbModify_toggled(bool checked)
{

    emit modify_toggled(checked);
}

void HCosti::change_modify_state(bool set_modifiable)
{
    modify=set_modifiable;
  /*  QModelIndex ix_prod;
    QModelIndex ix_cost;
    QModelIndex current=ui->tvComponentiCosto->currentIndex();*/



    if (modify)
    {
        ui->tvRicetta->setModel(recipe_model);
        connect(ui->tvRicetta->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_recipe()));

        recipe_model->setHeaderData(0,Qt::Horizontal,"MATERIALE");
        recipe_model->setHeaderData(1,Qt::Horizontal,"QUANTITA\'*");
        recipe_model->setHeaderData(2,Qt::Horizontal,"PERCENTUALE");
        recipe_model->setHeaderData(3,Qt::Horizontal,"COSTO UNITARIO (€*Kg)*");
        recipe_model->setHeaderData(4,Qt::Horizontal,"COSTO PER RICETTA");
        recipe_model->setHeaderData(5,Qt::Horizontal,"COSTO FORMATO");
        ui->tvRicetta->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tvComponentiCosto->setModel(componenti_costo_model);
        ui->cbModify->setText("DATI MODIFICATI (F4)");

    }else{
        disconnect(ui->tvRicetta->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(calculate_recipe()));
        ui->tvRicetta->setModel(recipe_org_model);
        ui->tvRicetta->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
        recipe_org_model->setHeaderData(0,Qt::Horizontal,"MATERIALE");
        recipe_org_model->setHeaderData(1,Qt::Horizontal,"QUANTITA\'");
        recipe_org_model->setHeaderData(2,Qt::Horizontal,"PERCENTUALE");
        recipe_org_model->setHeaderData(3,Qt::Horizontal,"COSTO UNITARIO (€*Kg)");
        recipe_org_model->setHeaderData(4,Qt::Horizontal,"COSTO PER RICETTA");
        recipe_org_model->setHeaderData(5,Qt::Horizontal,"COSTO FORMATO");

        ui->tvRicetta->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tvComponentiCosto->setModel(componenti_costo_model);


        ui->cbModify->setText("DATI ORIGINALI (F4)");
    }

  /*  calculate_recipe();
    calculate_components_cost();*/

      /*/  ix_prod=componenti_costo_model->index(current.row(),1);
        ix_cost=componenti_costo_model->index(current.row(),2);*/





}

double HCosti::get_peso_totale_ricetta()
{
    int row=ui->lv_prodotti->currentIndex().row();
    int idp=ui->lv_prodotti->model()->index(row,0).data(0).toInt();
    double result=0.0;


    QString sql ="SELECT get_total_peso_ricetta(:idp)";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":idp",idp);
    q.exec();
    q.first();
    result=q.value(0).toDouble();

    return result;

}

void HCosti::toggle_modify()
{
    ui->cbModify->toggle();
}



