#ifndef HLOTCOMPOSITION_H
#define HLOTCOMPOSITION_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include "huser.h"


namespace Ui {
class HLotComposition;
}

class HLotComposition : public QWidget
{
    Q_OBJECT

public:
    explicit HLotComposition(int lotid,QString title=QString(), QSqlQueryModel *pmod= nullptr, QSqlDatabase pdb=QSqlDatabase(), QWidget *parent = nullptr);
    ~HLotComposition();

private:
    Ui::HLotComposition *ui;
    QSqlQueryModel *mod;
    QSqlDatabase db;
    int idLotto;
private slots:
    void recalculate();
    void on_leUpdatedAmount_returnPressed();
    void on_pbClose_clicked();
    void on_pbSave_clicked();

    void on_pbRecalculate_clicked();
    int findLotFirstLoad();

signals:
   void composition_updated();
};

#endif // HLOTCOMPOSITION_H
