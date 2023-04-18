#include "hcalcolo_costi_jolly.h"
#include "ui_hcalcolo_costi_jolly.h"
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QHeaderView>
#include <QDebug>

#include "hcosti_model.h"
#include "hpdfprint.h"

HCalcolo_costi_jolly::HCalcolo_costi_jolly(QStandardItemModel *p_recipe_model, QStandardItemModel *p_componenti_model, double p_formato, HUser *p_user, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HCalcolo_costi_jolly)
{
    ui->setupUi(this);

    recipe_mod=p_recipe_model;
    componenti_mod=p_componenti_model;
    HCosti_model* converted_mod=convert_recipe_model();
    connect(converted_mod,SIGNAL(dataChanged(QModelIndex,QModelIndex,QList)),this,SLOT(recalculate()));
    connect(componenti_mod,SIGNAL(dataChanged(QModelIndex,QModelIndex,QList)),this,SLOT(recalculate_components()));

    HUser *user=p_user;
    formato=p_formato;



    ui->tv_Recipe->setModel(converted_mod);
    ui->tvComponenti->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tv_Recipe->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    for(int i=0;i<converted_mod->rowCount();++i)
    {
        QModelIndex item=converted_mod->index(i,3);
        double val=item.data(Qt::DisplayRole).toDouble();
        converted_mod->setData(item,QString::number(val,'f',4));

    }


    connect(ui->tv_Recipe->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(recalculate()));
   // connect(ui->tvComponenti->itemDelegate(),SIGNAL(closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)),this,SLOT(on_pbUpdate_clicked()));
    ui->tv_Recipe->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tv_Recipe->horizontalHeader()->setStretchLastSection(true);


    ui->tvComponenti->setModel(componenti_mod);
    ui->tvComponenti->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvComponenti->horizontalHeader()->setStretchLastSection(true);

    double tot_form=0.0;

    tot_form= get_total_formato();
    ui->lb_costo_formato->setText(QString::number(tot_form,'f',4));

    double tot_amount=0.0;
    double tot_recipe=0.0;
    QStandardItemModel *loc_mod=static_cast<QStandardItemModel*>(ui->tv_Recipe->model());
    for(int x=0;x<loc_mod->rowCount();x++)
    {
       // tot_formato+=loc_mod->index(x,4).data(0).toDouble();
        tot_amount+=loc_mod->index(x,1).data(0).toDouble();
        tot_recipe+=loc_mod->index(x,3).data(0).toDouble();

    }

    double tot=get_components_cost();

     ui->lb_totale_quantita->setText(QString::number(tot_amount,'f',4));
     ui->lbCosto_Ricetta->setText(QString::number(tot_recipe,'f',4));
     ui->lb_costo_result->setText(QString::number(tot,'f',4));






}

HCalcolo_costi_jolly::~HCalcolo_costi_jolly()
{
    delete ui;
}

void HCalcolo_costi_jolly::setOverviewData(QString p_overview)
{
    ui->lb_overview->setText(p_overview);
}

void HCalcolo_costi_jolly::recalculate()
{
    HCosti_model* loc_mod=static_cast<HCosti_model*>(ui->tv_Recipe->model());
    QModelIndex row=ui->tv_Recipe->currentIndex();
    QModelIndex ix_q=loc_mod->index(row.row(),1);
    QModelIndex ix_c=loc_mod->index(row.row(),2);
    QModelIndex ix_new_cost=loc_mod->index(row.row(),3);
    QModelIndex ix_costo_formato=loc_mod->index(row.row(),4);


    double upd_cost=ix_c.data(0).toDouble();
    double upd_quant=ix_q.data(0).toDouble();
    double upd_costo_formato=ix_c.data(0).toDouble()*formato;
    double res_ric=upd_cost*upd_quant;
    qDebug()<<upd_costo_formato<<upd_quant<<formato<<ix_c.data(0).toDouble()<<upd_quant*formato;

    loc_mod->setData(ix_new_cost,QString::number(res_ric,'f',4));
    loc_mod->setData(ix_costo_formato,QString::number(upd_costo_formato,'f',4));


    double tot_costo_ricetta=0.0;
    double tot_quantita_ricetta=0.0;
    double tot_costo_formato=0.0;


   //costo=QString::number((costo_totale_formato/tot_quantita)*formato,'f',4);

    for(int ix=0;ix<loc_mod->rowCount();++ix)
    {
        tot_quantita_ricetta+=loc_mod->index(ix,1).data(0).toDouble();
        tot_costo_ricetta+=loc_mod->index(ix,2).data(0).toDouble();
        tot_costo_formato+=loc_mod->index(ix,4).data(0).toDouble();
    }
    qDebug()<<tot_costo_ricetta;




    ui->lbCosto_Ricetta->setText(QString::number(tot_costo_ricetta,'f',4));
    ui->lb_totale_quantita->setText(QString::number(tot_quantita_ricetta,'f',4));
    ui->lb_costo_formato->setText(QString::number(tot_costo_formato,'f',4));


    QStandardItemModel* loc_comps=static_cast<QStandardItemModel*>(ui->tvComponenti->model());
    QModelIndex ixc=ui->tvComponenti->model()->index(0,2);
    loc_comps->setData(ixc,QString::number(tot_costo_formato,'f',4));

    recalculate_components();

}

void HCalcolo_costi_jolly::recalculate_components()
{
    QStandardItemModel *loc_mod=static_cast<QStandardItemModel*>(ui->tvComponenti->model());
    QModelIndex ix=ui->tvComponenti->currentIndex();

    ui->lb_costo_result->setText(ui->lb_totale_quantita->text());

   // double tot_costo_formato=0.0;

   /* for(int ix=0;ix<loc_mod->rowCount();++ix)
    {
         tot_costo_formato+=loc_mod->index(ix,2).data(0).toDouble();
    }*/


    double tot_costo_formato=get_components_cost();

    ui->lb_costo_result->setText(QString::number(tot_costo_formato,'f',4));
    loc_mod->setData(loc_mod->index(0,2),tot_costo_formato);


}

double HCalcolo_costi_jolly::get_components_cost()
{
   double total=0.0;

   for (int row=0 ;row <componenti_mod->rowCount();++row)
   {
        total+=componenti_mod->index(row,2).data(0).toDouble();

   }

   return total;
}

double HCalcolo_costi_jolly::get_factor()
{
    /*double tot_ricetta=0.0;*/
    double factor=0.0;

/*
    QStandardItemModel* model=static_cast<QStandardItemModel*>(ui->tv_Recipe->model());

    for (int x=0;x<model->rowCount();x++)
    {
        tot_ricetta += model->index(x,1).data(0).toDouble();
    }




    factor = tot_formato / tot_ricetta;*/

    return factor;
}

double HCalcolo_costi_jolly::get_total_formato()
{
    double tot_formato=0.0;
    QStandardItemModel *loc_mod=static_cast<HCosti_model*>(ui->tv_Recipe->model());
    for(int x=0;x<loc_mod->rowCount();x++)
    {
         tot_formato+=loc_mod->index(x,4).data(0).toDouble();


    }

    qDebug()<<tot_formato;
    return tot_formato;
}

HCosti_model* HCalcolo_costi_jolly::convert_recipe_model()
{
   HCosti_model *mod=new HCosti_model();
   int rows=recipe_mod->rowCount();
   int cols=recipe_mod->columnCount();


   for(int r=0;r<rows;++r)
   {
       QList<QStandardItem*> it;
        for (int c=0;c<cols;++c)
        {
           it<< new QStandardItem(recipe_mod->index(r,c).data(0).toString());

        }
        mod->appendRow(it);

    }

    mod->setHeaderData(0,Qt::Horizontal,"MATERIALE",0);
    mod->setHeaderData(1,Qt::Horizontal,"QUANTITA\' [*]",0);
    mod->setHeaderData(2,Qt::Horizontal,"COSTO UNITARIO (€)[*]",0);
    mod->setHeaderData(3,Qt::Horizontal,"COSTO PER RICETTA",0);
    mod->setHeaderData(4,Qt::Horizontal,"COSTO FORMATO",0);

    return mod;
}

void HCalcolo_costi_jolly::on_pbClose_clicked()
{
       close();
}

void HCalcolo_costi_jolly::print()
{
    QString strStream;


    QTextStream out(&strStream);


    //   qDebug()<<filename;
    out << "<html>";
    out <<  "<head>\n<meta Content=\"Text/html; charset=Windows-1251\"></head>\n<body bgcolor=#ffffff link=#5000A0><table width=100% border=1 cellspacing=0 cellpadding=2>";
    //-------------------------
    const int c_rowCount = ui->tvComponenti->model()->rowCount();
    const int c_columnCount = ui->tvComponenti->model()->columnCount();

    QString title="COSTO: " +ui->lb_overview->text().toUpper();

    out <<"<table width=100% border=1 cellspacing=0 cellpadding=2>";
    out << "<thead><tr bgcolor='lightyellow'><th colspan='3'>"+ title +"</th></tr>";

    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < c_columnCount; column++)
        if (!ui->tvComponenti->isColumnHidden(column))
           out << QString("<th>%1</th>").arg(ui->tvComponenti->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>";

    QString data=QString();

    // data table
    for (int row = 0; row < c_rowCount; row++) {
        out << "<tr>";

        for (int column = 0; column < c_columnCount; ++column) {

           if (!ui->tvComponenti->isColumnHidden(column)) {
               QString data = ui->tvComponenti->model()->data(ui->tvComponenti->model()->index(row, column)).toString().simplified();
               out << QString("<td bkcolor=0>%1").arg((!data.isEmpty()) ? data.append("</td>") : QString("</td>"));
           }


        }

        out <<"</tr>";

    }



    out << QString("<tr><td>").append("COSTO FORMATO:</td><td></td><td>"+ui->lb_costo_formato->text()+"</td></tr>");
    out << QString("<tr><td>").append("TOTALE QUANTITA':</td><td></td><td>"+ui->lb_totale_quantita->text()+"</td></tr>");
    out << QString("<tr><td>").append("COSTO RICETTA:</td><td></td><td>"+ui->lbCosto_Ricetta->text()+"</td></tr>");
    out<<"</table>";
    out<<"</table>";


    //-------------------------

    const int r_rowCount = ui->tv_Recipe->model()->rowCount();
    const int r_columnCount = ui->tv_Recipe->model()->columnCount();

    out<<"<br><br>";
    out <<"<table width=100% border=1 cellspacing=0 cellpadding=2>";
    out << "<thead></style><tr bgcolor='lightyellow'><th colspan='5'>RICETTA</th></tr>";

    out << "<tr bgcolor=#f0f0f0>";
    for (int col = 0; col < r_columnCount; col++)
        if (!ui->tv_Recipe->isColumnHidden(col))
           out << QString("<th>%1</th>").arg(ui->tv_Recipe->model()->headerData(col, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < r_rowCount; row++) {

        out << "<tr bgcolor=#ffffff>";
        for (int column = 0; column < r_columnCount; column++) {
           if (!ui->tv_Recipe->isColumnHidden(column)) {
               QString data = ui->tv_Recipe->model()->data(ui->tv_Recipe->model()->index(row, column)).toString().simplified();
               if(column==2 || column==3)
               {
                   double res=0.0;
                   res=ui->tv_Recipe->model()->data(ui->tv_Recipe->model()->index(row, column),0).toDouble();
                   data=QString::number(res,'f',4);
                   out << QString("<td bkcolor=0>%1").arg((!data.isEmpty()) ? data.append("</td>") : QString("</td>"));
               } else if(column==4)
               {
                   double res=0.0;
                   res=ui->tv_Recipe->model()->data(ui->tv_Recipe->model()->index(row, 4),0).toDouble();
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

void HCalcolo_costi_jolly::on_pbReset_clicked()
{
  HCosti_model *rec_mod= convert_recipe_model();

  ui->tv_Recipe->setModel(rec_mod);
  ui->tvComponenti->setModel(componenti_mod);
  /*double tot= get_total_formato();
  ui->lb_costo_formato->setText(QString::number(tot,'f',4));
   QString s_tot=QString::number(tot,'f',4);
   QStandardItemModel *componenti_model=static_cast<QStandardItemModel*>(ui->tvComponenti->model());
   QModelIndex ix=componenti_model->index(0,2);
   componenti_model->setData(ix,s_tot);
   for (int i=0;i<rec_mod->rowCount();++i)
   {
       QModelIndex ix=rec_mod->index(i,3);
       rec_mod->setData(ix,QString::number(ix.data(0).toDouble(),'f',4));
   }*/
    recalculate();
    recalculate_components();
}


void HCalcolo_costi_jolly::on_pbPrint_clicked()
{
   print();
}



void HCalcolo_costi_jolly::on_pbUpdate_clicked()
{
   recalculate();
   recalculate_components();
}

