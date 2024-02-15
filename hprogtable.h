#ifndef HPROGTABLE_H
#define HPROGTABLE_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class HProgTable;
}

class HProgTable : public QWidget
{
    Q_OBJECT

public:
    explicit HProgTable(QSqlQueryModel *mod=new QSqlQueryModel(), QWidget *parent = nullptr);
    ~HProgTable();

private slots:
    void on_pbClose_clicked();

private:
    Ui::HProgTable *ui;
};

#endif // HPROGTABLE_H
