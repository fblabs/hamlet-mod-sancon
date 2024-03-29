#ifndef HLOADS_H
#define HLOADS_H

#include <QWidget>
#include <QSqlDatabase>


namespace Ui {
class HLoads;
}

class HLoads : public QWidget
{
    Q_OBJECT

public:
    explicit HLoads(const int pid_prodotto,const QString p_title=QString(),QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HLoads();

private:
    Ui::HLoads *ui;
    QSqlDatabase db;
    int id_prodotto;
private slots:

   void getLoads();
   void getUnloads();
   void on_pbClose_clicked();
   void on_rbLoads_toggled(bool checked);
   void on_pbSearch_clicked();
   void getTypes();
   void loadProducts(const QString tosearch=QString());
   void get_data();
   void on_deFrom_userDateChanged(const QDate &date);
   void on_deTo_userDateChanged(const QDate &date);
};

#endif // HLOADS_H
