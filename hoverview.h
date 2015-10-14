#ifndef HOVERVIEW_H
#define HOVERVIEW_H

#include <QWidget>

namespace Ui {
class HOverview;
}

class HOverview : public QWidget
{
    Q_OBJECT

public:
    explicit HOverview(QWidget *parent = 0);
    ~HOverview();

private:
    Ui::HOverview *ui;
};

#endif // HOVERVIEW_H
