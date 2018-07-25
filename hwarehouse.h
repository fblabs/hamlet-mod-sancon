#ifndef HWAREHOUSE_H
#define HWAREHOUSE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QCompleter>
#include "hreadonlymodel.h"
#include "huser.h"

namespace Ui {
class HWarehouse;
}

class HWarehouse : public QWidget
{
    Q_OBJECT

public:
    explicit HWarehouse(HUser* puser, QSqlDatabase pdb, QWidget *parent = 0);
    ~HWarehouse();

private:
    Ui::HWarehouse *ui;
    QSqlDatabase db;

    HUser *user;

    QSqlTableModel *tmLotti;
    QSqlTableModel *tmProdotti;
    hReadonlyModel *tmOperazioni;
    QCompleter *comp;
    QCompleter *comp2;

    QSqlRelationalDelegate *delegate;

    QString datefilter;
    QString lotFilter;
    QString prodfilter;
    QString filter;
    int nfilter;


public slots:

   void update();

private slots:
  // void on_rbNoFilter_toggled(bool checked);

  // void on_rbProdFilter_toggled(bool checked);
   void setOperazioniFilter(int tipo);
   void on_pushButton_4_clicked();
   void on_pushButton_2_clicked();
   void on_pushButton_5_clicked();
   void on_tableView_doubleClicked(const QModelIndex &index);
   void on_deDateFrom_dateChanged(const QDate &date);
   void on_deDateTo_dateChanged(const QDate &date);
   void on_Confirmed();
   void on_pbMod_clicked();


   void on_lineEdit_returnPressed();
   void on_lineEdit_textChanged(const QString &arg1);
   void on_radioButton_toggled(bool checked);
   void on_radioButtonProd_toggled(bool checked);
   void on_radioButton_2_toggled(bool checked);

};

#endif // HWAREHOUSE_H
