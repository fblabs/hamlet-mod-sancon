#include "hworker.h"
#include <QTimer>
#include <QDebug>
#include "hprogdlg.h"
#include <QApplication>

HWorker::HWorker(QObject *parent)
    : QObject{parent}
{
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    timer->start(100);
    HProgDlg *f=new HProgDlg();
    connect(this,SIGNAL(s_do()),f,SLOT(setProgbar()));
    QApplication::processEvents();
    f->show();
}

void HWorker::update()
{
    emit s_do();

}
