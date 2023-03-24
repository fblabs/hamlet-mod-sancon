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
}

HContainer_generic::~HContainer_generic()
{
    delete ui;

}

void HContainer_generic::data()
{
    emit component_added(ui->leItem->text().toUpper(),ui->leCosto->text());
}





