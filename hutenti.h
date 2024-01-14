#ifndef HUTENTI_H
#define HUTENTI_H

#include "mainwindow.h"
#include <QWidget>
#include <QSqlRelationalTableModel>
#include <QItemSelectionModel>
#include <QDataWidgetMapper>
#include "huser.h"
#include "hprint.h"

namespace Ui {
class HUtenti;
}

class HUtenti : public QWidget
{
    Q_OBJECT

public:
    explicit HUtenti(HUser *pusr=0, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent = 0);
    ~HUtenti();
     QSqlDatabase db;
     void setConnectionName(QString conn,HUser *usr);




private:
    Ui::HUtenti *ui;
    QSqlRelationalTableModel* tm;
    QDataWidgetMapper* dwMapper;
    QDataWidgetMapper* scmodel;
    QItemSelectionModel* selm;
    HUser *user;


private slots:
    void productSearch();
    void hidesubclienti();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void selectMasterClient();
    void updateSubclient();
    void setFilter();
    void print();
    bool save();
    void refresh();
    void on_pushButton_clicked();
    void on_cbxMasterCli_currentIndexChanged(int index);
    void on_pushButton_5_clicked();
    void on_rbAll_toggled(bool checked);
    void on_rbClients_toggled(bool checked);
    void on_rbSuppliers_toggled(bool checked);
    void on_rbTrasports_toggled(bool checked);
    void on_cbVisible_2_toggled(bool checked);
    void on_pbPrint_clicked();
    void on_lsearch_returnPressed();
    void on_pushButton_6_clicked();
    void on_rbGraphics_toggled(bool checked);
    void checkText(QString pt=QString());

    void on_tcon_textChanged();
};




#endif // HUTENTI_H
