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



HWorkProgram::HWorkProgram(HUser *p_user,QSqlDatabase p_db,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HWorkProgram)
{
    ui->setupUi(this);
    user=p_user;
    db=p_db;

    getSheets(true);
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
    ui->pbModify->setEnabled(user->get_programmi_u()>0);
    ui->pbApprova->setEnabled(user->get_programmi_u()>0);
    ui->pbDisapprova->setEnabled(user->get_programmi_u()>0);
    ui->pbPrint->setEnabled(user->get_programmi_u()>0);

    /* this->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));*/
    connect(ui->tvStorico->selectionModel(),SIGNAL(currentChanged(QModelIndex,QModelIndex)),this,SLOT(storicoindexchange()));

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

    if(create){
        wsmod=new HWorkSheetModel(0,db);
        wsmod->setTable("produzione");
        wsmod->setSort(1,Qt::DescendingOrder);
        wsmod->select();
        ui->tvStorico->setModel(wsmod);
        ix=wsmod->index(0,0);
        ui->tvStorico->setCurrentIndex(ix);
        if(wsmod->rowCount()>0)
        {
            ui->tvStorico->selectRow(0);
            emit ui->tvStorico->clicked(ui->tvStorico->model()->index(ix.row(),ix.column()));
            refreshSheet();

        }

    }
    else
    {
        ix=ui->tvStorico->currentIndex();
        wsmod->select();
        ui->tvStorico->setCurrentIndex(ix);
        ui->tvStorico->selectRow(ix.row());
        emit ui->tvStorico->clicked(ui->tvStorico->model()->index(ix.row(),ix.column()));
        refreshSheet();
    }


    ui->tvStorico->setColumnHidden(0,true);
    ui->tvStorico->setColumnHidden(2,true);
    ui->tvStorico->setColumnHidden(4,true);
    //ui->tvStorico->horizontalHeader()->setStretchLastSection(true);
    for (int i=0;i<6;++i)
    {
        ui->tvStorico->horizontalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents);
    }
    ui->tvGeneral->verticalHeader()->setSectionsMovable(true);
    if (ui->tvGeneral->model()->rowCount()>0)
    {
        ui->tvGeneral->selectRow(0);
    }
    QPalette p = ui->tvStorico->palette();
    p.setBrush(p.Inactive, p.Highlight, p.brush(p.Highlight));
    ui->tvStorico->setPalette(p);

    qDebug()<<wsmod->lastError().text()<<wsmod->query().lastQuery();


}

void HWorkProgram::approve(bool approve)
{
    qDebug()<<"approve";
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






void HWorkProgram::on_tvStorico_clicked(const QModelIndex &index)
{

    id=ui->tvStorico->model()->index(index.row(),0).data(0).toInt();
    ui->deDal->setDate(ui->tvStorico->model()->index(index.row(),1).data(0).toDate());
    ui->deAl->setDate(ui->tvStorico->model()->index(index.row(),2).data(0).toDate());
    ui->spLinea->setValue(ui->tvStorico->model()->index(index.row(),3).data(0).toInt());
    bool app=ui->tvStorico->model()->index(index.row(),5).data(0).toInt()>0?true:false;
    /*ui->pbApprova->setEnabled(!app);
    ui->pbDisapprova->setEnabled(app);
    ui->pbPrint->setEnabled(app);*/

    if(app )
    {
        ui->lblCheck->setPixmap(QPixmap(":/Resources/Accept64.png"));
    }
    else
    {
        ui->lblCheck->setPixmap(QPixmap(":/Resources/Pencil.PNG"));
    }

    /* ui->pbAdd->setEnabled(!app);
    ui->pbModify->setEnabled(!app);
    ui->pbRemove->setEnabled(!app);
    ui->cbshowrows->setEnabled(!app);*/

    if(!user->get_programmi_u()>0)
    {
        ui->pbAdd->setEnabled(false);
        ui->pbModify->setEnabled(false);
        ui->pbRemove->setEnabled(false);
        ui->cbshowrows->setEnabled(false);
        ui->pbApprova->setEnabled(false);
        ui->pbDisapprova->setEnabled(false);

    }

    ui->pbDetails->isChecked()? get_sheet_details():refreshSheet();
   // refreshSheet();




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
        ui->cbshowrows->setEnabled(false);
        ui->pbApprova->setEnabled(false);
        ui->pbDisapprova->setEnabled(false);

    }

    refreshSheet();
}

void HWorkProgram::refreshSheet()
{
    wpmod=0;
    wpmod = new HWorkProgramDetailModel();
    ui->tvGeneral->setModel(wpmod);
    // QSqlRelationalDelegate *rdel=new QSqlRelationalDelegate();
    QSqlQuery q(db);
    // QString sql="SELECT * FROM righe_produzione where IDProduzione=:id";
    QString sql="SELECT righe_produzione.ID,IDProduzione,num_riga,quantita,vaso_gr,specificaolio,idprodotto,prodotti.descrizione,olio,tappo,righe_produzione.idcliente,anagrafica.ragione_sociale,totale,sanificazione,numero_ordine,fresco,pastorizzato,allergeni,righe_produzione.note,lotto_scadenza\
        FROM righe_produzione,prodotti,anagrafica\
                      where prodotti.ID=righe_produzione.idprodotto and anagrafica.id=righe_produzione.idcliente and righe_produzione.IDProduzione=:id";
                                                                                                                                         q.prepare(sql);
    q.bindValue(":id",wsmod->index(ui->tvStorico->currentIndex().row(),0).data().toInt());

    q.exec();
    qDebug()<<q.lastError().text();
    wpmod->setQuery(q);

    QItemDelegate *rdel=new QItemDelegate();

    ui->tvGeneral->setModel(wpmod);
    ui->tvGeneral->setColumnHidden(0,true);
    ui->tvGeneral->setColumnHidden(1,true);
    ui->tvGeneral->setColumnHidden(2,true);
    ui->tvGeneral->setItemDelegate(rdel);
    ui->tvGeneral->resizeColumnsToContents();
    ui->tvGeneral->horizontalHeader()->stretchLastSection();
    ui->tvGeneral->verticalHeader()->setVisible(true);
    setHeaders();


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
    refreshSheet();

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


    qDebug()<<q.lastQuery()<<newrow<<oldrow;

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

    refreshSheet();
    ui->cbshowrows->setChecked(false);

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
    if (!ui->cbshowrows->isChecked()) showModRow();
}

void HWorkProgram::on_pbModify_clicked()
{
    showModRow();
}

void HWorkProgram::showModRow()
{
    int pid=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),1).data(0).toInt();
    int currentrow=ui->tvGeneral->model()->index(ui->tvGeneral->currentIndex().row(),2).data(0).toInt();

    HModifyRow *f=new HModifyRow(pid,currentrow,user,db);
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

}

void HWorkProgram::on_pbPrint_clicked()
{
    print(false);

}

void HWorkProgram::print(bool pdf)
{

    QString strStream;

    QAbstractItemModel *mod=ui->tvGeneral->model();

    QTextStream out(&strStream);
    QString bgcol=QString();
    QString title=QString();
    int linea=ui->spLinea->value();

    const int rowCount = mod->rowCount();
    const int columnCount = mod->columnCount();
    ui->pbDetails->isChecked()?title ="PROGRAMMA DI LAVORO - PRODUZIONE DEL "+ ui->deDal->date().toString("dd.MM.yyyy")+" - LINEA " + QString::number(linea)+" - QUANTITA\' INGREDIENTI" :title="PROGRAMMA DI LAVORO - PRODUZIONE DEL "+ ui->deDal->date().toString("dd.MM.yyyy")+" - LINEA " + QString::number(linea);

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
        qDebug()<<row;
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

    QPrinter::Orientation orientation;
    ui->pbDetails->isChecked()?orientation=QPrinter::Portrait:orientation=QPrinter::Landscape;
    f->set_orientation(orientation);
    f->show();


}

void HWorkProgram::get_sheet_details(const int p_id_produzione)
{

    QSqlQueryModel *qmod=new QSqlQueryModel();
    vmod= new QStandardItemModel();
    int id_produzione=wsmod->index(ui->tvStorico->currentIndex().row(),0).data(0).toInt();
    QSqlQuery q(db);
      QString sql="select distinct prodotti.ID,prodotti.descrizione,sum(righe_ricette.quantita) from ricette,righe_ricette,prodotti where ricette.ID=righe_ricette.ID_ricetta and prodotti.id=righe_ricette.ID_prodotto and  ricette.ID_prodotto in (SELECT distinct righe_produzione.idprodotto from fbgmdb260.righe_produzione where IDProduzione=:id_p)group by righe_ricette.ID_prodotto";
   // QString sql="select distinct prodotti.ID,prodotti.descrizione,sum(righe_ricette.quantita) from ricette,righe_ricette,prodotti where ricette.ID=righe_ricette.ID_ricetta and prodotti.id=righe_ricette.ID_prodotto and  ricette.ID_prodotto in (SELECT distinct righe_produzione.idprodotto from fbgmdb260.righe_produzione where IDProduzione in (SELECT id from produzione WHERE dal between :dal and :al))group by righe_ricette.ID_prodotto";
   // dal=ui->deDal->date().toString("yyyy-MM-dd");
   // al=ui->deAl->date().toString("yyyy-MM-dd");*/
    q.prepare(sql);
    q.bindValue(":id_p",id_produzione);
   /* q.bindValue(":dal",ui->deDal->date());
    q.bindValue(":al",ui->deAl->date());*/
    q.exec();
    qmod->setQuery(q);

    QList<QStandardItem*>row;

    //dafare
    double q_to_do=0.0;
    for(int wpr=0;wpr<wpmod->rowCount();++wpr)
    {
        q_to_do += wpmod->index(wpr,12).data(0).toDouble();


    }
    //sommarigherricetta
    double tot_ricetta=0.0;
    for (int qr=0;qr<qmod->rowCount();++qr)
    {
        tot_ricetta+=qmod->index(qr,2).data(0).toDouble();
    }


    double factor= q_to_do/tot_ricetta;

    qDebug()<<"factor"<<factor<<q.lastError().text()<<q.lastQuery();

    for(int qx=0;qx<qmod->rowCount();++qx)
    {
        row.clear();

        //   factor =dafare/sommarighe
        double t_q=qmod->index(qx,2).data().toDouble();

        double q=t_q * factor;

        // QStandardItem *idprodotto=new  QStandardItem(qmod->index(qx,0).data().toString());
        QStandardItem* descprodotto=new QStandardItem(qmod->index(qx,1).data().toString());
        QStandardItem *quantprodotto=new QStandardItem(QString::number(q,'f',3));

        //   row.append(idprodotto);
        row.append(descprodotto);
        row.append(quantprodotto);


        vmod->appendRow(row);


    }

    vmod->setHeaderData(0,Qt::Horizontal,"INGREDIENTE");
    vmod->setHeaderData(1,Qt::Horizontal,"QUANTITA' TOTALE PRODUZIONE");

    ui->tvGeneral->setModel(vmod);
    ui->tvGeneral->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tvGeneral->setColumnHidden(0,false);
    ui->tvGeneral->setColumnHidden(1,false);
    ui->tvGeneral->verticalHeader()->setVisible(false);
    /*ui->tvGeneral->setColumnHidden(2,false);*/







}


void HWorkProgram::on_checkBox_toggled(bool checked)
{
    ui->tvStorico->setVisible(!checked);
}

void HWorkProgram::on_pbDeleteSheet_clicked()
{
    deleteSheet();
    getSheets();
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
        qDebug()<<static_cast<QSqlTableModel*>(ui->tvStorico->model())->filter();
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

void HWorkProgram::copyRow()
{
    QMimeData *row_data=new QMimeData();


}


void HWorkProgram::on_pbDetails_clicked()
{

}


void HWorkProgram::on_pbDetails_toggled(bool checked)
{
    if(checked)
    {
        int  id=-1;
        ui->pbDetails->setText("Panoramica");

        id=ui->tvStorico->model()->index(ui->tvStorico->currentIndex().row(),0).data(0).toInt();
        get_sheet_details(id);
    }
    else
    {
        ui->pbDetails->setText("Dettagli");
        ui->tvGeneral->setModel(wpmod);
    }
}

