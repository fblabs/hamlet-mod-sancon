#ifndef HPRINT_H
#define HPRINT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QTextDocument>
#include <QTextTable>
#include <QTextCursor>
#include <QTextEdit>
#include <QPrinter>


namespace Ui {
class HPrint;
}

class HPrint : public QWidget
{
    Q_OBJECT

public:
    explicit HPrint(QWidget *parent = 0);
    ~HPrint();

   void setText(QString text);
   void append (QString text, bool bold);
   void setConnection(QString conn);
   QTextTable *addTable(int rows,int columns);
   QTextTable *writeTableContent(QTextTable *table, int row, int column, QString text);
   void cursorToEnd();
   void cursorToStart();
   void hideClose();
   void resetText();
   void loadImage();
   QTextEdit *getViewport();
   QTextCursor getCursor();
   void resizeImage(int wr,int hr);
   void setWidth(int);
   void setHeight(int);
   void toggleImageUI(bool visible);
   int getWidth();
   int getHeight();
private slots:
   void on_pushButton_2_clicked();
   void on_pushButton_clicked();
   void onConnectionSet();
   void addImage(QByteArray bytes);

   void printPreview(QPrinter *printer);

   void on_pbant_clicked();

   void on_sbW_valueChanged(int arg1);

   void on_sbH_valueChanged(int arg1);
   void on_spCharSize_valueChanged(int arg1);

private:
    Ui::HPrint *ui;
    QSqlDatabase db;
    QString sConn;
    QTextDocument *doc;
    QTextCursor cur;
    QPrinter *printer;
    QImage *imgobj;
    QPixmap img;
signals:
    int imgwChanged(int);
    int imghChanged(int);
};

#endif // HPRINT_H
