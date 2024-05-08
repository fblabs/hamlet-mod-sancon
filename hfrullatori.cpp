#include "hfrullatori.h"
#include "ui_hfrullatori.h"
#include "hblend.h"
#include "hblenddetail.h"
#include "QSqlQuery"
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QTextStream>
#include "hpdfprint.h"

#include <QSqlError>
#include <QDebug>

HFrullatori::HFrullatori(QString p_title,HBlend *p_blend, HUser *p_user, QSqlDatabase p_db, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HFrullatori)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;
    blend=p_blend;
    m_title=p_title;

    ui->lbTitle->setText(p_title);

    ui->cbExport->setVisible(false);

    ui->deData->setDate(QDate::currentDate());



    getBlendData();


}

HFrullatori::~HFrullatori()
{
    delete ui;
}



void HFrullatori::getBlendData()
{

    QSqlQuery q(db);
    QString sql="SELECT * FROM tb_blend WHERE id_riga_prod=:idr";
    int id=0;


    q.prepare(sql);
    q.bindValue(":idr",blend->getIDRiga());
    q.exec();
    if(q.next())
    {
        id=q.value(0).toInt();
        id<0?id=0:id=q.value(0).toInt();

        blend->set_ID(id);
        blend->setIDRiga(q.value(1).toInt());
        blend->setDate(q.value(2).toDate());
        blend->setLinea(q.value(3).toString());
        blend->setOperator(q.value(4).toString());
        blend->setIDProdotto(q.value(5).toInt());
        blend->setBlender(q.value(6).toString());
        blend->setPompe(q.value(7).toString());
        blend->setVasche(q.value(8).toString());
        blend->setAvanzi(q.value(9).toString());
        blend->setExported(q.value(10).toBool());
        blend->setNote(q.value(11).toString());
    }



    ui->deData->setDate(blend->getDate());
    ui->leLine->setText(blend->getLinea());
    ui->leOperator->setText(blend->getOperator());
    ui->leBlender->setText(blend->getBlender());
    ui->lePompe->setText(blend->getPompe());
    ui->leVasche->setText(blend->getVasche());
    ui->leAvanzi->setText(blend->getAvanzi());
    ui->cbExport->setChecked(blend->getExported());
    ui->teNote->setPlainText(blend->getNote());



    mod_details->clear();

    // sql="SELECT ID,idblend,IDlotto,lotto,azione,quantita,um FROM tb_blend_details WHERE idblend=:idb ";
    sql="SELECT ID,idblend,IDlotto,lotto,azione,quantita,um FROM tb_blend_details WHERE idblend=:idb ";

    q.prepare(sql);
    q.bindValue(":idb",blend->get_ID());

    q.exec();


    mod_details->clear();


    QList<QStandardItem*> row;

    while(q.next())
    {

        row.clear();
        QStandardItem *si_id=new QStandardItem(QString::number(q.value(0).toInt()));
        QStandardItem *si_idblend=new QStandardItem(q.value(1).toString());
        QStandardItem *si_idlotto=new QStandardItem(QString::number(q.value(2).toInt()));
        QStandardItem *si_lotto=new QStandardItem(q.value(3).toString());
        QStandardItem *si_prodotto=getLotData(q.value(3).toString()).at(2);
        QStandardItem *si_azione=new QStandardItem(q.value(4).toString());
        QStandardItem *si_quantita=new QStandardItem(QString::number(q.value(5).toDouble(),'f',2));
        QStandardItem *si_um=new QStandardItem(q.value(6).toString());
        row<<si_id<<si_idblend<<si_idlotto<<si_lotto<<si_prodotto<<si_azione<<si_quantita<<si_um;


        mod_details->appendRow(row);



    }



}

QList<QStandardItem *> HFrullatori::getLotData(QString p_lot)
{
    QString sql="SELECT lotdef.ID,lotdef.lot,prodotti.descrizione FROM lotdef,prodotti WHERE prodotti.ID=lotdef.prodotto and lotdef.lot=:lot";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":lot",p_lot);
    QList<QStandardItem*>res;
    if(q.exec())
    {
        res.clear();
        q.next();

        QStandardItem *idlotto=new QStandardItem(q.value(0).toString());
        QStandardItem *lotto=new QStandardItem(q.value(1).toString());
        QStandardItem *prod=new QStandardItem(q.value(2).toString());

        res<<idlotto<<lotto<<prod;
    }


    return res;

}

void HFrullatori::getRemoved(QList<int> p_rem)
{
    remove=p_rem;
}

void HFrullatori::add_removed_Row(int p_id)
{
    remove<<p_id;
}

void HFrullatori::remove_deleted_detail_row(const int p_id)
{
    QSqlQuery q(db);
    QString sql=QString();

    for(int rm=0;rm<remove.size();++rm)
    {

        sql="DELETE FROM tb_blend_details WHERE ID=:idr";
        int idr=p_id;

        q.prepare(sql);
        q.bindValue(":idr",idr);
        q.exec();



    }

}



void HFrullatori::save_blend(bool b_showdlg)
{
    QSqlQuery q(db);
    QString sql=QString();
    bool b=false;




    blend->setLinea(ui->leLine->text());
    blend->setOperator(ui->leOperator->text());
    blend->setBlender(ui->leBlender->text());
    blend->setPompe(ui->lePompe->text());
    blend->setVasche(ui->leVasche->text());
    blend->setAvanzi(ui->leAvanzi->text());
    blend->setExported(ui->cbExport->isChecked());
    blend->setNote(ui->teNote->toPlainText());

    qDebug()<<blend->getBlender();



    sql="INSERT INTO `fbgmdb260`.`tb_blend` (ID,data,ID_riga_prod,linea,operatore,id_prodotto,frullatore,pompe,vasche,avanzi,esportato,note)\
        VALUES (:id,:data, :idriga,:linea,:operatore,:id_prodotto,:frullatore,:pompe,:vasche,:avanzi,:esportato,:note) ON DUPLICATE KEY UPDATE data=:data,ID_riga_prod=:idriga,linea=:linea,operatore=:operatore,frullatore=:frullatore,pompe=:pompe,vasche=:vasche,avanzi=:avanzi,esportato=:esportato,note=:note"; // values (:data,:linea,:operatore,:frullatore,:pompe,:vasche,:avanzi,:esportato,:note)";


    q.prepare(sql);

    q.bindValue(":id",blend->get_ID());
    q.bindValue(":data",blend->getDate().toString("yyyy-MM-dd"));
    q.bindValue(":idriga",blend->getIDRiga());
    q.bindValue(":linea",blend->getLinea());
    q.bindValue(":operatore",blend->getOperator());
    q.bindValue(":idprodotto",blend->getIDProdotto());
    q.bindValue(":frullatore",blend->getBlender());
    q.bindValue(":pompe",blend->getPompe());
    q.bindValue(":vasche",blend->getVasche());
    q.bindValue(":avanzi",blend->getAvanzi());
    q.bindValue(":esportato",blend->getExported());
    q.bindValue(":note",blend->getNote());

    db.transaction();

    b=q.exec();
    if(!b)
    {
        db.rollback();

    }


    //salvo le operazioni


    for(int r=0;r<mod_details->rowCount();++r)
    {
        int id=mod_details->index(r,0).data().toInt();
        int lastinsertid=-1;


        sql="SELECT last_insert_id()";
        q.exec();
        q.next();
        lastinsertid=q.value(0).toInt();


        if(id<1) {id=lastinsertid;}else{id=mod_details->index(r,0).data().toInt();}


        sql="INSERT INTO `fbgmdb260`.`tb_blend_details`(id,`idblend`,`idlotto`,`lotto`,`azione`,`quantita`,`um`) VALUES  (:id,:idblend,:idlotto,:lotto, :azione,:quantita,:um) ON DUPLICATE KEY UPDATE quantita=:quantita";


        q.prepare(sql);
        q.bindValue(":id",id);
        q.bindValue(":idblend",mod_details->index(r,1).data().toInt());
        q.bindValue(":idlotto",mod_details->index(r,2).data().toInt());
        q.bindValue(":lotto",mod_details->index(r,3).data().toString());
        q.bindValue(":azione",mod_details->index(r,5).data().toString());
        q.bindValue(":quantita",mod_details->index(r,6).data().toString());
        q.bindValue(":um",mod_details->index(r,7).data().toString());
        b=q.exec();




       /* if(!b){


            db.rollback();
            return;
        }*/


    }

    for(int v=0;v<remove.size();v++)
    {
        int toremove=remove.at(v);
        if(remove.contains(toremove)){remove_deleted_detail_row(toremove);}

    }






    remove.clear();
    db.commit();
    getBlendData();

    if(b_showdlg)
    QMessageBox::information(this,QApplication::applicationName(),"Dati salvati",QMessageBox::Ok);


}

void HFrullatori::on_pbClose_clicked()
{
    close();
}


void HFrullatori::on_pbInit_clicked()
{
    mod_details=new QStandardItemModel();

    save_blend(false);

    HBlendDetail *f=new HBlendDetail(blend,mod_details,db);
   // connect(f,SIGNAL(sg_transfer(QStandardItemModel*)),this,SLOT(get_details(QStandardItemModel*)));
   // connect (f,SIGNAL(add_removed_id(int)),this,SLOT(add_removed_Row(int)));
    f->show();
}

void HFrullatori::get_details(QStandardItemModel *p_mod)
{

    mod_details=p_mod;
}

void HFrullatori::print()
{
    QString strStream;


    QTextStream out(&strStream);
    QString bgcol=QString();
    QString title=QString();
    title=blend->getDate().toString("dd-MM-yyyy")+" - FRULLATA: "+blend->getProdotto()+" - (LINEA"+blend->getLinea()+")";


    const int rowCount = mod_details->rowCount();
    const int columnCount = mod_details->columnCount();




    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table width=100% border=1 cellspacing=0 cellpadding=2>\n";

    // headers



    QList<int> column_indexes;




    column_indexes.append(3);
    column_indexes.append(4);


    out << "<thead><tr bgcolor='#5cabff'><th colspan='2'>"+ title +"</th></tr><tr bgcolor='lightgrey'>";


    for (int column = 0 ; column < column_indexes.size(); column++)
    {
        out << QString("<th>%1</th>").arg(mod->headerData(column_indexes.at(column),Qt::Horizontal).toString());
    }

    out << "</tr></th></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {

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
            if (column_indexes.contains(column)) {

                QString data = mod_details->index(row, column).data().toString().simplified();

              /*  if (column==12)
                {

                    out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg((mod->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;"));
                    //out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg(mod->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;");

                }
                else
                {*/
                    out << QString("<td bgcolor='"+bgcol+"'>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                /*}*/
            }
        }
        out << "</tr>";

    }

    out<<"</table></table><br>";


    out<<"<table width=100% border=1 cellspacing=2 cellpadding=2>\n";
    out<<"<tr>";
    out<<"<td width=20%><b>OPERATORE:</b></td><td>"+blend->getOperator()+"</td>";
    out<<"</tr>";
    out<<"<tr>";
    out<<"<td><b>FRULLATORE:</b></td><td>"+blend->getBlender()+"</td>";
    out<<"</tr>";
    out<<"<tr>";
    out<<"<td><b>POMPE UTILIZZATE:</b></td><td>"+blend->getPompe()+"</td>";
    out<<"</tr>";
    out<<"<tr>";
    out<<"<td><b>VASCHE UTILIZZATE:</b></td><td>"+blend->getVasche()+"</td>";
    out<<"</tr>";
    out<<"<tr>";
    out<<"<td><b>AVANZI:</b></td><td>"+blend->getAvanzi()+"</td>";
    out<<"</tr>";
    out<<"<tr>";
    out<<"<td><b>SEGNALAZIONI:</b></td><td>"+ blend->getNote()+"</td>";
    out<<"</tr>";

    out<<"</table>";
    out<< "</body>\n";
    out<<"</html>\n";



    HPDFPrint *f =new HPDFPrint(nullptr,strStream);

    QPageLayout::Orientation orientation;
    orientation=QPageLayout::Landscape;
    f->set_orientation(orientation);
    f->show();
}


void HFrullatori::on_pbSave_clicked()
{
    save_blend(true);
}




void HFrullatori::on_pbPrint_clicked()
{
    print();
}

