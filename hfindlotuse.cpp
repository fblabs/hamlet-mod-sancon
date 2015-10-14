#include "hfindlotuse.h"
#include "ui_hfindlotuse.h"

HFindLotUse::HFindLotUse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HFindLotUse)
{
    ui->setupUi(this);
}

HFindLotUse::~HFindLotUse()
{
    delete ui;
}

void HFindLotUse::init(QString conn)
{
    sConn=conn;

    db=QSqlDatabase::database(sConn);

}

void HFindLotUse::findLotFornitore()
{}

void HFindLotUse::findLotInterno()
{}
