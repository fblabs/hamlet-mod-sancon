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
    explicit HComposizioneLotto(int p_idlotto=-1, QString p_descrizione=QString(), HUser *p_user=nullptr, QSqlDatabase pdb=QSqlDatabase(),QWidget *parent=nullptr);
    ~HComposizioneLotto();

private:
    Ui::HComposizioneLotto *ui;
    QSqlDatabase db;
    int id;
    int tipo;
    HUser *user;
    QString descrizione;
    QSqlQueryModel *mod;
  //  HComposizioneLotto *parf;
    QShortcut *det;

private slots:
    void getLotComposition();
    void getLotUse();
    void refresh_data();

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
    bool unloadAll();


    void on_pbAdd_clicked();
 //   bool addComponent();
 //   bool modifyComponent();
 //   bool removeComponent();
    void on_pbRemove_clicked();
    void on_pbScarico_clicked();
signals:
   void unloaded();
};

#endif // HCOMPOSIZIONELOTTO_H
