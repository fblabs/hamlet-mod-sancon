#ifndef HVERIFYLABELS_H
#define HVERIFYLABELS_H

#include <QWidget>

namespace Ui {
class HVerifyLabels;
}

class HVerifyLabels : public QWidget
{
    Q_OBJECT

public:
    explicit HVerifyLabels(QWidget *parent = 0);
    ~HVerifyLabels();

private:
    Ui::HVerifyLabels *ui;
};

#endif // HVERIFYLABELS_H
