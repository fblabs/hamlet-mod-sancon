#include "hprodottinew.h"
#include "ui_hprodottinew.h"
#include "hproductsmodel.h"
#include <QSqlDatabase>
#include <QCompleter>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QCompleter>
#include "hnewproduct.h"
#include <QDebug>
#include <QSqlError>
#include "hmodproduct.h"
#include <QMessageBox>
#include "hprint.h"
#include "hloads.h"
#include <QFileDialog>

HProdottiNew::HProdottiNew(  HUser *puser,QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HProdottiNew)
{
    ui->setupUi(this);

    db=pdb;
    user=puser;

    if(!user->getCanUpdate() && !user->getCanUpdateAnag())
    {
        ui->pushButton->setEnabled(false);
        ui->pbMod->setEnabled(false);
        disconnect(ui->tvProdotti,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(on_tvProdotti_doubleClicked(QModelIndex)));
        ui->tvProdotti->setEditTriggers(QTableView::NoEditTriggers);

    }







    tmProdotti=new HProductsModel(0,db);
    tmTipi=new QSqlRelationalTableModel(0,db);

    tmTipi->setTable("tipi_prodotto");
    tmTipi->select();


    tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);
    tmProdotti->setEditStrategy(QSqlRelationalTableModel::OnFieldChange);


    tmProdotti->setRelation(2,QSqlRelation("tipi_prodotto","ID","descrizione"));
    ui->tvProdotti->setItemDelegate(new QSqlRelationalDelegate(tmProdotti));
    tmProdotti->select();

    ui->tvProdotti->setModel(tmProdotti);

    ui->tvProdotti->setColumnHidden(0,false);
    ui->tvProdotti->horizontalHeader()->stretchLastSection();
  //  ui->tvProdotti->horizontalHeader()->res
    ui->tvProdotti->resizeColumnsToContents();

    QCompleter *comp=new QCompleter;
    comp->setCompletionColumn(1);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setModel(tmProdotti);
    ui->lineEdit->setCompleter(comp);

   // // qDebug()<<tmProdotti->query().lastError();

    connect(tmProdotti,SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)),this,SLOT(save()));

  //  ui->tvProdotti->horizontalHeader()->setSe
    tmProdotti->setHeaderData(0,Qt::Horizontal,"ID");
    tmProdotti->setHeaderData(1,Qt::Horizontal,"Descrizione");
    tmProdotti->setHeaderData(2,Qt::Horizontal,"Tipo");
    tmProdotti->setHeaderData(3,Qt::Horizontal,"Allergene");
    tmProdotti->setHeaderData(4,Qt::Horizontal,"Attivo");
    tmProdotti->setHeaderData(5,Qt::Horizontal,"Bio");
    tmProdotti->setHeaderData(6,Qt::Horizontal,"Prezzo");
    tmProdotti->setHeaderData(7,Qt::Horizontal,"Ultimo aggiornamento prezzo");
}

HProdottiNew::~HProdottiNew()
{
    delete ui;
}

void HProdottiNew::reloadProduct()
{

    tmProdotti->select();
}

void HProdottiNew::on_rbAll_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("");
    }
}

void HProdottiNew::on_rbMaterie_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=1");
    }

    //// qDebug()<<"tipo"+tmProdotti->filter();

}

void HProdottiNew::on_rbProdotti_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=2");
    }
}


void HProdottiNew::on_rbContenitori_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=3");
    }
}





void HProdottiNew::on_rbTappi_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=4");
    }
}

void HProdottiNew::on_rbVasi_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("tipo=5");
    }
}



void HProdottiNew::on_rbBio_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("bio>0");
    }

}

void HProdottiNew::save()
{
    if(user->getCanUpdate())
    {
    tmProdotti->submitAll();

    }

    tmProdotti->select();
}

void HProdottiNew::print(bool pdf)
{
    if (pdf)
    {

        QString strStream;
        QString filename=QFileDialog::getSaveFileName(0,"Scegli nome del file",QString(),"Pdf (*.pdf)");
        if(filename.isEmpty() || filename.isNull())
        {
            qDebug()<<filename<<"cancellato";
            return;
        }

        QApplication::setOverrideCursor(Qt::WaitCursor);
        QTextStream out(&strStream);
        QString bgcol=QString();
        QString title=QString();
       // int linea=ui->spLinea->value();

        const int rowCount = ui->tvProdotti->model()->rowCount();
        const int columnCount = ui->tvProdotti->model()->columnCount();
        title ="STAMPA ANAGRAFICA PRODOTTI";

        out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table width=100% border=1 cellspacing=0 cellpadding=2>\n";

        // headers
        QStringList coltit=QStringList();
        coltit <<"ID"<<"DESCRIZIONE"<<"TIPO"<< "ALLERGENE"<<"ATTIVO"<<"BIO"<<"PREZZO"<<"DATA ULTIMO AGGIORNAMENTO PREZZO";


       out << "<thead><tr bgcolor='#5cabff'><th colspan='8'>"+ title +"</th></tr><tr bgcolor='lightgrey'>";


        for (int column = 0 ; column < columnCount; column++)
        {


                if (!ui->tvProdotti->isColumnHidden(column))
                {

                out << QString("<th>%1</th>").arg(coltit.at(column));
                }

        }

         out << "</tr></th></thead>\n";

        // data table
        for (int row = 0; row < rowCount; row++) {
             qDebug()<<row;
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
                if (!ui->tvProdotti->isColumnHidden(column)) {
                    QString data = ui->tvProdotti->model()->index(row, column).data().toString().simplified();

                    if (column>=3 && column<=5)
                    {

                          out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg((ui->tvProdotti->model()->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;"));

                    }
                    else
                    {
                        out << QString("<td bgcolor='"+bgcol+"'>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                    }
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
        printer.setOrientation(QPrinter::Landscape);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(filename);

        document->print(&printer);

        delete document;
    }
    else
    {

    HPrint *f =new HPrint();
    QTextDocument* doc=new QTextDocument();



    int rows=ui->tvProdotti->model()->rowCount();
    int cols=ui->tvProdotti->model()->columnCount();

    QApplication::setOverrideCursor(Qt::WaitCursor);

    f->append("STAMPA ANAGRAFICA PRODOTTI",true);
    f->toggleImageUI(false);

    QTextTable *tb=f->addTable(rows,cols,QTextTableFormat());
    QString txt;

   int r,c;

   f->showMaximized();



    for (r=0;r<rows;r++)
    {


        for (c=0; c<cols; c++)
        {
            txt=ui->tvProdotti->model()->index(r,c).data(0).toString();
            f->writeTableContent(tb,r,c,QTextCharFormat(),txt);
            QApplication::processEvents();

        }
    //  QApplication::processEvents();

    }



    }

     QApplication::setOverrideCursor(Qt::ArrowCursor);

}


void HProdottiNew::on_pushButton_2_clicked()
{
    close();
}

void HProdottiNew::on_pushButton_clicked()
{
    HNewProduct *f=new HNewProduct(user,db);
    connect(f,SIGNAL(done()),this,SLOT(reloadProduct()));

    f->show();
}

void HProdottiNew::on_checkBox_toggled(bool checked)
{

    QString attivo;
    attivo="attivo > 0";

    QString filter=tmProdotti->filter();


    if(checked)
    {

      filter.length() >0 ?  filter.append(" and "+attivo): filter.append(attivo);


    }
    else
    {
        if(filter.contains(" and "+attivo))
       {
            filter.remove(" and "+attivo);

       }

        if(filter.contains(attivo))
       {
            filter.remove(attivo);
       }



    }



    qDebug()<<filter;

        tmProdotti->setFilter(filter);

}

void HProdottiNew::on_lineEdit_textChanged(const QString &arg1)
{
    QString filter;

    filter ="prodotti.descrizione LIKE '%"+ ui->lineEdit->text()+"%'";

    tmProdotti->setFilter(filter);
}


void HProdottiNew::on_tvProdotti_doubleClicked(const QModelIndex &index)
{
    //modifica il prodotto
    if (ui->tvProdotti->model()->index(index.row(),0).data(0).toInt()>0)
    {
    HModProduct *f=new HModProduct(ui->tvProdotti->model()->index(index.row(),0).data(0).toInt(),user,db);
    connect(f,SIGNAL(done()),this,SLOT(reloadProduct()));
    f->show();
    }else
    {
        QMessageBox::information(this,QApplication::applicationName(),"Selezionare un prodotto",QMessageBox::Ok);
    }

}

void HProdottiNew::on_pbMod_clicked()
{
    if (ui->tvProdotti->model()->index(ui->tvProdotti->selectionModel()->currentIndex().row(),0).data(0).toInt()>0)
    {
    HModProduct *f=new HModProduct(ui->tvProdotti->model()->index(ui->tvProdotti->selectionModel()->currentIndex().row(),0).data(0).toInt(),user,db);
    connect(f,SIGNAL(done()),this,SLOT(reloadProduct()));
    f->show();
    }else
    {
        QMessageBox::information(this,QApplication::applicationName(),"Selezionare un prodotto",QMessageBox::Ok);
    }
}

void HProdottiNew::on_pbPrint_clicked()
{
   bool pdf = ui->cbPdf->isChecked();

   print(pdf);

}






void HProdottiNew::on_pbLoads_clicked()
{
    int id=ui->tvProdotti->model()->index(ui->tvProdotti->selectionModel()->currentIndex().row(),0).data(0).toInt();
    HLoads *f=new HLoads(id,db);
    f->show();
}

