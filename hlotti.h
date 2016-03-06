#ifndef HLOTTI_H
#define HLOTTI_H

#include <QWidget>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include "hreadonlymodelnew.h"
#include "huser.h"

namespace Ui {
class HLotti;
}

class HLotti : public QWidget
{
    Q_OBJECT

public:
    explicit HLotti(QWidget *parent = 0, HUser *puser = 0, QString pcon="");
    ~HLotti();

 //   void setConnectionName(QString conn);


private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void searchProduct();

  //  void onConnectionNameSet();

    void resetData();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void setFilter();
    void showContextMenu(const QPoint& pos);
    void copyField();
    void editLot();
    void print();
    void updateData();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();

    void on_leLottoRaw_textChanged(const QString &arg1);

private:

    Ui::HLotti *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel *model;
    QString sConnection;
    HUser *user;
    HReadOnlyModelNew *tbm;
    QSqlTableModel *mTipi;
    QSqlTableModel *mProdotti;
    QSqlTableModel *mTipiProdotto;


    void setupForm();
};

#endif // HLOTTI
