#ifndef HLOTMOD_H
#define HLOTMOD_H

#include <QWidget>
#include <QSqlDatabase>
#include "huser.h"

#include <QSqlQueryModel>

namespace Ui {
class HlotMod;
}

class HlotMod : public QWidget
{
    Q_OBJECT

public:
    explicit HlotMod(HUser* p_user=0,QSqlDatabase p_db=QSqlDatabase(), int p_id=0,QWidget *parent = 0);
    ~HlotMod();

private:
    Ui::HlotMod *ui;
    QSqlDatabase db;
    HUser* user;
    int lotid;
    QSqlQueryModel *mod;
private slots:
    void getComposition();
};

#endif // HLOTMOD_H
