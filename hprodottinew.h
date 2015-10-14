#ifndef HPRODOTTINEW_H
#define HPRODOTTINEW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRelationalTableModel>

namespace Ui {
class HProdottiNew;
}

class HProdottiNew : public QWidget
{
    Q_OBJECT

public:
    explicit HProdottiNew(QWidget *parent = 0);
    ~HProdottiNew();
    void init(QString conn);

private slots:
    void on_radioButton_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_3_toggled(bool checked);

    void on_radioButton_4_toggled(bool checked);

    void on_radioButton_5_toggled(bool checked);

    void on_radioButton_6_toggled(bool checked);

    void save();



    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_checkBox_toggled(bool checked);

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::HProdottiNew *ui;
    QString sConn;
    QSqlDatabase db;
    QSqlRelationalTableModel *tmProdotti;
    QSqlRelationalTableModel *tmTipi;

};

#endif // HPRODOTTINEW_H
