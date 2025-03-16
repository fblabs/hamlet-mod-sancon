#ifndef HRECIPESOVERVIEW_H
#define HRECIPESOVERVIEW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>

namespace Ui {
class HRecipesOverview;
}

class HRecipesOverview : public QWidget
{
    Q_OBJECT

public:
    explicit HRecipesOverview(QSqlDatabase pdb=QSqlDatabase(),QWidget *parent = nullptr);
    ~HRecipesOverview();

private slots:
    void on_pbPrint_clicked();

    void on_pbClose_clicked();

    void loadData();
    void delay();
    void print();


private:
    Ui::HRecipesOverview *ui;
    QSqlDatabase db;


};

#endif // HRECIPESOVERVIEW_H
