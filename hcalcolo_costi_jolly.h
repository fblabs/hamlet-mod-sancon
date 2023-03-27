#ifndef HCALCOLO_COSTI_JOLLY_H
#define HCALCOLO_COSTI_JOLLY_H

#include <QWidget>
#include <QStandardItemModel>
#include <QSqlQueryModel>
#include "huser.h"


namespace Ui {
class HCalcolo_costi_jolly;
}

class HCalcolo_costi_jolly : public QWidget
{
    Q_OBJECT

public:
    explicit HCalcolo_costi_jolly(QSqlQueryModel *p_recipe_model=nullptr,QStandardItemModel *p_componenti_model=nullptr,double p_formato=0.0,HUser *p_user=nullptr,QWidget *parent = nullptr);
    ~HCalcolo_costi_jolly();
    void setOverviewData(QString p_overview=QString());


private:
    Ui::HCalcolo_costi_jolly *ui;
    QSqlQueryModel *recipe_mod;
    QStandardItemModel *componenti_mod;
    HUser *user;
    double formato;

private slots:
    QStandardItemModel *convert_recipe_model();
     void recalculate();
     double get_factor();
     double get_total_formato();
     void on_pbClose_clicked();
};

#endif // HCALCOLO_COSTI_JOLLY_H
