#ifndef HMODIFYLOT_H
#define HMODIFYLOT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDate>


namespace Ui {
class HModifyLot;
}

class HModifyLot : public QWidget
{
    Q_OBJECT

public:
    explicit HModifyLot(int pidlotto=-1, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent = nullptr);
    ~HModifyLot();



private slots:

    void updateLot();

    void on_cbScad_toggled(bool checked);

    void on_pushButton_clicked();

    void on_pbComposizione_clicked();

    void on_pbClose_clicked();

    void on_pbLotOperations_clicked();


    void getLoadAmount();

 private:
    Ui::HModifyLot *ui;
    QSqlDatabase db;
    int lot;
    int tipo;
    int prodotto;
    QDate f;
    QDate t;


signals:
    void updatedLot();
};

#endif // HMODIFYLOT_H
