#include "hlotti_new.h"
#include "ui_hlotti_new.h"
#include "hquerymodel_lotti.h"
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

#include <QSortFilterProxyModel>



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
    ui->cbProduct->completer()->setCompletionColumn(1);
    ui->cbProduct->completer()->setCompletionMode(QCompleter::PopupCompletion);

    QLocale loc;
    ui->tvLotti->setLocale(loc);

    ui->tvLotti->setColumnHidden(0,true);
    loadLotsData();

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

void HLotti_new::loadLotsData()
{
    HQueryModel_lotti * local_mod=new HQueryModel_lotti();
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
    qDebug()<<q.lastError().text();



    local_mod->setQuery(q);
    QSortFilterProxyModel *proxy=new QSortFilterProxyModel();
    proxy->setSourceModel(local_mod);
    ui->tvLotti->setModel(proxy);

}







void HLotti_new::on_deFrom_userDateChanged(const QDate &date)
{
   // ui->tvLotti->setColumnHidden(0,true);
    loadLotsData();
}


void HLotti_new::on_deTo_userDateChanged(const QDate &date)
{
   // ui->tvLotti->setColumnHidden(0,true);
   loadLotsData();

}


void HLotti_new::on_pbClose_clicked()
{
    close();
}


void HLotti_new::on_tvLotti_doubleClicked(const QModelIndex &index)
{
    int idlotto=ui->tvLotti->model()->index(ui->tvLotti->currentIndex().row(),0).data(0).toInt();

    HModifyLot *f=new HModifyLot(idlotto,user,db);
    connect(f,SIGNAL(sig_updated_lot()),this,SLOT(refresh_data()));
    f->show();
}


void HLotti_new::on_pbLotInfo_clicked()
{
    int idlotto=ui->tvLotti->model()->index(ui->tvLotti->currentIndex().row(),0).data(0).toInt();
    if(idlotto<1)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Selezionare una riga",QMessageBox::Ok);
        return;
    }
    HModifyLot *f=new HModifyLot(idlotto,user,db);
    connect(f,SIGNAL(sig_updated_lot()),this,SLOT(refresh_data()));
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
    loadLotsData();
}


void HLotti_new::on_cbType_currentIndexChanged(int index)
{
    loadLotsData();
}

void HLotti_new::print(bool pdf)
{
    QString strStream;


    QTextStream out(&strStream);

    const int rowCount = ui->tvLotti->model()->rowCount();
    const int columnCount = ui->tvLotti->model()->columnCount();

    QString title="Lotti dal "+ui->deFrom->date().toString("dd-MM-yyyy")+" al "+ ui->deTo->date().toString("dd-MM-yyyy");

    //   qDebug()<<filename;

    out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table border=1 cellspacing=0 cellpadding=2>\n";

    out << "<thead><tr bgcolor='lightyellow'><th colspan='9'>"+ title +"</th></tr>";
    // headers
    out << "<tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tvLotti->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tvLotti->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {

        bool colorred=false;
        if(ui->tvLotti->model()->data(ui->tvLotti->model()->index(row, 8)).toInt()<=0)
        {
            colorred=true;
        }


        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tvLotti->isColumnHidden(column)) {
                QString data = ui->tvLotti->model()->data(ui->tvLotti->model()->index(row, column)).toString()/*.simplified()*/;

                QString color = QString();
                if(colorred)
                {
                    color="<td bgcolor='orange'>%1</td>";
                }
                else
                {
                   color="<td bgcolor='white'>%1</td>";
                }

                 out << QString(color).arg((!data.isEmpty()) ? data : QString("&nbsp;"));

            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
            "</body>\n"
            "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

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
            lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note AS 'NOTE'\
                    FROM lotdef,prodotti,anagrafica, tipi_lot\
                    WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and prodotti.bio >0 and lotdef.tipo=:tipo and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
            return lots_query;
        }

        if(tipo<0 && prodotto>-1)
        {
            lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note as 'NOTE'\
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

            lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note as 'NOTE'\
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
        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note AS 'NOTE'\
                FROM lotdef,prodotti,anagrafica, tipi_lot\
                WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.tipo=:tipo and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
        return lots_query;
    }

    //USO SOLO IL PRODOTTO

    if(tipo<0 && prodotto>-1)
    {
        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note as 'NOTE'\
                FROM lotdef,prodotti,anagrafica, tipi_lot WHERE prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.prodotto=:prodotto and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
        return lots_query;
    }

    //USO TIPO LOTTO E PRODOTTI

    if(tipo>-1 && prodotto > -1)
    {

        lots_query="SELECT lotdef.ID as 'ID',lotdef.lot AS 'LOTTO INTERNO',lotdef.data AS 'DATA',prodotti.descrizione as 'PRODOTTO',anagrafica.ragione_sociale AS 'CLIENTE',tipi_lot.descrizione AS 'TIPO',lotdef.lot_fornitore as 'LOTTO FORNITORE',lotdef.scadenza AS 'SCADENZA',lotdef.giacenza as 'GIACENZA',lotdef.note as 'NOTE'\
                from lotdef,prodotti,anagrafica, tipi_lot where prodotti.ID=lotdef.prodotto AND anagrafica.ID=lotdef.anagrafica and tipi_lot.ID=lotdef.tipo and lotdef.tipo=:tipo and lotdef.prodotto=:prodotto and lotdef.data BETWEEN :dfrom AND :dto ORDER BY lotdef.data DESC";
         return lots_query;
    }

    qDebug()<<lots_query;


    return lots_query;
}


HQueryModel_lotti* HLotti_new::getProducts()
{
    QSqlQuery q(db);
    HQueryModel_lotti *mod=new HQueryModel_lotti();
    QString sql="select ID,descrizione FROM prodotti ORDER BY descrizione asc;";

    q.prepare(sql);
    q.exec();
    mod->setQuery(q);

    return mod;



}


void HLotti_new::on_cbProduct_currentIndexChanged(int index)
{
   loadLotsData();
}


void HLotti_new::on_ckbUseProduct_toggled(bool checked)
{
   loadLotsData();
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
    QAction *deleteLot=menu->addAction("Elimina il lotto");


    // connect(detailsAction,SIGNAL(triggered(bool)),this,SLOT(getDetails()));
    connect(copyAction,SIGNAL(triggered(bool)),this,SLOT(copyField()));
    //  connect(editAction,SIGNAL(triggered(bool)),this,SLOT(editLot()));
    connect(bioAction,SIGNAL(triggered(bool)),this,SLOT(datiBio()));
    connect(deleteLot,SIGNAL(triggered(bool)),this,SLOT(on_pbDelete_clicked()));



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
        loadLotsData();
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
       // bool ba=false;



        HQueryModel_lotti* cmod=new HQueryModel_lotti();

        if (QMessageBox::question(this,QApplication::applicationName(),"Attenzione erranno eliminate tuitte le referenze a quasto lotto\nin composizione e operazioni\nOperazione irreversibile, procedere?",QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok)
        {
            QApplication::setOverrideCursor(Qt::WaitCursor);

            sql="delete from operazioni where IDlotto=:id";
            q.prepare(sql);
            q.bindValue(":id",idlotto);
            q.exec();

            sql="delete from lotdef where ID=:id";
            q.prepare(sql);
            q.bindValue(":id",idlotto);

            db.transaction();
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

    QApplication::restoreOverrideCursor();



}


void HLotti_new::on_chb_bio_toggled(bool checked)
{

     loadLotsData();
}





void HLotti_new::on_le_search_returnPressed()
{
    loadLotsData();
     //ui->le_search->setText(QString());
}

void HLotti_new::refresh_data()
{
     qDebug()<<"REFRESC";
     loadLotsData();
}


void HLotti_new::on_pbToPdf_clicked()
{
     print(true);
}

