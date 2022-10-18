#ifndef HMODIFYPROD_H
#define HMODIFYPROD_H

#include <QWidget>
#include <QSqlDatabase>
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
    explicit HModifyProd(HUser *pusr, QSqlDatabase pdb=QSqlDatabase(),QWidget *parent = 0);
    ~HModifyProd();

private:
    Ui::HModifyProd *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel *tmLots;
    QSqlTableModel *tmProdotti;
    QCompleter *comp;
    QSqlQueryModel *qmod;
 //   QCompleter *prodcomp;
    HUser *user;
    int ACTION;
    int idlot;
    QDate dfrom;
    QDate dto;
    QString tipo;
    QSqlTableModel* tmRaw;

    QString currentLot;
    int tipoLot;
    QString filter;
private slots:
    void getComponentsLot();
    void getLotRowData();
    bool updateRow();
    bool deleteRow();
    bool addRow();
    void updateProduction();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_deDal_dateChanged(const QDate &date);
    void on_deAl_dateChanged(const QDate &date);
    void on_leSearch_textChanged(const QString &arg1);
    void findIt(QString arg);
    void on_rbprod_toggled(bool checked);
    void on_pbUpdateAmount_clicked();
    void on_radioButton_2_toggled(bool checked);
    void refreshData();
    void on_leQuantita_returnPressed();
    void on_leLotto_returnPressed();
    void on_leLotto_textChanged(const QString &arg1);
    void updateGiacenza();
    int findLotFirstLoad();
    void on_rbNoAction_toggled(bool checked);
    void on_rbAdd_toggled(bool checked);
    void on_rbDelete_toggled(bool checked);
    void on_rbUpdate_toggled(bool checked);
};

#endif // HMODIFYPROD_H
