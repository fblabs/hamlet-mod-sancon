#ifndef HNEWPRODUCT_H
#define HNEWPRODUCT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>


namespace Ui {
class HNewProduct;
}

class HNewProduct : public QWidget
{
    Q_OBJECT

public:
    explicit HNewProduct(QWidget *parent = 0);
    ~HNewProduct();
    void init(QString conn);

private slots:
    void on_pushButton_2_clicked();
    void addNewProduct();
    void on_pushButton_clicked();
    void tipoSelected();

private:
    Ui::HNewProduct *ui;
    QSqlDatabase db;
    QString sConn;

    QSqlTableModel *tmTipo;
};

#endif // HNEWPRODUCT_H
