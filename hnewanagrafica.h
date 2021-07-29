#ifndef HNEWANAGRAFICA_H
#define HNEWANAGRAFICA_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class HNewAnagrafica;
}

class HNewAnagrafica : public QWidget
{
    Q_OBJECT

public:
    explicit HNewAnagrafica(QSqlDatabase pdb, QWidget *parent = 0);
    ~HNewAnagrafica();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::HNewAnagrafica *ui;
    QSqlDatabase db;

signals:
    void done();
};

#endif // HNEWANAGRAFICA_H
