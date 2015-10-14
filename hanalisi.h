#ifndef HANALISI_H
#define HANALISI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QDate>

namespace Ui {
class HAnalisi;
}

class HAnalisi : public QWidget
{
    Q_OBJECT

public:
    explicit HAnalisi(QWidget *parent = 0);
    ~HAnalisi();
public slots:
    void init(QString conn);

private:
    Ui::HAnalisi *ui;
    QSqlDatabase db;
    QSqlTableModel *tmClienti;
    QString sConn;
    QDate datedal;
    QDate dateal;


private slots:

    void getProductsForClient();
    void getLotComponents();
    void getLotComponents(int idlotto);
    int getLotID(QString lot);
  //  void findLotComposition();
    void findLotUse();
    void setLotSearch(QString msg);
    void setNarrowSearch();
    void narrow();
    void setCompSearch();
    void on_rbAll_toggled(bool checked);
    void on_rbMateriePrime_toggled(bool checked);
    void on_rbProdottifiniti_toggled(bool checked);
    void on_rbSemilavorati_toggled(bool checked);
    void on_rbPackages_toggled(bool checked);
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void getYearlyProduction();
    void on_checkBox_toggled(bool checked);
    void on_deFrom_dateChanged(const QDate &date);
    void on_deTo_dateChanged(const QDate &date);


    void printThis();


public slots:
    void doMenu(QPoint pos);
};

#endif // HANALISI_H
