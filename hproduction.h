#ifndef HPRODUCTION_H
#define HPRODUCTION_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QList>
#include "huser.h"






namespace Ui {
class HProduction;
}

class HProduction : public QWidget
{
    Q_OBJECT

public:
    explicit HProduction(HUser *puser=0, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent = 0);
    ~HProduction();

private:
    Ui::HProduction *ui;
    QSqlDatabase db;
    HUser *user;

    QSqlQueryModel *qmClienti;
    QSqlQueryModel *qmRicette;
    QStandardItemModel *model;
    QSqlTableModel *tmTipiLotti;
    QSqlTableModel *tmUm;
 //   QList<int> *writeRed;
 //   QStandardItemModel *tableModel;
    QSqlQueryModel* qmod;


    bool modifyLot;
    int lottomodifica;

private slots:
    void addLot(QModelIndex index);
    void getNewRow(QList<QStandardItem *> list);
    void getClients();
    void getSubclients();
    void getRecipesForClient();
    void getRecipe();
    void productSelected();
    void getLotModel();
    void lotSelected();
    void addLotProd();
    void addLotFuoriRicettaN(QList<QStandardItem *> row);
    void addLotFuoriRicetta();
    bool saveProduction();
    void recalculateTotal();
    void calculateActualTotal();
    void updateTotals();
    void setAddProductFuoriRicettaUI(bool);
    bool saveNewLot(QString lot, int prodotto);
    bool saveLotLoad(int idlotto, int prodotto);
    bool saveOperation(int row, int action);
    bool saveComposizione(int lottotarget, int operazione);
    bool updateComposition();
    void printRecipe();
    void printProduction();
    int lastInsertId();
    void getLotToModify(QString lot);
    QString getNewLot(int prod);
    bool saveUpdatedComposizione();
    bool saveUpdatedOperazione(int row);
    void on_pushButton_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_3_clicked();
    void on_leQtyTotal_returnPressed();
    void on_pushButton_7_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_7_toggled(bool checked);
    void on_pbAddLottoFuoriRicetta_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_10_clicked();
    void on_checkBox_toggled(bool checked);
    void on_pbAnnulla_clicked();
    void on_pushButton_11_clicked();


};

#endif // HPRODUCTION_H
