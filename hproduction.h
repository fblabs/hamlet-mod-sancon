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

namespace Ui {
class HProduction;
}

class HProduction : public QWidget
{
    Q_OBJECT

public:
    explicit HProduction(QWidget *parent = 0);
    ~HProduction();
    void init(QString conn,QString userid);

private:
    Ui::HProduction *ui;
    QSqlDatabase db;
    QString sConn;
    QSqlQueryModel *qmClienti;
    QString  userID;
    QSqlQueryModel *qmRicette;
  //  QStandardItemModel *model;
    QSqlQueryModel *model;
    QSqlTableModel *tmTipiLotti;
    QSqlTableModel *tmUm;

    bool modifyLot;
    int lottomodifica;

private slots:
    void getClients();
    void getSubclients();
    void getRecipesForClient();
    void getRecipe();
    void lastFiveLots();
    void productSelected();
  //  QList<QStandardItem*> addTableRow();
    void getLotModel();
    void lotSelected();
    void addLotProd();
    void addLotFuoriRicetta();
    bool saveProduction();
    void recalculateTotal();
    void updateTotals();
    void setAddProductFuoriRicettaUI(bool);
    bool saveNewLot(QString lot, int prodotto);
    bool saveLotLoad(int idlotto, int prodotto);
    bool saveOperation(int row, int action);
    bool saveComposizione(int lottotarget, int operazione);
    void updateComposition();
    void printRecipe();
    void printProduction();
    int lastInsertId();
    void getLotToModify(QString lot);
    QString getNewLot(int prod);
    bool saveUpdatedComposizione();
    bool saveUpdatedOperazione(int row);
   // QList<QStandardItem*>createRecipeRow(int iProd, QString, QString, QString, QString);
  //  QList<QStandardItem*>createRecipeRow(int iProd, QString sDescProdotto, QString sPeso);


    void on_pushButton_clicked();
    //void on_lvLastLots_clicked(const QModelIndex &index);
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_3_clicked();
    void on_leQtyTotal_textChanged(const QString &arg1);
    void on_leQtyTotal_returnPressed();
    void on_pushButton_7_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_7_toggled(bool checked);
    void on_pbAddLottoFuoriRicetta_clicked();

    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_checkBox_toggled(bool checked);
    void on_pbAnnulla_clicked();
};

#endif // HPRODUCTION_H
