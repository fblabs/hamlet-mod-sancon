#ifndef HNUOVAOPERAZIONE_H
#define HNUOVAOPERAZIONE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include "hreadonlymodelnew.h"

namespace Ui {
class HnuovaOperazione;
}

class HnuovaOperazione : public QWidget
{
    Q_OBJECT

public:
    explicit HnuovaOperazione(QWidget *parent = 0);
    ~HnuovaOperazione();

    void setConnectionName(QString conn, QString userID);
   // void setUser(QString userid);

private:
    Ui::HnuovaOperazione *ui;
    QString sConn;
    QSqlDatabase db;
    QString sNuovoLot;
    void setupForm();
    QString utente;
    QSqlTableModel *listaFornitori;
    QSqlTableModel *listaProdotti;
    QSqlTableModel *listaUnitaDiMisura;
    QSqlTableModel *listaTipologie;
    QSqlTableModel *listaTipilot;
    HReadOnlyModelNew *tbm;

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



    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_toggled(bool checked);

    void on_cbScadenza_toggled(bool checked);

    void on_leProdotti_textChanged(const QString &arg1);

    void on_leLotto_textChanged(const QString &arg1);

signals:
    void trigger();
};

#endif // HNUOVAOPERAZIONE_H
