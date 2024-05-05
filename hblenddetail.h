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
    void sg_transfer(QStandardItemModel * p_mod=new QStandardItemModel());
    void add_removed_id(int id=-1);
private slots:
    void on_pbConfirm_clicked();
    void on_pbAdd_clicked();
    void add_row();
    int getLotId(QString p_lot=QString());
    QList<QStandardItem*>getLotData(QString p_lot=QString());
    void getDetails();
    void on_pbClose_clicked();

    void on_leLotto_returnPressed();
    void on_pbRemove_clicked();


};

#endif // HBLENDDETAIL_H
