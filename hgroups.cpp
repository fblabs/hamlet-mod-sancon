#include "hgroups.h"
#include "ui_hgroups.h"
#include <QDir>
#include <QFile>
#include <QDebug>


HGroups::HGroups(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HGroups)
{

    QFile permissions_file(DEFAULT_PERMISSIONS_FILE);

    if(!permissions_file.exists())
    {
        create_permissions_defaults();
    }

    permissions_file.open(QFile::ReadWrite);

}

HGroups::~HGroups()
{
    delete ui;
}

void HGroups::create_permissions_defaults()
{

   QFile permissions_file(DEFAULT_PERMISSIONS_FILE);

   permissions_file.resize(0);

   if(permissions_file.open(QIODevice::ReadOnly |QIODevice::Text))
   {

       QString permissions_text=permissions_file.readAll();
       permissions_file.close();

       qDebug()<<permissions_text;

   }


}

void HGroups::read_permissions()
{

}

void HGroups::on_pBSave_clicked()
{

}


void HGroups::on_pbClose_clicked()
{
    close();
}

