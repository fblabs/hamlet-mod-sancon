#ifndef HCOMPOSIZIONELOTTO_H
#define HCOMPOSIZIONELOTTO_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class HComposizioneLotto;
}

class HComposizioneLotto : public QWidget
{
    Q_OBJECT

public:
    explicit HComposizioneLotto(QWidget *parent = 0, QSqlDatabase pdb=QSqlDatabase(), int idLotto=-1, QString descrizione="", bool paction=false, HComposizioneLotto *parentForm=0);
    ~HComposizioneLotto();

private:
    Ui::HComposizioneLotto *ui;
    QSqlDatabase db;
    int id;
    int tipo;
    bool action; //false composizione true uso
    QString desc;
    QSqlQueryModel *mod;
    HComposizioneLotto *parf;
private slots:
    void getLotComposition();
    void getLotUse();

    void on_tableView_doubleClicked(const QModelIndex &index);
    void on_pushButton_3_clicked();
    void print();
    void on_pushButton_2_clicked();
    void on_pbUse_clicked();
    void on_checkBox_toggled(bool checked);
    void printUse();
    void printComposition();
    int getTipo(int idl);
};

#endif // HCOMPOSIZIONELOTTO_H
