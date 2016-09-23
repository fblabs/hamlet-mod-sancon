#include "hschede.h"
#include "ui_hschede.h"

HSchede::HSchede(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HSchede)
{
    ui->setupUi(this);
}

HSchede::~HSchede()
{
    delete ui;
}
