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

public:
    explicit HAddLotInProduction(HDataToPass *datapass, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent=nullptr);
    ~HAddLotInProduction();


private:
    Ui::HAddLotInProduction *ui;
    QStandardItemModel *model;
    HDataToPass *data;
    QSqlDatabase db;
    QSqlDatabase prefsdb;
    QStandardItemModel *qmLots;
private slots:
    void lastLots();
    void addLot();
    void on_pdClose_clicked();
    void on_pbAdd_clicked();
    QString findDefaultLot(const QString p_prod=QString());
    void on_pbDefaultLot_clicked();
    void on_pbCancel_clicked();
    void on_tvLots_doubleClicked(const QModelIndex &index);
    void clean();
    double get_giacenza(const int p_id=-1);

public slots:
     void click();
signals:
    void lot_added();
};

#endif // HADDLOTINPRODUCTION_H
