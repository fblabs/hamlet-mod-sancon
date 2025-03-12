#ifndef HCALCOLO_COSTI_H
#define HCALCOLO_COSTI_H

#include <QWidget>
#include "huser.h"
#include <QSqlDatabase>
#include <QStandardItemModel>

namespace Ui {
class HCalcolo_costi;
}

class HCalcolo_costi : public QWidget
{
    Q_OBJECT

public:
    explicit HCalcolo_costi(HUser *p_user=nullptr,QSqlDatabase p_db=QSqlDatabase(),QWidget *parent = nullptr);
    ~HCalcolo_costi();

private:
    Ui::HCalcolo_costi *ui;
    HUser *user;
    QSqlDatabase db;
    double factor;
    QStandardItemModel* componenti_costo_model;


private slots:

   QSqlQueryModel* get_client_products();
   QStandardItemModel* build_componenti_model();
   void get_clienti();
   void on_cbClienti_currentIndexChanged(int index);
   void get_ricetta();
   void on_pbClose_clicked();
   void on_leFormato_returnPressed();
   void calcolo_per_formato(const QSqlQueryModel *model=new QSqlQueryModel());
   void on_pbCalcolo_clicked();
   void on_pbAggiungi_componente_costo_clicked();
   void on_pbRimuovi_componente_costo_clicked();
   void on_leCosto_energia_returnPressed();
   void on_leCosto_personale_returnPressed();
   void on_leCosto_spese_generali_returnPressed();
   void add_item(QString item,QString costo);
   void update_componenti_costo_row(QString item,QString costo);
   void on_leMargine_returnPressed();
   void print();
   void updateComponenti_model(int row, double value);

   void on_pbPrint_clicked();
   double calculate_factor(QSqlQueryModel* model);


   void on_tvComponentiCosto_doubleClicked(const QModelIndex &index);

signals:
   void component_added(QString p_item=QString(),QString p_costo=QString("0.00"));
};

#endif // HCALCOLO_COSTI_H
