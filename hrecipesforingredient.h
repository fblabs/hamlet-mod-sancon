#ifndef HRECIPESFORINGREDIENT_H
#define HRECIPESFORINGREDIENT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "huser.h"
#include <QDebug>
#include <QCompleter>

namespace Ui {
class HRecipesForIngredient;
}

class HRecipesForIngredient : public QWidget
{
    Q_OBJECT

public:
    explicit HRecipesForIngredient(HUser* puser=nullptr,QSqlDatabase pdb=QSqlDatabase(),QWidget *parent = nullptr);
    ~HRecipesForIngredient();

private:
    Ui::HRecipesForIngredient *ui;
    HUser *user;
    QSqlDatabase db;
    QSqlQueryModel* mod;
    QCompleter* comp;
 private slots:
   void getIngredients();
   void getRecipes(int pid=-1);
   void print();

   void on_cbIngredients_currentIndexChanged(int index);
   void on_pbPrint_clicked();

   void on_pbClose_clicked();
};

#endif // HRECIPESFORINGREDIENT_H
