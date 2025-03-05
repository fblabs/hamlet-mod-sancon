#ifndef HCALCOLO_COSTI_ITEM_H
#define HCALCOLO_COSTI_ITEM_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HCalcolo_costi_item;
}

class HCalcolo_costi_item : public QWidget
{
    Q_OBJECT

public:
    explicit HCalcolo_costi_item(int p_tipo=-1, QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HCalcolo_costi_item();

private:
    Ui::HCalcolo_costi_item *ui;
    QSqlDatabase db;
    int tipo;

signals:
    item_added(QString item,QString costo);
private slots:
    void on_le_costo_returnPressed();
    void on_cbProdotti_currentIndexChanged(int index);
    void on_leAmount_returnPressed();
    void on_leResult_returnPressed();
};

#endif // HCALCOLO_COSTI_ITEM_H
