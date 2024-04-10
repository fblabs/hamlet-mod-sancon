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
#include "hprogtable.h"
#include <QSqlQueryModel>
#include <QStandardItem>


HWorkProgram::HWorkProgram(HUser *p_user,QSqlDatabase p_db,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWorkProgram)
{
    ui->setupUi(this);
    user=p_user;
    db=p_db;
    dets=false;


    getSheets();
    ui->tvStorico->setFocus();


    //ui->tvStorico->selectRow(0);
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
    ui->pbRemove->setEnabled(user->get_programmi_u()>0);
    ui->pbAdd->setEnabled(user->get_wp_u()>0);
    ui->pbAdd->setEnabled(user->get_programmi_u()>0);
    ui->pbCutRow->setEnabled(user->get_wp_u()>0);
    ui->pbCutRow->setEnabled(user->get_programmi_u()>0);
    ui->pbCopy->setEnabled(user->get_programmi_u()>0);
    ui->pbPaste->setEnabled(user->get_programmi_u()>0);
    ui->pbModify->setEnabled(user->get_programmi_u()>0 || user->get_wp_u()>0);
    ui->pbRemove->setEnabled(user->get_programmi_u()>0);



    ui->tvGeneral->verticalHeader()->setSectionsMovable(true);
    ui->tvGeneral->verticalHeader()->setDragEnabled(true);






    ui->tvGeneral->verticalHeader()->setDragDropMode(QAbstractItemView::InternalMove);




    this->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));

    ui->tvStorico->setFocus();
    ui->cbshowrows->setChecked(false);



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

void HWorkProgram::getSheets()
{
    //  QSqlTableModel *mod=new QSqlTableModel(0,db);

    QModelIndex ix;
    // HWorkSheetModel *wsmod=new HWorkSheetModel(nullptr,db);


    wsmod=new HWorkSheetModel(0,db);
    wsmod->setTable("produzione");
    wsmod->setSort(1,Qt::DescendingOrder);
    wsmod->select();
    ui->tvStorico->setModel(wsmod);



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

    connect(ui->tvStorico->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(storicoindexchange()));

    ix=wsmod->index(0,0);


    if(wsmod->rowCount()>0)
    {

        // ui->tvStorico->setCurrentIndex(i);
        ui->tvStorico->selectionModel()->setCurrentIndex(ix,QItemSelectionModel::ClearAndSelect);



    }

    ui->tvStorico->setCurrentIndex(ix);




}

void HWorkProgram::approve(const bool app)
{
    QSqlQuery q(db);
    QString sql="update produzione set approvato=:approvato where ID=:id";

    if(QMessageBox::question(this,QApplication::applicationName(),"Aggiornare lo stato del foglio selezionato?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {

        int id=ui->tvStorico->model()->index(ui->tvStorico->currentIndex().row(),0).data(0).toInt();

        q.prepare(sql);
        q.bindValue(":approvato",app?1:0);
        q.bindValue(":id",id);
        if(q.exec())
        {
            if(app)
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
        if(user->get_programmi_u()) ui->pbApprova->setEnabled(app);
        if(user->get_programmi_u())ui->pbDisapprova->setEnabled(!app);

    }

    getSheets();






}


void HWorkProgram::storicoindexchange()
{
    QModelIndex index=ui->tvStorico->model()->index(ui->tvStorico->currentIndex().row(),0);
    bool app=wsmod->index(index.row(),5).data(Qt::CheckStateRole).toInt()>0?true:false;


    id=ui->tvStorico->model()->index(index.row(),0).data(0).toInt();
    ui->deDal->setDate(ui->tvStorico->model()->index(index.row(),1).data(0).toDate());
    ui->deAl->setDate(ui->tvStorico->model()->index(index.row(),2).data(0).toDate());
    ui->spLinea->setValue(ui->tvStorico->model()->index(index.row(),3).data(0).toInt());


     ui->pbPrint->setEnabled(app);


    if(user->get_programmi_u())
    {
        ui->pbApprova->setEnabled(!app);
        ui->pbDisapprova->setEnabled(app);

    }else
    {

        ui->pbApprova->setEnabled(false);
        ui->pbDisapprova->setEnabled(false);
      //  ui->pbPrint->setEnabled(app);
    }

    if(app )
    {
        ui->lblCheck->setPixmap(QPixmap(":/Resources/Accept64.png"));
    }
    else
    {
        ui->lblCheck->setPixmap(QPixmap(":/Resources/Pencil.PNG"));
    }




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
    if(ui->cbAll->isChecked()) return;

    QSqlQueryModel *mod=new QSqlQueryModel();

    // QSqlRelationalDelegate *rdel=new QSqlRelationalDelegate();
    QSqlQuery q(db);
    // QString sql="SELECT * FROM righe_produzione where IDProduzione=:id";
    QString sql="SELECT righe_produzione.ID,IDProduzione,num_riga,quantita,vaso_gr,specificaolio,idprodotto,prodotti.descrizione,olio,tappo,righe_produzione.idcliente,anagrafica.ragione_sociale,totale,sanificazione,numero_ordine,fresco,pastorizzato,allergeni,righe_produzione.note,lotto_scadenza,ricette.q_tot, righe_produzione.totale/ricette.q_tot as factor,lotti as 'Lotti produzione', vasi_prodotti as 'Vasi prodotti', completato as 'Completato'\
        FROM righe_produzione,prodotti,anagrafica,ricette\
        where ricette.ID_prodotto=prodotti.ID and prodotti.ID=righe_produzione.idprodotto and anagrafica.id=righe_produzione.idcliente and righe_produzione.IDProduzione=:id_p  order by num_riga asc;";
        q.prepare(sql);
    q.bindValue(":id_p",wsmod->index(ui->tvStorico->currentIndex().row(),0).data().toInt());

    QApplication::setOverrideCursor(Qt::WaitCursor);
    q.exec();

    qDebug()<<q.lastError().text();

    mod->setQuery(q);

    wpmod=convert_to_wp(mod);
    delete mod;

    QItemDelegate *rdel=new QItemDelegate();



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
    wpmod->setHeaderData(22,Qt::Horizontal,"Lotti prod.");
    wpmod->setHeaderData(23,Qt::Horizontal,"Vasi Prodotti");
    wpmod->setHeaderData(24,Qt::Horizontal,"Compl.");




    ui->tvGeneral->setColumnHidden(0,true);
    ui->tvGeneral->setColumnHidden(1,true);
    ui->cbshowrows->isChecked()?ui->tvGeneral->setColumnHidden(2,false):ui->tvGeneral->setColumnHidden(2,true);
    ui->tvGeneral->setColumnHidden(6,true);
    ui->tvGeneral->setColumnHidden(10,true);
    ui->tvGeneral->setColumnHidden(20,true);
    ui->tvGeneral->setColumnHidden(21,true);
    //ui->tvGeneral->setColumnHidden(24,true);
    ui->tvGeneral->setItemDelegate(rdel);
    ui->tvGeneral->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvGeneral->horizontalHeader()->stretchLastSection();
    ui->tvGeneral->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvGeneral->setEditTriggers(QAbstractItemView::SelectedClicked);
    ui->tvGeneral->setAcceptDrops(true);

    QApplication::restoreOverrideCursor();


    QPalette p = ui->tvGeneral->palette();
    p.setBrush(p.Inactive, p.Highlight, p.brush(p.Highlight));
    ui->tvGeneral->setPalette(p);





    // connect(ui->tvGeneral,SIGNAL())








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
    save(true);


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
    removeRow();
}


void HWorkProgram::on_tvGeneral_doubleClicked(const QModelIndex &index)
{


    if(dets)
    {
        getDetails();
    }
    else
    {
        showModRow();
    }


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

    if(pidrow<1)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Selezionare una riga",QMessageBox::Ok);
        return;
    }

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

        title=QDate::currentDate().toString("dd-MM-yyyy")+" QUANTITA\' INGREDIENTI NECESSARIE PER LAVORAZIONE TRA IL "+ui->deSearch->date().toString("dd-MM-yyyy")+" E IL "+ui->deSearchTo->date().toString("dd-MM-yyyy");
    }
    else
    {
        ui->pbDetails->isChecked()?title =QDate::currentDate().toString("dd-MM-yyyy")+"PROGRAMMA DI LAVORO - PRODUZIONE DEL "+ ui->deDal->date().toString("dd.MM.yyyy")+" - LINEA " + QString::number(linea)+" - QUANTITA\' INGREDIENTI" :title="PROGRAMMA DI LAVORO - PRODUZIONE DEL "+ ui->deDal->date().toString("dd.MM.yyyy")+" - LINEA " + QString::number(linea);
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

                if (column==15 || column==16 || column==24)
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



    HPDFPrint *f =new HPDFPrint(nullptr,strStream);

    QPageLayout::Orientation orientation;
    dets?orientation=QPageLayout::Portrait:orientation=QPageLayout::Landscape;
    f->set_orientation(orientation);
    f->show();


}

void HWorkProgram::get_sheet_details(const int p_id_produzione)
{


    QSqlQuery q(db);


    ui->tvGeneral->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->cbshowrows->setChecked(false);
    ui->cbshowrows->setEnabled(false);




    QString sql=QString();
    if (ui->cbAll->isChecked())
    {


        QSqlQueryModel *qmod=new QSqlQueryModel();

        // sql="select prodotti.ID,prodotti.descrizione,sum(righe_ricette.quantita) as q from ricette,righe_ricette,prodotti where ricette.ID=righe_ricette.ID_ricetta and prodotti.id=righe_ricette.ID_prodotto and  ricette.ID_prodotto in (SELECT distinct righe_produzione.idprodotto from fbgmdb260.righe_produzione where IDProduzione in (select id from produzione where dal between :dal and :al)) group by righe_ricette.ID_prodotto order by q desc";


        sql="select righe_ricette.ID_prodotto,righe_produzione.totale as rptot,ricette.q_tot as ricetteqtot,righe_produzione.totale/ricette.q_tot  as factor,i.ID,i.descrizione,righe_ricette.quantita * (righe_produzione.totale/ricette.q_tot) as res\
            from produzione,righe_produzione,ricette,righe_ricette,prodotti p,prodotti i\
                                                              where righe_produzione.IDProduzione=produzione.ID and righe_produzione.idprodotto=p.id and ricette.ID_prodotto=p.ID and righe_ricette.ID_ricetta=ricette.ID and righe_ricette.ID_prodotto=i.id and produzione.dal between :dal and :al";


        QDate dal=ui->deSearch->date();
        QDate al=ui->deSearchTo->date();

        q.prepare(sql);
        q.bindValue(":dal",dal);
        q.bindValue(":al",al);

        QApplication::setOverrideCursor(Qt::WaitCursor);

        q.exec();


        qmod->setQuery(q);
        process(qmod);
        // ui->tvGeneral->setModel(qmod);
        process(qmod);


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


        //ui->tvGeneral->setModel(qmod);
        process(qmod);

        for(int r=0;r<qmod->columnCount();++r)
        {
            ui->tvGeneral->setColumnHidden(r,false);
        }



        QApplication::restoreOverrideCursor();




    }


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


    }


    QVectorIterator<int>i(vp);



    while (i.hasNext())
    {
        double q=0.0;
        int pid=0;
        QString pro=QString();

        pid=i.next();



        for(int k=0;k<mod->rowCount();++k)
        {
            int lid=mod->index(k,0).data().toInt();


            if(lid==pid)
            {
                q+=mod->index(k,6).data().toDouble();
                pro=mod->index(k,5).data().toString();


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



void HWorkProgram::save(const bool show_dlg )
{



    bool b=false;
    bool go=false;

    int idriga,numriga=0;

    QSqlQuery q(db);
    QString sql=QString();

    if(show_dlg)
    {
        if(QMessageBox::question(this,QApplication::applicationName(),"Confermi il salvataggio?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok){ go=true;}
    }else{go=true;}

    if(!go)return;

    db.transaction();

    QApplication::setOverrideCursor(Qt::WaitCursor);


    sql=sql="UPDATE righe_produzione set num_riga=:num where id=:id";
    q.prepare(sql);


    for (int r=0;r<wpmod->rowCount();++r)
    {
        idriga=wpmod->index(r,0).data().toInt();
        numriga=ui->tvGeneral->verticalHeader()->visualIndex(r);
        sql="UPDATE righe_produzione set num_riga=:num where id=:id";

        q.prepare(sql);
        q.bindValue(":num",numriga+1);
        q.bindValue(":id",idriga);

        b= q.exec();

    }

    if(b){

        db.commit();

    }else{
        db.rollback();
    }



    ui->tvGeneral->setModel(nullptr);
    refreshSheet();
    QApplication::restoreOverrideCursor();
}

void HWorkProgram::rowaddb(const int row)
{


    QSqlQuery q(db);
    QString sql="INSERT INTO `fbgmdb260`.`righe_produzione`(`IDProduzione`,`num_riga`,`quantita`,`vaso_gr`,`specificaolio`,`idprodotto`,`olio`,`tappo`,`idcliente`,`totale`,`sanificazione`,`numero_ordine`,`fresco`,`pastorizzato`,`allergeni`,`note`,`lotti`,`lotto_scadenza`)\
                  VALUES\
                  (:IDProduzione,:num_riga,:quantita,:vaso_gr,:specificaolio,:idprodotto,:olio ,:tappo,:idc,:totale,:sanificazione,:numero_ordine,:fresco,:pastorizzato,:allergeni,:note, :lotti,:lotto_scadenza)";
                  q.prepare(sql);
    q.bindValue(":IDProduzione", wpmod->index(0,1).data().toInt());
    q.bindValue(":num_riga",wpmod->index(row,2).data().toString());
    q.bindValue(":quantita",wpmod->index(row,3).data().toDouble());
    q.bindValue(":vaso_gr",wpmod->index(row,4).data().toString());
    q.bindValue(":specificaolio",wpmod->index(row,5).data().toString());
    q.bindValue(":idprodotto",wpmod->index(row,6).data().toInt());
    q.bindValue(":olio",wpmod->index(row,8).data().toString());
    q.bindValue(":tappo",wpmod->index(row,9).data().toString());
    q.bindValue(":idc",wpmod->index(row,10).data().toString());
    q.bindValue(":totale",wpmod->index(row,12).data().toString());
    q.bindValue(":sanificazione",wpmod->index(row,13).data().toString());
    q.bindValue(":numero_ordine",wpmod->index(row,14).data(Qt::DisplayRole).toString());
    QString fl=QString();
    wpmod->index(row,15).data(Qt::CheckStateRole).toInt()>0?fl="1":fl="0";
    QString fp=QString();
    wpmod->index(row,16).data(Qt::CheckStateRole).toInt()>0?fp="1":fp="0";
    q.bindValue(":pastorizzato",fp);
    q.bindValue(":allergeni",wpmod->index(row,17).data().toString());
    q.bindValue(":note",wpmod->index(row,18).data().toString());
    q.bindValue(":lotto_scadenza",wpmod->index(row,(19)).data().toString());
    q.bindValue(":lotti",wpmod->index(row,22).data().toString());

    q.exec();


    refreshSheet();



}



void HWorkProgram::pasteRow()
{
    QList<QStandardItem*> cr;


    for(int r=0;r<rowcp.size();++r)
    {
        QStandardItem *it=new QStandardItem(rowcp.at(r)->data().toString());
        cr.append(it);
    }


    wpmod->appendRow(cr);



    wpmod->setData(wpmod->index(wpmod->rowCount()-1,1),wsmod->index(ui->tvStorico->currentIndex().row(),0).data().toInt());
    wpmod->setData(wpmod->index(wpmod->rowCount()-1,2),wpmod->rowCount());

    rowaddb(wpmod->rowCount()-1);


}

void HWorkProgram::modify_row()
{
    if(user->get_wp_u()>0) showModRow();
}

void HWorkProgram::removeRow(bool show)
{
    bool go=false;

    if(show)
    {


        if(QMessageBox::question(this,QApplication::applicationName(),"Rimuovere la riga selezionata?",QMessageBox::Ok|QMessageBox::Cancel|QMessageBox::Cancel)==QMessageBox::Ok)
        {
            go=true;
        }

    }else{

        go=true;
    }




    if(go)
    {   db.transaction();


        QSqlQuery q(db);
        QString sql="DELETE FROM righe_produzione WHERE ID=:id";
        int row= wpmod->index(ui->tvGeneral->currentIndex().row(),0).data(0).toInt();
        q.prepare(sql);
        q.bindValue(":id",row);
        q.exec();

        db.commit();
        refreshSheet();
        save();

        if(show)
            QMessageBox::information(this,QApplication::applicationName(),"Riga rimossa",QMessageBox::Ok);

    }
    else
    {
        db.rollback();
        if(show)
            QMessageBox::information(this,QApplication::applicationName(),"Cancellazione annullata",QMessageBox::Ok);

    }

}

void HWorkProgram::completeRows(int id,bool complete)
{
    QSqlQuery q(db);

    QString sql=QString();

    complete? sql="update righe_produzione set completato=1 where IDProduzione=:id_produzione": sql="update righe_produzione set completato=0 where IDProduzione=:id_produzione";


    q.prepare(sql);
    q.bindValue(":id_produzione",id);

    db.transaction();

   bool b= q.exec();
    if(QMessageBox::question(this,QApplication::applicationName(),"Confermare?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
       db.commit();

    }
    else
    {
        db.rollback();
    }

    if(b) refreshSheet();



}

void HWorkProgram::completeRow()
{
    QSqlQuery q(db);
    int idrow=wpmod->index(ui->tvGeneral->currentIndex().row(),0).data().toInt();

    QString sql=QString();

    sql="update righe_produzione set completato=1 where ID=:id_row";


    q.prepare(sql);
    q.bindValue(":id_row",idrow);

    db.transaction();

    bool b= q.exec();
    if(QMessageBox::question(this,QApplication::applicationName(),"Confermare?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        db.commit();

    }
    else
    {
        db.rollback();

    }

    if(b) refreshSheet();
}

void HWorkProgram::uncompleteRow()
{
    QSqlQuery q(db);
    int idrow=wpmod->index(ui->tvGeneral->currentIndex().row(),0).data().toInt();

    QString sql=QString();

    sql="update righe_produzione set completato=0 where ID=:id_row";


    q.prepare(sql);
    q.bindValue(":id_row",idrow);

    db.transaction();

    bool b= q.exec();
    if(QMessageBox::question(this,QApplication::applicationName(),"Confermare?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
    {
        db.commit();

    }
    else
    {
        db.rollback();
    }

    if(b) refreshSheet();
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

    ui->tvStorico->setCurrentIndex(current);
    ui->tvStorico->selectRow(current.row());

}


void HWorkProgram::on_pbDisapprova_clicked()
{
    QModelIndex current=ui->tvStorico->currentIndex();
    approve(false);

    ui->tvStorico->setCurrentIndex(current);
    ui->tvStorico->selectRow(current.row());
}

void HWorkProgram::showContextMenu(const QPoint &pos)
{
    if(dets)return;

    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(0);

    QAction *copyAction=new QAction("Copia la riga sotto il cursore");
    QAction *cutAction=new QAction("Taglia riga");
    QAction *pasteAction=new QAction("Incolla riga");
    QAction *editAction=new QAction("Modifica riga...");
    QAction *deleteAction=new QAction("Elimina riga");
    QAction *completeAction=new QAction("Completa riga");
    QAction *uncompleteAction=new QAction("elimina completamento riga");
    if(user->get_programmi_u()>0)menu->addAction(copyAction);
    if(user->get_programmi_u()>0)menu->addAction(cutAction);
    if(user->get_programmi_u()>0)menu->addAction(pasteAction);
    if(user->get_programmi_u()>0 || user->get_wp_u()>0)menu->addAction(editAction);
    if(user->get_programmi_u()>0)menu->addAction(completeAction);
    if(user->get_programmi_u()>0)menu->addAction(uncompleteAction);



    connect(copyAction,SIGNAL(triggered(bool)),this,SLOT(copyRow()));
    connect(cutAction,SIGNAL(triggered(bool)),this,SLOT(cutRow()));
    connect(pasteAction,SIGNAL(triggered(bool)),this,SLOT(pasteRow()));
    connect(editAction,SIGNAL(triggered(bool)),this,SLOT(modify_row()));
    connect(deleteAction,SIGNAL(triggered(bool)),this,SLOT(on_pbRemove_clicked()));
    connect(completeAction,SIGNAL(triggered(bool)),this,SLOT(completeRow()));
    connect(uncompleteAction,SIGNAL(triggered(bool)),this,SLOT(uncompleteRow()));


    menu->popup(globalPos);
}

void HWorkProgram::copyRow()
{

    int row=ui->tvGeneral->currentIndex().row();



    rowcp.clear();


    int inr=wpmod->rowCount();

    inr+=1;




    QStandardItem *rpid=new QStandardItem();
    QStandardItem *pid=new QStandardItem();
    QStandardItem *nr=new QStandardItem();
    QStandardItem *qt=new QStandardItem();
    QStandardItem *vg=new QStandardItem();
    QStandardItem *sol=new QStandardItem();
    QStandardItem *idpro=new QStandardItem();
    QStandardItem *prodesc=new QStandardItem();
    QStandardItem *olio=new QStandardItem();
    QStandardItem *tappo=new QStandardItem();
    QStandardItem *idclie=new QStandardItem();
    QStandardItem *clidesc=new QStandardItem();
    QStandardItem *kg=new QStandardItem();
    QStandardItem *san=new QStandardItem();
    QStandardItem *no=new QStandardItem();
    QStandardItem *fr=new QStandardItem();
    QStandardItem *pst=new QStandardItem();
    QStandardItem *alg=new QStandardItem();
    QStandardItem *note=new QStandardItem();
    QStandardItem *lotsca=new QStandardItem();
    QStandardItem *rqt=new QStandardItem();
    QStandardItem *factor=new QStandardItem();
    QStandardItem *lotti=new QStandardItem();

    rpid->setData(wpmod->index(row,0).data().toString());
    pid->setData(wpmod->index(row,1).data().toString());
    nr->setData(wpmod->index(row,2).data().toString());
    qt->setData(wpmod->index(row,3).data().toString());
    vg->setData(wpmod->index(row,4).data().toString());
    sol->setData(wpmod->index(row,5).data().toString());
    idpro->setData(wpmod->index(row,6).data().toString());
    prodesc->setData(wpmod->index(row,7).data().toString());
    olio->setData(wpmod->index(row,8).data().toString());
    tappo->setData(wpmod->index(row,9).data().toString());
    idclie->setData(wpmod->index(row,10).data().toString());
    clidesc->setData(wpmod->index(row,11).data().toString());
    kg->setData(wpmod->index(row,12).data().toString());
    san->setData(wpmod->index(row,13).data().toString());
    no->setData(wpmod->index(row,14).data().toString());
    fr->setData(wpmod->index(row,15).data(Qt::CheckStateRole).toInt());
    pst->setData(wpmod->index(row,16).data(Qt::CheckStateRole).toInt());
    alg->setData(wpmod->index(row,17).data().toString());
    note->setData(wpmod->index(row,18).data().toString());
    lotsca->setData(wpmod->index(row,19).data().toString());
    rqt->setData(wpmod->index(row,20).data().toString());
    factor->setData(wpmod->index(row,21).data().toString());
    lotti->setData(wpmod->index(row,22).data().toString());


    rpid->setDropEnabled(false);
    pid->setDropEnabled(false);
    nr->setDropEnabled(false);
    qt->setDropEnabled(false);
    vg->setDropEnabled(false);
    sol->setDropEnabled(false);
    idpro->setDropEnabled(false);
    prodesc->setDropEnabled(false);
    olio->setDropEnabled(false);
    tappo->setDropEnabled(false);
    idclie->setDropEnabled(false);
    clidesc->setDropEnabled(false);
    kg->setDropEnabled(false);
    san->setDropEnabled(false);
    no->setDropEnabled(false);
    fr->setDropEnabled(false);
    pst->setDropEnabled(false);
    alg->setDropEnabled(false);
    note->setDropEnabled(false);
    lotsca->setDropEnabled(false);
    rqt->setDropEnabled(false);
    factor->setDropEnabled(false);
    lotti->setDropEnabled(false);


    rowcp<<rpid<<pid<<nr<<qt<<vg<<sol<<idpro<<prodesc<<olio<<tappo<<idclie<<clidesc<<kg<<san<<no<<fr<<pst<<alg<<note<<lotsca<<rqt<<factor<<lotti;



}

void HWorkProgram::cutRow()
{
    copyRow();
    removeRow(false);
}







void HWorkProgram::on_pbDetails_clicked()
{
    dets=true;
    disable_fof_details(true);

    int id_produzione=wsmod->index(ui->tvStorico->currentIndex().row(),0).data(0).toInt();
    if(ui->cbAll->isChecked())
       get_sheet_details(-1);
    else
      get_sheet_details(id_produzione);

    ui->tvGeneral->setSortingEnabled(true);

    /*  ui->pbAdd->setEnabled(false);
    ui->pbModify->setEnabled(false);
    ui->pbRemove->setEnabled(false);*/
    ui->cbshowrows->setChecked(false);
    ui->cbshowrows->setEnabled(false);

}


void HWorkProgram::on_pbSingleSheet_clicked()
{
    disable_fof_details(false);


    dets=false;
    ui->tvGeneral->setSortingEnabled(false);
    refreshSheet();
    ui->cbAll->setChecked(false);

    bool enable=false;

    /*if(user->get_programmi_u()>0)
    {
        ui->pbAdd->setEnabled(user->get_wp_u());
        ui->pbModify->setEnabled(user->get_wp_u());
        ui->pbCopy->setEnabled(user->get_wp_u());
        ui->pbPaste->setEnabled(user->get_wp_u());
        ui->pbRemove->setEnabled(user->get_wp_u());
    }*/

    ui->pbAdd->setEnabled(user->get_programmi_u()>0);
    ui->pbModify->setEnabled(user->get_wp_u()>0);
    ui->pbCopy->setEnabled(user->get_programmi_u()>0);
    ui->pbPaste->setEnabled(user->get_programmi_u()>0);
    ui->pbRemove->setEnabled(user->get_programmi_u()>0);

    //ui->cbshowrows->setChecked(true);
    ui->cbshowrows->setEnabled(true);





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
            it->setDropEnabled(false);
            row.append(it);
        }

        wmod->appendRow(row);
    }


    return wmod;


}



void HWorkProgram::on_pbCopy_clicked()
{
    copyRow();
}


void HWorkProgram::on_pbPaste_clicked()
{
    pasteRow();
    save();
}

void HWorkProgram::getDetails(double tot_ricetta)
{


    int idpr=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),0).data(Qt::DisplayRole).toInt();
    QString ingrediente=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),1).data(Qt::DisplayRole).toString();
    int idproduzione=ui->tvStorico->model()->index(ui->tvStorico->currentIndex().row(),0).data().toInt();
    double tot=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),6).data().toDouble();

    QSqlQueryModel *mod=new QSqlQueryModel();
    QSqlQuery q(db);

    QDate dal=ui->deSearch->date();
    QDate al=ui->deSearchTo->date();





    QString sql=QString();
    if(ui->cbAll->isChecked()){

        sql="select  produzione.dal,p.ID, p.descrizione,@t:=righe_produzione.totale ,ricette.q_tot,@per:=(righe_ricette.quantita/ricette.q_tot)*100,FORMAT(@t*(@per/100),2)\
            from prodotti p,prodotti i,produzione,righe_produzione,ricette,righe_ricette\
                                                           where righe_produzione.IDProduzione=produzione.ID\
                                                                 and righe_produzione.idprodotto=p.id\
                                                                 and ricette.ID_prodotto=p.ID\
                                                                 and righe_ricette.ID_ricetta=ricette.ID\
                                                                 and righe_ricette.ID_prodotto=i.id\
                                                                 and i.ID="+ QString::number(idpr)+"\
                                                             and produzione.dal BETWEEN '"+dal.toString("yyyy-MM-dd")+"' and '"+al.toString("yyyy-MM-dd")+"'";
        q.prepare(sql);



    }
    else
    {
        // sql="select p.descrizione from produzione,righe_produzione,ricette,righe_ricette,prodotti p,prodotti i where righe_produzione.IDProduzione=produzione.ID and righe_produzione.idprodotto=p.id and ricette.ID_prodotto=p.ID and righe_ricette.ID_ricetta=ricette.ID and i.ID=:pid and righe_ricette.ID_prodotto=i.id group by i.ID, righe_ricette.ID_ricetta";
        /*  sql=" select p.ID, p.descrizione\
           from produzione,righe_produzione,ricette,righe_ricette,prodotti p,prodotti i\
             where righe_produzione.IDProduzione=produzione.ID and righe_produzione.idprodotto=p.id and ricette.ID_prodotto=p.ID and righe_ricette.ID_ricetta=ricette.ID and i.ID="+QString::number(idpr)+" and righe_ricette.ID_prodotto=i.id\
      and produzione.ID ="+QString::number(idproduzione)+" group by i.ID, righe_ricette.ID_ricetta";*/
        sql="select  produzione.dal,p.ID, p.descrizione,@t:=righe_produzione.totale ,ricette.q_tot,@per:=(righe_ricette.quantita/ricette.q_tot)*100,FORMAT(@t*(@per/100),2)\
            from prodotti p,prodotti i,produzione,righe_produzione,ricette,righe_ricette\
                                                           where righe_produzione.IDProduzione=produzione.ID\
                                                                 and righe_produzione.idprodotto=p.id\
                                                                 and ricette.ID_prodotto=p.ID\
                                                                 and righe_ricette.ID_ricetta=ricette.ID\
                                                                 and righe_ricette.ID_prodotto=i.id\
                                                                 and i.ID="+ QString::number(idpr)+"\
                                                                 and produzione.ID="+QString::number(idproduzione);
                                                             q.prepare(sql) ;

    }

    q.exec(sql);
    mod->setQuery(q);
   // qDebug()<<sql;


    QStandardItemModel *modst=new QStandardItemModel();




    for (int r=0;r<mod->rowCount();r++)
    {
        //row.clear();
        QList<QStandardItem*>row;


        QStandardItem *pdata;
        QStandardItem *pid;
        QStandardItem *pdesc;
        QStandardItem *puse;


        QList<QStandardItem*> matched_rows=modst->findItems(mod->index(r,0).data().toString());

        if(matched_rows.size()==0)
        {
            pdata=new  QStandardItem(mod->index(r,0).data().toDate().toString("dd-MM-yyyy"));
            pid=new  QStandardItem(QString::number(mod->index(r,1).data().toInt()));
            pdesc=new QStandardItem(mod->index(r,2).data().toString());
            puse=new QStandardItem(mod->index(r,6).data().toString());

            row<<pdata<<pid<<pdesc<<puse;
            modst->appendRow(row);




        }
        else
        {
            double val=0.0;
            val=modst->index(r-1,2).data().toDouble()+mod->index(r,5).data().toDouble();
            modst->setData(modst->index(r-1,2), val);


        }


    }



    modst->setHeaderData(0,Qt::Horizontal,"DATA");
    modst->setHeaderData(1,Qt::Horizontal,"ID");
    modst->setHeaderData(2,Qt::Horizontal,"PRODOTTO");
    modst->setHeaderData(3,Qt::Horizontal,"QUANTITA\' INGREDIENTE");






    HProgTable *f=new HProgTable(modst,ingrediente,QDate::currentDate().toString("dd-MM-yyyy")+" RICETTE CON USO INGREDIENTE ["+ ingrediente+"] -TOTALE: "+QString::number(tot,'f',2));
    f->show();



}


void HWorkProgram::on_cbAll_toggled(bool checked)
{
    if(checked)
    {
        ui->cbshowrows->setChecked(false);
        ui->cbshowrows->setEnabled(false);
        on_pbDetails_clicked();
    }else{

        ui->cbshowrows->setChecked(false);
        ui->cbshowrows->setEnabled(true);
        on_pbSingleSheet_clicked();

    }

    disable_fof_details(checked);

}


void HWorkProgram::on_pbCutRow_clicked()
{
    cutRow();
}

void HWorkProgram::disable_fof_details(bool disable)
{
    if(disable)
    {



            ui->pbAdd->setEnabled(false);
            ui->pbModify->setEnabled(false);
            ui->pbCopy->setEnabled(false);
            ui->pbPaste->setEnabled(false);
            ui->pbCutRow->setEnabled(false);
            ui->pbRemove->setEnabled(false);
    }
    else
    {
        if(user->get_programmi_u()>0)
        {
            ui->pbAdd->setEnabled(true);
            ui->pbModify->setEnabled(user->get_wp_u()>0);
            ui->pbCopy->setEnabled(true);
            ui->pbPaste->setEnabled(true);
            ui->pbCutRow->setEnabled(true);
            ui->pbRemove->setEnabled(true);
        }
    }

}


void HWorkProgram::on_pbComplete_clicked()
{
    int idp =-1;
    idp = wsmod->index(ui->tvStorico->currentIndex().row(),0).data().toInt();
    completeRows(idp,true);
}


void HWorkProgram::on_pbNotComplete_clicked()
{
    int idp =-1;
    idp = wsmod->index(ui->tvStorico->currentIndex().row(),0).data().toInt();
    completeRows(idp,false);
}


void HWorkProgram::on_pbCompleteRow_clicked()
{
    int idrow=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),0).data(0).toInt();
    if(idrow<1)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Selezionare una riga",QMessageBox::Ok);
        return;
    }
    completeRow();
}


void HWorkProgram::on_pbUncompleteRow_clicked()
{
    int idrow=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),0).data(0).toInt();
    if(idrow<1)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Selezionare una riga",QMessageBox::Ok);
        return;
    }
    uncompleteRow();
}

