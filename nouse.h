#ifndef NOUSE_H
#define NOUSE_H

#include <QWidget>

namespace Ui {
class NoUse;
}

class NoUse : public QWidget
{
    Q_OBJECT

public:
    explicit NoUse(QWidget *parent = 0);
    ~NoUse();
    void SetLabelText(QString text=QString());

private slots:
    void on_pushButton_clicked();

private:
    Ui::NoUse *ui;
};

#endif // NOUSE_H
