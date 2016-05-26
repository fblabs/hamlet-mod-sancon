#include "hprint.h"
#include <QPrinter>
#include <QPrintDialog>
#include <QDialog>
#include "ui_hprint.h"
#include <QTextTable>
#include <QTextTableCell>
#include <QImage>
#include <QPixmap>
#include <QGraphicsScene>
#include <QPrintPreviewDialog>
#include <QPrinter>
// #include <QDebug>

HPrint::HPrint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HPrint)
{
    ui->setupUi(this);
    printer=new QPrinter();
    ui->spCharSize->setValue(10);

    QTextCursor cursor=ui->textEdit->textCursor();
    ui->textEdit->selectAll();
    ui->textEdit->setFontPointSize(ui->spCharSize->value());
    ui->textEdit->setTextCursor( cursor);
    doc=ui->textEdit->document();
    ui->textEdit->setDocument(doc);



}

HPrint::~HPrint()
{
    delete ui;
}

void HPrint::toggleImageUI(bool visible=true)
{

        ui->label->setVisible(visible);
        ui->label_2->setVisible(visible);
        ui->sbH->setVisible(visible);
        ui->sbW->setVisible(visible);

}

void HPrint::addImage(QByteArray bytes)
{
  //  QGraphicsScene *scene;
    QTextCursor cursor(ui->textEdit->document());
    ui->textEdit->setTextCursor(cursor);

    imgobj = new QImage();
    imgobj->loadFromData(bytes);
    int width=img.width();
    int height=img.height();
    img = QPixmap::fromImage(*imgobj).scaled(width,height);

    cursor.insertImage(*imgobj);
    cursorToEnd();
}

void HPrint::resizeImage(int wr, int hr)
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

                         // QPair<double, double> size = ResizeImageDialog::getNewSize(this, newImageFormat.width(), newImageFormat.height());




                    //      newImageFormat.setWidth(ui->sbW->value());
                    //      newImageFormat.setHeight(ui->sbH->value());

                          newImageFormat.setWidth(wr);
                          newImageFormat.setHeight(hr);



                          if (newImageFormat.isValid())
                          {
                              //QMessageBox::about(this, "Fragment", fragment.text());
                              //newImageFormat.setName(":/icons/text_bold.png");
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

QTextEdit* HPrint::getViewport()
{
    return ui->textEdit;
}

QTextCursor HPrint::getCursor()
{
    return ui->textEdit->textCursor();
}

void HPrint::cursorToStart()
{
    QTextCursor cur=ui->textEdit->textCursor();
    ui->textEdit->textCursor().movePosition(QTextCursor::Start);
    ui->textEdit->setTextCursor(cur);
}

void HPrint::resetText()
{
    ui->textEdit->clear();
  //  ui->textEdit->setText("");

}
void HPrint::setText(QString text)
{
    QFont font(ui->textEdit->font());
    ui->textEdit->setFont(font);
    ui->textEdit->setText(text);

    font.setBold(false);




    ui->textEdit->setFont(font);




}



void HPrint::append(QString text, bool bold=false)
{
    QFont font(ui->textEdit->font());
    font.setBold(bold);
    ui->textEdit->setFont(font);
    ui->textEdit->append("\n"+text);
}

void HPrint::on_pushButton_2_clicked()
{

   // QPrintDialog *dlg=new QPrintDialog(printer);
    printer->setPageSize(QPrinter::A4);

    QPrintDialog   dialog( printer);
   // dlg->show();
    if (dialog.exec()==QDialog::Accepted)
    {
        ui->textEdit->print(printer);

    }
}

void HPrint::onConnectionSet()
{
    db = QSqlDatabase::database(sConn);
    printer = new QPrinter(QPrinter::HighResolution);
    printer->setPageSize(QPrinter::A4);

}

void HPrint::setConnection(QString conn)
{
    sConn=conn;
}

void HPrint::on_pushButton_clicked()
{
    this->close();
}

QTextTable* HPrint::addTable(int rows, int columns)
{
    QTextTableFormat tbf;

    QTextTable *table;
   // QPen p(Qt::black,1,Qt::SolidLine)
    QBrush black(Qt::SolidPattern);
    tbf.setBorderStyle(QTextFrameFormat::BorderStyle_Solid);
    tbf.setBorder(1);
    tbf.setBorderBrush(black);
    tbf.setCellSpacing(0);

    QTextCursor cur=ui->textEdit->textCursor();
    cur.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cur);


    table = cur.insertTable(rows,columns,tbf);

    cur.movePosition(QTextCursor::End);


    return table;


}

QTextTable* HPrint::writeTableContent(QTextTable *table,int row, int column, QString text)
{
   QTextCursor c=table->cellAt(row,column).firstCursorPosition();

   c.insertText(text);

   return table;
}

void HPrint::cursorToEnd()
{
    QTextCursor cur=ui->textEdit->textCursor();
    cur.movePosition(QTextCursor::End);
    ui->textEdit->setTextCursor(cur);

}



void HPrint::hideClose()
{

    ui->pushButton->setVisible(false);
}

void HPrint::loadImage()
{

}


void HPrint::printPreview(QPrinter *printer)
{
    ui->textEdit->print(printer);
}

void HPrint::on_pbant_clicked()
{
    QPrinter lprinter(QPrinter::HighResolution);
    lprinter.setPaperSize(QPrinter::A4);
    QPrintPreviewDialog *dlg=new QPrintPreviewDialog(&lprinter);
    connect(dlg,SIGNAL(paintRequested(QPrinter*)),this,SLOT(printPreview(QPrinter*)));
    dlg->exec();
}



void HPrint::on_sbW_valueChanged(int arg1)
{
    resizeImage(arg1,ui->sbH->value());
    emit imgwChanged(arg1);
}

void HPrint::on_sbH_valueChanged(int arg1)
{
    resizeImage(ui->sbW->value(),arg1);
    emit imghChanged(arg1);
}

int HPrint::getWidth()
{

    return ui->sbW->value();

}

int HPrint::getHeight()
{


    return ui->sbH->value();

}

int HPrint::getFontsize()
{

    return ui->spCharSize->value();

}

void HPrint::setWidth(int value)
{
    ui->sbW->setValue(value);
}

void HPrint::setHeight(int value)
{
    ui->sbH->setValue(value);
}




void HPrint::on_spCharSize_valueChanged(int arg1)
{
    
    QTextCursor cursor=ui->textEdit->textCursor();
    QFont font=ui->textEdit->font();
    font.setPointSize(arg1);

    ui->textEdit->selectAll();
    ui->textEdit->setFontPointSize(arg1);
    ui->textEdit->setTextCursor( cursor);
    ui->textEdit->setFont(font);


   // // qDebug()<<"arg1"<<arg1;

}

void HPrint::setFontsize(int sz)
{
    ui->spCharSize->setValue(sz);
    QFont font=ui->textEdit->font();
    font.setPointSize(sz);
   // // qDebug()<<"size="<<sz;
    QTextCursor cursor=ui->textEdit->textCursor();
    ui->textEdit->selectAll();
    ui->textEdit->setFontPointSize(sz);
    ui->textEdit->setTextCursor( cursor);
    ui->textEdit->setFont(font);
}
