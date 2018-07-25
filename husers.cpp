#include "husers.h"
#include "ui_husers.h"

HUsers::HUsers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HUsers)
{
    ui->setupUi(this);
}

HUsers::~HUsers()
{
    delete ui;
}
