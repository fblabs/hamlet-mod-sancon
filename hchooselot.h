#ifndef HCHOOSELOT_H
#define HCHOOSELOT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class HChooseLot;
}

class HChooseLot : public QDialog
{
    Q_OBJECT

public:
    explicit HChooseLot(const QString toSearch=QString(),QSqlDatabase pdb=QSqlDatabase(),QWidget *parent = nullptr);
    ~HChooseLot();

private slots:

    void on_pbClose_clicked();

    void on_leSearch_returnPressed();

    void on_tvSearch_clicked(const QModelIndex &index);

    void on_tvSearch_doubleClicked(const QModelIndex &index);

private:
    Ui::HChooseLot *ui;
    QSqlDatabase db;
    QSqlTableModel* mod;

signals:
   QString sg_lotSelected(const QString plot);

};

#endif // HCHOOSELOT_H
