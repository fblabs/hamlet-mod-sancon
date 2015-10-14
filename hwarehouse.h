#ifndef HWAREHOUSE_H
#define HWAREHOUSE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QCompleter>
#include "hreadonlymodel.h"
namespace Ui {
class HWarehouse;
}

class HWarehouse : public QWidget
{
    Q_OBJECT

public:
    explicit HWarehouse(QWidget *parent = 0);
    ~HWarehouse();

private:
    Ui::HWarehouse *ui;
    QSqlDatabase db;
    QString sConn;
    QString user;

    QSqlTableModel *tmLotti;
    QSqlTableModel *tmProdotti;
    hReadonlyModel *tmOperazioni;
    QCompleter *comp;

    QSqlRelationalDelegate *delegate;

    QString datefilter;
    QString lotFilter;
    QString prodfilter;
    QString filter;

public slots:
   void init(QString conn,QString utente);
   void update();

private slots:
   void on_rbNoFilter_toggled(bool checked);
   void on_rbLotfilter_toggled(bool checked);
   void on_rbProdFilter_toggled(bool checked);
   void setOperazioniFilter(int tipo);
//   void on_pbFilterByDate_clicked();

   void on_pushButton_clicked();
   void on_pushButton_4_clicked();
   void on_pushButton_2_clicked();
   void on_pushButton_3_clicked();
};

#endif // HWAREHOUSE_H
