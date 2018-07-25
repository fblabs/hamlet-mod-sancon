#include "hverifylabels.h"
#include "ui_hverifylabels.h"

HVerifyLabels::HVerifyLabels(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HVerifyLabels)
{
    ui->setupUi(this);
}

HVerifyLabels::~HVerifyLabels()
{
    delete ui;
}
