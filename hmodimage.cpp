#include "hmodimage.h"
#include "ui_hmodimage.h"

HModImage::HModImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HModImage)
{
    ui->setupUi(this);
}

HModImage::~HModImage()
{
    delete ui;
}
