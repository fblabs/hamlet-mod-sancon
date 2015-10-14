#ifndef HMODRICETTE_H
#define HMODRICETTE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QStandardItem>
#include "huser.h"

namespace Ui {
class HModRicette;
}

class HModRicette : public QWidget
{
    Q_OBJECT

public:
    explicit HModRicette(QWidget *parent = 0);
    ~HModRicette();
   // void init(QString, int id);
    void init (QString, HUser *usr);

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

private:
    Ui::HModRicette *ui;
    bool update;
    QSqlDatabase db;
    QString sConn;
    QSqlTableModel *tric;
    QSqlQueryModel *qmric;

};

#endif // HMODRICETTE_H
