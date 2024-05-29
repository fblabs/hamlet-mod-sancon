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
    explicit HWorkProgram(HUser *p_user=0, QSqlDatabase p_db=QSqlDatabase(), QWidget *parent=0);
    ~HWorkProgram();

private slots:
    void on_pbAdd_clicked();
    bool createSheet(int p_line, QDate p_date);
    void getSheets();

    // void on_tvStorico_clicked(const QModelIndex &index);
    void storicoindexchange();
    void on_pbNewSheet_clicked();
    void refreshSheet(const QModelIndex p_currentIndex=QModelIndex());
    void updateSheet(int newrow, int oldrow);
    void setHeaders();
    void print();
    void get_sheet_details(const int p_id_produzione=-1);
    void add_row(QStandardItemModel *mod, QList<QStandardItem*> row);
    void process(const QSqlQueryModel *mod=nullptr);
    void save(bool showdialog=true);
   // void rowaddb();
    void pasteRow();
    void modify_row();
    void removeRow(const int p_row=-1);
    void completeRows(int id=-1, bool complete=false);
    void completeRow();
    void uncompleteRow();
    void copyrow(const int row=-1);
    void call_refresh();





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

    void cutRow();

    void on_pbDetails_clicked();

    void on_pbSingleSheet_clicked();

    QStandardItemModel* convert_to_wp(const QSqlQueryModel *qmod=nullptr);

    void on_pbCopy_clicked();

    void on_pbPaste_clicked();

    void getDetails();


    void on_cbAll_toggled(bool checked);

    void on_pbCutRow_clicked();

    void disable_fof_details(bool disable=false);


    void on_pbComplete_clicked();

    void on_pbNotComplete_clicked();

    void on_pbCompleteRow_clicked();

    void on_pbUncompleteRow_clicked();

    void on_pbBlender_clicked();

    void on_pbUndo_clicked();
    void trigger_copy();
    QStandardItemModel* convert_to_wp_mod(const QSqlQueryModel *qmod=nullptr);

private:
    Ui::HWorkProgram *ui;
    HUser* user;
    QSqlDatabase db;
    int id=-1;
    HWorkSheetModel *wsmod=new HWorkSheetModel(); //modello del foglio([produzione]
    QStandardItemModel *wpmod=new QStandardItemModel(); //modello [righe_produzione]
    bool dets=false;
    //QList<QStandardItem*>rowcp;
    QList<int>removed_rows;
    QList<QStandardItem*> copied_row;
    bool modified=false;
    QModelIndex index_old=QModelIndex();
    QModelIndex index_new=QModelIndex();

signals:
    void showDets(QSqlQueryModel *pmod);




};

#endif // HWORKPROGRAM_H
