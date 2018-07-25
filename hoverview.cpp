#include "hoverview.h"
#include "ui_hoverview.h"

HOverview::HOverview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HOverview)
{
    ui->setupUi(this);
}

HOverview::~HOverview()
{
    delete ui;
}
