#include "hcontainer_generic.h"
#include "ui_hcontainer_generic.h"
#include <QValidator>

HContainer_generic::HContainer_generic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HContainer_generic)
{
    ui->setupUi(this);

    QDoubleValidator *costo_validator=new QDoubleValidator(0,100,3);
    ui->leCosto->setValidator(costo_validator);
    QIntValidator *amount_validator=new QIntValidator(0,32564);
    ui->leAmount->setValidator(amount_validator);
}

HContainer_generic::~HContainer_generic()
{
    delete ui;

}

void HContainer_generic::data()
{
    emit component_added(ui->leItem->text().toUpper(),ui->leAmount->text(),ui->leCosto->text());
}






void HContainer_generic::on_leAmount_returnPressed()
{
    QString item=QString();
    double amount=0.0;
    double cost=0-0;
    double unit_cost=0.0;

    item=ui->leItem->text();
    amount=ui->leAmount->text().toDouble();
    cost=ui->leCosto->text().toDouble();

    unit_cost=cost*amount;
    ui->leCosto->setText(QString::number(unit_cost,'f',4));
}

