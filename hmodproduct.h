#ifndef HMODPRODUCT_H
#define HMODPRODUCT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include <QSqlTableModel>
#include "huser.h"



enum FIELDS{
    ID=0,
    DESCRIZIONE=1,
    TIPO=2,
    ALLERGENE=3,
    ATTIVO=4,
    BIO=5,
    PRICE=6,
    LAST_UPDATE=7,
    ALLERGENE_USA=8

};

namespace Ui {
class HModProduct;
}

class HModProduct : public QWidget
{
    Q_OBJECT

public:
    explicit HModProduct(int pID=-1,HUser *user=0, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent = 0);
    ~HModProduct();

private:
    Ui::HModProduct *ui;
    QSqlDatabase db;
    QSqlRelationalTableModel *productsmodel;
    QSqlTableModel *typemod;
    QDataWidgetMapper *map;
    int ID;
private slots:
   bool getProductData();

   void on_pbClose_clicked();
   void on_pbSave_clicked();
   void setModifyEnabled(bool enable=false);


signals:
   void done();
};

#endif // HMODPRODUCT_H
