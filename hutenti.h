#ifndef HUTENTI_H
#define HUTENTI_H

#include "mainwindow.h"
#include <QWidget>
#include <QSqlRelationalTableModel>
#include <QItemSelectionModel>
#include <QDataWidgetMapper>
#include "huser.h"

namespace Ui {
class HUtenti;
}

class HUtenti : public QWidget
{
    Q_OBJECT

public:
    explicit HUtenti(QWidget *parent = 0);
    ~HUtenti();
     QSqlDatabase db;
     void setConnectionName(QString conn,HUser *usr);




private:
    Ui::HUtenti *ui;
    void initForm();
    QSqlRelationalTableModel* tm;
    QDataWidgetMapper* dwMapper;
    QDataWidgetMapper* scmodel;
   // QSqlRelationalTableModel* cm;
    QItemSelectionModel* selm;
    QString sConn;
    HUser *user;


private slots:
    void productSearch();
    void hidesubclienti();
    void on_pushButton_3_clicked();
    void addreset();
    void on_pushButton_2_clicked();
    //viod getMasteClient();
    void onConnectionNameSet();
    void selectMasterClient();
    void updateSubclient();



    void on_pushButton_clicked();

    void on_cbxMasterCli_currentIndexChanged(int index);
};


#endif // HUTENTI_H
