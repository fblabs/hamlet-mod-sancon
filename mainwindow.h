
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QTimer>
#include "huser.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString sConn;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();




private slots:



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
    void userLogged(HUser *usr, QSqlDatabase pdb);
    void on_pbUnload_clicked();
    void on_pbContacts_clicked();
    void on_pbNotifiche_clicked();
    void checkNotifications();
    void on_pbCkeckNotifications_clicked();
    void on_pbVerifyLabels_clicked();
    void on_pbExpirations_clicked();
    void on_pbCalcoloCosti_clicked();
    bool createPreferencesDB();
    void on_pbC4R_clicked();
    void on_pbProgrammazione_clicked();

protected:
    void keyPressEvent(QKeyEvent *ke);


private:
    Ui::MainWindow *ui;
    HUser *user;
    QTimer timer;
    QSqlDatabase db;


};

#endif // MAINWINDOW_H
