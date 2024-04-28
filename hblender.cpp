#include "hblender.h"
#include "ui_hblender.h"

#include <QSqlQuery>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QDate>

#include <QDebug>
#include <QSqlError>


HBlender::HBlender(const int p_idriga,QString p_prodotto,HUser *p_user,QSqlDatabase p_db,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HBlender)
{
    ui->setupUi(this);
    db=p_db;
    user=p_user;
    i_idriga=p_idriga;
    qDebug()<<"ID_RIGA"<<i_idriga;


    i_idriga=p_idriga;
    s_prodotto=p_prodotto;

    ui->lbTitle->setText("PRODUZIONE FRULLATORI: "+s_prodotto);

    QDoubleValidator *amoval=new QDoubleValidator(0.000,999999,3);
    ui->leAmount->setValidator(amoval);

    init();


}

HBlender::~HBlender()
{
    delete ui;
}

QString HBlender::findMaterialbyLot(QString plot)
{

    QString desc=QString();
    QStringList list = plot.split('-');
    int idprod=list.at(1).toInt();
    QSqlQuery q(db);
    QString sql="SELECT descrizione FROM prodotti WHERE ID=:id";
    q.prepare(sql);
    q.bindValue(":id",idprod);

    bool b = q.exec();
    if(b){

        q.next();
        desc=q.value(0).toString();
        desc.length()<1?desc="INGREDIENTE NON TROVATO":desc=desc;
    }
    else {
        desc="ERRORE";
    }

    return desc;
}

int HBlender::findMaterialIDbyLot(QString plot)
{
    qDebug()<<plot;

    QStringList list = plot.split('-');
    int idprod=list.at(1).toInt();

    return idprod;
}


void HBlender::on_pbAdd_clicked()
{

    addRow();
    ui->leLot->setText(QString());
    ui->leAmount->setText(QString());

}


void HBlender::addRow()
{
    QString s_lot=ui->leLot->text().simplified();

    QList<QStandardItem*>row;


    QString s_idriga_p=QString::number(i_idriga);
    QString s_id_lot=QString::number(findIDLotto(s_lot));
    //s_lot
    QString s_data=QDate::currentDate().toString("yyyy-MM-dd");
    QString s_utente=QString::number(user->getID());
    QString s_id_prodotto=QString::number(findMaterialIDbyLot(s_lot));
    QString s_prod=findMaterialbyLot(s_lot);
    QString s_azione=QString::number(2);
    QString s_amount=QString::number(ui->leAmount->text().toDouble(),'f',2);
    QString s_um=QString::number(1);
    QString s_note=QString();
    QString s_esp="0";


    QStandardItem *id=new QStandardItem("-1");
    QStandardItem *idrow=new QStandardItem(s_idriga_p);
    QStandardItem *idlot=new QStandardItem(s_id_lot);
    QStandardItem *lot=new QStandardItem(s_lot);
    QStandardItem *data=new QStandardItem(s_data);
    QStandardItem *utente=new QStandardItem(s_utente);
    QStandardItem *idprod=new QStandardItem(s_id_prodotto);
    QStandardItem *prod=new QStandardItem(s_prod);
    QStandardItem *azione=new QStandardItem(s_azione);
    QStandardItem *amount=new QStandardItem(s_amount);
    QStandardItem *um=new QStandardItem(s_um);
    QStandardItem *note=new QStandardItem(s_note);
    QStandardItem *exp=new QStandardItem(QString());


    exp->setCheckable(true);
    if(s_esp=="0")
    {

        exp->setCheckState(Qt::Unchecked);
    }
    else
    {

        exp->setCheckState(Qt::Checked);
    }



    row<<id<<idrow<<idlot<<lot<<data<<utente<<idprod<<prod<<azione<<amount<<um<<note<<exp;

    mod->setHeaderData(3,Qt::Horizontal,"LOTTO");
    mod->setHeaderData(4,Qt::Horizontal,"DATA");
    mod->setHeaderData(7,Qt::Horizontal,"INGREDIENTE");
    mod->setHeaderData(9,Qt::Horizontal,"QUANTITA\'");
    mod->setHeaderData(11,Qt::Horizontal,"NOTE");
    mod->setHeaderData(12,Qt::Horizontal,"ESPORTATO");

    mod->appendRow(row);
    ui->tvAdded->setColumnHidden(0,true);
    ui->tvAdded->setColumnHidden(1,true);
    ui->tvAdded->setColumnHidden(2,true);
    ui->tvAdded->setColumnHidden(3,false); //lotto
    ui->tvAdded->setColumnHidden(4,false); //data
    ui->tvAdded->setColumnHidden(5,true);//utente
    ui->tvAdded->setColumnHidden(6,true);//idprodotto
    ui->tvAdded->setColumnHidden(7,false);//prodotto
    ui->tvAdded->setColumnHidden(8,true);//azione
    ui->tvAdded->setColumnHidden(9,false);//quantita
    ui->tvAdded->setColumnHidden(10,true);//um
    ui->tvAdded->setColumnHidden(11,false);//note
    ui->tvAdded->setColumnWidth(11,400);
    ui->tvAdded->setColumnHidden(12,false);//esportato


}

void HBlender::removeRow(const int p_row,const int id_b)
{
    /*  QStandardItemModel *locmod=new QStandardItemModel();
    for(int lr=0;lr++;lr<mod->rowCount())
    {
        for(int lc=0;lc<mod->columnCount();++lc)
        {
            locmod->appendRow(mod->item(lr,lc)->clone());
        }
    }*/
    mod->removeRow(p_row);
    removed.append(id_b);

}

void HBlender::saveBlend()
{

    QSqlQuery q(db);
    QString sql=QString();

    bool success=false;
    db.transaction();


    for(int rr=0;rr<removed.size();++rr)
    {
        int rid=removed.at(rr);
        sql="DELETE FROM tb_blend WHERE ID=:id";
        q.prepare(sql);
        q.bindValue(":id",rid);
        success=q.exec();

        if(success)init();

    }

    int rc=mod->rowCount();





    for(int r=0;r<rc;++r)
    {
        QString lot=mod->index(r,3).data().toString();

        qDebug()<<lot<<rc;


        int lotid=findIDLotto(lot);
        qDebug()<<lotid;



        int idprod=findMaterialIDbyLot(lot);
        double qua=mod->index(r,9).data().toDouble();

        int esp=mod->index(r,12).data(Qt::CheckStateRole).toInt();
        esp>0?esp=1:esp=0;
        int id=mod->index(r,0).data().toInt();

        if(id<1) {id=0;}else{id=mod->index(r,0).data().toInt();}




        QString note=mod->index(r,11).data().toString();

        qDebug()<<"ID"<<id<<lotid<<"ESP"<<esp<<"NOTE"<<mod->index(r,11).data().toString()<<note;
        sql=QString();





            sql="INSERT INTO tb_blend (id,idriga_p,IDlotto,lotto,data,utente,IDprodotto,azione,quantita,um,note,esportato) VALUES (:id,:idrow,:lotid,:lot,:data,:utente,:idprod,2,:qua,1,:note,:esp)  on duplicate key update  data=current_date(),quantita=:qua,note=:note,esportato=:esp";
            q.prepare(sql);
            qDebug()<<"INSERT"<<lotid;

            q.bindValue(":id",id);
            q.bindValue(":idrow",i_idriga);
            q.bindValue(":lotid",lotid);
            q.bindValue(":lot",lot);
            q.bindValue(":data",QDate::currentDate());
            q.bindValue(":utente",user->getID());
            q.bindValue(":idprod",idprod);
            q.bindValue(":qua",qua);
            q.bindValue(":note",note);
            q.bindValue(":esp",esp);

            qDebug()<<"lotid"<<q.boundValue(":lotid");




            success= q.exec();






    }

    qDebug()<<success;

    if(!success){

        db.rollback();
        QMessageBox::warning(this,QApplication::applicationName(),"ERRORE\n"+q.lastError().text(),QMessageBox::Ok);
        return;
    }else{
        db.commit();
        init();
        QMessageBox::information(this,QApplication::applicationName(),"Composizione salvata",QMessageBox::Ok);
    }


}

int HBlender::findIDLotto(const QString s_lot)
{
    QString sql="SELECT ID FROM lotdef WHERE lot=:lot";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":lot",s_lot);
    q.exec();
    q.next();
    int lid=q.value(0).toInt();
    qDebug()<<"fidIDLotto"<<lid;

    return lid;
}

void HBlender::exportToOperazioni()
{
    QSqlQuery q(db);
    QString sql=QString();
    sql="INSERT into operazioni(IDlotto,data,utente,IDprodotto,azione,quantita,um) SELECT IDlotto,data,utente,IDprodotto,azione,quantita,um FROM fbgmdb260.tb_blend WHERE idriga_p=:id";
    q.prepare(sql);
    q.bindValue(":id",i_idriga);

    if(QMessageBox::warning(this,QApplication::applicationName(),"Esportare in Operazioni?\nATTENZIONE una volta esportati i dati non sarà più possibile modificarli se non in operazioni.Procedere?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        db.transaction();
        bool ok= q.exec();

        if(ok)
        {
            sql="UPDATE tb_blend SET esportato=1 WHERE idriga_p=:id";
            q.prepare(sql);
            q.bindValue(":id",i_idriga);
            q.exec();

            db.commit();
            QMessageBox::information(this,QApplication::applicationName(),"Operazioni esportate",QMessageBox::Ok);

        }else{

            db.rollback();
            QMessageBox::information(this,QApplication::applicationName(),"Esportazione annullata",QMessageBox::Ok);
        }

    }

    init();



}


void HBlender::on_pbRemove_clicked()
{
    removeRow(ui->tvAdded->currentIndex().row(),mod->index(ui->tvAdded->currentIndex().row(),0).data().toInt());
}


void HBlender::on_pbClose_clicked()
{
    close();
}





void HBlender::on_pbSave_clicked()
{
    saveBlend();
}

void HBlender::init()
{
    QSqlQuery q(db);
    QString sql="SELECT * from tb_blend WHERE idriga_p=:idrow";
    q.prepare(sql);
    q.bindValue(":idrow",i_idriga);


    // qDebug()<<"INBIT"<<i_idriga;

    mod=new QStandardItemModel();



    q.exec();

    // qDebug()<<q.size();


    while(q.next())
    {
        qDebug()<<"INIT WHILE"<<i_idriga;


        QList<QStandardItem*>row;

        QString s_id=q.value(0).toString();
        QString s_idriga_p=q.value(1).toString();
        QString s_id_lot=q.value(2).toString();
        QString s_lot=q.value(3).toString();
        QString s_data=q.value(4).toDate().toString("dd-MM-yyyy");
        QString s_utente=q.value(5).toString();
        QString s_id_prodotto=q.value(6).toString();
        QString s_prod=findMaterialbyLot(s_lot);
        QString s_azione=q.value(7).toString();
        QString s_amount=QString::number(q.value(8).toDouble(),'f',2);
        QString s_um=q.value(9).toString();
        QString s_note=q.value(10).toString();
        QString s_esp=QString::number(q.value(11).toInt());



        QStandardItem *idblend=new QStandardItem(s_id);
        QStandardItem *idrow=new QStandardItem(s_idriga_p);
        QStandardItem *idlot=new QStandardItem(s_id_lot);
        QStandardItem *lot=new QStandardItem(s_lot);
        lot->setEditable(false);
        QStandardItem *data=new QStandardItem(s_data);
        data->setEditable(false);
        QStandardItem *utente=new QStandardItem(s_utente);
        QStandardItem *idprod=new QStandardItem(s_id_prodotto);
        QStandardItem *prod=new QStandardItem(s_prod);
        prod->setEditable(false);
        QStandardItem *azione=new QStandardItem(s_azione);
        QStandardItem *amount=new QStandardItem(s_amount);
        QStandardItem *um=new QStandardItem(s_um);
        QStandardItem *note=new QStandardItem(s_note);
        QStandardItem *exp=new QStandardItem("");

        exp->setCheckable(true);
        if(s_esp=="0")
        {

            exp->setCheckState(Qt::Unchecked);
        }
        else
        {

            exp->setCheckState(Qt::Checked);
        }


        row<<idblend<<idrow<<idlot<<lot<<data<<utente<<idprod<<prod<<azione<<amount<<um<<note<<exp;



        mod->appendRow(row);




    }

    mod->setHeaderData(3,Qt::Horizontal,"LOTTO");
    mod->setHeaderData(4,Qt::Horizontal,"DATA");
    mod->setHeaderData(7,Qt::Horizontal,"INGREDIENTE");
    mod->setHeaderData(9,Qt::Horizontal,"QUANTITA\'");
    mod->setHeaderData(11,Qt::Horizontal,"NOTE");
    mod->setHeaderData(12,Qt::Horizontal,"ESPORTATO");

    ui->tvAdded->setModel(mod);

    ui->tvAdded->setColumnHidden(0,true);
    ui->tvAdded->setColumnHidden(1,true);
    ui->tvAdded->setColumnHidden(2,true);
    ui->tvAdded->setColumnHidden(3,false); //lotto
    ui->tvAdded->setColumnHidden(4,false); //data
    ui->tvAdded->setColumnHidden(5,true);//utente
    ui->tvAdded->setColumnHidden(6,true);//idprodotto
    ui->tvAdded->setColumnHidden(7,false);//prodotto
    ui->tvAdded->setColumnHidden(8,true);//azione
    ui->tvAdded->setColumnHidden(9,false);//quantita
    ui->tvAdded->setColumnHidden(10,true);//um
    ui->tvAdded->setColumnHidden(11,false);//note
    ui->tvAdded->setColumnWidth(11,400);
    ui->tvAdded->setColumnHidden(12,false);//esportato

    // ui->tvAdded->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvAdded->horizontalHeader()->setStretchLastSection(true);
    // qDebug()<<mod->rowCount();

    ui->pbAdd->setEnabled(false);


}




void HBlender::on_leAmount_textChanged(const QString &arg1)
{
    arg1.length()>0? ui->pbAdd->setEnabled(true):ui->pbAdd->setEnabled(false);
}


void HBlender::on_pbExport_clicked()
{
    exportToOperazioni();
}

