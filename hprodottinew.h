#ifndef HPRODOTTINEW_H
#define HPRODOTTINEW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRelationalTableModel>
#include "huser.h"
#include "hmodprodotti.h"

namespace Ui {
class HProdottiNew;
}

class HProdottiNew : public QWidget
{
    Q_OBJECT

public:
    explicit HProdottiNew(HUser *puser=0,QSqlDatabase pdb=QSqlDatabase(),QWidget *parent=0);
    ~HProdottiNew();
private:
    Ui::HProdottiNew *ui;
    QSqlDatabase db;
    HModProdotti *tmProdotti;
    QSqlQueryModel *tmTipi;
    HUser *user;
private slots:
    void getTypes();

    void save();

    void print(bool pdf=false);

    void load(const QString tosearch=QString());

    void reloadProduct();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_checkBox_toggled(bool checked);

    void on_tvProdotti_doubleClicked(const QModelIndex &index);

    void on_pbMod_clicked();

    void on_pbPrint_clicked();

    void on_pbLoads_clicked();

    void on_cbTipiProdotto_currentIndexChanged(int index);

    void on_chbBio_toggled(bool checked);

    void on_pbPreferredLots_clicked();



    void on_lineEdit_returnPressed();




};

#endif // HPRODOTTINEW_H
