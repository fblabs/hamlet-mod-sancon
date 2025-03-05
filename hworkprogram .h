#ifndef HWORKPROGRAM_H
#define HWORKPROGRAM_H

#include <QWidget>
#include "huser.h"
#include <QSqlDatabase>
#include "hworkprogressmodel.h"
#include <QDate>
#include <QHeaderView>
#include <QSqlQueryModel>
#include <QStandardItemModel>
#include  "hworksheetmodel.h"
#include "hworkprogramdetailmodel.h"
#include "hwpmod.h"

namespace Ui {
class HWorkProgram;
}

class HWorkProgram : public QWidget
{
    Q_OBJECT

public:
    explicit HWorkProgram(HUser *p_user=0,QSqlDatabase p_db=QSqlDatabase(),QWidget *parent=0);
    ~HWorkProgram();

private slots:
    void on_pbAdd_clicked();
    bool createSheet(int p_line, QDate p_date);
    void getSheets();

    // void on_tvStorico_clicked(const QModelIndex &index);
    void storicoindexchange();
    void on_pbNewSheet_clicked();
    void refreshSheet();
    void updateSheet(int newrow, int oldrow);
    void setHeaders();
    void print();
    void get_sheet_details(const int p_id_produzione=-1);
    void add_row(QStandardItemModel *mod, QList<QStandardItem*> row);
    void process(const QSqlQueryModel *mod=nullptr);
    void save(bool show_dlg=false);
    void rowaddb(const int row=-1);
    void pasteRow();
    void modify_row();
    void removeRow(bool show=true);



    void on_pbSave_clicked();

    void on_pbClose_clicked();

    void on_cbshowrows_toggled(bool checked);

    void on_pbRemove_clicked();

    void on_tvGeneral_doubleClicked(const QModelIndex &index);

    void on_pbModify_clicked();

    void showModRow();

    void on_deDal_dateChanged(const QDate &date);

    void on_pbPrint_clicked();

    void on_checkBox_toggled(bool checked);

    void deleteSheet();

    void on_pbDeleteSheet_clicked();

    void on_pbSearch_clicked();

    void search();

    void on_pbReset_clicked();

    void approve(const bool app);

    void on_pbApprova_clicked();

    void on_pbDisapprova_clicked();

    void showContextMenu(const QPoint& pos);

    void copyRow();

    void cutRow();

    void on_pbDetails_clicked();

    void on_pbSingleSheet_clicked();

    HWpMod* convert_to_wp(const QSqlQueryModel *qmod=nullptr);

    void on_pbCopy_clicked();

    void on_pbPaste_clicked();


    void on_cbAll_toggled(bool checked);

    void on_pbCutRow_clicked();

private:
    Ui::HWorkProgram *ui;
    HUser* user;
    QSqlDatabase db;
    int id;
    HWorkSheetModel *wsmod; //modello del foglio([produzione]
    HWpMod *wpmod; //modello [righe_produzione]
    bool dets=false;
    QList<QStandardItem*>rowcp;



};

#endif // HWORKPROGRAM_H
