#ifndef HPRODOTTI_H
#define HPRODOTTI_H

#include <QWidget>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>
#include <QDataWidgetMapper>
#include <QSqlQuery>
#include <QItemSelectionModel>
#include <QStringListModel>
#include "mainwindow.h"
#include <QPixmap>
#include <QGraphicsScene>
#include <QImage>


namespace Ui {
class HProdotti;
}

class HProdotti : public QWidget
{
    Q_OBJECT

public:
    explicit HProdotti(QWidget *parent = 0);
    ~HProdotti();



public slots:

  //  void caricaRicetta();
    void setMain(MainWindow *w);
    void setConnection(QString conn);

private:
    Ui::HProdotti *ui;

    void fillTipi(void);
    void setupForm();
    QSqlTableModel* pModel;

    //QSqlRelationalTableModel* detModel;
    QDataWidgetMapper* dwMapperTipi;
  //  QSqlRelationalTableModel* ricmodel;

   // QItemSelectionModel* selm;
    QStringListModel* cbmodel;

    QDataWidgetMapper* mpr;

    QDataWidgetMapper* mprprod;
    MainWindow* wmain;
    QSqlDatabase db;

    QPixmap image;
    QImage *imageobject;
    QGraphicsScene *scene;
    QString imagepath;
    QString sConn;


private slots:
    void productSearch();
    void showType();
    void setForm();


    void setImage();


    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
};

#endif // HPRODOTTI_H
