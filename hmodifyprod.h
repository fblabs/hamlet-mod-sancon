#ifndef HMODIFYPROD_H
#define HMODIFYPROD_H

#include <QWidget>
#include <QSqlRelationalTableModel>
#include <QCompleter>
#include "huser.h"
#include <QDate>

namespace Ui {
class HModifyProd;
}

class HModifyProd : public QWidget
{
    Q_OBJECT

public:
    explicit HModifyProd(QWidget *parent = 0);
    ~HModifyProd();
public slots:
    void init(QString conn, HUser *usr);


private:
    Ui::HModifyProd *ui;
    QSqlDatabase db;
    QString sConn;
    QSqlRelationalTableModel *tmLots;
    QSqlTableModel *tmProdotti;
    QCompleter *comp;
 //   QCompleter *prodcomp;
    HUser *user;
    int action;
    int idlot;
    QDate dfrom;
    QDate dto;
    QString tipo;

    QString currentLot;
    int tipoLot;
    QString filter;
private slots:
    void getComponetsLot();
    void getIDLot();
    void getLotRowData();
    bool updateRow();
    bool deleteRow();
    bool addRow();

 //   bool deleteSelectedRow();


    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_pushButton_4_clicked();

    void on_cbUm_currentIndexChanged(int index);
    void on_pushButton_5_clicked();
    void on_deDal_dateChanged(const QDate &date);
    void on_deAl_dateChanged(const QDate &date);
    void on_pushButton_6_clicked();
 //   void on_leSearch_returnPressed();
    void on_leSearch_textChanged(const QString &arg1);
    void on_pushButton_7_clicked();

};

#endif // HMODIFYPROD_H
