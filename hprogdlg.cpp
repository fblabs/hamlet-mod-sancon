#include "hprogdlg.h"
#include "ui_hprogdlg.h"
#include <QTime>


HProgDlg::HProgDlg(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HProgDlg)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
   // delay();
    show();



}

HProgDlg::~HProgDlg()
{
    delete ui;
}

void HProgDlg::delay()
{

    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

}

void HProgDlg::removeMe()
{
    this->close();
}



