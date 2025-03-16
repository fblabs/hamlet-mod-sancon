#ifndef HLOADSREPORT_H
#define HLOADSREPORT_H

#include <QWidget>
#include<QSqlDatabase>
#include <QSqlQueryModel>


namespace Ui {
class HLoadsReport;
}

class HLoadsReport : public QWidget
{
    Q_OBJECT

public:
    explicit HLoadsReport(QSqlDatabase p_db=QSqlDatabase(),QWidget *parent = nullptr);
    ~HLoadsReport();

private slots:
    void on_pbClose_clicked();
    void loadData();
    void get_types();
    void print();

    void on_rbL_toggled(bool checked);

    void on_leCerca_returnPressed();

    void on_pbPrint_clicked();

private:
    Ui::HLoadsReport *ui;
    QSqlDatabase db;

};

#endif // HLOADSREPORT_H
