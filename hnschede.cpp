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




HNSChede::HNSChede(QWidget *parent, HUser *pusr, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HNSChede)
{
    ui->setupUi(this);
    db=pdb;
    usr=pusr;

    bool upd=usr->getCanUpdate();

    if (!upd)
    {
        ui->pbsave->setVisible(false);
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

    ui->cbClienti->setModelColumn(1);
    ui->cbClienti->setModel(clientmod);
    QCompleter *cc = new QCompleter(clientmod);
    cc->setCaseSensitivity(Qt::CaseInsensitive);
    cc->setCompletionColumn(1);
    cc->setCompletionMode(QCompleter::PopupCompletion);
    ui->cbClienti->setCompleter(cc);
    ui->cbClienti->setCurrentIndex(-1);

    connect(ui->cbClienti,SIGNAL(currentIndexChanged(QString)),this,SLOT(getProducts()));
    connect(ui->cbProdotti,SIGNAL(currentIndexChanged(int)),this,SLOT(loadCard()));
    ui->cbClienti->setCurrentIndex(0);

    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(showContextMenu(QPoint)));



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
    QString document=ui->textEdit->toHtml();

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

    cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    prodotto=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();

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
    q.first();
    QString doc =q.value(0).toString();
    //ui->textEdit->setHtml(doc);
    ui->textEdit->setText(doc);
   // QMessageBox::warning(this,QApplication::applicationName(),"Doc:\n"+doc,QMessageBox::Ok);

    }
    else
    {
        update=false;
        QMessageBox::warning(this,QApplication::applicationName(),"Errore:\n"+q.lastError().text(),QMessageBox::Ok);
    }

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
       QMessageBox::information(this,QApplication::applicationName(),"Scheda salvata",QMessageBox::Ok);
    }
}

void HNSChede::on_pbClose_clicked()
{
    if (QMessageBox::Ok==QMessageBox::question(this,QApplication::applicationName(),"Chiudere?",QMessageBox::Ok|QMessageBox::Cancel))
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
    QAction *saveScheda = menu->addAction("Salva Scheda");
    QAction *addSeparator2 =menu->addSeparator();
    QAction *printPrev = menu->addAction("Anteprima di stampa...");
    QAction *close = menu->addAction("Close");

    connect(addImage,SIGNAL(triggered(bool)),this,SLOT(insertImage()));
    connect(modimage,SIGNAL(triggered(bool)),this,SLOT(showResizeImage()));
    connect(saveScheda,SIGNAL(triggered(bool)),this,SLOT(saveCard()));
    connect(close,SIGNAL(triggered(bool)),this,SLOT(on_pbClose_clicked()));
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

    currentFormat.setBackground(QBrush(QColor(Qt::yellow)));
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
