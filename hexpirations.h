#ifndef HEXPIRATIONS_H
#define HEXPIRATIONS_H

#include "hexpirations.h"
#include <QWidget>
#include <QSqlDatabase>
#include "huser.h"
#include <QDate>
namespace Ui {
class HExpirations;
}

class HExpirations : public QWidget
{
    Q_OBJECT

public: 
    explicit HExpirations(QSqlDatabase pdb, HUser* puser = 0,QWidget *parent = 0);
    ~HExpirations();

private:
    Ui::HExpirations *ui;
    QSqlDatabase db;
    HUser* user;
private slots:
    void getExpirations();
    void on_pushButton_clicked();
    void on_deLimit_dateChanged(const QDate &date);
    void on_pushButton_2_clicked();
    void print();
    void on_pushButton_3_clicked();
    void on_deFrom_dateChanged(const QDate &date);
};

#endif // HEXPIRATIONS_H







