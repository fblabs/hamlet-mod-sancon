#ifndef HGESTIONEUTENTI_H
#define HGESTIONEUTENTI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>
#include "huser.h"


#include <hnewuser.h>

namespace Ui {
class HGestioneUtenti;
}

class HGestioneUtenti : public QWidget
{
    Q_OBJECT

public:
    explicit HGestioneUtenti(HUser * p_user=nullptr,QSqlDatabase pdb=QSqlDatabase(),QWidget *parent = 0);
    ~HGestioneUtenti();


private slots:
    bool updatePassword();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_checkBox_toggled(bool checked);
    void on_pushButton_2_clicked();
    void on_pbNuovaPassword_clicked();
    int getGruppo();
    void getIdUtente();

    void on_comboBox_currentIndexChanged(int index);



    void on_pbGroups_clicked();

private:
    Ui::HGestioneUtenti *ui;
    HUser *user;

    QDataWidgetMapper *mapper;
    QSqlDatabase db;
    QSqlRelationalTableModel *utm;
    //   QSqlRelationalTableModel *gtm;
    QSqlTableModel *gtm;
    int idgruppo;
    int idutente;


};

#endif // HGESTIONEUTENTI_H
