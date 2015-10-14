#ifndef HLOGIN2_H
#define HLOGIN2_H

#include <QWidget>
#include <QDialog>
#include <QSqlDatabase>
#include "huser.h"


namespace Ui {
class HLogin2;
}

class HLogin2 : public QDialog
{
    Q_OBJECT

public:
    explicit HLogin2(QWidget *parent = 0);
    ~HLogin2();
     void setDatabase(QString database);
     void init(QString conn);
 signals:
    void userLogged(int,int,bool,bool);
    void setConn(QString con);




private:
    Ui::HLogin2 *ui;
    QSqlDatabase db;

    void enableDB();
    QString sConnec;
    HUser *usr;


private slots:
    void login();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void onConnectionNameSet();
    void on_lePwd_editingFinished();
    void on_checkBox_toggled(bool checked);
};

#endif // HLOGIN2_H
