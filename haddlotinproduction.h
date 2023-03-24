#ifndef HADDLOTINPRODUCTION_H
#define HADDLOTINPRODUCTION_H

#include <QWidget>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QSqlQueryModel>
//#include "huser.h"
#include "hdatatopass.h"


namespace Ui {
class HAddLotInProduction;
}

class HAddLotInProduction : public QWidget
{
    Q_OBJECT

    QStandardItemModel *model;
    HDataToPass *data;

    QSqlDatabase db;
    QSqlDatabase prefsdb;
    QStandardItemModel *qmLots;


public:
    explicit HAddLotInProduction(HDataToPass *datapass, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent=nullptr);
    ~HAddLotInProduction();
    void click();

private:
    Ui::HAddLotInProduction *ui;
private slots:
    void lastLots();
    void addLot();
    void on_pdClose_clicked();
    void on_pbAdd_clicked();
    void on_lvLastLots_doubleClicked(const QModelIndex &index);
    QString findDefaultLot(const QString p_prod=QString());

 //  void searchByLot();
 //   void on_leSearch_returnPressed();

 //   void on_leSearch_textChanged(const QString &arg1);
    void on_pbDefaultLot_clicked();
    void on_pbCancel_clicked();
};

#endif // HADDLOTINPRODUCTION_H
