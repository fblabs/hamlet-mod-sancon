#ifndef HWAREHOUSEDETAILS_H
#define HWAREHOUSEDETAILS_H

#include <QWidget>
#include <QSqlDatabase>


namespace Ui {
class HWarehouseDetails;
}

class HWarehouseDetails : public QWidget
{
    Q_OBJECT

public:
    explicit HWarehouseDetails(QSqlDatabase pdb=QSqlDatabase(),int id=-1,QWidget *parent = 0);
    ~HWarehouseDetails();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HWarehouseDetails *ui;
    QSqlDatabase db;
};

#endif // HWAREHOUSEDETAILS_H
