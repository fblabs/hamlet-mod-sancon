#ifndef HPRINT_H
#define HPRINT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QTextDocument>
#include <QTextTable>
#include <QTextCursor>
#include <QTextEdit>
#include <QPrinter>
#include <QList>
#include <QTableView>


namespace Ui {
class HPrint;
}

class HPrint : public QWidget
{
    Q_OBJECT

public:
    explicit HPrint(QWidget *parent = 0,bool altColors=false);
    ~HPrint();

   void setText(QString text);
   void append (QString text, bool bold=false);
   void setConnection(QString conn);
   void printPixmap(QTableView *table);

   void hideClose();
   void resetText();
   void loadImage();
   QTextEdit *getViewport();
   QTextCursor getCursor();
   void resizeImage(int wr,int hr);


   void toggleImageUI(bool visible);



private slots:
   void on_pushButton_2_clicked();
   void on_pushButton_clicked();
   void onConnectionSet();

   void printPreview(QPrinter *printer);
   void on_pbant_clicked();
   void on_spCharSize_valueChanged(int arg1);
   void spSetValues();
   bool eventFilter(QObject *target, QEvent *event);







   void on_sbW_valueChanged(int arg1);

   void on_sbH_valueChanged(int arg1);

   void on_textEdit_cursorPositionChanged();

   void on_rbPortrait_toggled(bool checked);

   void on_rbLandscape_toggled(bool checked);

public slots:
   void setsbWValue(int val);
   void setsbHValue(int val);
   QString getImageName();
   int getsbWValue();
   int getsbHValue();
   int getWidthImg0();
   int getHeightImg0();
   int getWidthImg1();
   int getHeightImg1();
   void setFontSize(int sz);
   int getFontSize();
   void addImage(QByteArray bytes, QString name, int width, int height);
   void cursorToEnd();
   void cursorToStart();
   QTextTable *addTable(int rows, int columns,QTextTableFormat ptf, QColor background=QColor("white"), QColor alternateBackground=QColor(230,230,230));
   QTextTable *writeTableContent(QTextTable *table, int row, int column,QTextCharFormat ptcf,QString text);
   QTextTable* writeTableContentRed(QTextTable *table, int row, int column, QTextCharFormat pformat, QString text="");


private:
    Ui::HPrint *ui;
    QSqlDatabase db;
    QString sConn;
    QTextDocument *doc;
    QTextCursor cur;
    QPrinter *printer;
    QImage *imgobj;
    QPixmap img;
    int imgw,imgh,imgcw,imgch;
    bool alternateBackgroundColor;



signals:

};

#endif // HPRINT_H
