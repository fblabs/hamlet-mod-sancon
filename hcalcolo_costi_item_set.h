#ifndef HCALCOLO_COSTI_ITEM_SET_H
#define HCALCOLO_COSTI_ITEM_SET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QModelIndex>

namespace Ui {
class HCalcolo_costi_item_set;
}

class HCalcolo_costi_item_set : public QWidget
{
    Q_OBJECT

public:
    explicit HCalcolo_costi_item_set(QString s_prod=QString(),QModelIndex p_index=QModelIndex(),int p_tipo=-1, QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HCalcolo_costi_item_set();


private:
    Ui::HCalcolo_costi_item_set *ui;
    QSqlDatabase db;
    int tipo;
    QModelIndex index;
    QString init_prod;

signals:
    void item_modified(QModelIndex index,QString item,QString amount,QString costo);
private slots:
    void on_le_costo_returnPressed();
    void on_cbProdotti_currentIndexChanged(int index);
    void on_leAmount_returnPressed();
    void on_leResult_returnPressed();

    void on_pbOk_clicked();
    void on_pbClose_clicked();
};

#endif // HCALCOLO_COSTI_ITEM_SET_H
