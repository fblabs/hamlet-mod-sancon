#include "hnschede.h"
#include "ui_hnschede.h"
#include "hmodimage.h"
#include <QFileDialog>
#include <QMessageBox>

#include <QCompleter>

#include <QImageReader>
#include <QTextBlock>
#include <QPrinter>

#include <QSqlQuery>
#include <QSqlError>

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QShortcut>
#include <QMenu>
#include <QDebug>
#include <QPrintDialog>
#include <QPrintPreviewDialog>
#include <QFontDialog>
#include "hcopycard.h"




HNSChede::HNSChede(QWidget *parent, HUser *pusr, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HNSChede)
{
    ui->setupUi(this);
    db=pdb;
    usr=pusr;
    changed=false;

    bool upd=usr->getCanUpdate();

    ui->lblLed->setVisible(false);

    if (!upd)
    {
        ui->pbsave->setVisible(upd);
        ui->textEdit->setReadOnly(upd);
        ui->pushButton_8->setEnabled(upd);
        ui->pushButton_7->setEnabled(upd);
        ui->pushButton_9->setEnabled(upd);
        ui->pbsave->setEnabled(upd);
        ui->pbInit->setEnabled(upd);


    }

    QShortcut *shortcut =new QShortcut(QKeySequence("Ctrl+I"),this);
    QShortcut *modimg=new QShortcut(QKeySequence("Ctrl+alt+I"),this);

   // QShortcut *shortcutsave =new QShortcut(QKeySequence("Ctrl+S"),this);
    QShortcut *printCard = new QShortcut(QKeySequence("Ctrl+P"),this);
    QShortcut *printPreviewCard = new QShortcut(QKeySequence("Ctrl+Alt+P"),this);
    connect(shortcut,SIGNAL(activated()),this,SLOT(insertImage()));
   // connect(shortcutsave,SIGNAL(activated()),this,SLOT(saveCard()));
    connect(printCard,SIGNAL(activated()),this,SLOT(print()));
    connect (printPreviewCard,SIGNAL(activated()),this,SLOT(printPreviewSlot()));
    connect(modimg,SIGNAL(activated()),this,SLOT(showResizeImage()));






    QPrinter printer(QPrinter::HighResolution);

    printer.setPaperSize(QPrinter::A4);

    ui->textEdit->document()->setPageSize(printer.pageRect().size());

    QSqlTableModel *clientmod =new QSqlTableModel(0,db);
    clientmod->setTable("anagrafica");
    clientmod->setFilter("cliente=1");
    clientmod->setSort(1,Qt::AscendingOrder);
    clientmod->select();

    ui->cbClienti->setModel(clientmod);
    ui->cbClienti->setModelColumn(1);
    QCompleter *cc = new QCompleter(clientmod);
    cc->setCaseSensitivity(Qt::CaseInsensitive);
    cc->setCompletionColumn(1);
    cc->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbClienti->setCompleter(cc);
    ui->cbClienti->setCurrentIndex(-1);

  //  ui->pushButton_9->setEnabled(false);




    connect(ui->cbClienti,SIGNAL(currentIndexChanged(QString)),this,SLOT(getProducts()));
    connect(ui->cbProdotti,SIGNAL(currentIndexChanged(int)),this,SLOT(loadCard()));
    ui->cbClienti->setCurrentIndex(0);

    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));
    connect(ui->textEdit->document(),SIGNAL(contentsChanged()),this,SLOT(documentChanged()));



}

void HNSChede::documentChanged()
{
    changed=true;

}

void HNSChede::print()
{

     QPrinter *printer=new QPrinter(QPrinter::HighResolution);

     printer->setPageSize(QPrinter::A4);

     QPrintDialog   dialog( printer);

     if (dialog.exec()==QDialog::Accepted)
     {
         ui->textEdit->print(printer);

     }
}

void HNSChede::getProducts()
{
       disconnect(ui->cbProdotti,SIGNAL(currentIndexChanged(int)),this,SLOT(loadCard()));

        int  cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();

        QString query="SELECT ricette.ID_prodotto, prodotti.descrizione FROM ricette, prodotti WHERE prodotti.ID=ricette.ID_prodotto AND ricette.ID IN (SELECT ID_ricetta FROM associazioni WHERE ID_cliente=:id and visualizza=1)order by prodotti.descrizione";
        QSqlQuery q(db);
        q.prepare(query);
        q.bindValue(":id",QVariant(cliente));
        q.exec();

        QSqlQueryModel *qrm=new QSqlQueryModel();


        qrm->setQuery(q);

        ui->cbProdotti->setModel(qrm);
        ui->cbProdotti->setModelColumn(1);


        QCompleter *cp = new QCompleter(qrm);
        cp->setCaseSensitivity(Qt::CaseInsensitive);
        cp->setCompletionColumn(1);
        cp->setCompletionMode(QCompleter::PopupCompletion);
        ui->cbProdotti->setCompleter(cp);

        ui->cbProdotti->setCurrentIndex(-1);
        connect(ui->cbProdotti,SIGNAL(currentIndexChanged(int)),this,SLOT(loadCard()));
        ui->cbProdotti->setCurrentIndex(0);


      //  ui->pushButton_9->setEnabled(ui->pushButton_8->isChecked());



      //  connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));

}

HNSChede::~HNSChede()
{
    delete ui;
}


void HNSChede::insertImage()
{
    QString file = QFileDialog::getOpenFileName(this,"Seleziona immagine",QDir::currentPath(),"JPEG (*.jpg)\nPNG (*.png)\nBMP (*.bmp)");
    QUrl uri =QUrl::fromLocalFile(file);
    QImage img(file);
     ui->textEdit->document()->addResource(QTextDocument::ImageResource,uri,QVariant(img));
   // QImage img =QImageReader(file).read();




    QTextImageFormat imgfmt;

    imgfmt.setWidth(img.width());
    imgfmt.setHeight(img.height());
    imgfmt.setName(uri.toString());
    ui->textEdit->textCursor().insertImage(imgfmt);

}

void HNSChede::on_pushButton_2_clicked()
{
  print();
}


bool HNSChede::saveCard()
{
    QString document=ui->textEdit->document()->toHtml();

    int cliente,prodotto;

    cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    prodotto=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();

    qDebug()<<"savecard: "<<prodotto<<cliente<<QString::number(update);



    QSqlQuery q(db);
    QString sql;

            if(!update)
            {
            sql= "INSERT INTO schede_n (prodotto,cliente,scheda) values (:prodotto,:cliente,:scheda)";
            }
            else
            {
            sql="update schede_n set scheda=:scheda where prodotto=:prodotto and cliente=:cliente ";
            }

    q.prepare(sql);
    q.bindValue(":prodotto",prodotto);
    q.bindValue(":cliente",cliente);
    q.bindValue(":scheda",document);

    bool b=q.exec();

    qDebug()<<"savecard: "<<q.lastError().text()<<cliente<<prodotto<<QString::number(update);
    return b;
}

void HNSChede::loadCard()
{
    int cliente,prodotto;

    update=false;

    changed=false;

    cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    prodotto = ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();




     qDebug()<<"loadCard: "<<cliente<<prodotto;


    QSqlQuery q(db);
    QString sql="SELECT scheda FROM schede_n WHERE prodotto=:prodotto AND cliente=:cliente";
    q.prepare(sql);
    q.bindValue(":prodotto",prodotto);
    q.bindValue(":cliente",cliente);

    if(q.exec())
    {
    if(q.size()>0)
    {
        update=true;
    }else
    {
        update=false;
    }
    ui->pbInit->setEnabled(!update);
  //  ui->pushButton_9->setEnabled(!update);
    q.first();
    QString doc =q.value(0).toString();

    ui->textEdit->document()->setHtml(doc);
   // QMessageBox::warning(this,QApplication::applicationName(),"Doc:\n"+doc,QMessageBox::Ok);

    }
    else
    {
        update=false;
        QMessageBox::warning(this,QApplication::applicationName(),"Errore:\n"+q.lastError().text(),QMessageBox::Ok);
    }

    changed=false;

    qDebug()<<"Update "<<QString::number(update);

}

void HNSChede::on_pbsave_clicked()
{
    bool b=saveCard();

    if (!b)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore",QMessageBox::Ok);
    }
    else
    {
       changed=false;
       QMessageBox::information(this,QApplication::applicationName(),"Scheda salvata",QMessageBox::Ok);
       ui->pushButton_8->toggle();
    }
}

void HNSChede::on_pbClose_clicked()
{
    if(changed)
    {
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Salvare le modifiche?",QMessageBox::Ok|QMessageBox::Cancel))
    {
       bool b=saveCard();

       if (!b)
       {
           QMessageBox::warning(this,QApplication::applicationName(),"Errore",QMessageBox::Ok);
       }
       else
       {
          changed=false;
          QMessageBox::information(this,QApplication::applicationName(),"Scheda salvata",QMessageBox::Ok);
       }

    }
    else
    {
        close();
    }
    }
    else
    {
        close();
    }
}

void HNSChede::resizeImage(int nw, int nh)
{
    QTextBlock currentBlock = ui->textEdit->textCursor().block();
    QTextBlock::iterator it;


        for (it = currentBlock.begin(); !(it.atEnd()); ++it)
        {

                 QTextFragment fragment = it.fragment();

                 if (fragment.isValid())
                 {

                     if(fragment.charFormat().isImageFormat ())
                     {
                          QTextImageFormat newImageFormat = fragment.charFormat().toImageFormat();

                          qDebug()<<newImageFormat.name();



                          newImageFormat.setWidth(nw);
                          newImageFormat.setHeight(nh);



                          if (newImageFormat.isValid())
                          {

                              QTextCursor helper = ui->textEdit->textCursor();

                              helper.setPosition(fragment.position());
                              helper.setPosition(fragment.position() + fragment.length(),
                                                  QTextCursor::KeepAnchor);
                              helper.setCharFormat(newImageFormat);
                          }
                      }
                  }
           }

}

int HNSChede::getImageWidth()
{
    QTextBlock currentBlock = ui->textEdit->textCursor().block();
    QTextBlock::iterator it;

    int val=-1;


        for (it = currentBlock.begin(); !(it.atEnd()); ++it)
        {

                 QTextFragment fragment = it.fragment();

                 if (fragment.isValid())
                 {
                                   qDebug()<< fragment.charFormat().ImageObject;
                     if(fragment.charFormat().isImageFormat ())
                     {
                          QTextImageFormat newImageFormat = fragment.charFormat().toImageFormat();

                          val= newImageFormat.width();

                      }
                  }
           }

    return val;
}

int HNSChede::getImageHeight()
{
    QTextBlock currentBlock = ui->textEdit->textCursor().block();
    QTextBlock::iterator it;

    int val=-1;


        for (it = currentBlock.begin(); !(it.atEnd()); ++it)
        {

                 QTextFragment fragment = it.fragment();

                 if (fragment.isValid())
                 {

                     if(fragment.charFormat().isImageFormat ())
                     {
                          QTextImageFormat newImageFormat = fragment.charFormat().toImageFormat();
                          val = newImageFormat.height();

                      }
                  }
         }

        return val;
}

void HNSChede::showContextMenu(const QPoint &pos)
{
    QPoint globalPos =mapToGlobal(pos);
    QMenu *menu=new QMenu(this);
    QAction *addImage=menu->addAction("Aggiungi Immagine...");
    QAction *modimage=menu->addAction("Modifica immagine...");
    QAction *addSeparator =menu->addSeparator();
 //   QAction *saveScheda = menu->addAction("Salva Scheda");
    QAction *addSeparator2 =menu->addSeparator();
    QAction *printPrev = menu->addAction("Anteprima di stampa...");
  //  QAction *close = menu->addAction("Close");

    connect(addImage,SIGNAL(triggered(bool)),this,SLOT(insertImage()));
    connect(modimage,SIGNAL(triggered(bool)),this,SLOT(showResizeImage()));
 //   connect(saveScheda,SIGNAL(triggered(bool)),this,SLOT(saveCard()));
 //   connect(close,SIGNAL(triggered(bool)),this,SLOT(on_pbClose_clicked()));
    connect(printPrev,SIGNAL(triggered(bool)),this,SLOT(printPreviewSlot()));

    menu->popup(globalPos);
}

void HNSChede::printPreviewSlot()
{
    QPrinter lprinter(QPrinter::HighResolution);
    lprinter.setPaperSize(QPrinter::A4);
    QPrintPreviewDialog *dlg=new QPrintPreviewDialog(&lprinter);
    connect(dlg,SIGNAL(paintRequested(QPrinter*)),this,SLOT(printPreview(QPrinter*)));
    dlg->exec();
}

void HNSChede::showResizeImage()
{
    int w=getImageWidth();
    int h=getImageHeight();

    if ( w==-1 && h==-1)
    {
        return;
    }

    HModImage *f=new HModImage(0,w,h);
    connect(f,SIGNAL(execResize(int,int)),this,SLOT(resizeImage(int,int)));
    f->show();
}

void HNSChede::printPreview(QPrinter *printer)
{
    ui->textEdit->print(printer);
}

void HNSChede::setBold()
{

    QTextCursor cursor=ui->textEdit->textCursor();
    QTextCharFormat currentFormat=cursor.charFormat();

    if(!cursor.charFormat().font().bold())
    {
        qDebug()<<"not bold";
        currentFormat.setFontWeight(QFont::Bold);
       // cursor.charFormat().setFontWeight(QFont::Bold);

    }else
    {
        qDebug()<<"bold";
        currentFormat.setFontWeight(QFont::Normal);



    }

    cursor.mergeCharFormat(currentFormat);




}

void HNSChede::setEvidence()
{
    QTextCursor cursor=ui->textEdit->textCursor();
    QTextCharFormat currentFormat=cursor.charFormat();

    qDebug()<<currentFormat.background().color().name();

    if(currentFormat.background().color().name()=="#ffffff")
    {
qDebug()<<currentFormat.background().color().name();
        currentFormat.setBackground(QBrush(QColor(Qt::yellow)));
    }
    else
    {
       currentFormat.setBackground(QBrush(QColor(Qt::white)));
    }
    cursor.mergeCharFormat(currentFormat);
}



void HNSChede::on_pbBold_clicked()
{
    setBold();
}

void HNSChede::setFont()
{
    bool ok;

    QTextCursor cursor=ui->textEdit->textCursor();
    QTextCharFormat currentFormat=cursor.charFormat();

    QFont font=QFontDialog::getFont(&ok,currentFormat.font());

   if(ok)
   {
    currentFormat.setFont(font);
    cursor.mergeCharFormat(currentFormat);
   }


}

void HNSChede::on_pushButton_3_clicked()
{
        setFont();
}

void HNSChede::on_pushButton_clicked()
{
       setEvidence();
}

void HNSChede::on_pushButton_4_clicked()
{
    printPreviewSlot();
}

void HNSChede::on_pushButton_6_clicked()
{
    showResizeImage();
}

void HNSChede::on_pushButton_5_clicked()
{
    insertImage();
}

void HNSChede::initCard(int idProdotto, int idCliente)
{
   QSqlQuery q(db);
   QString sql="INSERT INTO schede_n(prodotto,cliente,scheda) VALUES (:ip,:ic,:cs)";
   QString scheda="<table align=center width='98%' border=1><tr><th colspan=5><br>SCHEDA: "+ui->cbClienti->currentText()+" - "+ui->cbProdotti->currentText()+"<br></th></tr><tr><td><b>OLIO:</b></td><td colspan=4> &nbsp;</td></tr><tr><td><b>VASO:</b></td><td colspan=4> &nbsp;</td></tr><tr><td><b>TAPPO:</b></td><td colspan=4>&nbsp;</td></tr><tr><td><b>ETICHETTE:</b></td><td colspan=4></td></tr><tr><td><b>SCATOLE:</b></td><td colspan=4></td></tr><tr><td><b>NOTE:</b></td><td colspan=4></td></tr><tr><td align=left>&nbsp;</td><td align=center colspan=4></td></tr></table>";


   q.prepare(sql);
   q.bindValue(":ip",idProdotto);
   q.bindValue(":ic",idCliente);
   q.bindValue(":cs",scheda);

   bool b= q.exec();

   if(b)
   {
       loadCard();
   }
   else
   {
       ui->textEdit->clear();
       qDebug()<<q.lastError().text();
   }

   ui->pushButton_9->setEnabled(true);
}

void HNSChede::on_pbInit_clicked()
{
    if(QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Inizializzare la scheda?",QMessageBox::Ok|QMessageBox::Cancel))
    {
        initCard(ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt(),ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt());
    }
}

void HNSChede::on_pushButton_7_clicked()
{
    loadCard();
}

void HNSChede::on_pushButton_8_toggled(bool checked)
{
    ui->textEdit->setReadOnly(!checked);
    ui->cbClienti->setEnabled(!checked);
    ui->cbProdotti->setEnabled(!checked);


    ui->pbInit->setEnabled(checked);
    ui->pbBold->setEnabled(checked);
    ui->pushButton->setEnabled(checked);
    ui->pushButton_4->setEnabled(checked);
    ui->pushButton_3->setEnabled(checked);
    ui->pushButton_5->setEnabled(checked);
    ui->pushButton_6->setEnabled(checked);
    ui->pushButton_9->setEnabled(checked);
    ui->lblLed->setVisible(checked);

 //   ui->pushButton_9->setEnabled(checked);
}



void HNSChede::on_pushButton_9_clicked()
{
    HCopyCard *f=new HCopyCard(0,db);
    f->setWindowModality(Qt::ApplicationModal);
    connect(f,SIGNAL(copyRecipe(int,int,QString)),this,SLOT(copyCard(int,int,QString)));
    f->show();

}

void HNSChede::copyCard(int cliente, int prodotto, QString newHead)
{
    //TODO copia scheda

    qDebug()<<"CC"<<cliente<<prodotto<<newHead;
    QString scheda,sql;
    QSqlQuery q(db);
    bool b;

    db.transaction();

    q.prepare("select scheda from schede_n where cliente=:cli and prodotto=:prod" );
    q.bindValue(":cli",cliente);
    q.bindValue(":prod",prodotto);
    b=q.exec();
    if (!b)
    {
        qDebug()<<"SELECT: "<<q.lastError().text();

    }

    q.first();
    scheda=q.value(0).toString();
   // qDebug()<<scheda<<"orcli:" <<cliente<<prodotto;
    q.clear();

    QString current="SCHEDA: "+ui->cbClienti->currentText()+" - "+ ui->cbProdotti->currentText();

    int from=scheda.indexOf(newHead,0,Qt::CaseSensitive);
    int len=newHead.length();

   // qDebug()<<"copycard old:"<<from<<len<<"newhewader:"<<newHead<<"current: "<<current;

    QString newCard =scheda.replace(from,len,current);



    ui->textEdit->setHtml(newCard);





}

