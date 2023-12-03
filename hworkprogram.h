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
    void getSheets(bool create=false);

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
    void process_by_date(const QSqlQueryModel *mod=nullptr);


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

    void approve(bool checked);

    void on_pbApprova_clicked();

    void on_pbDisapprova_clicked();

    void showContextMenu(const QPoint& pos);

    void copyRow();

   // void on_pbAll_clicked();

    void on_pbDetails_clicked();

    void on_pbSingleSheet_clicked();




private:
    Ui::HWorkProgram *ui;
    HUser* user;
    QSqlDatabase db;
    int id;
    HWorkSheetModel *wsmod; //modello del foglio([produzione]
    HWorkProgramDetailModel *wpmod; //modello [righe_produzione]
    bool dets=false;








};

#endif // HWORKPROGRAM_H
