#include "hbiodetails.h"
#include "ui_hbiodetails.h"
#include "hprint.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include <huser.h>

enum BIO_SAVE{

    NONE=-1,
    INSERT=0,
    UPDATE=1

};

HBioDetails::HBioDetails(int p_idlotto,QSqlDatabase pdb,HUser *p_user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HBioDetails)
{
    ui->setupUi(this);
    idlotto=p_idlotto;
    db=pdb;
    ui->deBegin->setDateTime(QDateTime::currentDateTime());
    ui->deEnd->setDateTime(QDateTime::currentDateTime());

    getLotData();
}

HBioDetails::~HBioDetails()
{
    delete ui;
}

void HBioDetails::getLotData()
{
    QSqlQuery q(db);
    QString sql="SELECT * FROM bio_data WHERE ID_lotto=:id";
    q.prepare(sql);
    q.bindValue(":id",idlotto);
    q.exec();
    q.first();
    qDebug()<<"q.size()"<<q.size();

    if(q.size()==0) ACTION=BIO_SAVE::INSERT;
    if(q.size()==1)  ACTION=BIO_SAVE::UPDATE;




    if(q.size()==0) return;

   mod=new QSqlQueryModel();
   mod->setQuery(q);


    QDateTime dbegin=q.value(3).toDateTime();
    QDateTime dend=q.value(4).toDateTime();
    ui->deBegin->setDateTime(dbegin);
    ui->deEnd->setDateTime(dend);
    ui->lePh->setText(q.value(5).toString());
    ui->leAw->setText(q.value(6).toString());
    ui->leNacl->setText(q.value(7).toString());
    ui->leCaricaBatterica->setText(q.value(8).toString());
    ui->leLieviti->setText(q.value(9).toString());
    ui->leMuffe->setText(q.value(10).toString());
    ui->leBatLattici->setText(q.value(11).toString());
    ui->leColiformi->setText(q.value(12).toString());
    ui->leBacilloCereus->setText(q.value(13).toString());
    ui->teNote->setPlainText(q.value(14).toString());



}

void HBioDetails::on_pbClose_clicked()
{
    close();
}


void HBioDetails::on_pbSave_clicked()
{

    bool b=save_data();

    if(b)close();

}

bool HBioDetails::save_data()
{
    bool result=false;
    QSqlQuery q(db);
    QString sql=QString();

    if(ACTION==BIO_SAVE::INSERT)
    {

        sql="INSERT INTO `fbgmdb260`.`bio_data` (`ID_lotto`,`data`,`data_inizio`,`data_fine`,`ph`,`aw`,`nacl`,`carica_batterica`, `lieviti`,`muffe`,`batteri_lattici`,`coliformi_totali`,`bacillo_cereus`, `note`)\
        VALUES (:ID_lotto,:data,:data_inizio,:data_fine,:ph,:aw,:nacl,:carica_batterica,:lieviti,:muffe,:batteri_lattici,:coliformi_totali,:bacillo_cereus,:note)";
    }
    if(ACTION==BIO_SAVE::UPDATE)
    {

        sql="UPDATE `fbgmdb260`.`bio_data` SET `data`=:data,`data_inizio`=:data_inizio,`data_fine`=:data_fine,`ph`=:ph,`aw`=:aw,`nacl`=:nacl,\
       `carica_batterica`=:carica_batterica, `lieviti`=:lieviti,`muffe`=:muffe,`batteri_lattici`=:batteri_lattici,`coliformi_totali`=:coliformi_totali,`bacillo_cereus`=:bacillo_cereus, `note`=:note WHERE ID_lotto=:ID_lotto";
    }
    q.prepare(sql);

    QDateTime date=QDateTime::currentDateTime();
    QDateTime begin=ui->deBegin->dateTime();
    QDateTime end=ui->deEnd->dateTime();
    QString sph=ui->lePh->text();
    QString saw=ui->leAw->text();
    QString snacl=ui->leNacl->text();
    QString scaricabatterica=ui->leCaricaBatterica->text();
    QString slieviti=ui->leLieviti->text();
    QString smuffe=ui->leMuffe->text();
    QString sbatterilattici=ui->leBatLattici->text();
    QString scoliformi=ui->leColiformi->text();
    QString sbacillocereus=ui->leBacilloCereus->text();
    QString snote=ui->teNote->toPlainText();

    qDebug()<<"Idlotto"<<idlotto;

    q.bindValue(":ID_lotto",idlotto);
    q.bindValue(":data",date);
    q.bindValue(":data_inizio",begin);
    q.bindValue(":data_fine",end);
    q.bindValue(":ph",sph);
    q.bindValue(":aw",saw);
    q.bindValue(":nacl",snacl);
    q.bindValue(":carica_batterica",scaricabatterica);
    q.bindValue(":lieviti",slieviti);
    q.bindValue(":muffe",smuffe);
    q.bindValue(":batteri_lattici",sbatterilattici);
    q.bindValue(":coliformi_totali",scoliformi);
    q.bindValue(":bacillo_cereus",sbacillocereus);
    q.bindValue(":note",snote);

    db.transaction();
    result=q.exec();



    if(result)
    {
        db.commit();
        QMessageBox::information(nullptr,QApplication::applicationName(),"Dati salvati correttamente",QMessageBox::Ok);
    }
    else
    {
        db.rollback();
        qDebug()<<"ERORRE:"<<q.lastError().text()<<"\n"<<q.lastQuery();
        QMessageBox::information(nullptr,QApplication::applicationName(),"ERRORE,transazione annullata\n"+q.lastError().text(),QMessageBox::Ok);
    }


    return result;
}

void HBioDetails::print()
{


    QString strStream;
    QString title="PIPPO";


//     qDebug()<<"filename="<<filename;




    QTextStream out(&strStream);

    const int rowCount = mod->rowCount();
    const int columnCount = mod->columnCount();

  //  QString title="Lotti dal "+ui->datadal->date().toString("dd-MM-yyyy")+" al "+ ui->dataal->date().toString("dd-MM-yyyy");

 //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='11'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
       // if (!ui->twLots->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(mod->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
           // if (!ui->twLots->isColumnHidden(column)) {
                QString data = mod->data(mod->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
           // }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
        "</body>\n"
        "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    HPrint *f=new HPrint();
    f->setHtml(strStream);
    f->show();
}


void HBioDetails::on_pbPrint_clicked()
{
    print();
}

