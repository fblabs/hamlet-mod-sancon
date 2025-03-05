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
    bool addNewContainer(const int p_id);
    void on_pbSave_clicked();

    void on_pbCancel_clicked();

private:
    Ui::HNewProduct *ui;
    QSqlDatabase db;


    QSqlTableModel *tmTipo;
signals:
    void done();
};

#endif // HNEWPRODUCT_H
