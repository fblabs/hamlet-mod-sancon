#ifndef HBLENDER_H
#define HBLENDER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QStandardItem>
#include <QStandardItemModel>
#include "huser.h"

namespace Ui {
class HBlender;

}





class HBlender : public QWidget
{
    Q_OBJECT

public:
    explicit HBlender(const int p_idriga=-1, QString p_prodotto=QString(), HUser *p_user=new HUser(), QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HBlender();

private:
    Ui::HBlender *ui;
    HUser *user;
    QSqlDatabase db;
    QStandardItemModel *mod;
    int i_idriga;
    QString s_prodotto;
    QList<int> removed;

private slots:
    QString findMaterialbyLot(QString plot=QString());
    int findMaterialIDbyLot(QString plot=QString());
    void addRow();
    void removeRow(const int p_row=-1, const int id_b=-1);
    void saveBlend();
    int findIDLotto(const QString s_lot=QString());
    void exportToOperazioni();

    void on_pbAdd_clicked();
    void on_pbRemove_clicked();
    void on_pbClose_clicked();

    void on_pbSave_clicked();
    void init();
    void on_leAmount_textChanged(const QString &arg1);
    void on_pbExport_clicked();
};

#endif // HBLENDER_H
