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
    explicit HFrullatori(HBlend *p_blend=new HBlend(),HUser *p_user=new HUser(),QSqlDatabase p_db=QSqlDatabase(),QWidget *parent = nullptr);
    ~HFrullatori();

private:

    Ui::HFrullatori *ui;
    QSqlDatabase db;
    HUser *user;
    int id_riga_produzione;
    int id_prodotto;
    QStandardItemModel *mod_details=new QStandardItemModel();
    QStandardItemModel *mod=new QStandardItemModel();
    HBlend *blend;
    QList<int>remove;
    QString prodotto=QString();


private slots:


    void on_pbClose_clicked();
    void on_pbInit_clicked();
    void get_details(QStandardItemModel* p_mod);
    void print();
    void getBlendData();
    void save_blend();
    void on_pbSave_clicked();
    QList<QStandardItem*> getLotData(QString p_lot);
    void getRemoved(QList<int>p_rem);
    void add_removed_Row(int p_id=-1);
    void remove_deleted_detail_row(const int p_id=-1);

    void on_pbPrint_clicked();
};

#endif // HFRULLATORI_H
