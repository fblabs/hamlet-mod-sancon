#ifndef HPRINTING_H
#define HPRINTING_H

#include <QWidget>

namespace Ui {
class HPrinting;
}

class HPrinting : public QWidget
{
    Q_OBJECT

public:
    explicit HPrinting(QWidget *parent = 0);
    ~HPrinting();

private:
    Ui::HPrinting *ui;
};

#endif // HPRINTING_H
