#ifndef HMODIFYLOT_H
#define HMODIFYLOT_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HModifyLot;
}

class HModifyLot : public QWidget
{
    Q_OBJECT

public:
    explicit HModifyLot(QWidget *parent = 0);
    ~HModifyLot();
    void init(int idlotto, QString conn);

private slots:

    bool updateLot();

    void on_pushButton_2_clicked();

    void on_cbScad_toggled(bool checked);

    void on_pushButton_clicked();

private:
    Ui::HModifyLot *ui;
    QSqlDatabase db;
    int lot;
signals:
    void update();
};

#endif // HMODIFYLOT_H
