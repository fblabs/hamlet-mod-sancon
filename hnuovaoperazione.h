#ifndef HNUOVAOPERAZIONE_H
#define HNUOVAOPERAZIONE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include "hreadonlymodelnew.h"
#include "huser.h"

namespace Ui {
class HnuovaOperazione;
}

class HnuovaOperazione : public QWidget
{
    Q_OBJECT

public:
    explicit HnuovaOperazione(HUser *puser=0, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent = 0);
    ~HnuovaOperazione();
public slots:
//    void setConnectionName(QString conn, HUser *pusr);
private:
    Ui::HnuovaOperazione *ui;
    QSqlDatabase db;
    QString sNuovoLot;
     HUser *user;
    QSqlTableModel *listaFornitori;
    QSqlTableModel *listaProdotti;
    QSqlTableModel *listaUnitaDiMisura;
    QSqlTableModel *listaTipologie;
    QSqlTableModel *listaTipilot;
    QSqlTableModel *lots;
    HReadOnlyModelNew *tbm;
    QString basefilter;

private slots:
    void setFilterProdotti();
    bool saveOperation(bool isCarico);
    bool saveOperationCarico();
    bool saveOperationScarico();
    void setUiforCarico();
    void setUiForScarico();
    QString getNewLot(QString);
    bool saveNewLot(QString nl);
    void on_pushButton_4_clicked();
    void on_pushButton_clicked();
    int lastInsertID();
    void setProdottoText();
    void setLotsFilter();


    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_toggled(bool checked);

    void on_cbScadenza_toggled(bool checked);

    void on_leProdotti_textChanged(const QString &arg1);

    void on_leLotto_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_cbShowPackages_toggled(bool checked);

    void on_cbtipo_currentIndexChanged(int index);

signals:
   void trigger();
};

#endif // HNUOVAOPERAZIONE_H
