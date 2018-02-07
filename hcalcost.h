#ifndef HCALCOST_H
#define HCALCOST_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "huser.h"
#include "hprint.h"


namespace Ui {
class HCalcost;
}

class HCalcost : public QWidget
{
    Q_OBJECT

public:
    explicit HCalcost(QSqlDatabase pdb=QSqlDatabase(), HUser* puser=0, QWidget *parent = 0);
    ~HCalcost();

private:
    Ui::HCalcost *ui;
    HUser* user;
    QSqlDatabase db;
    QSqlTableModel *mod;
    QSqlQueryModel *cmod;
    QSqlQueryModel *ricmod;
   private slots:
   void getClients();
   void getProducts();
   void getRecipe();
   void on_pbClose_clicked();
   void on_lvProdotti_clicked(const QModelIndex &index);
   void on_cbClients_currentIndexChanged(int index);
   void getConfezionamenti(int tipo);
   void on_cbVasi_currentIndexChanged(int index);
   void on_cbTappi_currentIndexChanged(int index);
   void on_leQtVasi_returnPressed();
   void on_leQtTappi_returnPressed();
   void on_leQuantitaProdotto_returnPressed();
   void on_leDaprodurre_returnPressed();
   void on_leCostoTotale_returnPressed();
   void on_pbCalcola_clicked();
   void on_pbPrint_clicked();
   void on_pushButton_clicked();
};

#endif // HCALCOST_H
