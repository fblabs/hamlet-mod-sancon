#ifndef HWAREHOUSEDETAILS_H
#define HWAREHOUSEDETAILS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include "huser.h"


namespace Ui {
class HWarehouseDetails;
}

class HWarehouseDetails : public QWidget
{
    Q_OBJECT

public:
    explicit HWarehouseDetails(HUser *p_user=new HUser(), QSqlDatabase pdb=QSqlDatabase(), int id=-1, int pidlotto=0, QWidget *parent = 0);
    ~HWarehouseDetails();

private slots:

    void getLotdefData();
    void on_pbSave_clicked();
    void on_pbClose_clicked();
    bool saveOperation();
    void updateAmounts();
    void deleteOperation();



    void on_leQuantita_returnPressed();

    void on_pbDelete_clicked();

private:
    Ui::HWarehouseDetails *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel *mod;
    QDataWidgetMapper *mapper;
    int opid;
    int idlotto;
    HUser* user;
signals:
    void confirm();
};

#endif // HWAREHOUSEDETAILS_H
