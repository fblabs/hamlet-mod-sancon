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
    explicit HModImage(QWidget *parent = 0,int ow=100,int oh=100);
    ~HModImage();
private:
    Ui::HModImage *ui;
signals:
    void execResize(int w,int h);
private slots:
    void doResize();

    void on_pushButton_clicked();

    void on_hSlider_valueChanged(int value);
    void on_spWidth_valueChanged(int arg1);
    void on_vSlider_valueChanged(int value);
    void on_spHeight_valueChanged(int arg1);

};
#endif // HMODIMAGE_H
