#include "hexpirations.h"
#include "ui_hexpirations.h"
#include <QSqlDatabase>
#include "huser.h"
#include "hprint.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>

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


    QString sql="SELECT lotdef.ID AS 'ID LOTTO',tipi_lot.Id AS 'ID tipi_lot',tipi_lot.descrizione AS 'TIPO LOTTO',lotdef.lot as 'LOTTO',prodotti.ID AS 'ID prodotto',prodotti.descrizione as 'PRODOTTO',lotdef.scadenza as 'SCADENZA',lotdef.giacenza AS 'GIACENZA' FROM fbgmdb260.lotdef,prodotti,tipi_lot WHERE tipi_lot.ID=lotdef.tipo AND prodotti.ID=lotdef.prodotto AND lotdef.scadenza  BETWEEN '"+ datefrom.toString("yyyy-MM-dd") +"'  AND '"+ dateto.toString("yyyy-MM-dd")+"'  AND lotdef.tipo =1 order by lotdef.scadenza desc";

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
    HPrint *f =new HPrint();

    int rows=ui->tableView->model()->rowCount()+2;
    int cols=ui->tableView->model()->columnCount();
    


        f->append("LOTTI IN SCADENZA TRA IL " + ui->deFrom->text().toUpper()+ " E IL "+ ui->deLimit->text().toUpper(),false);



    f->append("",false);

    f->toggleImageUI(false);
    f->showMaximized();
    QTextTable *tb=f->addTable(rows,cols);
    QString txt;

    f->writeTableContent(tb,0,2,"TIPO LOTTO");
    f->writeTableContent(tb,0,3,"LOTTO");
    f->writeTableContent(tb,0,5,"PRODOTTO");
    f->writeTableContent(tb,0,6,"SCADENZA");



   int r,c;


    f->showMaximized();

    for (r=0;r<rows;r++)
    {


        for (c=0; c<7; c++)
        {
            if (c != 0 && c !=1 && c !=4 && c !=7)
            {
            txt=ui->tableView->model()->index(r-2,c).data(0).toString();
            f->writeTableContent(tb,r,c,txt);
            QApplication::processEvents();
            }


        }
        QApplication::processEvents();

    }
    QApplication::processEvents();
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
