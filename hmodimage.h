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
signals:
    void execResize(int w,int h);
private slots:
    void doResize();

};
#endif // HMODIMAGE_H
