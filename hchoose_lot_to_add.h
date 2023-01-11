#ifndef HCHOOSE_LOT_TO_ADD_H
#define HCHOOSE_LOT_TO_ADD_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include "huser.h"
namespace Ui {
class HChoose_lot_to_add;
}

class HChoose_lot_to_add : public QWidget
{
    Q_OBJECT

public:
    explicit HChoose_lot_to_add(const int p_destlot, HUser *p_user=nullptr, QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HChoose_lot_to_add();

private:
    Ui::HChoose_lot_to_add *ui;
    QSqlDatabase db;
    HUser *user;
    int dest_lot;
private slots:
    QSqlQueryModel* getProducts();
    QSqlQueryModel* getProductLots();
    void on_pbClose_clicked();
    void on_cbProducts_currentIndexChanged(int index);
    void on_pbAdd_clicked();
    bool saveAdd();
    QSqlQueryModel* search_by_lot();
    void setCurrentLsText();

    void on_leSearch_returnPressed();

signals:
    void add_saved();

};

#endif // HCHOOSE_LOT_TO_ADD_H
