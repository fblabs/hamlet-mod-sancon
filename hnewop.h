#ifndef HNEWOP_H
#define HNEWOP_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include "huser.h"
#include "mainwindow.h"

namespace Ui {
class HNewOp;
}

class HNewOp : public QWidget
{
    Q_OBJECT

public:
    explicit HNewOp(HUser *user=new HUser(), QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = 0);
    ~HNewOp();
    QSqlDatabase db;


private:
    Ui::HNewOp *ui;
    QSqlTableModel *tmtipi;
   //tab 1
    QString sLot;
    QString sQuantita;
    QString ilot;
    QSqlTableModel *tbm;
   //tab 0
    QSqlTableModel *tfr;
    QString sCurProd;
    QString sFornID0;
    QString sUM0;
    QString sData0;
    QString sLot0;
    QString newLot;
    int usr;
    QString parseLotForProductID(QString lot);
    QString getNewLot();
    int user;
    QString APEX;
    QString QUOTE;

private slots:
    void elabLeLot();
    void setupForm();
    void cbTipiLotSet();
    void cbunitaMisura();

    void on_pushButton_2_clicked();
    void productSelected();
    void fornitoreSelected();

    void onConnectionNameSet();
    void createUmModel();
    QString saveOperationString(QString plot, bool);
    QString saveNewLotString(bool isLoad);

    int saveOperation();
    void on_pushButton_clicked();

    void on_radioButton_2_toggled(bool checked);

signals:

    void trigger();
};

#endif // HNEWOP_H
