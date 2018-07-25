#ifndef HTABLET_H
#define HTABLET_H

#include <QWidget>

namespace Ui {
class Htablet;
}

class Htablet : public QWidget
{
    Q_OBJECT

public:
    explicit Htablet(QWidget *parent = 0);
    ~Htablet();

private:
    Ui::Htablet *ui;
};

#endif // HTABLET_H
