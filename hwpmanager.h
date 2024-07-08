#ifndef HWPMANAGER_H
#define HWPMANAGER_H

#include <QWidget>
#include <QSqlDatabase>
#include "huser.h"

namespace Ui {
class HWpManager;
}

class HWpManager : public QWidget
{
    Q_OBJECT

public:
    explicit HWpManager(int p_id=-1,HUser *p_user=0,QSqlDatabase p_db=QSqlDatabase(),QWidget *parent = 0);
    ~HWpManager();

private:
    Ui::HWpManager *ui;
    QSqlDatabase db;
    HUser *user;
    int id;


private slots:
   void getClients();
   void getProducts();
  // void getTappi();
   void initSanityModel();
   void addSheetRow();
   void on_pbClose_clicked();
   void on_cbCliente_currentIndexChanged(int index);
   void on_pbSave_clicked();
   void on_leVaso_returnPressed();
   void on_leTotal_returnPressed();
   double calcTotale();
   bool eventFilter(QObject *target, QEvent *event);


   void on_cbPartenza_toggled(bool checked);

   signals:
   void rowAdded();

};

#endif // HWPMANAGER_H
