#ifndef HTEST_H
#define HTEST_H

#include <QDialog>

namespace Ui {
class HTest;
}

class HTest : public QDialog
{
    Q_OBJECT

public:
    explicit HTest(QWidget *parent = 0);
    ~HTest();

private:
    Ui::HTest *ui;
};

#endif // HTEST_H
