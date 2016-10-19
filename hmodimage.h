#ifndef HMODIMAGE_H
#define HMODIMAGE_H

#include <QWidget>

namespace Ui {
class HModImage;
}

class HModImage : public QWidget
{
    Q_OBJECT

public:
    explicit HModImage(QWidget *parent = 0);
    ~HModImage();

private:
    Ui::HModImage *ui;
};

#endif // HMODIMAGE_H
