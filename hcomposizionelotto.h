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
    explicit HComposizioneLotto(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase(),int idLotto=-1,QString descrizione="");
    ~HComposizioneLotto();

private:
    Ui::HComposizioneLotto *ui;
    QSqlDatabase db;
    int id;
    QString desc;
    QSqlQueryModel *mod;
private slots:
    void getLotComposition();

    void on_tableView_doubleClicked(const QModelIndex &index);
    void on_pushButton_3_clicked();
};

#endif // HCOMPOSIZIONELOTTO_H
