#ifndef HFINDLOTUSE_H
#define HFINDLOTUSE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class HFindLotUse;
}

class HFindLotUse : public QWidget
{
    Q_OBJECT

public:
    explicit HFindLotUse(QWidget *parent = 0);
    ~HFindLotUse();
    void init(QString conn);

private:
    Ui::HFindLotUse *ui;
    QSqlDatabase db;
    QString sConn;
 private slots:
    void findLotInterno();
    void findLotFornitore();
};

#endif // HFINDLOTUSE_H
