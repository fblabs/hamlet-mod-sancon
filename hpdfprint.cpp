#include "hpdfprint.h"
#include "ui_hpdfprint.h"
#include <QTextDocument>
#include <QPrinter>
#include <QFileDialog>
#include <QPrintDialog>
#include <QPrintPreviewDialog>
#include <QDesktopServices>

#include <QDebug>



HPDFPrint::HPDFPrint(HUser *p_user, QString p_html, QPageLayout::Orientation p_orientation, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HPDFPrint)
{
    ui->setupUi(this);
    user=p_user;
    html=p_html;
    QFont font=ui->tb_Viewport->font();
    font.setPointSize(9);
    ui->sbFontSize->setValue(9);

    ui->tb_Viewport->setFont(font);
    ui->tb_Viewport->document()->setHtml(html);

    orientation=p_orientation;
    qDebug()<<"PRINTPDF"<<orientation;

    orientation==QPageLayout::Portrait?ui->rbPortrait->setChecked(true):ui->rbPortrait->setChecked(false);


    layout.setOrientation(orientation);



}

HPDFPrint::~HPDFPrint()
{
    delete ui;
}

void HPDFPrint::set_orientation(QPageLayout::Orientation p_orientation)
{
    layout.setOrientation(p_orientation);

    layout.orientation()==QPageLayout::Portrait?ui->rbPortrait->setChecked(true):ui->rbPortrait->setChecked(false);


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





       printer.setPageLayout(layout);
       printer.setOutputFileName(filename);


       QTextDocument *doc= new QTextDocument();
       doc->setHtml(html);
       doc->print(&printer);
       QDesktopServices::openUrl(filename);

       layout.orientation()==QPageLayout::Portrait  ? ui->rbPortrait->setChecked(true):ui->rbPortrait->setChecked(false);



}


void HPDFPrint::on_pbPrint_clicked()
{

   // QPrinter printer;
    doc=ui->tb_Viewport->document();

    layout.setMode(QPageLayout::FullPageMode);
    layout.setPageSize(QPageSize(QPageSize::A4));


    QPrintDialog dialog( &printer);


     if (dialog.exec()==QDialog::Accepted)
     {

         doc->print(&printer);
     }

}


void HPDFPrint::on_pbClose_clicked()
{
    close();
}





void HPDFPrint::on_sbFontSize_valueChanged(int arg1)
{
    QFont font=ui->tb_Viewport->font();
    font.setPointSize(arg1);

    ui->tb_Viewport->setFont(font);
}





void HPDFPrint::on_pbPreview_clicked()
{

    QPrintPreviewDialog *dlg=new QPrintPreviewDialog(&printer);

    connect(dlg,SIGNAL(paintRequested(QPrinter*)),this,SLOT(print_preview(QPrinter*)));

    ui->rbPortrait->isChecked()?printer.setOrientation(QPrinter::Portrait):printer.setOrientation(QPrinter::Landscape);

    dlg->exec();
}


void HPDFPrint::print_preview(QPrinter* p_printer)
{
    QPrinter *printer=p_printer;

    printer->setPageOrientation(orientation);


    ui->tb_Viewport->document()->print(printer);
}




void HPDFPrint::on_rbPortrait_toggled(bool checked)
{
    if(checked)
    {
     orientation=QPageLayout::Portrait;
    }else{
        orientation=QPageLayout::Landscape;
    }
}

