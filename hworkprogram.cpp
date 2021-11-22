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
#include "hprint.h"
#include <QHeaderView>
#include <QLocale>
#include <QTextTable>
#include "hnewsheet.h"
#include <QDate>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QStandardItem>



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
    if(!user->getCanUpdate())
    {
        ui->pbSave->setEnabled(false);
        ui->pbNewSheet->setEnabled(false);
        ui->pbDeleteSheet->setEnabled(false);
        ui->pbAdd->setEnabled(false);
        ui->pbRemove->setEnabled(false);
        ui->pbModify->setEnabled(false);
        ui->pbApprova->setEnabled(false);
        ui->pbDisapprova->setEnabled(false);

    }

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
        qDebug()<<datedal<<dateal<<q.lastQuery();
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
    ui->tvStorico->horizontalHeader()->setStretchLastSection(true);
    ui->tvGeneral->verticalHeader()->setSectionsMovable(true);
    if (ui->tvGeneral->model()->rowCount()>0)
    {
        ui->tvGeneral->selectRow(0);
    }





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


}






void HWorkProgram::on_tvStorico_clicked(const QModelIndex &index)
{

    id=ui->tvStorico->model()->index(index.row(),0).data(0).toInt();
    qDebug()<<id<<ui->tvStorico->model()->index(index.row(),5).data(0).toInt();
    ui->deDal->setDate(ui->tvStorico->model()->index(index.row(),1).data(0).toDate());
    ui->deAl->setDate(ui->tvStorico->model()->index(index.row(),2).data(0).toDate());
    ui->spLinea->setValue(ui->tvStorico->model()->index(index.row(),3).data(0).toInt());
    bool app=ui->tvStorico->model()->index(index.row(),5).data(0).toInt()>0?true:false;
    ui->pbApprova->setEnabled(!app);
    ui->pbDisapprova->setEnabled(app);
    ui->pbPrint->setEnabled(app);
    if(app)
    {
        ui->lblCheck->setPixmap(QPixmap(":/Resources/Accept64.png"));
    }
    else
    {
       ui->lblCheck->setPixmap(QPixmap(":/Resources/Pencil.PNG"));
    }

    ui->pbAdd->setEnabled(!app);
    ui->pbModify->setEnabled(!app);
    ui->pbRemove->setEnabled(!app);
    ui->cbshowrows->setEnabled(!app);

    refreshSheet();




}

void HWorkProgram::refreshSheet()
{
    wpmod=0;
    wpmod = new HWorkProgressModel(0,db);
    ui->tvGeneral->setModel(wpmod);
    QSqlRelationalDelegate *rdel=new QSqlRelationalDelegate();
    wpmod->setTable("righe_produzione");
    wpmod->setFilter("idproduzione="+QString::number(id));

    wpmod->setRelation(1,QSqlRelation("produzione","ID","ID"));
    wpmod->setRelation(6,QSqlRelation("prodotti","ID","descrizione"));
    wpmod->setRelation(9,QSqlRelation("anagrafica","ID","ragione_sociale"));
    wpmod->setSort(2,Qt::AscendingOrder);
    wpmod->select();
    ui->tvGeneral->setModel(wpmod);
    ui->tvGeneral->setColumnHidden(0,true);
    ui->tvGeneral->setColumnHidden(1,true);
    ui->tvGeneral->setColumnHidden(2,true);
    ui->tvGeneral->setItemDelegate(rdel);
    //ui->tvGeneral->resizeColumnsToContents();
    ui->tvGeneral->horizontalHeader()->stretchLastSection();
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
    wpmod->submitAll();
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
        wpmod->removeRow(ui->tvGeneral->currentIndex().row());
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
    wpmod->setHeaderData(6,Qt::Horizontal,QObject::tr("Prodotto"));
    wpmod->setHeaderData(7,Qt::Horizontal,QObject::tr("Olio"));
    wpmod->setHeaderData(8,Qt::Horizontal,QObject::tr("Tappo"));
    wpmod->setHeaderData(9,Qt::Horizontal,QObject::tr("Cliente"));
    wpmod->setHeaderData(10,Qt::Horizontal,QObject::tr("Kg"));
    wpmod->setHeaderData(11,Qt::Horizontal,QObject::tr("Sanificazione"));
    wpmod->setHeaderData(12,Qt::Horizontal,QObject::tr("Num. Ordine"));
    wpmod->setHeaderData(13,Qt::Horizontal,QObject::tr("Fresco"));
    wpmod->setHeaderData(14,Qt::Horizontal,QObject::tr("Pastorizzato"));
    wpmod->setHeaderData(15,Qt::Horizontal,QObject::tr("Allergeni"));
    wpmod->setHeaderData(16,Qt::Horizontal,QObject::tr("Note)"));
    wpmod->setHeaderData(17,Qt::Horizontal,QObject::tr("Lotto - Scadenza"));

}

void HWorkProgram::on_pbPrint_clicked()
{
    print(ui->cbPdf->isChecked());

}

void HWorkProgram::print(bool pdf)
{
    qDebug()<<pdf;
    if (pdf)
    {
        QString strStream;
        QString filename=QFileDialog::getSaveFileName(0,"Scegli nome del file",QString(),"Pdf (*.pdf)");
        if(filename.isEmpty() || filename.isNull())
        {
            qDebug()<<filename<<"cancellato";
            return;
        }
        QTextStream out(&strStream);
        QString bgcol=QString();
        QString title=QString();
        int linea=ui->spLinea->value();

        const int rowCount = ui->tvGeneral->model()->rowCount();
        const int columnCount = ui->tvGeneral->model()->columnCount();
        title ="PROGRAMMA DI LAVORO - PRODUZIONE DEL "+ ui->deDal->date().toString("dd.MM.yyyy")+" - LINEA " + QString::number(linea);

        out <<  "<html>\n<head>\n<meta Content=\"Text/html; charset=Windows-1251\">\n"<< "</head>\n<body bgcolor=#ffffff link=#5000A0>\n<table width=100% border=1 cellspacing=0 cellpadding=2>\n";

        // headers
        QStringList coltit=QStringList();
        coltit <<""<<""<<""<< "Q.tà"<<"P.PROD"<<"P.OLIO"<<"PRODOTTO"<<"OLIO"<<"TAPPO"<<"CLIENTE"<<"Kg"<<"SAN."<<"ORD."<<"FR."<<"PAST."<<"ALG."<<"NOTE"<<"LOT/SCADENZA";


       out << "<thead><tr bgcolor='#5cabff'><th colspan='15'>"+ title +"</th></tr><tr bgcolor='lightgrey'>";


        for (int column = 0 ; column < columnCount; column++)
        {


                if (!ui->tvGeneral->isColumnHidden(column))
                {

                out << QString("<th>%1</th>").arg(coltit.at(column));
                }

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
                    QString data = ui->tvGeneral->model()->index(row, column).data().toString().simplified();

                    if (column==13 || column==14)
                    {

                          out << QString("<td bgcolor='"+bgcol+"' align='center'>%1</td>").arg((ui->tvGeneral->model()->index(row,column).data(Qt::CheckStateRole)==Qt::Checked)? QString("[X]") : QString("&nbsp;"));

                    }
                    else if(column==15)
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


        QTextDocument *document = new QTextDocument();
        document->setHtml(strStream);


        QPrinter printer;
        printer.setOrientation(QPrinter::Landscape);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(filename);

        document->print(&printer);

        delete document;


    }
    else
    {

            HPrint *f=new HPrint(0,true);
            f->toggleImageUI(false);
            f->setFontSize(9);

            f->showMaximized();


            int c=0;
            int r=0;

            int dcols=wpmod->columnCount();
            int drows=wpmod->rowCount();

            int cols=dcols-3;
            int rows=drows+2;

            QTextTableFormat tf;
            tf.setHeaderRowCount(2);

            QTextTable* table=f->addTable(rows,cols,tf);



            QString txt="";
            QStringList titles;

            table->mergeCells(0,0,1,15);

            QTextCharFormat titleformat;
            titleformat.setVerticalAlignment(QTextCharFormat::AlignMiddle);
            titleformat.setFontWeight(QFont::Bold);
            titleformat.setBackground(QColor("lightblue"));

            QString title="PROGRAMMA DI LAVORO - PRODUZIONE DEL "+ ui->deDal->date().toString("dd.MM.yyyy") + " - LINEA "+QString::number(ui->tvStorico->model()->index(ui->tvStorico->selectionModel()->currentIndex().row(),3).data(0).toInt());
            f->writeTableContent(table,0,0,titleformat,title);

            QTextCharFormat format;
            format.setFontPointSize(7);
            format.setBackground(QColor("white"));






            titles<<" Q.tà "<<" P. PROD "<<"P. OLIO "<<" PRODOTTO "<<"OLIO"<<"TAPPO"<<"CLIENTE"<<"KG"<<"SAN."<<"ORD."<<"FR."<<"PAST."<<"ALG."<<"NOTE"<<"LOT/SCAD";
            titleformat.setBackground(QColor("lightgrey"));

            for (c=0;c<cols;c++)
            {

               txt=titles.at(c);
               f->writeTableContent(table,1,c,titleformat,txt);

            }

            format.setFontWeight(QFont::Light);



            for (r=2;r<rows;r++)
            {
                 qDebug()<<r<<rows;
                if(r%2)
                {
                    format.setBackground(QColor("lightgreen"));
                }else{

                    format.setBackground(QColor("white"));
                }

                int cp=0;
                int rp=0;

                for(c=0;c<cols;c++)
                {
                    cp=c+3;
                    rp=r-2;

                    txt=wpmod->index(rp,cp).data(0).toString();




                    if(cp==9)
                    {
                        if(txt.length()>30){
                            QString tmp=txt;
                            txt=tmp.mid(0,30)+"...";
                        }
                    }
                    if(cp==10)
                    {
                        QModelIndex tix=wpmod->index(rp,cp);

                        bool ok=false;
                        int tot=tix.data(0).toInt(&ok);

                        if(ok)
                        {

                          f->writeTableContent(table,r,c,format,QString::number(tot));
                        }

                      //  format.setBackground(QColor("white"));


                    }
                    else if(cp==13)
                    {
                        QModelIndex ixf=wpmod->index(rp,cp);

                        int fx=ixf.data(Qt::CheckStateRole).toInt();

                        QString frescotxt="";
                        if (fx>0)
                        {frescotxt="X";}

                        f->writeTableContent(table,r,c,format,frescotxt);

                    }
                    else if(cp==14)
                    {
                        QModelIndex ixp=wpmod->index(rp,cp);

                        int px=ixp.data(Qt::CheckStateRole).toInt();

                        qDebug()<<QString::number(px);


                        QString ptxt="";

                        if(px>0)
                        {ptxt="X";}

                        f->writeTableContent(table,r,c,format,ptxt);
                    }
                    else if(cp==15)
                    {
                         f->writeTableContentRed(table,r,c,format,txt);
                    }
                    else
                    {
                        qDebug()<<cp<<txt;

                        f->writeTableContent(table,r,c,format,txt);
                    }



                }


            }


            f->show();

   }
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

