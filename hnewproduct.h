#ifndef HNEWPRODUCT_H
#define HNEWPRODUCT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "huser.h"


namespace Ui {
class HNewProduct;
}

class HNewProduct : public QWidget
{
    Q_OBJECT

public:
    explicit HNewProduct(HUser *pusr=0, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent = 0);
    ~HNewProduct();

private slots:
    void on_pushButton_2_clicked();
    void addNewProduct();
    void on_pushButton_clicked();
    void tipoSelected();

private:
    Ui::HNewProduct *ui;
    QSqlDatabase db;


    QSqlTableModel *tmTipo;
};

#endif // HNEWPRODUCT_H
