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
private slots:
   void on_pushButton_2_clicked();
   void on_pushButton_clicked();
   void onConnectionSet();
   void addImage(QByteArray bytes);

   void printPreview(QPrinter *printer);

   void on_pbant_clicked();

private:
    Ui::HPrint *ui;
    QSqlDatabase db;
    QString sConn;
    QTextDocument *doc;
    QTextCursor cur;
    QPrinter *printer;
};

#endif // HPRINT_H
