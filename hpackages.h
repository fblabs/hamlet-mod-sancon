#ifndef HPACKAGES_H
#define HPACKAGES_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QCompleter>
#include <QStandardItem>
#include <QStandardItemModel>
#include "huser.h"


namespace Ui {
class HPackages;
}

class HPackages : public QWidget
{
    Q_OBJECT

public:
    explicit HPackages(HUser *puser=0, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent = 0);
    ~HPackages();



private:
    HUser *user;
    Ui::HPackages *ui;
    QSqlDatabase db;
    QString sConn;
    QSqlRelationalTableModel *tmLots;
    QSqlTableModel *tmClienti;
    QSqlTableModel *tmProdotti;
    QSqlTableModel *tmUnitaMisura;
    QCompleter *compClienti;
    QCompleter *compProdotti;
    QCompleter *clots;
    QList<QStandardItem*>addRow(QString idprod, QString sDescProdotto, QString idlotto, QString sLotto, QString sQuantita, QString sum);
    QStandardItemModel *mod;
    int newlotid;
    QString basefilter;


    bool showSubclients;
    bool filterBySubclients;



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
    int  getLastId();
     int getIdLotto(QString lotto);
    void getEanList();
    void resetForm();
    void setLotText();
    int getumid(int idlotto);
    QString getumdesc(int umid);
    int getumidfromdesc(QString pdesc);
    void enableUI(bool e);




    void on_rbTutti_toggled(bool checked);

    void on_rbProdottiFiniti_toggled(bool checked);
    void on_rbVasi_toggled(bool checked);
    void on_rbTappi_toggled(bool checked);
    void on_leSearch_textChanged(const QString &arg1);

};

#endif // HPACKAGES_H
