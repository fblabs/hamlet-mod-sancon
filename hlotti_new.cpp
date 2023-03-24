#include "hlotti_new.h"
#include "ui_hlotti_new.h"
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QTextStream>
#include <QPrinter>
#include <QFileDialog>
#include <QMessageBox>
#include <QSqlRecord>
#include <QCursor>
#include "hprint.h"
#include "hmodifylot.h"
#include <QCompleter>
#include "huser.h"
#include <QDesktopServices>
#include <QShortcut>
#include <QMenu>
#include <QClipboard>
#include "hbiodetails.h"
#include <QDebug>


HLotti_new::HLotti_new(QSqlDatabase pdb, HUser *p_user, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HLotti_new)
{
    ui->setupUi(this);

    user=p_user;
    db=pdb;

    user->get_lotti_u()>0?ui->pbDelete->setEnabled(true):ui->pbDelete->setEnabled(false);

    ui->deFrom->setDate(QDate::currentDate().addMonths(-1));
    ui->deTo->setDate(QDate::currentDate());
    getLotTypes();
    ui->cbProduct->setModel(getProducts());
    ui->cbProduct->setModelColumn(1);

    ui->tvLotti->setColumnHidden(0,true);
    ui->tvLotti->setModel(loadLotsData());

    QModelIndex index=ui->tvLotti->model()->index(0,0);
    if(index.isValid())  ui->tvLotti->selectionModel()->setCurrentIndex(index,QItemSelectionModel::Select);
    ui->tvLotti->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    this->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));
    //connect(det,SIGNAL(activated()),this,SLOT(getDetails()));



}

HLotti_new::~HLotti_new()
{
    delete ui;
}

QSqlQueryModel* HLotti_new::loadLotsData()
{
    QSqlQueryModel * local_mod=new QSqlQueryModel();
    QString sql=QString();

    int tipo=-1;
    int prodotto=-1;



    if(ui->ckbUseType->isChecked())
    {
        tipo=ui->cbType->model()->index(ui->cbType->currentIndex(),0).data(0).toInt();
    }
    if (ui->ckbUseProduct->isChecked())
    {
        prodotto=ui->cbProduct->model()->index(ui->cbProduct->currentIndex(),0).data(0).toInt();
    }


    sql=buildLotsQuery(tipo,prodotto);
    qDebug()<<sql;


    QSqlQuery q(db);
    q.prepare (sql);


    if(ui->le_search->text().length()>0)
    {
          q.bindValue(":src",QString("%1%").arg(ui->le_search->text()));
    }
            else
    {

            q.bindValue(":tipo",tipo);
            q.bindValue(":prodotto",prodotto);
            q.bindValue(":dfrom",ui->deFrom->date());
            q.bindValue(":dto",ui->deTo->date().addDays(+1));
    }


    q.exec();

    qDebug()<<q.lastError();

    local_mod->setQuery(q);
    return local_mod;
}







void HLotti_new::on_deFrom_userDateChanged(const QDate &date)
{
    ui->tvLotti->setColumnHidden(0,true);
    ui->tvLotti->setModel(loadLotsData());
}


void HLotti_new::on_deTo_userDateChanged(const QDate &date)
{
    ui->tvLotti->setColumnHidden(0,true);
    ui->tvLotti->setModel(loadLotsData());

}


void HLotti_new::on_pbClose_clicked()
{
    close();
}


void HLotti_new::on_tvLotti_doubleClicked(const QModelIndex &index)
{
    int idlotto=ui->tvLotti->model()->index(ui->tvLotti->currentIndex().row(),0).data(0).toInt();

    HModifyLot *f=new HModifyLot(idlotto,user,db);
    //   connect(f,SIGNAL(updatedLot()),this,SLOT(updateTableView()));
    f->show();
}


void HLotti_new::on_pbLotInfo_clicked()
{
    int idlotto=ui->tvLotti->model()->index(ui->tvLotti->currentIndex().row(),0).data(0).toInt();
    HModifyLot *f=new HModifyLot(idlotto,user,db);
    f->show();
}

void HLotti_new::getLotTypes()
{
    QSqlTableModel *type_mod=new QSqlTableModel(nullptr,db);
    type_mod->setTable("tipi_lot");
    type_mod->select();
    ui->cbType->setModel(type_mod);
    ui->cbType->setModelColumn(1);

}


void HLotti_new::on_ckbUseType_toggled(bool checked)
{
    ui->tvLotti->setModel(loadLotsData());
}


void HLotti_new::on_cbType_currentIndexChanged(int index)
{
    ui->tvLotti->setModel(loadLotsData());
}

void HLotti_new::print()
{
    QString strStream;


    QTextStream out(&strStream);

    const int rowCount = ui->tvLotti->model()->rowCount();
    const int columnCount = ui->tvLotti->model()->columnCount();

    QString title="Lotti dal "+ui->deFrom->date().toString("dd-MM-yyyy")+" al "+ ui->deTo->date().toString("dd-MM-yyyy");

    //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='5'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tvLotti->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tvLotti->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tvLotti->isColumnHidden(column)) {
                QString data = ui->tvLotti->model()->data(ui->tvLotti->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
            "</body>\n"
            "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    bool pdf=true; //magic!

    if (pdf)
    {
        QString filename;

        // qDebug()<<"filename="<<filename;
        filename= QFileDialog::getSaveFileName(this,"Scegli il nome del file",QString(),"Pdf (*.pdf)");

        if (filename.isEmpty() && filename.isNull()){
            //  qDebug()<<"annullato";
            return;
        }

        QPrinter printer;
        printer.setOrientation(QPrinter::Landscape);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(filename);

        document->print(&printer);

        delete document;

        QDesktopServices::openUrl(filename);
    }else{

        HPrint *f =new HPrint();
        f->setHtml(strStream);
        f->show();

    }



}

void HLotti_new::on_pbPrint_clicked()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    print();
    QApplication::setOverrideCursor(Qt::ArrowCursor);
}

QString HLotti_new::buildLotsQuery(int tipo,int prodotto)
{
    QString lots_query=QString();

    //NON USO NE' TIPO LOTTO NE' PRODOTTo

    if(ui->le_search->text().length()>0)
    {

            lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore AS 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note as 'NOTE'\
                    from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto\
                    AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.lot LIKE :src ORDER BY lotdef.data DESC";
            return lots_query;
    }



    if(ui->chb_bio->isChecked())
    {
        if(tipo>-1 && prodotto<0)
        {
            lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.giacenza as 'GIACENZA',lotdef.scadenza AS 'SCADENZA',lotdef.note AS 'NOTE'\
                    FROM lotdef,prodotti,anagrafica, tipi_lot\
                    WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and prodotti.bio >0 and lotdef.tipo=:tipo and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
            return lots_query;
        }

        if(tipo<0 && prodotto>-1)
        {
            lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.giacenza as 'GIACENZA',lotdef.scadenza AS 'SCADENZA',lotdef.note as 'NOTE'\
                    FROM lotdef,prodotti,anagrafica, tipi_lot WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and prodotti.bio>0 and lotdef.prodotto=:prodotto and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
            return lots_query;
        }

        if(tipo<0 && prodotto<0)
        {
            lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore AS 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note as 'NOTE'\
                    from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto\
                    AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and prodotti.bio>0 and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
            return lots_query;
        }
        if(tipo>-1 && prodotto > -1)
        {
            qDebug()<<"TIPO E PRODOTTO";
            lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.giacenza as 'Giacenza',lotdef.scadenza AS 'SCADENZA',lotdef.note as 'NOTE'\
                    from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and prodotti.bio>0 and lotdef.tipo=:tipo and lotdef.prodotto=:prodotto and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
             return lots_query;
        }


        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore AS 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note as 'NOTE'\
                from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto\
                AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and prodotti.bio>0 and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
        return lots_query;


    }

    if(tipo<0 && prodotto<0)
    {
        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore AS 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note as 'NOTE'\
                from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto\
                AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
        return lots_query;
    }

    // USO SOLO IL TIPO LOTTO

    if(tipo>-1 && prodotto<0)
    {
        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.giacenza as 'GIACENZA',lotdef.scadenza AS 'SCADENZA',lotdef.note AS 'NOTE'\
                FROM lotdef,prodotti,anagrafica, tipi_lot\
                WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.tipo=:tipo and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
        return lots_query;
    }

    //USO SOLO IL PRODOTTO

    if(tipo<0 && prodotto>-1)
    {
        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.giacenza as 'GIACENZA',lotdef.scadenza AS 'SCADENZA',lotdef.note as 'NOTE'\
                FROM lotdef,prodotti,anagrafica, tipi_lot WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.prodotto=:prodotto and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
        return lots_query;
    }

    //USO TIPO LOTTO E PRODOTTI

    if(tipo>-1 && prodotto > -1)
    {

        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.giacenza as 'Giacenza',lotdef.scadenza AS 'SCADENZA',lotdef.note as 'NOTE'\
                from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.tipo=:tipo and lotdef.prodotto=:prodotto and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
         return lots_query;
    }



    return lots_query;
}


QSqlQueryModel* HLotti_new::getProducts()
{
    QSqlQuery q(db);
    QSqlQueryModel *mod=new QSqlQueryModel();
    QString sql="select ID,descrizione FROM prodotti ORDER BY descrizione asc;";

    q.prepare(sql);
    q.exec();
    mod->setQuery(q);

    return mod;



}


void HLotti_new::on_cbProduct_currentIndexChanged(int index)
{
    ui->tvLotti->setModel(loadLotsData());
}


void HLotti_new::on_ckbUseProduct_toggled(bool checked)
{
    ui->tvLotti->setModel(loadLotsData());
}


void HLotti_new::on_tvLotti_customContextMenuRequested(const QPoint &pos)
{
    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(0);

    // QAction *detailsAction=menu->addAction("Composizione/uso lotto");
    // menu->addSeparator();
    //  QAction *copyAction=menu->addAction("Copia il testo sotto il cursore");
    /*  QAction *editAction=menu->addAction("Modifica/Copia dati ...");
    QAction *bioAction=menu->addAction("Dati Biologici ...");*/


    // connect(detailsAction,SIGNAL(triggered(bool)),this,SLOT(getDetails()));
    // connect(copyAction,SIGNAL(triggered(bool)),this,SLOT(copyField()));

}

void HLotti_new::showContextMenu(const QPoint &pos)
{
    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(0);

    //  QAction *detailsAction=menu->addAction("Composizione/uso lotto");
    menu->addSeparator();
    QAction *copyAction=menu->addAction("Copia il testo sotto il cursore");
    //  QAction *editAction=menu->addAction("Modifica/Copia dati ...");
    QAction *bioAction=menu->addAction("Dati Biologici ...");


    // connect(detailsAction,SIGNAL(triggered(bool)),this,SLOT(getDetails()));
    connect(copyAction,SIGNAL(triggered(bool)),this,SLOT(copyField()));
    //  connect(editAction,SIGNAL(triggered(bool)),this,SLOT(editLot()));
    connect(bioAction,SIGNAL(triggered(bool)),this,SLOT(datiBio()));



    menu->popup(globalPos);
}

void HLotti_new::copyField()
{
    QString field=ui->tvLotti->currentIndex().data(0).toString();
    QClipboard *clipboard= QApplication::clipboard();
    clipboard->setText(field);
}

void HLotti_new::datiBio()
{
    int pidlotto=ui->tvLotti->model()->index(ui->tvLotti->currentIndex().row(),0).data(0).toInt();

    HBioDetails *f=new HBioDetails(pidlotto,db);
    f->show();
}


void HLotti_new::on_pbDelete_clicked()
{

    if (QMessageBox::question(this,QApplication::applicationName(),"Confermare eliminazione lotto?",QMessageBox::Ok| QMessageBox::Cancel)==QMessageBox::Ok)
    {
        int id=ui->tvLotti->model()->index(ui->tvLotti->currentIndex().row(),0).data(0).toInt();
        deleteLot(id);
        QModelIndex ix=ui->tvLotti->currentIndex();
        ui->tvLotti->setModel(loadLotsData());
        ui->tvLotti->setCurrentIndex(ix);
    }
}

void HLotti_new::deleteLot(const int p_id)
{

    int idlotto=p_id;


    QSqlQuery q(db);
    QString sql="SELECT COUNT(id) FROM operazioni WHERE IDlotto=:idlot";
    q.prepare(sql);
    q.bindValue(":idlot",QVariant(idlotto));
    bool b=q.exec();
    q.next();
    bool ok=false;
    int cnt=q.value(0).toInt(&ok);
    if(cnt>1)
    {
        if(QMessageBox::warning(this,QApplication::applicationName(),"Attenzione, il lotto è già stato movimentato. Impossibile cancellare",QMessageBox::Ok)==QMessageBox::Ok)
        {
            return;
        }

    }
    else
    {
        bool ba=false;
        db.transaction();

        QSqlQueryModel* cmod=new QSqlQueryModel();
        sql= "select operazione from composizione_lot where id_lotto=:idlot";
        q.prepare(sql);
        q.bindValue(":idlot",QVariant(idlotto));
        q.exec();
        cmod->setQuery(q);



        sql="delete from composizione_lot where id_lotto=:idlot";

        q.prepare(sql);
        q.bindValue(":idlot",QVariant(idlotto));

        ba=q.exec();

        qDebug()<<"delete from composizione"<<q.lastError().text();

        for(int r=0; r<cmod->rowCount();r++)
        {
            sql="delete FROM operazioni WHERE id =:idrow";
            q.prepare(sql);
            q.bindValue(":idrow",QVariant(cmod->record(r).value(r)));
            ba=q.exec();
        }

        //qDebug()<<q.lastQuery()<<q.lastError().text()<<q.boundValue(0).toString();

        if(!ba)
        {
            //qDebug()<<q.lastError().text();
            db.rollback();
            QMessageBox::warning(this,QApplication::applicationName(),"Attenzione,impossibile cancellare il lotto in quanto già utilizzato",QMessageBox::Ok);
            return;
        }
        if (QMessageBox::question(this,QApplication::applicationName(),"Confermare cancellazione?\nAttenzione operazione irreversibile",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
        {
            sql="delete from operazioni where IDlotto=:id";
            q.prepare(sql);
            q.bindValue(":id",idlotto);
            q.exec();

            sql="delete from lotdef where ID=:id";
            q.prepare(sql);
            q.bindValue(":id",idlotto);

            bool k=q.exec();
            if(k){
                db.commit();
                QMessageBox::information(this,QApplication::applicationName(),"Lotto cancellato",QMessageBox::Ok);
            }
            else
            {
                db.rollback();
                QMessageBox::warning(this,QApplication::applicationName(),"Attenzione! Errore eliminando il lotto\n"+q.lastError().text(),QMessageBox::Ok);
            }

        }else{
            db.rollback();
            QMessageBox::information(this,QApplication::applicationName(),"Cancellazione lotto annullata",QMessageBox::Ok);
        }



    }




}


void HLotti_new::on_chb_bio_toggled(bool checked)
{

     ui->tvLotti->setModel(loadLotsData());
}





void HLotti_new::on_le_search_returnPressed()
{
     ui->tvLotti->setModel(loadLotsData());
     //ui->le_search->setText(QString());
}

