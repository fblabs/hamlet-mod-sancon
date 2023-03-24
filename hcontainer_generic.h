#ifndef HCONTAINER_GENERIC_H
#define HCONTAINER_GENERIC_H

#include <QWidget>

namespace Ui {
class HContainer_generic;
}

class HContainer_generic : public QWidget
{
    Q_OBJECT

public:
    explicit HContainer_generic(QWidget *parent = nullptr);
    ~HContainer_generic();

private:
    Ui::HContainer_generic *ui;

private slots:
    void data();



signals:
    void component_added(QString item,QString costo);

};

#endif // HCONTAINER_GENERIC_H
