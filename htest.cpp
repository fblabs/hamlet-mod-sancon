#include "htest.h"
#include "ui_htest.h"

HTest::HTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HTest)
{
    ui->setupUi(this);
}

HTest::~HTest()
{
    delete ui;
}
