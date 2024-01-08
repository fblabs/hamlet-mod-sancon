#include "hworkprogram.h"
#include "ui_hworkprogram.h"
#include "hwpmanager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRelationalDelegate>
#include <QSqlTableModel>
#include "huser.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>
#include "hprint.h"
#include "hworkprogressmodel.h"
#include "hmodifyrow.h"
#include "hworksheetmodel.h"
#include "hpdfprint.h"
#include <QHeaderView>
#include <QLocale>
#include "hnewsheet.h"
#include <QDate>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QStandardItem>
#include <QDesktopServices>
#include <QMimeData>
#include <QClipboard>
#include <QMenu>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlField>
#include <QTextDocument>
#include <QPrintDialog>
#include <QTextStream>
#include "hwpmod.h"
#include <QModelIndex>



HWorkProgram::HWorkProgram(HUser *p_user,QSqlDatabase p_db,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWorkProgram)
{
    ui->setupUi(this);
    user=p_user;
    db=p_db;
    dets=false;


    getSheets(true);
    connect(ui->tvStorico->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(storicoindexchange()));
    ui->tvStorico->selectRow(0);
    ui->deDal->setDate(QDate::currentDate());
    ui->deAl->setDate(QDate::currentDate());
    ui->deAl->setVisible(false);
    ui->label_5->setVisible(false);
    ui->deSearch->setDate(QDate::currentDate());
    ui->deSearchTo->setDate(QDate::currentDate());
    ui->spSearchLinea->setValue(0);

    ui->pbSave->setEnabled(user->get_programmi_u()>0);
    ui->pbNewSheet->setEnabled(user->get_programmi_u()>0);
    ui->pbDeleteSheet->setEnabled(user->get_programmi_u()>0);
    ui->pbAdd->setEnabled(user->get_programmi_u()>0);
    ui->pbRemove->setEnabled(user->get_programmi_u()>0);
    ui->pbModify->setEnabled(user->get_wp_u()>0);
    ui->pbApprova->setEnabled(user->get_programmi_u()>0);
    ui->pbDisapprova->setEnabled(user->get_programmi_u()>0);
    ui->pbPrint->setEnabled(true);
   // ui->pbAdd->setEnabled(user->get_wp_u()>0);



    ui->tvGeneral->verticalHeader()->setSectionsMovable(true);
    ui->tvGeneral->verticalHeader()->setDragEnabled(true);
    ui->tvGeneral->verticalHeader()->setDragDropMode(QAbstractItemView::InternalMove);




    /* this->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));*/



}

HWorkProgram::~HWorkProgram()
{
    delete ui;
}

void HWorkProgram::on_pbAdd_clicked()
{

    id=ui->tvStorico->model()->index(ui->tvStorico->selectionModel()->currentIndex().row(),0).data(0).toInt();
    HWpManager *f=new HWpManager(id,user,db);
    connect(f,SIGNAL(rowAdded()),this,SLOT(refreshSheet()));
    f->show();


}


bool HWorkProgram::createSheet(int p_line, QDate p_date)
{
    QSqlQuery q(db);
    QString datedal=p_date.toString("yyyy-MM-dd");
    QString dateal= p_date.toString("yyyy-MM-dd");
    int linea=p_line;

    db.transaction();
    QString sql="INSERT INTO produzione(dal,al,linea) VALUES(:datedal,:dateal,:linea)";
    q.prepare(sql);
    q.bindValue(":datedal",datedal );
    q.bindValue(":dateal", dateal);
    q.bindValue(":linea",linea);
    bool b=q.exec();
    if (b)
    {
        db.commit();
        QMessageBox::information(this,QApplication::applicationName(),"Foglio creato",QMessageBox::Ok);

    }else{
        db.rollback();
        QMessageBox::warning(this,QApplication::applicationName(),"Errore query:"+q.lastError().text(),QMessageBox::Ok);
    }
    getSheets();

    return b;
}

void HWorkProgram::getSheets(bool create)
{
    //  QSqlTableModel *mod=new QSqlTableModel(0,db);

    QModelIndex ix;

    /*  if(create){*/
    wsmod=new HWorkSheetModel(0,db);
    wsmod->setTable("produzione");
    wsmod->setSort(1,Qt::DescendingOrder);
    wsmod->select();
    ui->tvStorico->setModel(wsmod);
    //disconnect(ui->tvStorico->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(storicoindexchange()));
    ix=wsmod->index(0,0);
    ui->tvStorico->setCurrentIndex(ix);

    /*if(wsmod->rowCount()>0)
    {
        ui->tvStorico->selectRow(0);
        emit ui->tvStorico->clicked(ui->tvStorico->model()->index(ix.row(),ix.column()));
        //  refreshSheet();

    }*/



    ui->tvStorico->setColumnHidden(0,true);
    ui->tvStorico->setColumnHidden(2,true);
    ui->tvStorico->setColumnHidden(4,true);

    wsmod->setHeaderData(1,Qt::Horizontal,"Data");
    wsmod->setHeaderData(3,Qt::Horizontal,"Linea");
    wsmod->setHeaderData(5,Qt::Horizontal,"Approvato");



    //ui->tvStorico->horizontalHeader()->setStretchLastSection(true);
    for (int i=0;i<6;++i)
    {
        ui->tvStorico->horizontalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents);
    }
    ui->tvGeneral->verticalHeader()->setSectionsMovable(true);

    QPalette p = ui->tvStorico->palette();
    p.setBrush(p.Inactive, p.Highlight, p.brush(p.Highlight));
    ui->tvStorico->setPalette(p);


}

void HWorkProgram::approve(bool approve)
{
    QSqlQuery q(db);
    QString sql="update produzione set approvato=:approvato where ID=:id";

    if(QMessageBox::question(this,QApplication::applicationName(),"Aggiornare lo stato del foglio selezionato?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

        int id=ui->tvStorico->model()->index(ui->tvStorico->currentIndex().row(),0).data(0).toInt();

        q.prepare(sql);
        q.bindValue(":approvato",approve?1:0);
        q.bindValue(":id",id);
        if(q.exec())
        {
            if(approve)
            {
                QMessageBox::information(this,"UPDATE","Foglio lavoro approvato",QMessageBox::Ok);
                ui->lblCheck->setPixmap(QPixmap(":/Resources/Accept64.png"));


            }
            else
            {
                QMessageBox::information(this,"UPDATE","Approvazione Foglio lavoro revocata",QMessageBox::Ok);
                ui->lblCheck->setPixmap(QPixmap(":/Resources/Pencil.png"));



            }


        }else{
            QMessageBox::information(this,"UPDATE","Errore aggiornando il Foglio lavoro\n"+q.lastError().text(),QMessageBox::Ok);
        }
    }
    else
    {
        QMessageBox::information(this,"UPDATE","Aggiornamento annullato",QMessageBox::Ok);

    }

    getSheets(false);

    /* if(user->get_programmi_u()<1)
   {
   ui->pbPrint->setEnabled(approve);
  }*/


}


void HWorkProgram::storicoindexchange()
{
    QModelIndex index=ui->tvStorico->currentIndex();
    id=ui->tvStorico->model()->index(index.row(),0).data(0).toInt();
    ui->deDal->setDate(ui->tvStorico->model()->index(index.row(),1).data(0).toDate());
    ui->deAl->setDate(ui->tvStorico->model()->index(index.row(),2).data(0).toDate());
    ui->spLinea->setValue(ui->tvStorico->model()->index(index.row(),3).data(0).toInt());
    bool app=ui->tvStorico->model()->index(index.row(),5).data(0).toInt()>0?true:false;
    ui->pbApprova->setEnabled(!app);
    ui->pbDisapprova->setEnabled(app);
    /* ui->pbPrint->setEnabled(app);*/

    if(app )
    {
        ui->lblCheck->setPixmap(QPixmap(":/Resources/Accept64.png"));
    }
    else
    {
        ui->lblCheck->setPixmap(QPixmap(":/Resources/Pencil.PNG"));
    }

    /*  ui->pbAdd->setEnabled(!app);
    ui->pbModify->setEnabled(!app);
    ui->pbRemove->setEnabled(!app);
    ui->cbshowrows->setEnabled(!app);*/

    if(user->get_programmi_u()<1)
    {
        ui->pbAdd->setEnabled(false);
        ui->pbModify->setEnabled(false);
        ui->pbRemove->setEnabled(false);
        // ui->cbshowrows->setEnabled(false);
        ui->pbApprova->setEnabled(false);
        ui->pbDisapprova->setEnabled(false);

    }



    int id_produzione=wsmod->index(ui->tvStorico->currentIndex().row(),0).data(0).toInt();


    if(dets)
    {
        on_pbDetails_clicked();

    }
    else
    {
        on_pbSingleSheet_clicked();

    }








}

void HWorkProgram::refreshSheet()
{


    QSqlQueryModel *mod=new QSqlQueryModel();

    // QSqlRelationalDelegate *rdel=new QSqlRelationalDelegate();
    QSqlQuery q(db);
    // QString sql="SELECT * FROM righe_produzione where IDProduzione=:id";
    QString sql="SELECT righe_produzione.ID,IDProduzione,num_riga,quantita,vaso_gr,specificaolio,idprodotto,prodotti.descrizione,olio,tappo,righe_produzione.idcliente,anagrafica.ragione_sociale,totale,sanificazione,numero_ordine,fresco,pastorizzato,allergeni,righe_produzione.note,lotto_scadenza,ricette.q_tot, righe_produzione.totale/ricette.q_tot as factor,lotti as 'Lotti produzione'\
        FROM righe_produzione,prodotti,anagrafica,ricette\
                                  where ricette.ID_prodotto=prodotti.ID and prodotti.ID=righe_produzione.idprodotto and anagrafica.id=righe_produzione.idcliente and righe_produzione.IDProduzione=:id_p  order by num_riga asc;";
        q.prepare(sql);
    q.bindValue(":id_p",wsmod->index(ui->tvStorico->currentIndex().row(),0).data().toInt());

    q.exec();

    mod->setQuery(q);

    wpmod=convert_to_wp(mod);
    delete mod;

    QItemDelegate *rdel=new QItemDelegate();

    ui->tvGeneral->setModel(nullptr);

    ui->tvGeneral->setModel(wpmod);

    wpmod->setHeaderData(2,Qt::Horizontal,"N. riga");
    wpmod->setHeaderData(3,Qt::Horizontal,"Q.tà");
    wpmod->setHeaderData(4,Qt::Horizontal,"Peso prod.");
    wpmod->setHeaderData(5,Qt::Horizontal,"Peso olio");
    wpmod->setHeaderData(6,Qt::Horizontal,"ID prod.");
    wpmod->setHeaderData(7,Qt::Horizontal,"Prodotto");
    wpmod->setHeaderData(8,Qt::Horizontal,"Olio");
    wpmod->setHeaderData(9,Qt::Horizontal,"Tappo");
    wpmod->setHeaderData(10,Qt::Horizontal,"ID cliente");
    wpmod->setHeaderData(11,Qt::Horizontal,"Cliente");
    wpmod->setHeaderData(12,Qt::Horizontal,"Kg");
    wpmod->setHeaderData(13,Qt::Horizontal,"Sanif.");
    wpmod->setHeaderData(14,Qt::Horizontal,"Num. ordine");
    wpmod->setHeaderData(15,Qt::Horizontal,"Fresco");
    wpmod->setHeaderData(16,Qt::Horizontal,"Past.");
    wpmod->setHeaderData(17,Qt::Horizontal,"Allergeni");
    wpmod->setHeaderData(18,Qt::Horizontal,"Note");
    wpmod->setHeaderData(19,Qt::Horizontal,"Lot/scadenza");
    wpmod->setHeaderData(22,Qt::Horizontal,"Lotti produzione");




    ui->tvGeneral->setColumnHidden(0,true);
    ui->tvGeneral->setColumnHidden(1,true);
    ui->cbshowrows->isChecked()?ui->tvGeneral->setColumnHidden(2,false):ui->tvGeneral->setColumnHidden(2,true);
    ui->tvGeneral->setColumnHidden(6,false);
    ui->tvGeneral->setColumnHidden(10,true);
    ui->tvGeneral->setColumnHidden(20,true);
    ui->tvGeneral->setColumnHidden(21,true);
    ui->tvGeneral->setItemDelegate(rdel);
    ui->tvGeneral->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvGeneral->horizontalHeader()->stretchLastSection();
    ui->tvGeneral->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvGeneral->setEditTriggers(QAbstractItemView::SelectedClicked);








}

void HWorkProgram::deleteSheet()
{
    int id=-1;
    bool done=false;
    id=ui->tvStorico->model()->index(ui->tvStorico->currentIndex().row(),0).data(0).toInt();
    QString sql="delete from righe_produzione where IDProduzione=:idproduzione";
    QSqlQuery q(db);
    q.prepare(sql);
    q.bindValue(":idproduzione",id);
    if (QMessageBox::question(this,QApplication::applicationName(),"Eliminare il foglio produzione selezionato?\nAttenzione operazione irreversibile",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        db.transaction();
        bool b=q.exec();
        if (b)
        {
            sql=QString();
            sql="delete from produzione where ID=:idproduzione";
            q.clear();
            q.prepare(sql);
            q.bindValue(":idproduzione",id);
            done=q.exec();
            if(done)
            {
                if (QMessageBox::question(this,QApplication::applicationName(),"Conferma eliminazione?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
                {
                    db.commit();
                    getSheets();

                }
                else
                {
                    db.rollback();
                }

            }
        }

    }


}



void HWorkProgram::on_pbNewSheet_clicked()
{

    HNewSheet *f=new HNewSheet();
    connect(f,SIGNAL(OK(int,QDate)),this, SLOT(createSheet(int,QDate)));
    f->show();



}

void HWorkProgram::updateSheet(int newrow, int oldrow)
{


    QSqlQuery q(db);
    QString sql ="update righe_produzione set num_riga=:num where IDProduzione=:idp and num_riga=:oldnum";
    bool b=false;
    db.transaction();

    QSqlTableModel *mod=static_cast<QSqlTableModel*>(ui->tvGeneral->model());
    int currentrow=ui->tvGeneral->currentIndex().row();


    q.prepare(sql);
    q.bindValue("idp",mod->index(currentrow,1).data(0).toInt());

    q.bindValue(":num",newrow);
    q.bindValue(":oldnum",oldrow);




    b=q.exec();

    if(!b)
    {
        db.rollback();
        QMessageBox::warning(this,QApplication::applicationName(),"Errore durante la transazione\n"+q.lastError().text(),QMessageBox::Ok);

        return;
    }else{
        db.commit();
        QMessageBox::information(this,QApplication::applicationName(),"Foglio aggiornato correttamente",QMessageBox::Ok);
        refreshSheet();

    }

}



void HWorkProgram::on_pbSave_clicked()
{
    save();


    refreshSheet();


}

void HWorkProgram::on_pbClose_clicked()
{
    close();
}



void HWorkProgram::on_cbshowrows_toggled(bool checked)
{
    ui->tvGeneral->setColumnHidden(2,!checked);
}


void HWorkProgram::on_pbRemove_clicked()
{




    if(QMessageBox::question(this,QApplication::applicationName(),"Rimuovere la riga selezionata?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        db.transaction();

        QSqlQuery q(db);
        QString sql="DELETE FROM righe_produzione WHERE ID=:id";
        int row= wpmod->index(ui->tvGeneral->currentIndex().row(),0).data(0).toInt();
        q.prepare(sql);
        q.bindValue(":id",row);
        q.exec();

        db.commit();
        refreshSheet();

    }






}


void HWorkProgram::on_tvGeneral_doubleClicked(const QModelIndex &index)
{
    if(user->get_wp_u()>0) showModRow();
}

void HWorkProgram::on_pbModify_clicked()
{
    showModRow();
}

void HWorkProgram::showModRow()
{
    int pidrow=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),0).data(0).toInt();
    int pid=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),1).data(0).toInt();
    int currentrow=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),2).data(0).toInt();

    HModifyRow *f=new HModifyRow(pid,pidrow,currentrow,user,db);
    connect(f,SIGNAL(done()),this,SLOT(refreshSheet()));
    f->show();
}

void HWorkProgram::on_deDal_dateChanged(const QDate &date)
{
    ui->deAl->setDate(date);
}

void HWorkProgram::setHeaders()
{
    wpmod->setHeaderData(2,Qt::Horizontal,QObject::tr("Num. Riga"));
    wpmod->setHeaderData(3,Qt::Horizontal,QObject::tr("Quantità"));
    wpmod->setHeaderData(4,Qt::Horizontal,QObject::tr("Peso prod."));
    wpmod->setHeaderData(5,Qt::Horizontal,QObject::tr("Peso olio"));
    wpmod->setHeaderData(6,Qt::Horizontal,QObject::tr("ID Prodotto"));
    wpmod->setHeaderData(7,Qt::Horizontal,QObject::tr("Prodotto"));
    wpmod->setHeaderData(8,Qt::Horizontal,QObject::tr("Olio"));
    wpmod->setHeaderData(9,Qt::Horizontal,QObject::tr("Tappo"));
    wpmod->setHeaderData(10,Qt::Horizontal,QObject::tr("ID Cliente"));
    wpmod->setHeaderData(11,Qt::Horizontal,QObject::tr("Cliente"));
    wpmod->setHeaderData(12,Qt::Horizontal,QObject::tr("Kg"));
    wpmod->setHeaderData(13,Qt::Horizontal,QObject::tr("Sanificazione"));
    wpmod->setHeaderData(14,Qt::Horizontal,QObject::tr("Num. Ordine"));
    wpmod->setHeaderData(15,Qt::Horizontal,QObject::tr("Fresco"));
    wpmod->setHeaderData(16,Qt::Horizontal,QObject::tr("Pastorizzato"));
    wpmod->setHeaderData(17,Qt::Horizontal,QObject::tr("Allergeni"));
    wpmod->setHeaderData(18,Qt::Horizontal,QObject::tr("Note)"));
    wpmod->setHeaderData(19,Qt::Horizontal,QObject::tr("Lotto - Scadenza"));
    wpmod->setHeaderData(23,Qt::Horizontal,QObject::tr("Lotti produzione"));

}

void HWorkProgram::on_pbPrint_clicked()
{
    print();

}

void HWorkProgram::print()
{

    QString strStream;

    QAbstractItemModel *mod=ui->tvGeneral->model();

    QTextStream out(&strStream);
    QString bgcol=QString();
    QString title=QString();
    int linea=ui->spLinea->value();

    const int rowCount = mod->rowCount();
    const int columnCount = mod->columnCount();

    if(ui->cbAll->isChecked())
    {

        title="QUANTITA\' INGREDIENTI NECESSARIE PER LAVORAZIONE TRA IL "+ui->deSearch->date().toString("dd-MM-yyyy")+" E IL "+ui->deSearchTo->date().toString("dd-MM-yyyy");
    }
    else
    {
        ui->pbDetails->isChecked()?title ="PROGRAMMA DI LAVORO - PRODUZIONE DEL "+ ui->deDal->date().toString("dd.MM.yyyy")+" - LINEA " + QString::number(linea)+" - QUANTITA\' INGREDIENTI" :title="PROGRAMMA DI LAVORO - PRODUZIONE DEL "+ ui->deDal->date().toString("dd.MM.yyyy")+" - LINEA " + QString::number(linea);
    }
    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table width=100% border=1 cellspacing=0 cellpadding=2>\n";

    // headers



    QList<int> column_indexes;
    for (int column = 0 ; column < columnCount; column++)
    {
        if (!ui->tvGeneral->isColumnHidden(column))
        {
            column_indexes.append(column);
        }

    }




    out << "<thead><tr bgcolor='#5cabff'><th colspan='"+QString::number(column_indexes.size())+"'>"+ title +"</th></tr><tr bgcolor='lightgrey'>";


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
            if (!ui->tvGeneral->isColumnHidden(column)) {
                QString data = mod->index(row, column).data().toString().simplified();

                if (column==15 || column==16)
                {

                    out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg((mod->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;"));
                    //out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg(mod->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;");

                }
                else if(column==17)
                {
                    out << QString("<td style='color:red' bgcolor='"+bgcol+"'};>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
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




    HPDFPrint *f =new HPDFPrint(nullptr,strStream);

    QPageLayout::Orientation orientation;
    dets?orientation=QPageLayout::Portrait:orientation=QPageLayout::Landscape;
    f->set_orientation(orientation);
    f->show();


}

void HWorkProgram::get_sheet_details(const int p_id_produzione)
{


    QSqlQuery q(db);

    QApplication::setOverrideCursor(Qt::WaitCursor);
    ui->tvGeneral->setEditTriggers(QAbstractItemView::NoEditTriggers);




    QString sql=QString();
    if (ui->cbAll->isChecked())
    {


        QSqlQueryModel *qmod=new QSqlQueryModel();

        // sql="select prodotti.ID,prodotti.descrizione,sum(righe_ricette.quantita) as q from ricette,righe_ricette,prodotti where ricette.ID=righe_ricette.ID_ricetta and prodotti.id=righe_ricette.ID_prodotto and  ricette.ID_prodotto in (SELECT distinct righe_produzione.idprodotto from fbgmdb260.righe_produzione where IDProduzione in (select id from produzione where dal between :dal and :al)) group by righe_ricette.ID_prodotto order by q desc";


        sql="select righe_ricette.ID_prodotto,righe_produzione.totale as rptot,ricette.q_tot as ricetteqtot,righe_produzione.totale/ricette.q_tot  as factor,i.ID,i.descrizione,righe_ricette.quantita * (righe_produzione.totale/ricette.q_tot) as res\
            from produzione,righe_produzione,ricette,righe_ricette,prodotti p,prodotti i\
                                                              where righe_produzione.IDProduzione=produzione.ID and righe_produzione.idprodotto=p.id and ricette.ID_prodotto=p.ID and righe_ricette.ID_ricetta=ricette.ID and righe_ricette.ID_prodotto=i.id and produzione.dal between :dal and :al";



                                                                                                                                                                                                                                                                          q.prepare(sql);
        QDate dal=ui->deSearch->date();
        QDate al=ui->deSearchTo->date();

        q.prepare(sql);
        q.bindValue(":dal",dal);
        q.bindValue(":al",al);

        q.exec();


        qmod->setQuery(q);
        process(qmod);
        // ui->tvGeneral->setModel(qmod);
        // process(qmod);


        for(int r=0;r<qmod->rowCount();++r)
        {
            ui->tvGeneral->setColumnHidden(r,false);
        }


        QApplication::restoreOverrideCursor();



    }
    else
    {

        QSqlQueryModel *qmod=new QSqlQueryModel();
        QVector<int> vpr;
        for(int w=0;w<wsmod->rowCount();++w)
        {
            int r=wpmod->index(w,0).data().toInt();
            vpr.append(r);
        }


        sql="select righe_ricette.ID_prodotto,righe_produzione.totale as rptot,ricette.q_tot as ricetteqtot,righe_produzione.totale/ricette.q_tot  as factor,i.ID,i.descrizione,righe_ricette.quantita * (righe_produzione.totale/ricette.q_tot) as res\
            from produzione,righe_produzione,ricette,righe_ricette,prodotti p,prodotti i\
                                                              where righe_produzione.IDProduzione=produzione.ID and righe_produzione.idprodotto=p.id and ricette.ID_prodotto=p.ID and righe_ricette.ID_ricetta=ricette.ID and righe_ricette.ID_prodotto=i.id and produzione.ID = :id_p";


                                                                                                                                                                                                                                                         q.prepare(sql);
        q.bindValue(":id_p",p_id_produzione);
        q.exec();
        qmod->setQuery(q);


        // ui->tvGeneral->setModel(qmod);
        process(qmod);



        QApplication::restoreOverrideCursor();


        // ui->tvGeneral->setModel(vmod);
        // ui->tvGeneral->model()->setHeaderData(0,Qt::Horizontal,"ID INGREDIENTE");
        // ui->tvGeneral->model()->setHeaderData(1,Qt::Horizontal,"INGREDIENTE");
        // ui->tvGeneral->model()->setHeaderData(2,Qt::Horizontal,"QUANTITA' TOTALE PRODUZIONE");
        // ui->tvGeneral->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
        //ui->tvGeneral->setColumnHidden(0,true);
        /* ui->tvGeneral->setColumnHidden(1,false);
    ui->tvGeneral->verticalHeader()->setVisible(false);
    ui->tvGeneral->setColumnHidden(2,false);*/


    }

    ;
}

void HWorkProgram::add_row(QStandardItemModel *mod, QList<QStandardItem *> row)
{
    mod->appendRow(row);
}

void HWorkProgram::process(const QSqlQueryModel *mod)
{
    QLocale loc;
    QVector<int> vp;

    QStandardItemModel *emod=new QStandardItemModel();





    for(int r=0;r<mod->rowCount();++r)
    {
        int p=mod->index(r,0).data().toInt();


        if(!vp.contains(p))
        {
            vp.append(p);
        }

        // qDebug()<<"insert"<<p;

    }


    QVectorIterator<int>i(vp);



    while (i.hasNext())
    {
        double q=0.0;
        int pid=0;
        QString pro=QString();

        pid=i.next();

        // qDebug()<<"next"<<pid;


        for(int k=0;k<mod->rowCount();++k)
        {
            int lid=mod->index(k,0).data().toInt();


            if(lid==pid)
            {
                q+=mod->index(k,6).data().toDouble();
                pro=mod->index(k,5).data().toString();
                // qDebug()<<pid<<lid<<q<<pro;


            }



        }



        QList<QStandardItem*>row;
        QStandardItem *sid=new QStandardItem(QString::number(pid));
        QStandardItem *spro=new QStandardItem(pro);
        QStandardItem *squa=new QStandardItem(loc.toString(q,'f',2));
        // QStandardItem *squa=new QStandardItem(QString::number(q,'f',2));
        row<<sid<<spro<<squa;

        emod->appendRow(row);






    }

    emod->setHeaderData(0,Qt::Horizontal,"ID INGREDIENTE");
    emod->setHeaderData(1,Qt::Horizontal,"INGREDIENTE");
    emod->setHeaderData(2,Qt::Horizontal,"QUANTITA\'");


    ui->tvGeneral->setModel(emod);

    ui->tvGeneral->setColumnHidden(0,false);
    ui->tvGeneral->setColumnHidden(1,false);
    ui->tvGeneral->setColumnHidden(2,false);
    /* ui->tvGeneral->setColumnHidden(3,true);
    ui->tvGeneral->setColumnHidden(4,true);*/


}



void HWorkProgram::save()
{


    QApplication::setOverrideCursor(Qt::WaitCursor);

    int idriga,numriga=0;

    db.transaction();

    for (int r=0;r<wpmod->rowCount();++r)
    {
        idriga=wpmod->index(r,0).data().toInt();
        numriga=ui->tvGeneral->verticalHeader()->visualIndex(r)+1;
        QString sql="UPDATE righe_produzione set num_riga=:num where id=:id";
        QSqlQuery q(db);
        q.prepare(sql);
        q.bindValue(":num",numriga);
        q.bindValue(":id",idriga);

        q.exec();

    }
     QApplication::restoreOverrideCursor();

    if(QMessageBox::question(this,QApplication::applicationName(),"Confermi il salvataggio?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        db.commit();
    }
    else
    {
        db.rollback();
    }




}


void HWorkProgram::on_checkBox_toggled(bool checked)
{
    ui->tvStorico->setVisible(!checked);
}

void HWorkProgram::on_pbDeleteSheet_clicked()
{
    deleteSheet();
    /*getSheets();*/
    refreshSheet();


}






void HWorkProgram::on_pbSearch_clicked()
{
    search();
}

void HWorkProgram::search()
{
    //if(ui->spSearchLinea->value()==0 /*&&ui->deSearch->date() != QDate::currentDate()&&(ui->deSearchTo->date()> ui->deSearch->date())*/)
    if(ui->spSearchLinea->value()==0)
    {
        static_cast<QSqlTableModel*>(ui->tvStorico->model())->setFilter("dal between '"+ui->deSearch->date().toString("yyyy-MM-dd")+"' and '"+ ui->deSearchTo->date().toString("yyyy-MM-dd") +"'");

    }
    else if(ui->spSearchLinea->value()>0)
    {
        static_cast<QSqlTableModel*>(ui->tvStorico->model())->setFilter("linea="+QString::number(ui->spSearchLinea->value())+" and dal between '"+ui->deSearch->date().toString("yyyy-MM-dd")+"' and '"+ ui->deSearchTo->date().toString("yyyy-MM-dd") +"'");
    }

}

void HWorkProgram::on_pbReset_clicked()
{
    static_cast<QSqlTableModel*>(ui->tvStorico->model())->setFilter("");
}



void HWorkProgram::on_pbApprova_clicked()
{
    QModelIndex current=ui->tvStorico->currentIndex();
    approve(true);
    getSheets(false);
    ui->tvStorico->setCurrentIndex(current);
    ui->tvStorico->selectRow(current.row());

}


void HWorkProgram::on_pbDisapprova_clicked()
{
    QModelIndex current=ui->tvStorico->currentIndex();
    approve(false);
    getSheets(false);
    ui->tvStorico->setCurrentIndex(current);
    ui->tvStorico->selectRow(current.row());
}

void HWorkProgram::showContextMenu(const QPoint &pos)
{
    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(0);

    //  QAction *detailsAction=menu->addAction("Composizione/uso lotto");
    menu->addSeparator();
    QAction *copyAction=menu->addAction("Copia la riga sotto il cursore");
    //  QAction *editAction=menu->addAction("Modifica/Copia dati ...");
    // QAction *bioAction=menu->addAction("Dati Biologici ...");
    // QAction *deleteLot=menu->addAction("Elimina il lotto");


    // connect(detailsAction,SIGNAL(triggered(bool)),this,SLOT(getDetails()));
    connect(copyAction,SIGNAL(triggered(bool)),this,SLOT(copyRow()));
    //  connect(editAction,SIGNAL(triggered(bool)),this,SLOT(editLot()));
    /*connect(bioAction,SIGNAL(triggered(bool)),this,SLOT(datiBio()));
    connect(deleteLot,SIGNAL(triggered(bool)),this,SLOT(on_pbDelete_clicked()));*/

    menu->popup(globalPos);
}

void HWorkProgram::copyRow(const int row)
{
    /*QList<QStandardItem*>rowtocopy;

    qDebug()<<"copy"<<row;
    HWorkProgramDetailModel *mod=static_cast<HWorkProgramDetailModel*>(ui->tvGeneral->model());

    qDebug()<<"mod"<<mod->rowCount();


        for(int c=0;c<wpmod->columnCount();++c)
        {
        rowtocopy<<mod->index(row,c).data().toString();
        }
        qDebug()<<"rowtocopy"<<rowtocopy.count();

        mod->appendRow(rowtocopy);*/



}







void HWorkProgram::on_pbDetails_clicked()
{
    dets=true;

    int id_produzione=wsmod->index(ui->tvStorico->currentIndex().row(),0).data(0).toInt();
    if(ui->cbAll->isChecked())
        get_sheet_details(-1);
    else
        get_sheet_details(id_produzione);

    ui->tvGeneral->setSortingEnabled(true);

    ui->pbAdd->setEnabled(false);
    ui->pbModify->setEnabled(false);
    ui->pbRemove->setEnabled(false);







}


void HWorkProgram::on_pbSingleSheet_clicked()
{

    dets=false;
    ui->tvGeneral->setSortingEnabled(false);
    refreshSheet();

    ui->pbAdd->setEnabled(user->get_programmi_u()>0);
    ui->pbModify->setEnabled(user->get_programmi_u()>0);
    ui->pbRemove->setEnabled(user->get_programmi_u()>0);




}

HWpMod *HWorkProgram::convert_to_wp(const QSqlQueryModel *mod)
{
    HWpMod *wmod=new HWpMod();

    for (int r=0;r<mod->rowCount();++r)
    {
        QList<QStandardItem*> row;

        for(int c=0;c<mod->columnCount();++c)
        {
            QStandardItem *it=new QStandardItem(mod->index(r,c).data().toString());
            it->setTextAlignment(Qt::AlignTop);
            row.append(it);
        }

        wmod->appendRow(row);
    }


    return wmod;


}






