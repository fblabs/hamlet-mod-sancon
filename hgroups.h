#ifndef HGROUPS_H
#define HGROUPS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class HGroups;
}

class HGroups : public QWidget
{
    Q_OBJECT

public:
    explicit HGroups(QWidget *parent = 0,QString conn="");
    ~HGroups();

private:
    Ui::HGroups *ui;
    QSqlDatabase db;
    QString sConn;
    QSqlTableModel *mod;
 private slots:
    void loadData();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // HGROUPS_H
