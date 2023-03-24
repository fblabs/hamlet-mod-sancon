#ifndef HCREATEGROUP_H
#define HCREATEGROUP_H

#include <QWidget>
#include <QSqlDatabase>
#include "huser.h"

namespace Ui {
class HCreateGroup;
}

class HCreateGroup : public QWidget
{
    Q_OBJECT

public:
    explicit HCreateGroup(HUser *p_user=nullptr,QSqlDatabase p_db=QSqlDatabase(),QWidget *parent = nullptr);
    ~HCreateGroup();

private:
    Ui::HCreateGroup *ui;
    QSqlDatabase db;
    HUser *user;
private slots:
    void save_new_group();
    void on_pbSave_clicked();
    void on_pbClose_clicked();

signals:
    void group_created();
};

#endif // HCREATEGROUP_H
