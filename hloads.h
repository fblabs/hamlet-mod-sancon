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
    explicit HLoads(int pid_prodotto, QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HLoads();

private:
    Ui::HLoads *ui;
    QSqlDatabase db;
    int id_prodotto;
private slots:
   void getLoads();
   void on_pbClose_clicked();
   void on_pushButton_clicked();
};

#endif // HLOADS_H
