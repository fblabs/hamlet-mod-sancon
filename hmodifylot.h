#ifndef HMODIFYLOT_H
#define HMODIFYLOT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDate>
#include "huser.h"


namespace Ui {
class HModifyLot;
}

class HModifyLot : public QWidget
{
    Q_OBJECT

public:
    explicit HModifyLot(int pidlotto=-1, HUser *p_user=new HUser(), QSqlDatabase pdb=QSqlDatabase(), const QString p_descrizione=QString(), QWidget *parent = nullptr);
    ~HModifyLot();



private slots:

    void updateLot();

    void on_cbScad_toggled(bool checked);

    void on_pushButton_clicked();

    void on_pbComposizione_clicked();

    void on_pbClose_clicked();

    void on_pbLotOperations_clicked();


    void getLoadAmount();

    void loadLotData();

 private:
    Ui::HModifyLot *ui;
    QSqlDatabase db;
    int lot;
    int tipo;
    int prodotto;
    QDate f;
    QDate t;
    HUser *user;
    QString descrizione;


signals:
    void updatedLot();
};

#endif // HMODIFYLOT_H
