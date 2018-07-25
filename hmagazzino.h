#ifndef HMAGAZZINO_H
#define HMAGAZZINO_H

#include <QWidget>
#include <QSqlDatabase>
#include "huser.h"



namespace Ui {
class HMagazzino;
}

class HMagazzino : public QWidget
{
    Q_OBJECT

public:
    explicit HMagazzino(QSqlDatabase pdb=QSqlDatabase(), HUser *puser= 0, QWidget *parent = 0);
    ~HMagazzino();

private slots:
    void on_pushButton_clicked();
    void queryOperations();
    void loadProdotti();


    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_cbP_toggled(bool checked);

    void on_cbC_toggled(bool checked);

    void on_cbS_toggled(bool checked);

    void on_cbProdotti_currentIndexChanged(int index);

    void updateOperation();

    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::HMagazzino *ui;
    QSqlDatabase db;
    HUser *user;
};

#endif // HMAGAZZINO_H
