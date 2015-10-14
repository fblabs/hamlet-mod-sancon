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
#include <QDebug>

HPrint::HPrint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HPrint)
{
    ui->setupUi(this);
    printer=new QPrinter();
    doc=ui->textEdit->document();
    ui->textEdit->setDocument(doc);

}

HPrint::~HPrint()
{
    delete ui;
}

void HPrint::addImage(QByteArray bytes)
{
  //  QGraphicsScene *scene;
    QTextCursor cursor(ui->textEdit->document());

    QImage *imgobj = new QImage();
    imgobj->loadFromData(bytes);
    QPixmap img = QPixmap::fromImage(*imgobj);
   // QGraphicsScene *scene = new QGraphicsScene(this);
   // scene->addPixmap(img);

   // scene->setSceneRect(img.rect());

  //  ui->gv->setScene(scene);

  //  ui->gv->setAlignment(Qt::AlignCenter);
  //  ui->gv->fitInView(scene->itemsBoundingRect(),Qt::KeepAspectRatio);

    cursor.insertImage(*imgobj);
    cursorToEnd();
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
    ui->textEdit->setText("");
}
void HPrint::setText(QString text)
{
    QFont font(ui->textEdit->font());
    ui->textEdit->setFont(font);
    ui->textEdit->setText(text);

    font.setBold(false);



    ui->textEdit->setFont(font);




}



void HPrint::append(QString text, bool bold)
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

QTextCursor* getCursor();

void HPrint::hideClose()
{

    ui->pushButton->setVisible(false);
}

void HPrint::loadImage()
{
   // QPixmap pixmap=
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
