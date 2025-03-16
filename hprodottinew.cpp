#include "hprodottinew.h"
#include "ui_hprodottinew.h"
//#include "hproductsmodel.h"
#include <QSqlDatabase>
#include <QCompleter>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QCompleter>
#include "hnewproduct.h"
#include "hmodproduct.h"
#include <QDebug>
#include <QSqlError>
#include "hmodprodotti.h"
#include <QMessageBox>
//#include "hloads.h"
#include "hloadsreport.h"
#include <QFileDialog>
#include <QSqlQueryModel>
#include "hpreferred_lots.h"
#include <QSqlQuery>
#include "hpdfprint.h"

HProdottiNew::HProdottiNew(  HUser *puser,QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HProdottiNew)
{
    ui->setupUi(this);

    db=pdb;
    user=puser;

    ui->pushButton->setEnabled(user->get_prodotti_u()>0);
    ui->pbMod->setEnabled(user->get_prodotti_u()>0);

    if((!user->get_prodotti_u())>0)
    {
        ui->pushButton->setEnabled(false);
        ui->pbMod->setEnabled(false);
        disconnect(ui->tvProdotti,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(on_tvProdotti_doubleClicked(QModelIndex)));
        ui->tvProdotti->setEditTriggers(QTableView::NoEditTriggers);

    }
    tmProdotti=new HModProdotti();
    getTypes();
    load();

    /*  tmProdotti->setTable("prodotti");
    tmProdotti->setSort(1,Qt::AscendingOrder);
    tmProdotti->setEditStrategy(QSqlRelationalTableModel::OnFieldChange);


    tmProdotti->setRelation(2,QSqlRelation("tipi_prodotto","ID","descrizione"));
    ui->tvProdotti->setItemDelegate(new QSqlRelationalDelegate(tmProdotti));
    tmProdotti->select();
*/


    // ui->tvProdotti->setColumnHidden(0,true);
    ui->tvProdotti->horizontalHeader()->stretchLastSection();
    //  ui->tvProdotti->horizontalHeader()->res
    ui->tvProdotti->resizeColumnsToContents();

    QCompleter *comp=new QCompleter;
    comp->setCompletionColumn(1);
    comp->setCaseSensitivity(Qt::CaseInsensitive);
    comp->setCompletionMode(QCompleter::PopupCompletion);
    comp->setModel(tmProdotti);
    ui->lineEdit->setCompleter(comp);

    qDebug()<<tmProdotti->query().lastError();

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
    tmProdotti->setHeaderData(8,Qt::Horizontal,"Allergene USA");


}

HProdottiNew::~HProdottiNew()
{
    delete ui;
}

void HProdottiNew::getTypes()
{
    //if(!db.isOpen()){qDebug()<<db.lastError().text();}

    tmTipi=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql="SELECT ID,descrizione from tipi_prodotto order by descrizione asc";
    // q.prepare(sql);
    q.exec(sql);
    tmTipi->setQuery(q);
    // qDebug()<<"get_types"<<q.lastQuery()<<q.lastError().text();
    ui->cbTipiProdotto->setModel(tmTipi);
    ui->cbTipiProdotto->setModelColumn(1);


}

void HProdottiNew::reloadProduct()
{

    load();
}



/*void HProdottiNew::on_rbBio_toggled(bool checked)
{
    if (checked)
    {
        tmProdotti->setFilter("bio>0");
    }

}*/

void HProdottiNew::save()
{
    /* if(user->getCanUpdate())
    {
        tmProdotti->submitAll();

    }

    tmProdotti->select();*/
}

void HProdottiNew::print(bool pdf)
{


    QString strStream;



    QTextStream out(&strStream);
    QString bgcol=QString();
    QString title=QString();
    // int linea=ui->spLinea->value();

    const int rowCount = ui->tvProdotti->model()->rowCount();
    const int columnCount = ui->tvProdotti->model()->columnCount();

    qDebug()<<QString::number(columnCount);

    title ="STAMPA ANAGRAFICA PRODOTTI";
    out <<  "<html <meta Content=\"Text/html; charset=Windows-1251\"><body bgcolor=#ffffff link=#5000A0><table width=100% border=1 cellspacing=0 cellpadding=2>><table width=100%><thead>";

    // headers
    QStringList coltit=QStringList();

    QList<int> skip;

    skip<<2<<9<<10;

    coltit <<"ID"<<"DESCRIZIONE"<<"TIPO"<< "ALLERGENE"<<"ATTIVO"<<"BIO"<<"PREZZO"<<"DATA ULTIMO AGGIORNAMENTO PREZZO"<<"ALLERGENE USA";


    out << "<tr bgcolor='#5cabff'><th colspan='9'>"+ title +"</th></tr><tr bgcolor='lightgrey'>";


    for (int column = 0 ; column < ui->tvProdotti->model()->columnCount(); column++)
    {


        if(!skip.contains(column))
        {

            out << QString("<th>%1</th>").arg(coltit.at(column));

        }


    }


    out << "</thead></tr><tbody>";

    // data table
    for (int row = 0; row < rowCount; row++) {


        if(row%2)
        {
            bgcol="lightgreen";
        }
        else
        {
            bgcol="white";
        }
        out << "<tr>";

        for (int column = 0; column < columnCount; column++) {

            if(!skip.contains(column))
            {      // QString data = ui->tvProdotti->model()->index(row, column).data().toString().simplified();



                QString data=ui->tvProdotti->model()->index(row, column).data().toString().simplified();



                if (column==3 || column==5 || column==8)
                {

                    out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg((ui->tvProdotti->model()->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;"));

                }
                else
                {
                    out << QString("<td bgcolor='"+bgcol+"'>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                }
            }

        }
        out << "</tr>";
    }
    out <<  "</tbody></table>"
           "</body>"
           "</html>";

    qDebug()<<strStream;





    HPDFPrint *f=new HPDFPrint(nullptr,strStream);
    f->set_orientation(QPageLayout::Portrait);
    f->show();


}

void HProdottiNew::load(const QString tosearch)
{
    QString sql=QString();
    sql="SELECT * from prodotti,tipi_prodotto where tipi_prodotto.ID=prodotti.tipo and tipo=:idtipo";

    if(tosearch.length()>0)
    {
        sql="SELECT * from prodotti,tipi_prodotto where tipi_prodotto.ID=prodotti.tipo and prodotti.descrizione LIKE '%"+ tosearch +"%' AND tipo=:idtipo";

    }
    /*  else{

        sql="SELECT prodotti.id,prodotti.descrizione,tipi_prodotto.descrizione, allergenico, prezzo, data_aggiornamento from prodotti,tipi_prodotto where tipi_prodotto.ID=prodotti.tipo and tipo=:idtipo order by prodotti.descrizione ASC";
    }*/


    ui->chbBio->isChecked()?sql+=" and bio=1":sql+="";
    ui->checkBox->isChecked()?sql+=" and attivo=1":sql+="";


    QString s_order=" order by prodotti.descrizione ASC";
    sql+=s_order;


    QSqlQuery q(db);
    q.prepare(sql);
    int idtipo=tmTipi->index(ui->cbTipiProdotto->currentIndex(),0).data(0).toInt();

    q.bindValue(":idtipo",idtipo);
    q.exec();
    tmProdotti->setQuery(q);
    ui->tvProdotti->setModel(tmProdotti);
    qDebug()<<idtipo<<q.lastError().text();
    //ui->tvProdotti->setColumnHidden(0,true);
    ui->tvProdotti->setColumnHidden(2,true);
    // ui->tvProdotti->setColumnHidden(8,true);
    //ui->tvProdotti->setColumnHidden(9,true);
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

    load();

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
    //int id=ui->tvProdotti->model()->index(ui->tvProdotti->selectionModel()->currentIndex().row(),0).data(0).toInt();
    //QString title=ui->tvProdotti->model()->index(ui->tvProdotti->selectionModel()->currentIndex().row(),1).data(0).toString();

    HLoadsReport *f=new HLoadsReport(db);
    f->show();
}


void HProdottiNew::on_cbTipiProdotto_currentIndexChanged(int index)
{
    load();
}


void HProdottiNew::on_chbBio_toggled(bool checked)
{
    load();
}




void HProdottiNew::on_pbPreferredLots_clicked()
{
    HPreferred_Lots *f=new HPreferred_Lots(db);
    f->show();
}





void HProdottiNew::on_lineEdit_returnPressed()
{
    QString tosearch=ui->lineEdit->text();
    load(tosearch);
}

