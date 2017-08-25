#include "nouse.h"
#include "ui_nouse.h"

NoUse::NoUse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NoUse)
{
    ui->setupUi(this);
}

NoUse::~NoUse()
{
    delete ui;
}

void NoUse::on_pushButton_clicked()
{
    close();
}


void NoUse::SetLabelText(QString text)
{
    ui->label->setText(text);
}
