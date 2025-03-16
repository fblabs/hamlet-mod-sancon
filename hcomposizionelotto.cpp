#include "hcomposizionelotto.h"
#include "ui_hcomposizionelotto.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QMessageBox>
#include "hprint.h"
#include <QCursor>
#include <QShortcut>
#include "hchoose_lot_to_add.h"
#include "huser.h"
#include <QDateTime>
#include "hwarehousedetails.h"
#include <QMessageBox>


HComposizioneLotto::HComposizioneLotto(int p_idlotto, QString p_descrizione, HUser *p_user, QSqlDatabase pdb, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HComposizioneLotto)
{

    ui->setupUi(this);
    //ui->pushButton_2->setVisible(false);
    ui->pbUse->setVisible(false);
    //  ui->pbModify->setVisible(false);
    db=pdb;
    user=p_user;
    id=p_idlotto;
    tipo=getTipo(id);
    descrizione=p_descrizione;


    QValidator *iv=new QDoubleValidator(0.000,999999,3);
    ui->leNewAmount->setValidator(iv);



    ui->leDesc->setText(descrizione);


    det=new QShortcut(QKeySequence("F5"),this);

    connect(det,SIGNAL(activated()),this,SLOT(getDetails()));


    /*if(tipo==4)ui->pbScarico->setVisible(true);
    if(tipo!=4)ui->pbScarico->setVisible(false);*/


    if(tipo!=1)
    {
        this->setWindowTitle("Composizione Lotto");
        ui->pbAdd->setVisible(true);
        ui->pbRemove->setVisible(true);

        ui->tableView->setModel(getLotComposition());
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
        ui->tableView->setColumnHidden(0,true);
        ui->tableView->setColumnHidden(1,true);
        ui->tableView->setColumnHidden(2,true);
        ui->tableView->setColumnHidden(8,true);
    }
    else
    {

        this->setWindowTitle("Uso Lotto");
        ui->pbAdd->setVisible(false);
        ui->pbRemove->setVisible(false);
        if(tipo==4)ui->pbScarico->setVisible(false);

        ui->tableView->setModel(getLotUse());
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );


    }

    if(tipo>1 && tipo <4)
    {
        ui->pbModifyAmount->setVisible(true);
        ui->leCurrentAmount->setVisible(true);
        ui->leNewAmount->setVisible(true);



    }

    ui->pbAdd->setEnabled(user->get_lotti_u()>0);
    ui->pbModify->setEnabled(user->get_lotti_u()>0);
    ui->pbRemove->setEnabled(user->get_lotti_u()>0);
    ui->pbScarico->setEnabled(user->get_lotti_u()>0);
    ui->pbModifyAmount->setEnabled(user->get_lotti_u()>0);







}

HComposizioneLotto::~HComposizioneLotto()
{
    delete ui;
}

void HComposizioneLotto::getDetails()
{
    //  HComposizioneLotto *f;





    int lotid=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();

    QModelIndex ixlot;
    QModelIndex ixpro;
    QString desc=QString();

    qDebug()<<"getDetails()"<<tipo<<lotid;



    if (tipo != 1)
    {
        ixlot=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4);
        ixpro=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),5);
        desc=ixlot.data(0).toString()+" - "+ixpro.data(0).toString();


    }
    else
    {
        ixlot=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),2);
        ixpro=ui->tableView->model()->index(ui->tableView->selectionModel()->currentIndex().row(),4);
        desc=ixlot.data(0).toString()+" - "+ixpro.data(0).toString();

    }





    HComposizioneLotto *f=new HComposizioneLotto(lotid,desc,user,db);

    f->show();


    //   parf->show();
    close();

}

bool HComposizioneLotto::deleteComponent()
{
    int idop=ui->tableView->model()->index(ui->tableView->currentIndex().row(),1).data(0).toInt();


    QSqlQuery q(db);
    QString sql="DELETE from composizione_lot WHERE operazione=:idop";

    db.transaction();
    q.prepare(sql);
    q.bindValue(":idop",idop);


    if(!q.exec())
    {

        db.rollback();

        QMessageBox::warning(this,QApplication::applicationName(),"Errore eliminando l'operazione da composizione_lot"+q.lastError().text(),QMessageBox::Ok);

        return false;
    }


    sql="DELETE from operazioni where id=:idop";
    q.prepare(sql);
    q.bindValue(":idop",idop);


    if(!q.exec())
    {


        db.rollback();
        return false;
    }
    else
    {
        db.commit();
    }






    return true;







}

void HComposizioneLotto::unloadAll()
{


    QDateTime data=QDateTime::currentDateTime();
    // int lotid=mod->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
    int utente=user->getID();
    int idprod=ui->tableView->model()->index(ui->tableView->currentIndex().row(),2).data(0).toInt();
    int azione=2;
    double quantita=0.0;
    qDebug()<<"UNLOAD"<<quantita;
    int um=ui->tableView->model()->index(ui->tableView->currentIndex().row(),8).data(0).toInt();

    QSqlQuery q(db);
    QString sql;
    sql="SELECT giacenza from lotdef where ID=:id";
    q.prepare(sql);
    q.bindValue(":id",id);
    q.exec();
    q.next();
    quantita=q.value(0).toDouble();
    db.transaction();



    sql="INSERT INTO `operazioni`(`IDlotto`,`data`,`utente`,`IDprodotto`,`azione`,`quantita`,`um`)VALUES(:idlotto,:data,:utente,:idprodotto,:azione,:quantita,:um)";
    db.transaction();
    q.prepare(sql);
    q.bindValue(":idlotto",QVariant(id));
    q.bindValue(":data",QVariant(data));
    q.bindValue(":utente",QVariant(utente));
    q.bindValue(":idprodotto",QVariant(idprod));
    q.bindValue(":azione",QVariant(azione));
    q.bindValue(":quantita",QVariant(quantita));
    q.bindValue(":um",QVariant(um));
    bool b;
    if(QMessageBox::question(this,QApplication::applicationName(),"Scaricare la giacenza del lotto selezionato?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        b=q.exec();


        if(!b) {
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"Errore nello scaricamento della giacenza del lotto",QMessageBox::Ok);

        }
        else
        {
            if(QMessageBox::warning(this,QApplication::applicationName(),"Confermare l'operazione?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
            {
                db.commit();
                QMessageBox::information(this,QApplication::applicationName(),"Giacenza azzerata",QMessageBox::Ok);
                emit sig_lot_updated();
            }
            else
            {
                QMessageBox::information(this,QApplication::applicationName(),"Operazione annullata",QMessageBox::Ok);
                db.rollback();
            }


        }


    }







}

QSqlQueryModel* HComposizioneLotto::getLotComposition()
{
    QSqlQueryModel* lmod=new QSqlQueryModel();
    QSqlQuery q(db);
    QString sql;


    sql="select lotdef.ID as 'LOTID', operazioni.ID as 'OP ID',prodotti.ID AS 'ID PRODOTTO',operazioni.data as 'DATA',lotdef.lot as 'LOTTO',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale as 'FORNITORE', operazioni.quantita as 'QUANTITA\\'',unita_di_misura.ID AS 'ID UM' ,unita_di_misura.descrizione as 'UNITA\\'',lotdef.giacenza as 'GIACENZA' FROM operazioni,prodotti,lotdef,anagrafica,unita_di_misura WHERE prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and unita_di_misura.ID=operazioni.um and operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid)";

    q.prepare(sql);
    q.bindValue(":lotid",QVariant(id));
    q.exec();

    qDebug()<<"ID"<<id;


    lmod->setQuery(q);

    double dafare=0.0;

    for(int i=0; i<lmod->rowCount();++i)
    {

        dafare+=lmod->index(i,7).data(0).toDouble();
        ui->leCurrentAmount->setText(QString::number(dafare,'f',3));
    }


    return lmod;



}




//}

QSqlQueryModel* HComposizioneLotto::getLotUse()
{


    QSqlQuery q(db);
    QString sql;


    QSqlQueryModel* lmod=new QSqlQueryModel();



    sql="select lotdef.ID,lotdef.data as 'DATA',lotdef.lot as 'LOTTO',lotdef.EAN as 'LOT. ESTERNO',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',operazioni.quantita as 'QUANTITA' from  lotdef,prodotti,operazioni,anagrafica,composizione_lot where prodotti.ID=lotdef.prodotto and lotdef.ID =composizione_lot.ID_lotto and anagrafica.ID=lotdef.anagrafica and operazioni.ID=composizione_lot.operazione and operazioni.IDlotto =:id ORDER BY lotdef.data desc";

    q.prepare(sql);
    q.bindValue(":id",id);

    q.exec();


    lmod->setQuery(q);

    return lmod;


}

void HComposizioneLotto::refresh_data()
{


    if (getTipo(id)>1)
    {
        ui->tableView->setModel(getLotComposition());

        if(ui->tableView->model()->rowCount()>0)
        {
            ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
            ui->tableView->setCurrentIndex(ui->tableView->model()->index(0,0));

            return;
        }
        else
        {



            return;

        }
    }
    else {
        ui->tableView->setModel(getLotUse());



        if(ui->tableView->model()->rowCount()>0)
        {
            ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
            ui->tableView->setCurrentIndex(ui->tableView->model()->index(0,0));

            return;
        }
        else
        {

            return;

        }

    }
}

int HComposizioneLotto::findLotFirstLoad()
{

    int result=0;

    QString sql="SELECT MIN(ID) from operazioni where IDLotto=:id";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":id",id);
    q.exec();
    q.first();
    result=q.value(0).toInt();

    return result;
}

double HComposizioneLotto::recalculateAmount()
{
    double dafare = ui->leNewAmount->text().toDouble();
    double sommarighe=ui->leCurrentAmount->text().toDouble();


   double factor=0.0;
   factor= dafare / sommarighe;

    if(dafare==0)
    {
        factor=1;
    }
    if(sommarighe==0){

        factor=1;

    }



    QString sql=QString();
    QSqlQuery q(db);

    QAbstractItemModel* mod=ui->tableView->model();

    int id_operation=findLotFirstLoad();
    qDebug()<<"FIRST LOAD"<<id_operation;


    // factor = dafare / sommarighe;


    sql="UPDATE operazioni set quantita=:q where id=:id";
    q.prepare(sql);
    q.bindValue(":id",id_operation);
    q.bindValue(":q",dafare);


    bool b=q.exec();

    if(!b){

        qDebug()<<"ERROR UPDATE LOAD"<<id<<dafare<<q.lastError().text();;

        return -1.0;
    }

    double result=0.0;
    for (int j=0;j<mod->rowCount();++j)
    {

        QModelIndex i = mod->index(j,7);
        double current=i.data(0).toDouble();
        if(current<=0){ current=ui->leNewAmount->text().toDouble();}
        double updaterow =current * factor;
        qDebug()<<"recalculateamount"<<current<<factor;
        result+=updaterow;
        int row=mod->index(j,1).data(0).toInt();

        qDebug()<<"current"<<current<<"updaterow"<<updaterow<<"RIGA"<<row<<result;


        sql="UPDATE operazioni set quantita=:q where id=:id";
        q.prepare(sql);
        q.bindValue(":q",updaterow);
        q.bindValue(":id",row);

        bool b=q.exec();
        if(!b){
            qDebug()<<"UPDATE"<<"riga"<<row<<q.lastError().text();
            return -1.0;
        }



    }
    db.commit();
    qDebug()<<"commit";

    return result;



}



void HComposizioneLotto::on_tableView_doubleClicked(const QModelIndex &index)
{

    Q_UNUSED(index);

    getDetails();


}

void HComposizioneLotto::on_pushButton_3_clicked()
{
    close();
}

void HComposizioneLotto::print()
{


    if(tipo<2)
    {
        printUse();
    }
    else
    {
        printComposition();
    }



}

void HComposizioneLotto::printComposition()
{
    HPrint *f =new HPrint();

    QApplication::setOverrideCursor(Qt::WaitCursor);

    int rows=ui->tableView->model()->rowCount();
    int actrow=1;
    int cols=ui->tableView->model()->columnCount();



    f->append("COMPOSIZIONE LOTTO: "+ ui->leDesc->text().toUpper(),false);
    f->append("",false);



    QTextTable *tb=f->addTable(rows+3,cols,QTextTableFormat());




    f->append("",false);
    f->toggleImageUI(false);
    f->showMaximized();

    QString txt;

    int r,c;

    txt="DATA";
    f->writeTableContent(tb,0,1,QTextCharFormat(),txt);
    txt="LOTTO";
    f->writeTableContent(tb,0,2,QTextCharFormat(),txt);
    txt="PRODOTTO";
    f->writeTableContent(tb,0,3,QTextCharFormat(),txt);
    txt="FORNITORE";
    f->writeTableContent(tb,0,4,QTextCharFormat(),txt);
    txt="QUANTITA'";
    f->writeTableContent(tb,0,5,QTextCharFormat(),txt);
    txt="UNITA'";
    f->writeTableContent(tb,0,6,QTextCharFormat(),txt);
    txt="GIACENZA";
    f->writeTableContent(tb,0,7,QTextCharFormat(),txt);


    double qta=0.0;

    for (r=0;r<rows;r++)
    {
        actrow = r+2;

        for (c=1; c<cols; c++)
        {
            bool ok=false;
            if (c==5)
            {

                double lq=ui->tableView->model()->index(r,c).data(0).toDouble(&ok);


                if(ok)
                {
                    qta+=lq;
                }

            }

            if (c==5 || c ==7)
            {
                txt=QString::number(ui->tableView->model()->index(r,c).data(0).toDouble(),'f',3);

            }else{
                txt=ui->tableView->model()->index(r,c).data(0).toString();

            }

            f->writeTableContent(tb,actrow,c,QTextCharFormat(),txt);

        }
        QApplication::processEvents();

    }
    txt=QString::number(qta,'f',3);
    qDebug()<<txt;
    actrow++;
    f->writeTableContent(tb,actrow,4,QTextCharFormat(),"QUANTITA' TOTALE:");
    f->writeTableContent(tb,actrow,5,QTextCharFormat(),txt);



    QApplication::setOverrideCursor(Qt::ArrowCursor);
}

void HComposizioneLotto::printUse()
{

    HPrint *f =new HPrint();
    QApplication::setOverrideCursor(Qt::WaitCursor);
    int actrow=2;



    f->append("USO LOTTO "+ ui->leDesc->text().toUpper(),false);
    f->append("",false);

    int rows=ui->tableView->model()->rowCount();
    int cols=ui->tableView->model()->columnCount();


    QTextTable *tb=f->addTable(rows+2,cols,QTextTableFormat());



    f->showMaximized();

    int r,c;
    QString txt;




    txt="DATA";
    f->writeTableContent(tb,0,1,QTextCharFormat(),txt);
    txt="LOTTO";
    f->writeTableContent(tb,0,2,QTextCharFormat(),txt);
    txt="LOTTO ESTERNO";
    f->writeTableContent(tb,0,3,QTextCharFormat(),txt);
    txt="PRODOTTO";
    f->writeTableContent(tb,0,4,QTextCharFormat(),txt);
    txt="CLIENTE";
    f->writeTableContent(tb,0,5,QTextCharFormat(),txt);



    for (r=0;r<rows;r++)
    {
        actrow=r+2;
        qDebug()<<rows<<r<<actrow;


        for (c=1; c<cols; c++)
        {

            txt=ui->tableView->model()->index(r,c).data(0).toString();
            f->writeTableContent(tb,actrow,c,QTextCharFormat(),txt);

        }


    }

    QApplication::processEvents();
    QApplication::setOverrideCursor(Qt::ArrowCursor);
}

void HComposizioneLotto::on_pushButton_2_clicked()
{
    print();
}

int HComposizioneLotto::getTipo(int idl)
{
    QSqlQuery q(db);
    q.prepare("SELECT tipo FROM lotdef where ID=:id");
    q.bindValue(0,idl);
    q.exec();
    q.next();

    return q.value(0).toInt();
}

void HComposizioneLotto::on_pbUse_clicked()
{
    getDetails();
}








void HComposizioneLotto::on_pbAdd_clicked()
{
    HChoose_lot_to_add *f=new HChoose_lot_to_add(id,user,db);
    connect(f,SIGNAL(add_saved()),this,SLOT(refresh_data()));
    f->show();



}


void HComposizioneLotto::on_pbRemove_clicked()
{

    if (deleteComponent())
    {
        refresh_data();

    }
    else
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore eliminando il componente",QMessageBox::Ok);
    }


}


void HComposizioneLotto::on_pbScarico_clicked()
{
    unloadAll();
    refresh_data();

}


void HComposizioneLotto::on_pbModify_clicked()
{
    int idop=ui->tableView->model()->index(ui->tableView->currentIndex().row(),1).data(0).toInt();

    HWarehouseDetails *f=new HWarehouseDetails(user,db,idop);
    connect(f,SIGNAL(confirm()),this,SLOT(refresh_data()));
    connect(f,SIGNAL(updated()),this,SIGNAL(sig_lot_updated()));
    f->show();

}


void HComposizioneLotto::on_pbModifyAmount_clicked()
{
    double amount=0.0;

    if(QMessageBox::question(this,QApplication::applicationName(),"Modificare la quantità iniziale del lotto?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {


        db.transaction();
        amount=recalculateAmount();
        if (amount >-1)
        {
            db.commit();
            QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
            getLotComposition();
            QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));
            emit sig_lot_updated();
        }else{
            db.rollback();
        }

        ui->leCurrentAmount->setText(QString::number(amount,'f',3));
        ui->tableView->setModel(getLotComposition());

    }
}



