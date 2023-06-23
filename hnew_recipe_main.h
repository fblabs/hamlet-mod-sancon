#ifndef HNEW_RECIPE_MAIN_H
#define HNEW_RECIPE_MAIN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>

namespace Ui {
class HNew_recipe_main;
}

class HNew_recipe_main : public QWidget
{
    Q_OBJECT

public:
    explicit HNew_recipe_main(int p_id_prodotto=-1,QSqlDatabase p_db=QSqlDatabase(),QWidget *parent = nullptr);
    ~HNew_recipe_main();

private:
    Ui::HNew_recipe_main *ui;
    QSqlDatabase db;
    QSqlQueryModel *prod_mod;
    int id_prodotto_main;

private slots:
    void get_products();

    void on_pbAddRecipeAndproduct_clicked();

    void on_leSearchProduct_returnPressed();

    void on_pbClose_clicked();

    void on_cb_what_toggled(bool checked);

signals:
    void sig_add_recipe_and_product(const int p_tipo );
    void sig_add_recipe_to_product(const int id_prodotto);
};

#endif // HNEW_RECIPE_MAIN_H
