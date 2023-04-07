#ifndef HCALCOLO_COSTI_JOLLY_H
#define HCALCOLO_COSTI_JOLLY_H

#include <QWidget>
#include <QStandardItemModel>
#include <QSqlQueryModel>
#include "huser.h"

#include "hcosti_model.h"




namespace Ui {
class HCalcolo_costi_jolly;
}

class HCalcolo_costi_jolly : public QWidget
{
    Q_OBJECT

public:
    explicit HCalcolo_costi_jolly(QStandardItemModel *p_recipe_model=nullptr,QStandardItemModel *p_componenti_model=nullptr,double p_formato=0.0,HUser *p_user=nullptr,QWidget *parent = nullptr);
    ~HCalcolo_costi_jolly();
    void setOverviewData(QString p_overview=QString());


private:
    Ui::HCalcolo_costi_jolly *ui;
    QStandardItemModel *recipe_mod;
    QStandardItemModel *componenti_mod;
    HUser *user;
    double formato;

private slots:
    HCosti_model* convert_recipe_model();
     void recalculate();
    double get_components_cost();
     double get_factor();
     double get_total_formato();
     void on_pbClose_clicked();
     void print();
     void on_pbReset_clicked();
     void on_pbPrint_clicked();
     void refresh_data();
     void on_pbUpdate_clicked();
};

#endif // HCALCOLO_COSTI_JOLLY_H
