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
#include "nouse.h"
#include "hchoose_lot_to_add.h"
#include "huser.h"
#include <QDateTime>


HComposizioneLotto::HComposizioneLotto(int p_idlotto, QString p_descrizione, HUser *p_user, QSqlDatabase pdb,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HComposizioneLotto)
{

    ui->setupUi(this);
    //ui->pushButton_2->setVisible(false);
    ui->pbUse->setVisible(false);
    //ui->checkBox->setVisible(false);
    db=pdb;
    user=p_user;
    id=p_idlotto;
    descrizione=p_descrizione;


    ui->leDesc->setText(descrizione);

    tipo=getTipo(id);
    qDebug()<<"TIPO"<<tipo;

     ui->pbScarico->setVisible(false);

   /* if (tipo==1)
    {
        ui->pbAdd->setVisible(false);
        ui->pbRemove->setVisible(false);

    }
    if (tipo==4)
    {
        ui->pbScarico->setVisible(true);
    }*/

    det=new QShortcut(QKeySequence("F5"),this);

    connect(det,SIGNAL(activated()),this,SLOT(getDetails()));

    tipo=getTipo(id);


    descrizione=p_descrizione;
    ui->leDesc->setText(descrizione);

     if(tipo==4)ui->pbScarico->setVisible(true);
     if(tipo!=4)ui->pbScarico->setVisible(false);


    if(tipo!=1)
    {
        this->setWindowTitle("Composizione Lotto");
        ui->pbAdd->setVisible(true);
        ui->pbRemove->setVisible(true);


        getLotComposition();
    }
    else
    {

        this->setWindowTitle("Uso Lotto");
        ui->pbAdd->setVisible(false);
        ui->pbRemove->setVisible(false);
        if(tipo==4)ui->pbScarico->setVisible(false);

        getLotUse();


    }




}

HComposizioneLotto::~HComposizioneLotto()
{
    delete ui;
}

void HComposizioneLotto::getDetails()
{
      //  HComposizioneLotto *f;



        int lotid=mod->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();

        QModelIndex ixlot;
        QModelIndex ixpro;

        if (tipo != 1)
        {
         ixlot=mod->index(ui->tableView->selectionModel()->currentIndex().row(),2);
         ixpro=mod->index(ui->tableView->selectionModel()->currentIndex().row(),3);
        }
        else
        {
          ixlot=mod->index(ui->tableView->selectionModel()->currentIndex().row(),2);
          ixpro=mod->index(ui->tableView->selectionModel()->currentIndex().row(),4);
        }


        QString desc=ixlot.data(0).toString()+" - "+ixpro.data(0).toString();


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
            emit unloaded();
        }
        else
        {
            QMessageBox::information(this,QApplication::applicationName(),"Operazione annullata",QMessageBox::Ok);
            db.rollback();
        }


    }


    }







}

void HComposizioneLotto::getLotComposition()
{
    QSqlQuery q(db);
    QString sql;


    sql="select lotdef.ID as 'LOTID', operazioni.ID as 'OP ID',prodotti.ID AS 'ID PRODOTTO',operazioni.data as 'DATA',lotdef.lot as 'LOTTO',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale as 'FORNITORE', operazioni.quantita as 'QUANTITA\\'',unita_di_misura.ID AS 'ID UM' ,unita_di_misura.descrizione as 'UNITA\\'',lotdef.giacenza as 'GIACENZA' FROM operazioni,prodotti,lotdef,anagrafica,unita_di_misura WHERE prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and unita_di_misura.ID=operazioni.um and operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid)";

    q.prepare(sql);
    q.bindValue(":lotid",QVariant(id));
    q.exec();

    mod=new QSqlQueryModel();
    mod->setQuery(q);

    ui->tableView->setModel(mod);

    ui->tableView->setModel(mod);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setColumnHidden(2,true);
    ui->tableView->setColumnHidden(8,true);

   if(mod->rowCount()>0)
   {



    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
   // ui->tableView->setColumnHidden(0,true);
    ui->tableView->setCurrentIndex(ui->tableView->model()->index(0,0));
    }
    else
    {

            ui->tableView->setVisible(false);
            NoUse *w=new NoUse();
            ui->verticalLayout->addWidget(w);
            w->SetLabelText("Ricerca composizione non applicabile per il tipo di lotto selezionato");
            w->show();

   }

   qDebug()<<q.lastError().text();




      // setAttribute(Qt::WA_DeleteOnClose);

      // close();


    }




//}

void HComposizioneLotto::getLotUse()
{


        QSqlQuery q(db);
        QString sql;


        mod=new QSqlQueryModel();



        sql="select lotdef.ID,lotdef.data as 'DATA',lotdef.lot as 'LOTTO',lotdef.EAN as 'LOT. ESTERNO',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE' from  lotdef,prodotti,operazioni,anagrafica,composizione_lot where prodotti.ID=lotdef.prodotto and lotdef.ID =composizione_lot.ID_lotto and anagrafica.ID=lotdef.anagrafica and operazioni.ID=composizione_lot.operazione and operazioni.IDlotto =:id ORDER BY lotdef.data desc";

        q.prepare(sql);
        q.bindValue(":id",id);

        q.exec();


        mod->setQuery(q);


        ui->tableView->setModel(mod);
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
        ui->tableView->setColumnHidden(0,true);
        ui->tableView->setCurrentIndex(ui->tableView->model()->index(0,0));


        if(mod->rowCount()<1)
        {
            ui->tableView->setVisible(false);
            NoUse *w=new NoUse();
            w->SetLabelText("Lotto non ancora utilizzato o ricerca uso del lotto non applicabile a questa tipologia di lotto");
            ui->verticalLayout->addWidget(w);
            w->show();

        }




       // QString pdesc=mod->index(ui->tableView->selectionModel()->currentIndex().row(),2).data(0).toString() + " - " + mod->index(ui->tableView->selectionModel()->currentIndex().row(),3).data(0).toString() ;

       // ui->leDesc->setText(pdesc);






}

void HComposizioneLotto::refresh_data()
{

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
   connect(f,SIGNAL(add_saved()),this,SLOT(getLotComposition()));
   f->show();
}

/*bool HComposizioneLotto::addComponent()
{
}*/


void HComposizioneLotto::on_pbRemove_clicked()
{

   if (deleteComponent())
   {
       getLotComposition();

   }
   else
   {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore eliminando il componente",QMessageBox::Ok);
   }


}


void HComposizioneLotto::on_pbScarico_clicked()
{
   unloadAll();

}

