#include "hsettings.h"
#include "ui_hsettings.h"
#include <QSettings>
#include <QMessageBox>
#include <QFileDialog>

HSettings::HSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HSettings)
{
    ui->setupUi(this);

    QSettings settings("hamletmod.ini",QSettings::IniFormat);
    ui->leUser->setText (settings.value("user").toString());
    ui->leAddress->setText(settings.value("server").toString());
    ui->lePort->setText(settings.value("port").toString());
    ui->leDatabase->setText(settings.value("database").toString());
    ui->lePassword->setText (settings.value("pwd").toString());
    ui->leConnessione->setText(settings.value("conn").toString());
    ui->lePreferredDb->setText(settings.value("preferred_lots").toString());
}

HSettings::~HSettings()
{
    delete ui;
}

void HSettings::on_pushButton_clicked()
{




   QSettings settings ("hamletmod.ini",QSettings::IniFormat);
   QString sUser = ui->leUser->text();
   QString sAddress = ui->leAddress->text();
   QString sPort = ui->lePort->text();
   QString sDatabase = ui->leDatabase->text();
   QString sPassword = ui->lePassword->text();
   QString sConnessione = ui->leConnessione->text();
   QString sPreferredDb =ui->lePreferredDb->text();

   settings.setValue("database",sDatabase);
   settings.setValue("user", sUser);
   settings.setValue("server",sAddress);
   settings.setValue("port", sPort.toInt());
   settings.setValue("pwd", sPassword);
   settings.setValue("conn",sConnessione);
   settings.setValue("preferred_lots",sPreferredDb);

   QMessageBox::information(this,QApplication::applicationName(),"Impostazioni salvate",QMessageBox::Ok);

}

void HSettings::on_pushButton_2_clicked()
{
    this->close();
}

void HSettings::on_pbSelect_clicked()
{
   QString filename=QFileDialog::getOpenFileName();
   ui->lePreferredDb->setText(filename);
}


void HSettings::on_checkBox_toggled(bool checked)
{
    if(checked)
    {
        ui->lePassword->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->lePassword->setEchoMode(QLineEdit::Password);
    }
}

