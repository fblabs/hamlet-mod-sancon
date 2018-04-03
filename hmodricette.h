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
    void creatNewRecipe();
    bool duplicateRecipe();
    void getRicette();
    void printRecipe();
    void saveNote();
    void showContextMenu(const QPoint& pos);
    void showaddRow();
    void addRiga(QList<QStandardItem*>);
    void calculateTotal();
    void updateTotals();
    void showAssociatedCustomers();


    void on_pbAddRow_clicked();

    void on_pbDeleteRow_clicked();

    void on_pushButton_3_clicked();

   // void on_pbModRow_clicked();

    void on_pushButton_clicked();


    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pbduplica_clicked();

    void on_leTotal_returnPressed();

    void on_leTotal_textChanged(const QString &arg1);

    void on_pushButton_6_clicked();



    void on_pbC4R_clicked();

private:
    Ui::HModRicette *ui;
    bool update;
    QSqlDatabase db;
    QSqlTableModel *tric;
    QSqlQueryModel *qmric;
    QList<int> *writeRed;
    HUser *user;

};

#endif // HMODRICETTE_H
