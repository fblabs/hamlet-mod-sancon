#include "hpdfprint.h"
#include "ui_hpdfprint.h"
#include <QTextDocument>
#include <QPrinter>
#include <QFileDialog>
#include <QPrintDialog>
#include <QDesktopServices>



HPDFPrint::HPDFPrint(HUser *p_user, QString p_html, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HPDFPrint)
{
    ui->setupUi(this);
    user=p_user;
    html=p_html;
    ui->tb_Viewport->document()->setHtml(html);
    orientation=QPrinter::Portrait;

}

HPDFPrint::~HPDFPrint()
{
    delete ui;
}

void HPDFPrint::set_orientation(QPrinter::Orientation p_orientation)
{
    orientation=p_orientation;
}





void HPDFPrint::on_pbSave_pdf_clicked()
{
       QString filename;

       // qDebug()<<"filename="<<filename;
       filename= QFileDialog::getSaveFileName(this,"Scegli il nome del file",QString(),"Pdf (*.pdf)");

       if (filename.isEmpty() && filename.isNull()){
           //  qDebug()<<"annullato";
           return;
       }

       QPrinter printer;
       printer.setOrientation(QPrinter::Portrait);
       printer.setOutputFormat(QPrinter::PdfFormat);
       printer.setPaperSize(QPrinter::A4);
       printer.setOutputFileName(filename);


       QTextDocument *doc= new QTextDocument();
       doc->setHtml(html);
       doc->print(&printer);
       QDesktopServices::openUrl(filename);



}


void HPDFPrint::on_pbPrint_clicked()
{

    doc=ui->tb_Viewport->document();
    QPrinter printer;
    doc=ui->tb_Viewport->document();
    printer.setOrientation(orientation);

    printer.setPaperSize(QPrinter::A4);

     QPrintDialog dialog( &printer);
    // dialog.show();
     if (dialog.exec()==QDialog::Accepted)
     {
           doc->print(&printer);
     }

}


void HPDFPrint::on_pbClose_clicked()
{
    close();
}




