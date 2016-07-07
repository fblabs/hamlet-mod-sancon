#include "hnotifica.h"
#include "ui_hnotifica.h"
#include <QSqlQuery>

HNotifica::HNotifica(QWidget *parent, int id, QSqlDatabase pdb) :
    QWidget(parent),
    ui(new Ui::HNotifica)
{
    ui->setupUi(this);
    db=pdb;

}

HNotifica::~HNotifica()
{
    delete ui;
}
