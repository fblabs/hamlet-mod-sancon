#ifndef HPROGTABLE_H
#define HPROGTABLE_H

#include <QWidget>
#include <QStandardItemModel>


namespace Ui {
class HProgTable;
}

class HProgTable : public QWidget
{
    Q_OBJECT

public:
    explicit HProgTable(QStandardItemModel *mod=new QStandardItemModel(), QString ing=QString(), QString p_title=QString(), QWidget *parent = nullptr);
    ~HProgTable();

private slots:
    void on_pbClose_clicked();
    void print();

    void on_pbPrint_clicked();

private:
    Ui::HProgTable *ui;
    QString ingred;
};

#endif // HPROGTABLE_H
