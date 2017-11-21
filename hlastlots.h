#ifndef HLASTLOTS_H
#define HLASTLOTS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QStandardItemModel>
#include <QList>

namespace Ui {
class HLastLots;
}

class HLastLots : public QWidget
{
    Q_OBJECT

public:
    explicit HLastLots(QWidget *parent = 0, QSqlDatabase pdb=QSqlDatabase(), double qrecipe=0.0, QString product="");
    ~HLastLots();

private slots:
    void on_pushButton_2_clicked();
    void lastLots();

    void on_pushButton_clicked();

private:
    Ui::HLastLots *ui;
    QSqlDatabase db;
    QSqlTableModel *prodModel;
signals:
    void rowAdded(QList<QStandardItem*> row) ;

};

#endif // HLASTLOTS_H
