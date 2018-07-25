#ifndef HANALYZE_A_H
#define HANALYZE_A_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTablemodel>

namespace Ui {
class HAnalyze_a;
}

class HAnalyze_a : public QWidget
{
    Q_OBJECT

public:
    explicit HAnalyze_a(QWidget *parent = 0);
    ~HAnalyze_a();
    void setConnectionName(QString conn);

private:
    Ui::HAnalyze_a *ui;
    QString sConn;
    QSqlDatabase db;

    QSqlTableModel *tmProdotti;
    QSqlTableModel *tmAnagrafica;
    QString filter;
    QString ID;
    QString lot;
    QSqlQueryModel *qmMain;
    QSqlQueryModel *m;
    QSqlQueryModel *zeromodel;

private slots:
    void getLots();
   // void getAssociateRecipes();
    QString getProduct(QString lot);

    void loadDetails(QString lot);
   // void loadLotInfo();

    void radioToggled();

    void requestData();
    void getProductsForClientsInRange();
    void on_tvMain_current_changed();
    void resetData();
    void getData();



    void on_pushButton_clicked();
  //  void on_tvDetailsLot_doubleClicked(const QModelIndex &index);
   // void on_tableView_doubleClicked(const QModelIndex &index);
   // //void on_tvDetailsLot_activated(const QModelIndex &index);
    void on_pushButton_2_clicked();
    void on_tableView_clicked(const QModelIndex &index);
    void on_tvMain_clicked(const QModelIndex &index);

    void on_rbAnagrafica_toggled(bool checked);
    void on_pushButton_3_clicked();
    void on_tvDetails_clicked(const QModelIndex &index);
    void on_pbFilter_toggled(bool checked);
    void on_rbProdotti_toggled(bool checked);
    void on_cbProdotti_currentIndexChanged(int index);

    void on_rbLes_toggled(bool checked);
};

#endif // HANALYZE_A_H
