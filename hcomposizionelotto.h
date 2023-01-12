#ifndef HCOMPOSIZIONELOTTO_H
#define HCOMPOSIZIONELOTTO_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QShortcut>
#include <QList>
#include "huser.h"

namespace Ui {
class HComposizioneLotto;
}

class HComposizioneLotto : public QWidget
{
    Q_OBJECT

public:
    explicit HComposizioneLotto(int p_idlotto=-1, QString p_descrizione=QString(),HUser *p_user=nullptr, QSqlDatabase pdb=QSqlDatabase(),QWidget *parent=nullptr);
    ~HComposizioneLotto();

private:
    Ui::HComposizioneLotto *ui;
    QSqlDatabase db;
    int id;
    int tipo;
    HUser *user;
    QString descrizione;
  //  QSqlQueryModel *mod;
    QShortcut *det;

private slots:
    QSqlQueryModel *getLotComposition();
    QSqlQueryModel *getLotUse();
    void refresh_data();
    int findLotFirstLoad();
    double recalculateAmount();

    void on_tableView_doubleClicked(const QModelIndex &index);
    void on_pushButton_3_clicked();
    void print();
    void on_pushButton_2_clicked();
    void on_pbUse_clicked();
    void printUse();
    void printComposition();
    int getTipo(int idl);
    void getDetails();
    bool deleteComponent();
    void unloadAll();
    void on_pbAdd_clicked();
    void on_pbRemove_clicked();
    void on_pbScarico_clicked();
    void on_pbModify_clicked();

    void on_pbModifyAmount_clicked();

signals:
   void unloaded();

};

#endif // HCOMPOSIZIONELOTTO_H
