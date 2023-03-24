#ifndef HCOMPONENTI_COSTO_ITEM_H
#define HCOMPONENTI_COSTO_ITEM_H

#include <QWidget>
#include <QModelIndex>
#include <QstandardItemModel>

namespace Ui {
class HComponenti_costo_Item;
}

class HComponenti_costo_Item : public QWidget
{
    Q_OBJECT

public:
    explicit HComponenti_costo_Item(QStandardItemModel *p_mod, QModelIndex p_ix=QModelIndex(), QWidget *parent = nullptr);
    ~HComponenti_costo_Item();

private slots:

    void on_leCosto_returnPressed();

private:
    Ui::HComponenti_costo_Item *ui;
    QStandardItemModel *mod;
    QModelIndex uix;
signals:
   void row_modified(int p_row,double p_costo);

};

#endif // HCOMPONENTI_COSTO_ITEM_H
