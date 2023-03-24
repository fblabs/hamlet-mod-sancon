#ifndef HLOGIN2_H
#define HLOGIN2_H

#include <QWidget>
#include <QDialog>
#include <QSqlDatabase>
#include "huser.h"
#include <QSqlQueryModel>


namespace Ui {
class HLogin2;
}

class HLogin2 : public QDialog
{
    Q_OBJECT

public:
    explicit HLogin2(QWidget *parent = 0);
    ~HLogin2();
     //void setDatabase(QString database);
    // void init(QString conn);
 signals:
  //  void userLogged(int,int,bool,bool,QSqlDatabase pdb);
    void userLogged(HUser* usr,QSqlDatabase pdb);





private:
    Ui::HLogin2 *ui;
    QSqlDatabase db;
    QSqlQueryModel *permissions_mod;
    HUser *usr;


private slots:
    void login();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_checkBox_toggled(bool checked);
    void get_permissions(HUser *p_user=nullptr, const int p_role=-1 );
};

#endif // HLOGIN2_H
