#ifndef HNEWSHEET_H
#define HNEWSHEET_H

#include <QWidget>
#include <QDate>

namespace Ui {
class HNewSheet;
}

class HNewSheet : public QWidget
{
    Q_OBJECT

public:
    explicit HNewSheet(QWidget *parent = 0);
    ~HNewSheet();

private:
    Ui::HNewSheet *ui;
signals:
    OK(int p_linea,QDate p_data);
private slots:
    void on_pbOK_clicked();
    void on_pbCancel_clicked();
};

#endif // HNEWSHEET_H
