#ifndef HCOSTI_H
#define HCOSTI_H

#include <QWidget>

#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include "hcosti_model.h"
#include "hcomponenti_model.h"
#include "huser.h"


namespace Ui {
class HCosti;
}

class HCosti : public QWidget
{
    Q_OBJECT

public:
    explicit HCosti(QSqlDatabase p_db,HUser *p_user=nullptr,QWidget *parent = nullptr);
    ~HCosti();

private:
    Ui::HCosti *ui;
    QSqlDatabase db;
    HUser *user;
    bool modify;
    HCosti_model *recipe_org_model;
    HCosti_model *recipe_mod_model;
    QSqlQueryModel *recipe_q_model;
    HComponenti_model *componenti_costo_model;

    double tot_recipe;


 private slots:
    void get_clienti();
    QSqlQueryModel* get_client_products();
    HComponenti_model *build_componenti_model();
    void get_ricetta();
    void on_cbClienti_currentIndexChanged(int index);
    void on_leFormato_returnPressed();
    void on_pbClose_clicked();
    void set_componenti_index(QModelIndex index, int column=0, QString value=QString());
    void on_pbAggiungi_componente_costo_clicked();
    void add_item(QString item, QString quantita, QString costo);
    void calculate_components_cost();
    void on_pbMargin_clicked();
    HCosti_model* QueryToCosti(QSqlQueryModel *from);
    QStandardItemModel* StandardCopy(QStandardItemModel *from);
    void print();
    void calculate_recipe();
    void reset();
    void modify_index(QModelIndex index, QString item=QString(), QString amount="1", QString costo="0.000");
    void on_pbPrint_clicked();
    void on_pbRimuovi_componente_costo_clicked();
    void on_tvComponentiCosto_doubleClicked(const QModelIndex &index);
    void on_pbJolly_clicked();
    void on_leMargine_returnPressed();
    void on_cbModify_toggled(bool checked);
    void change_modify_state(bool set_modifiable=false);
    double get_peso_totale_ricetta();
    void toggle_modify();


signals:
    void item_modified();
    void modify_toggled(bool is_modifiable=false);
};

#endif // HCOSTI_H
