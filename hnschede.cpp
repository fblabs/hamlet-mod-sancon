#include "hnschede.h"
#include "ui_hnschede.h"
#include <QFileDialog>
#include <QMessageBox>

#include <QCompleter>

#include <QImageReader>
#include <QPrinter>

#include <QSqlQuery>
#include <QSqlError>

#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QDebug>




HNSChede::HNSChede(QWidget *parent,QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HNSChede)
{
    ui->setupUi(this);
    db=pdb;


    QPrinter printer(QPrinter::HighResolution);

    printer.setPaperSize(QPrinter::A4);

    ui->textEdit->document()->setPageSize(printer.pageRect().size());

    QSqlTableModel *clientmod =new QSqlTableModel(0,db);
    clientmod->setTable("anagrafica");
    clientmod->setFilter("cliente=1");
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

}

HNSChede::~HNSChede()
{
    delete ui;
}

void HNSChede::on_pushButton_clicked()
{
    QString filter("Schede (.scd)");
    QString filename=QFileDialog::getSaveFileName(this,"Save",QDir::currentPath(),filter,&filter);

    setWindowTitle(filename);
}

void HNSChede::insertImage()
{
    QString file = QFileDialog::getOpenFileName(this,"Seleziona immagine",QDir::currentPath(),"Bitmap (*.bmp)\nJPEG (*.jpg)\nPNG (*.png)");
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
    insertImage();
}

void HNSChede::on_pushButton_3_clicked()
{

  saveCard();

}

bool HNSChede::saveCard()
{
    QString document=ui->textEdit->toHtml();

    int cliente,prodotto;

    cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    prodotto=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();



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

    if (!b)
    {
        QMessageBox::warning(this,QApplication::applicationName(),"Errore:\n"+q.lastError().text(),QMessageBox::Ok);
    }
    else
    {
       QMessageBox::information(this,QApplication::applicationName(),"Scheda salvata",QMessageBox::Ok);
    }
}

void HNSChede::loadCard()
{
    int cliente,prodotto;

    update=false;

    cliente=ui->cbClienti->model()->index(ui->cbClienti->currentIndex(),0).data(0).toInt();
    prodotto=ui->cbProdotti->model()->index(ui->cbProdotti->currentIndex(),0).data(0).toInt();

    qDebug()<<cliente<<prodotto;

    QSqlQuery q(db);
    QString sql="SELECT scheda FROM schede_n WHERE prodotto=:prodotto AND cliente=:cliente";
    q.prepare(sql);
    q.bindValue(":prodotto",prodotto);
    q.bindValue(":cliente",cliente);

    if(q.exec())
    {
    q.first();
    QString doc =q.value(0).toString();
    //ui->textEdit->setHtml(doc);
    ui->textEdit->setText(doc);
   // QMessageBox::warning(this,QApplication::applicationName(),"Doc:\n"+doc,QMessageBox::Ok);
    qDebug()<<"doc: "+doc;
    update=true;
    }
    else
    {
        update=false;
        QMessageBox::warning(this,QApplication::applicationName(),"Errore:\n"+q.lastError().text(),QMessageBox::Ok);
    }

}
