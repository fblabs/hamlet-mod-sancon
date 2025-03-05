#ifndef HGROUPS_H
#define HGROUPS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "huser.h"


namespace Ui {
class HGroups;
}

class HGroups : public QWidget
{
    Q_OBJECT

public:
    explicit HGroups(HUser *p_user=new HUser(),const int p_user_group=-1,QString p_user_name=QString(), QSqlDatabase p_db=QSqlDatabase(), QWidget *parent = nullptr);
    ~HGroups();

private:
    Ui::HGroups *ui;
    QSqlDatabase db;
    HUser* user;
    int user_group;
    QString user_name;
private slots:
    QSqlTableModel* getGroups();
    void on_pbClose_clicked();
    void on_cbGruppi_currentIndexChanged(int index);
    void setup_permissions_ui(QSqlTableModel* mod=new QSqlTableModel());
    void update_permissions(const int gruppo=-1);
    void on_pbSave_clicked();
    void on_pbCreateGroup_clicked();
    void refreshGroupsModel();
    void on_pbDelete_clicked();

signals:
    void permissions_updated();
};

#endif // HGROUPS_H
