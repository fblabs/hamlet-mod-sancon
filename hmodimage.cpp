#include "hmodimage.h"
#include "ui_hmodimage.h"
#include <QDebug>


HModImage::HModImage(QWidget *parent, int ow, int oh) :
    QWidget(parent),
    ui(new Ui::HModImage)
{
    ui->setupUi(this);

    ui->spWidth->setValue(ow);
    ui->spHeight->setValue(oh);

    connect(ui->spWidth,SIGNAL(valueChanged(int)),this,SLOT(doResize()));
    connect(ui->spHeight,SIGNAL(valueChanged(int)),this,SLOT(doResize()));
}

HModImage::~HModImage()
{
    delete ui;
}

void HModImage::doResize()
{
    int w= ui->spWidth->value();
    int h= ui->spHeight->value();
    emit execResize(w,h);
}

void HModImage::on_pushButton_clicked()
{
    close();
}


void HModImage::on_hSlider_valueChanged(int value)
{
    ui->spWidth->setValue(value);
}

void HModImage::on_spWidth_valueChanged(int arg1)
{
    ui->hSlider->setValue(arg1);
}

void HModImage::on_vSlider_valueChanged(int value)
{
    ui->spHeight->setValue(value);
}

void HModImage::on_spHeight_valueChanged(int arg1)
{
    ui->vSlider->setValue(arg1);
}


