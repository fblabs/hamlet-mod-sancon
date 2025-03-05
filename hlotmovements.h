#ifndef HLOTMOVEMENTS_H
#define HLOTMOVEMENTS_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HLotMovements;
}

class HLotMovements : public QWidget
{
    Q_OBJECT

public:
    explicit HLotMovements(int id,QSqlDatabase pdb,QWidget *parent = 0);
    ~HLotMovements();

private:
    Ui::HLotMovements *ui;
    QSqlDatabase db;
private slots:
    void getLotMovements(int id);
    void on_pushButton_clicked();
    void getGiacenzaLotto(int id);
    QString getDestinationLot(const int p_id_operation=-1);

};

#endif // HLOTMOVEMENTS_H
