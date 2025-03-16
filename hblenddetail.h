#ifndef HBLENDDETAIL_H
#define HBLENDDETAIL_H

#include <QWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QSqlDatabase>
#include "hblend.h"

namespace Ui {
class HBlendDetail;
}

class HBlendDetail : public QWidget
{
    Q_OBJECT

public:

    explicit HBlendDetail(HBlend *p_blend=new HBlend(), QStandardItemModel *p_mod=new QStandardItemModel(), QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HBlendDetail();

private:
    HBlend *blend;
    Ui::HBlendDetail *ui;
    QSqlDatabase db;
    QStandardItemModel *detmod=new QStandardItemModel();
    QList<int>removed_rows;
signals:
    void sg_transfer(QStandardItemModel * p_mod=new QStandardItemModel(),QList<int> removedrows=QList<int>());
    void add_removed_id(int id=-1);
    void sg_lot_checked(const QString res=QString());
    void sg_save_blend(bool show=false);
    void sg_show_main();
private slots:
    void on_pbConfirm_clicked();
    void add_row(QString p_lot);
    int getLotId(QString p_lot=QString());
    QList<QStandardItem*>getLotData(QString p_lot=QString());
    void getDetails();
    void on_pbClose_clicked();
    void on_pbRemove_clicked();
    bool checkLot(QString plot=QString());
    void transferData();
    void setup();
    void showContextMenu(const QPoint& pos);







    void on_leLot_textChanged(const QString &arg1);
    void on_pbSave_clicked();
};

#endif // HBLENDDETAIL_H
