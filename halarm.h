#ifndef HALARM_H
#define HALARM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "huser.h"



namespace Ui {
class HAlarm;
}

class HAlarm : public QWidget
{
    Q_OBJECT

public:
    explicit HAlarm(QWidget *parent = 0,QSqlDatabase pdb=QSqlDatabase(),HUser *puser=0);
    ~HAlarm();

private:
    Ui::HAlarm *ui;
    QSqlDatabase db;
    QSqlTableModel *mod;
    QSqlTableModel *usermod;
    QSqlTableModel *groupmod;
    QString action;
    HUser *user;
private slots:
    bool addAlarm();
    bool updateAlarm();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_rbGroup_toggled(bool checked);
    void on_rbUser_toggled(bool checked);
    void getTypes();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void filterTargets();
    void on_pushButton_5_clicked();
    void setUI();
    void on_pushButton_6_clicked();
    QString buildFilterString(QModelIndexList list);
    QStringList getIndexes(QString dbst);
    void updateButtons(bool nuovo, bool modifica, bool elimina,bool salva, bool annulla);
    void toggleUIInteractivity(bool activate);

};

#endif // HALARM_H
