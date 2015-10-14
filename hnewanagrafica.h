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
    explicit HNewAnagrafica(QWidget *parent = 0);
    ~HNewAnagrafica();
    void init(QString conn);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::HNewAnagrafica *ui;
    QString sConn;
    QSqlDatabase db;
};

#endif // HNEWANAGRAFICA_H
