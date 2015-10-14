#ifndef HGESTIONEUTENTI_H
#define HGESTIONEUTENTI_H

#include <QWidget>


#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QDataWidgetMapper>


#include <hnewuser.h>

namespace Ui {
class HGestioneUtenti;
}

class HGestioneUtenti : public QWidget
{
    Q_OBJECT

public:
    explicit HGestioneUtenti(QWidget *parent = 0);
    ~HGestioneUtenti();
    void init(QString conn);

private slots:
    bool updatePassword();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_checkBox_toggled(bool checked);
    void on_pushButton_2_clicked();
    void on_pbNuovaPassword_clicked();
    void getGruppo();

private:
    Ui::HGestioneUtenti *ui;
    QString sConn;
    QDataWidgetMapper *mapper;
    QSqlDatabase db;
    QSqlRelationalTableModel *utm;
 //   QSqlRelationalTableModel *gtm;
    QSqlTableModel *gtm;


};

#endif // HGESTIONEUTENTI_H
