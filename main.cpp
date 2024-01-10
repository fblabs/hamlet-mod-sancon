#include <windows.h>
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    a.setApplicationName("hamlet MOD");
    a.setApplicationVersion("3.6");
    a.setOrganizationName("FBLABS");

    w.show();
    return a.exec();
}
