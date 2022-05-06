#ifndef HWAREHOUSEDETAILS_H
#define HWAREHOUSEDETAILS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>


namespace Ui {
class HWarehouseDetails;
}

class HWarehouseDetails : public QWidget
{
    Q_OBJECT

public:
    explicit HWarehouseDetails(QSqlDatabase pdb=QSqlDatabase(), int id=-1, int pidlotto=0, QWidget *parent = 0);
    ~HWarehouseDetails();

private slots:

    void getLotdefData();
    void on_pbSave_clicked();
    void on_pbClose_clicked();
    bool saveOperation();
    void updateAmounts();



    void on_leQuantita_returnPressed();

private:
    Ui::HWarehouseDetails *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel *mod;
    QDataWidgetMapper *mapper;
    int opid;
    int idlotto;
signals:
    void confirm();
};

#endif // HWAREHOUSEDETAILS_H
