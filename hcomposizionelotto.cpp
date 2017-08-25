#include "hcomposizionelotto.h"
#include "ui_hcomposizionelotto.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include "hprint.h"
#include <QCursor>
#include <QShortcut>
#include "nouse.h"

HComposizioneLotto::HComposizioneLotto(QWidget *parent, QSqlDatabase pdb, int idLotto, QString descrizione) :
    QWidget(parent),
    ui(new Ui::HComposizioneLotto)
{

    ui->setupUi(this);
    //ui->pushButton_2->setVisible(false);
    ui->pbUse->setVisible(false);
    //ui->checkBox->setVisible(false);
    db=pdb;
    id=idLotto;

    det=new QShortcut(QKeySequence("F5"),this);

    connect(det,SIGNAL(activated()),this,SLOT(getDetails()));

    tipo=getTipo(id);

    qDebug()<<"TIPO:"<<tipo;

    desc=descrizione;
    ui->leDesc->setText(descrizione);


    if(tipo!=1)
    {
        this->setWindowTitle("Composizione Lotto");
        getLotComposition();
    }
    else
    {

        this->setWindowTitle("Uso Lotto");

        getLotUse();


    }




}

HComposizioneLotto::~HComposizioneLotto()
{
    delete ui;
}

void HComposizioneLotto::getDetails()
{
        HComposizioneLotto *f;

        int lotid=mod->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
        lotid=mod->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();

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


        f=new HComposizioneLotto(0,db,lotid,desc);
        f->show();

}

void HComposizioneLotto::getLotComposition()
{
    QSqlQuery q(db);
    QString sql;

   /* int lotid=mod->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
    lotid=mod->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
    QModelIndex ixlot=mod->index(ui->tableView->selectionModel()->currentIndex().row(),2);
    QModelIndex ixpro=mod->index(ui->tableView->selectionModel()->currentIndex().row(),3);

    QString pdesc=ixlot.data(0).toString()+" - "+ixpro.data(0).toString();*/

    sql="select lotdef.ID,operazioni.data as 'DATA',lotdef.lot as 'LOTTO',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale as 'FORNITORE', operazioni.quantita as 'QUANTITA\\'',unita_di_misura.descrizione as 'UNITA\\'',lotdef.giacenza as 'GIACENZA' from operazioni,prodotti,lotdef,anagrafica,unita_di_misura where prodotti.ID=operazioni.IDprodotto and lotdef.ID=operazioni.IDlotto and anagrafica.ID=lotdef.anagrafica and unita_di_misura.ID=operazioni.um and operazioni.ID in (SELECT operazione from composizione_lot where ID_lotto=:lotid)";

    q.prepare(sql);
    q.bindValue(":lotid",QVariant(id));
    q.exec();

    mod=new QSqlQueryModel();
    mod->setQuery(q);

   if(mod->rowCount()>0)
   {
    ui->tableView->setModel(mod);

        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch );
    ui->tableView->setColumnHidden(0,true);
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





void HComposizioneLotto::on_tableView_doubleClicked(const QModelIndex &index)
{
   /* int idlot=mod->index(ui->tableView->selectionModel()->currentIndex().row(),0).data(0).toInt();
    QModelIndex ixlot;
    QModelIndex ixpro;
    if(tipo > 1)
    {
     ixlot=mod->index(ui->tableView->selectionModel()->currentIndex().row(),2);
     ixpro=mod->index(ui->tableView->selectionModel()->currentIndex().row(),3);
    }
    else
    {
        ixlot=mod->index(ui->tableView->selectionModel()->currentIndex().row(),2);
        ixpro=mod->index(ui->tableView->selectionModel()->currentIndex().row(),4);
    }

    QString desc=ixlot.data(0).toString()+" - "+ ixpro.data(0).toString();

    HComposizioneLotto *f;


      f=new HComposizioneLotto(0,db,idlot,desc);
      f->show();*/

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



    QTextTable *tb=f->addTable(rows+3,cols);




    f->append("",false);
    f->toggleImageUI(false);
    f->showMaximized();

    QString txt;

    int r,c;

    txt="DATA";
    f->writeTableContent(tb,0,1,txt);
    txt="LOTTO";
    f->writeTableContent(tb,0,2,txt);
    txt="PRODOTTO";
    f->writeTableContent(tb,0,3,txt);
    txt="FORNITORE";
    f->writeTableContent(tb,0,4,txt);
    txt="QUANTITA'";
    f->writeTableContent(tb,0,5,txt);
    txt="UNITA'";
    f->writeTableContent(tb,0,6,txt);
    txt="GIACENZA";
    f->writeTableContent(tb,0,7,txt);


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

            f->writeTableContent(tb,actrow,c,txt);

        }
       QApplication::processEvents();

    }
    txt=QString::number(qta,'f',3);
    qDebug()<<txt;
    actrow++;
    f->writeTableContent(tb,actrow,4,"QUANTITA' TOTALE:");
    f->writeTableContent(tb,actrow,5,txt);



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


    QTextTable *tb=f->addTable(rows+2,cols);



    f->showMaximized();

    int r,c;
    QString txt;




    txt="DATA";
    f->writeTableContent(tb,0,1,txt);
    txt="LOTTO";
    f->writeTableContent(tb,0,2,txt);
    txt="LOTTO ESTERNO";
    f->writeTableContent(tb,0,3,txt);
    txt="PRODOTTO";
    f->writeTableContent(tb,0,4,txt);
    txt="CLIENTE";
    f->writeTableContent(tb,0,5,txt);



    for (r=0;r<rows;r++)
    {
        actrow=r+2;
        qDebug()<<rows<<r<<actrow;


        for (c=1; c<cols; c++)
        {

           txt=ui->tableView->model()->index(r,c).data(0).toString();
           f->writeTableContent(tb,actrow,c,txt);

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





