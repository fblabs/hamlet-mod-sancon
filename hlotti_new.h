#ifndef HLOTTI_NEW_H
#define HLOTTI_NEW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include "huser.h"

namespace Ui {
class HLotti_new;
}

class HLotti_new : public QWidget
{
    Q_OBJECT

public:
    explicit HLotti_new(QSqlDatabase pdb=QSqlDatabase(),HUser *p_user=new HUser(),QWidget *parent = nullptr);
    ~HLotti_new();

private:
    Ui::HLotti_new *ui;
    QSqlDatabase db;
    HUser *user;

private slots:
    QSqlQueryModel *loadLotsData();
    void on_deFrom_userDateChanged(const QDate &date);
    void on_deTo_userDateChanged(const QDate &date);
    void on_pbClose_clicked();
    void on_tvLotti_doubleClicked(const QModelIndex &index);
    void on_pbLotInfo_clicked();
    void getLotTypes();
    void on_ckbUseType_toggled(bool checked);
    void on_cbType_currentIndexChanged(int index);
    void print();
    void on_pbPrint_clicked();
    QString buildLotsQuery(int tipo=-1, int prodotto=-1);
    QSqlQueryModel *getProducts();
    void on_cbProduct_currentIndexChanged(int index);
    void on_ckbUseProduct_toggled(bool checked);
    void on_tvLotti_customContextMenuRequested(const QPoint &pos);
    void showContextMenu(const QPoint& pos);
    void copyField();
    void datiBio();
    void on_pbDelete_clicked();
    void deleteLot(const int p_id);
    void on_chb_bio_toggled(bool checked);

    void on_le_search_returnPressed();
};

#endif // HLOTTI_NEW_H
