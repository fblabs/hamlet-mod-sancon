#ifndef HPACKAGES_H
#define HPACKAGES_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QCompleter>
#include <QStandardItem>
#include <QStandardItemModel>


namespace Ui {
class HPackages;
}

class HPackages : public QWidget
{
    Q_OBJECT

public:
    explicit HPackages(QWidget *parent = 0);
    ~HPackages();

    void init(QString conn,QString user);

private:
    Ui::HPackages *ui;
    QSqlDatabase db;
    QString sConn;
    QSqlTableModel *tmClienti;
    QSqlTableModel *tmProdotti;
    QSqlTableModel *tmUnitaMisura;
    QCompleter *compClienti;
    QCompleter *compProdotti;
    QList<QStandardItem*>addRow(QString idprod, QString sDescProdotto, QString idlotto, QString sLotto, QString sQuantita);
    QStandardItemModel *mod;
    QString userid;
    int newlotid;



private slots:
    void filterProducts();
    void getSubclients( );
    void on_checkBox_toggled(bool checked);
    void on_pushButton_4_clicked();
    void createNewLot();
    void createNewLotInterno();
    void on_pbCrea_clicked();
    bool checkLot(QString lot);
    bool saveLot(QString lotto);
    bool saveNewLotInLotdef(QString lotto);
    bool chargeNewLot(int id);
    bool unloadNewLotComponents(int nlot);
    int getIdProdotto(QString lotto);
    QString getDescProdotto(QString lotto);
    void on_pbAddRow_clicked();
    void on_pbRemoveRow_clicked();
    void on_checkBox_2_toggled(bool checked);
    void on_pushButton_3_clicked();
    void on_pbAnnulla_clicked();
    int getLastId();
     int getIdLotto(QString lotto);



};

#endif // HPACKAGES_H
