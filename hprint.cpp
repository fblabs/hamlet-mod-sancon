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
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>

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
    ui->textEdit->installEventFilter(this);





}

bool HPrint::eventFilter(QObject *target, QEvent *event)
{


    if(target==ui->textEdit)
    {
        if (event->type()==QEvent::KeyPress)
        {
            QKeyEvent* key = static_cast<QKeyEvent *>(event);

            if (key->key()==Qt::Key_F7)
            {
              qDebug()<<"OK F7";

              return true;
            }
        }
    }
    return false;
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

void HPrint::addImage(QByteArray bytes,QString name,int width,int height)
{


    QTextCursor cursor(ui->textEdit->document());
    ui->textEdit->setTextCursor(cursor);

    imgobj = new QImage();
    imgobj->loadFromData(bytes);

    QImage scaled=imgobj->scaled(width,height,Qt::KeepAspectRatio,Qt::SmoothTransformation);

    cursor.movePosition(QTextCursor::End);
    cursor.insertImage(scaled,name);

    if(name=="0")
    {
        imgw=width;
        imgh=height;
    }
    else if(name=="1")
    {
        imgcw=width;
        imgch=height;
    }






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

                    //      qDebug()<<newImageFormat.name();
                          newImageFormat.setWidth(wr);
                          newImageFormat.setHeight(hr);

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

void HPrint::spSetValues()
{

    QString n=getImageName();
    if (n=="0")
    {
        ui->sbW->setValue(imgw);
        ui->sbH->setValue(imgh);
    }
    else
    {
        ui->sbW->setValue(imgcw);
        ui->sbH->setValue(imgch);
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

QTextTable* HPrint::writeTableContentRed(QTextTable *table,int row, int column,QString text)
{
  QTextCharFormat format;
  format.setForeground(QColor("red"));
  QTextCursor c=table->cellAt(row,column).firstCursorPosition();

   c.setCharFormat(format);
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

int HPrint::getWidthImg0()
{
    return imgw;
}
int HPrint::getWidthImg1()
{
    return imgcw;

}

int HPrint::getHeightImg0()
{
    return imgh;
}
int HPrint::getHeightImg1()
{
    return imgch;

}

/*
int HPrint::getFontsize()
{

    return ui->spCharSize->value();

}*/


void HPrint::setsbHValue(int val)
{

    ui->sbH->setValue(val);
}

void HPrint::setsbWValue(int val)
{
    ui->sbW->setValue(val);
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

int HPrint::getFontSize()
{
    return ui->spCharSize->value();
}


void HPrint::setFontSize(int sz)
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


void HPrint::on_sbW_valueChanged(int arg1)
{
    //devo vedere quale foto è selezionata e modificare width se 0 e widthc se 1
    qDebug()<<" sbw valchanged "<<arg1;
    qDebug()<<"getimagename "<<getImageName();
    QString n=getImageName();
    if(n=="0")
    {
        imgw=arg1;
        resizeImage(imgw,imgh);

    }
    else if (n=="1")
    {
        imgcw=arg1;
        resizeImage(imgcw,imgch);

    }

    cursorToStart();

}

void HPrint::on_sbH_valueChanged(int arg1)
{

    QString n=getImageName();
    if(n=="0")
    {
        imgh=arg1;
        resizeImage(imgw,imgh);

    }
    else if (n=="1")
    {
        imgch=arg1;
        resizeImage(imgcw,imgch);

    }
}

void HPrint::on_textEdit_cursorPositionChanged()
{
    qDebug()<<getImageName();
    spSetValues();
}

QString HPrint::getImageName()
{
    QString name;



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

                          name =newImageFormat.name();


                         return name;



                      }
                  }
           }

        return "";
}

int HPrint::getsbHValue()
{
    return ui->sbH->value();
}

int HPrint::getsbWValue()
{
    return ui->sbW->value();
}

