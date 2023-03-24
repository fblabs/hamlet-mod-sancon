/********************************************************************************
** Form generated from reading UI file 'hsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSETTINGS_H
#define UI_HSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HSettings
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *leUser;
    QLabel *label_5;
    QLineEdit *lePassword;
    QLabel *label;
    QLineEdit *leAddress;
    QLabel *label_4;
    QLineEdit *lePort;
    QLabel *label_3;
    QLineEdit *leDatabase;
    QLabel *label_6;
    QLineEdit *leConnessione;
    QLabel *label_7;
    QLineEdit *lePreferredDb;
    QPushButton *pbSelect;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HSettings)
    {
        if (HSettings->objectName().isEmpty())
            HSettings->setObjectName(QString::fromUtf8("HSettings"));
        HSettings->setWindowModality(Qt::ApplicationModal);
        HSettings->resize(400, 302);
        verticalLayout = new QVBoxLayout(HSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(HSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        leUser = new QLineEdit(HSettings);
        leUser->setObjectName(QString::fromUtf8("leUser"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUser);

        label_5 = new QLabel(HSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lePassword = new QLineEdit(HSettings);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lePassword);

        label = new QLabel(HSettings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        leAddress = new QLineEdit(HSettings);
        leAddress->setObjectName(QString::fromUtf8("leAddress"));

        formLayout->setWidget(2, QFormLayout::FieldRole, leAddress);

        label_4 = new QLabel(HSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lePort = new QLineEdit(HSettings);
        lePort->setObjectName(QString::fromUtf8("lePort"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lePort);

        label_3 = new QLabel(HSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        leDatabase = new QLineEdit(HSettings);
        leDatabase->setObjectName(QString::fromUtf8("leDatabase"));

        formLayout->setWidget(4, QFormLayout::FieldRole, leDatabase);

        label_6 = new QLabel(HSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        leConnessione = new QLineEdit(HSettings);
        leConnessione->setObjectName(QString::fromUtf8("leConnessione"));

        formLayout->setWidget(5, QFormLayout::FieldRole, leConnessione);

        label_7 = new QLabel(HSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        lePreferredDb = new QLineEdit(HSettings);
        lePreferredDb->setObjectName(QString::fromUtf8("lePreferredDb"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lePreferredDb);

        pbSelect = new QPushButton(HSettings);
        pbSelect->setObjectName(QString::fromUtf8("pbSelect"));

        formLayout->setWidget(7, QFormLayout::LabelRole, pbSelect);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HSettings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HSettings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HSettings);

        QMetaObject::connectSlotsByName(HSettings);
    } // setupUi

    void retranslateUi(QWidget *HSettings)
    {
        HSettings->setWindowTitle(QCoreApplication::translate("HSettings", "Impostazioni", nullptr));
        label_2->setText(QCoreApplication::translate("HSettings", "User", nullptr));
        label_5->setText(QCoreApplication::translate("HSettings", "Password:", nullptr));
        label->setText(QCoreApplication::translate("HSettings", "Indirizzo:", nullptr));
        label_4->setText(QCoreApplication::translate("HSettings", "Porta:", nullptr));
        label_3->setText(QCoreApplication::translate("HSettings", "Database:", nullptr));
        label_6->setText(QCoreApplication::translate("HSettings", "Connessione:", nullptr));
        label_7->setText(QCoreApplication::translate("HSettings", "Database lotti preferiti", nullptr));
        pbSelect->setText(QCoreApplication::translate("HSettings", "Seleziona", nullptr));
        pushButton->setText(QCoreApplication::translate("HSettings", "&Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HSettings", "&Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HSettings: public Ui_HSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSETTINGS_H
