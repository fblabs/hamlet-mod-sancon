#include "hsettings.h"
#include "ui_hsettings.h"
#include <QSettings>
#include <QMessageBox>

HSettings::HSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HSettings)
{
    ui->setupUi(this);

    QSettings settings("hamletmod");
    ui->leUser->setText (settings.value("user").toString());
    ui->leAddress->setText(settings.value("server").toString());
    ui->lePort->setText(settings.value("port").toString());
    ui->leDatabase->setText(settings.value("database").toString());
    ui->lePassword->setText (settings.value("pwd").toString());
    ui->leConnessione->setText(settings.value("conn").toString());
}

HSettings::~HSettings()
{
    delete ui;
}

void HSettings::on_pushButton_clicked()
{
   QSettings settings ("hamletmod");
   QString sUser = ui->leUser->text();
   QString sAddress = ui->leAddress->text();
   QString sPort = ui->lePort->text();
   QString sDatabase = ui->leDatabase->text();
   QString sPassword = ui->lePassword->text();
   QString sConnessione = ui->leConnessione->text();

   settings.setValue("database",sDatabase);
   settings.setValue("user", sUser);
   settings.setValue("server",sAddress);
   settings.setValue("port", sPort.toInt());
   settings.setValue("pwd", sPassword);
   settings.setValue("conn",sConnessione);

   QMessageBox::information(this,QApplication::applicationName(),"Impostazioni salvate",QMessageBox::Ok);

}

void HSettings::on_pushButton_2_clicked()
{
    this->close();
}
