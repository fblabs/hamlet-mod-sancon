#include "hmodimage.h"
#include "ui_hmodimage.h"

HModImage::HModImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModImage)
{
    ui->setupUi(this);

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
