#ifndef HMODRICETTE_H
#define HMODRICETTE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QStandardItem>
#include "huser.h"
#include <QList>

namespace Ui {
class HModRicette;
}

class HModRicette : public QWidget
{
    Q_OBJECT

public:
    explicit HModRicette(HUser *pusr=0,QSqlDatabase pdb=QSqlDatabase(),QWidget *parent=0);
    ~HModRicette();

private slots:
    void on_pushButton_2_clicked();
    void loadRicetta();
    void findProduct();
    void removeItem();
    void save();
    void creatNewRecipe(const int p_tipo=-1);
    void add_recipe_to_product(const int p_product=0);
    bool duplicateRecipe();
    void getRicette();
    void printRecipe();
    void saveNote();
    void showContextMenu(const QPoint& pos);
    void showContextMenuImg(const QPoint& pos);
    void showaddRow();
    void addRiga(QList<QStandardItem*>);
    void calculateTotal();
    void updateTotals();
    void showAssociatedCustomers();
    void loadImages(const int p_id=-1);
    void chooseImage();
    void removeImage_ns();
    void save_images_d(const int p_id_ricetta=-1);


    void on_pbAddRow_clicked();

    void on_pbDeleteRow_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pbduplica_clicked();

    void on_leTotal_returnPressed();

    void on_pushButton_6_clicked();

    void on_pbC4R_clicked();

    void on_pbRicingredient_clicked();

    void on_rb_senza_toggled(bool checked);

    void on_rb_con_toggled(bool checked);


    void on_pbReset_clicked();

    void on_pb_save_images_clicked();

    void on_pbImages_clicked();

    void on_pb_addImage_clicked();

private:
    Ui::HModRicette *ui;
    bool update;
    QSqlDatabase db;
    QSqlQueryModel *qmric;
    QList<int> *writeRed;
    HUser *user;
    int current_id;
signals:
    void go_calc();


};

#endif // HMODRICETTE_H
