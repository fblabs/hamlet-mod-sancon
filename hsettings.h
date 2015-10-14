#ifndef HSETTINGS_H
#define HSETTINGS_H

#include <QWidget>
#include <QSettings>

namespace Ui {
class HSettings;
}

class HSettings : public QWidget
{
    Q_OBJECT

public:
    explicit HSettings(QWidget *parent = 0);
    ~HSettings();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::HSettings *ui;

};

#endif // HSETTINGS_H
