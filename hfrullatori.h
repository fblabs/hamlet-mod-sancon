#ifndef HFRULLATORI_H
#define HFRULLATORI_H

#include <QWidget>
#include <QSqlDatabase>
#include <QStandardItemModel>

#include "huser.h"
#include "hblend.h"
#include "hblenddetail.h"

namespace Ui {
class HFrullatori;
}

class HFrullatori : public QWidget
{
    Q_OBJECT

public:
    explicit HFrullatori(QString p_title=QString(), HBlend *p_blend=new HBlend(), HUser *p_user=new HUser(), QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HFrullatori();

private:

    Ui::HFrullatori *ui;
    QSqlDatabase db;
    HUser *user;
    QString m_title;
    int id_riga_produzione;
    int id_prodotto;
    QStandardItemModel *mod_details=new QStandardItemModel();
    QStandardItemModel *mod=new QStandardItemModel();
    HBlend *blend;
    QList<int>remove;
    QList<int>removed_details=QList<int>();
    QString prodotto=QString();



private slots:


    void on_pbClose_clicked();
    void on_pbInit_clicked();
    void get_details(QStandardItemModel* p_mod,QList<int>p_removed);
    void print();
    void getBlendData();
    void save_blend(bool b_showdlg=true);
    void on_pbSave_clicked();
    QList<QStandardItem*> getLotData(QString p_lot);
    void getRemoved(QList<int>p_rem);
    void add_removed_Row(int p_id=-1);
    void remove_deleted_detail_row();
    void on_pbPrint_clicked();
    void on_stateSlider_valueChanged(int value);

signals:
    void sg_setup_view();
};

#endif // HFRULLATORI_H
