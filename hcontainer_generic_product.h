#ifndef HCONTAINER_GENERIC_PRODUCT_H
#define HCONTAINER_GENERIC_PRODUCT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>

namespace Ui {
class HContainer_generic_product;
}

class HContainer_generic_product : public QWidget
{
    Q_OBJECT

public:
    explicit HContainer_generic_product(const int p_tipo=-1,QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HContainer_generic_product();

private:
    Ui::HContainer_generic_product *ui;
    QSqlDatabase db;
private slots:
    void getProducts(int p_tipo=-1);
    void on_cb_prodotti_currentIndexChanged(int index);
    void data();
signals:
     void component_added(QString item,QString costo);

};

#endif // HCONTAINER_GENERIC_PRODUCT_H
