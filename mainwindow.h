
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QTimer>
#include "huser.h"
#include "hlogin2.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlDatabase db;


    //int user;
private slots:

  //  void enableButtonsForRole(bool role);

    void login();
    void enableButtonsForRole();
    void on_tbMagaz_clicked();
    void on_tbLotti_clicked();
    void on_tbRicette_clicked();
    void on_tbAnag_clicked();
    void on_tnProduzione_clicked();
    void on_tbSettings_clicked();
    void on_tbProdotti_clicked();
    void on_tbClose_clicked();
    void on_tbAnalisi_clicked();
    void on_toolButton_clicked();
    void on_pBNewOperation_clicked();
    void on_tbLogout_clicked();
    void disableUI();
    void on_tbAssociazioni_clicked();
    void on_pbSchede_clicked();
    void on_pushButton_clicked();


    void on_tbUtenti_clicked();

    void on_tbModificaLotti_clicked();

    void on_pbPackages_clicked();
  //  void enableDB();
  //  void userLogged(int id, int gruppo, bool update, bool updateanag, QSqlDatabase pdb);
    void userLogged(HUser *usr, QSqlDatabase pdb);
    void on_pbUnload_clicked();
    void on_pbContacts_clicked();

    void on_pbNotifiche_clicked();

    void checkNotifications();
  //  bool eventFilter(QObject *, QEvent *);
    //void on_pushButton_2_clicked();

    void on_pbCkeckNotifications_clicked();

    void on_pbVerifyLabels_clicked();

    void on_pbOldCards_clicked();

    void on_pbExpirations_clicked();

    void on_pbCalcoloCosti_clicked();



    void on_pbC4R_clicked();



    void on_pushButton_2_clicked();

protected:
    void keyPressEvent(QKeyEvent *ke);


private:
    Ui::MainWindow *ui;
    QString sConn;
    HUser *user;
    QTimer timer;


signals:
    void onConnectionName();

};

#endif // MAINWINDOW_H
