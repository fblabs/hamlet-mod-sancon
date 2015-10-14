#ifndef HLOTTI_H
#define HLOTTI_H

#include <QWidget>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include "hreadonlymodelnew.h"

namespace Ui {
class HLotti;
}

class HLotti : public QWidget
{
    Q_OBJECT

public:
    explicit HLotti(QWidget *parent = 0);
    ~HLotti();

    void setConnectionName(QString conn);
    void setUser(int user);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void searchProduct();

    void onConnectionNameSet();

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

private:

    Ui::HLotti *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel *model;
    QString sConnection;
    int userid;
    HReadOnlyModelNew *tbm;
    QSqlTableModel *mTipi;
    QSqlTableModel *mProdotti;


    void setupForm();
};

#endif // HLOTTI
