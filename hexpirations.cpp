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
    QDate date=ui->deLimit->date();
    int range=ui->sbDays->value();
    QSqlQueryModel *mod=new QSqlQueryModel();
    QSqlQuery q(db);


    QString sql="SELECT lotdef.ID AS 'ID LOTTO',tipi_lot.Id AS 'ID tipi_lot',tipi_lot.descrizione AS 'TIPO LOTTO',lotdef.lot as 'LOTTO',prodotti.ID AS 'ID prodotto',prodotti.descrizione as 'PRODOTTO',lotdef.scadenza as 'SCADENZA',lotdef.giacenza AS 'GIACENZA' FROM fbgmdb260.lotdef,prodotti,tipi_lot WHERE tipi_lot.ID=lotdef.tipo AND prodotti.ID=lotdef.prodotto AND lotdef.scadenza <= DATE_ADD(:date, INTERVAL :next DAY) AND lotdef.attivo = 1 AND lotdef.data > DATE_SUB(CURDATE(), INTERVAL 2 YEAR) AND prodotti.tipo IN (1 , 2) order by lotdef.scadenza asc";

    q.prepare(sql);
    q.bindValue(":date",date.toString("yyyy-MM-dd"));
    q.bindValue(":next",range);

    q.exec();
    qDebug()<<q.lastError().text();
    mod->setQuery(q);

    ui->tableView->setModel(mod);
}

void HExpirations::print()
{
    HPrint *f =new HPrint();

    int rows=ui->tableView->model()->rowCount()+2;
    int cols=ui->tableView->model()->columnCount();
    

    if(ui->sbDays->value()==0)
    {
        f->append("LOTTI IN SCADENZA IL " + ui->deLimit->text().toUpper(),false);
    }
    else
    {
        f->append("LOTTI IN SCADENZA ENTRO "+ ui->sbDays->text() + " GIORNI DAL " + ui->deLimit->text().toUpper(),false);
    }

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

    for (r=2;r<rows;r++)
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

void HExpirations::on_sbDays_valueChanged(int arg1)
{
    getExpirations();
}

void HExpirations::on_deLimit_dateChanged(const QDate &date)
{
    getExpirations();
    qDebug()<<"data cambiata";
}

void HExpirations::on_pushButton_2_clicked()
{
   print();
}
