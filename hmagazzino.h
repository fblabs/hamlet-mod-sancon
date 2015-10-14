#ifndef HMAGAZZINO_H
#define HMAGAZZINO_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QList>
#include <QStandardItem>
#include <QDate>
#include "hreadonlymodel.h"
#include "huser.h"
#include "mainwindow.h"


namespace Ui {
class HMagazzino;
}

class HMagazzino : public QWidget
{
    Q_OBJECT

public:
    explicit HMagazzino(QWidget *parent = 0, int usr=0);
    void UpdateData();
    int userid;
    QString conn;
    ~HMagazzino();
    void setUser(int user);
    void setConn(QString conn);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void cercaLot();
    void on_btsearch_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void refresh();
    void on_pushButton_5_clicked();
    void onConnectionNameSet();
    void on_rbprod_clicked();
    void updateFilter();

    void on_pushButton_6_toggled(bool checked);

    void on_pushButton_6_clicked();

signals:
  //  void connectionSet();

private:
    Ui::HMagazzino *ui;
    QSqlRelationalTableModel* ricmodel;
    QList<QStandardItem*> createRecipeRow(QString sprod, QString speso);
    QDate dateFrom;
    QDate dateTo;
    QString sDateFrom,sDateTo;


  hReadonlyModel *tbm;

  QSqlDatabase db;
  QString sConnection;
  QString dateFilter;
  QString condFilter;
  QString filter;


  void  setupForm();
};

#endif // HMAGAZZINO_H
