/********************************************************************************
** Form generated from reading UI file 'hsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSETTINGS_H
#define UI_HSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HSettings
{
public:
    QVBoxLayout *verticalLayout_2;
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
    QFormLayout *formLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HSettings)
    {
        if (HSettings->objectName().isEmpty())
            HSettings->setObjectName(QStringLiteral("HSettings"));
        HSettings->setWindowModality(Qt::ApplicationModal);
        HSettings->resize(400, 225);
        verticalLayout_2 = new QVBoxLayout(HSettings);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(HSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        leUser = new QLineEdit(HSettings);
        leUser->setObjectName(QStringLiteral("leUser"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUser);

        label_5 = new QLabel(HSettings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lePassword = new QLineEdit(HSettings);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lePassword);

        label = new QLabel(HSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        leAddress = new QLineEdit(HSettings);
        leAddress->setObjectName(QStringLiteral("leAddress"));

        formLayout->setWidget(2, QFormLayout::FieldRole, leAddress);

        label_4 = new QLabel(HSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lePort = new QLineEdit(HSettings);
        lePort->setObjectName(QStringLiteral("lePort"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lePort);

        label_3 = new QLabel(HSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        leDatabase = new QLineEdit(HSettings);
        leDatabase->setObjectName(QStringLiteral("leDatabase"));

        formLayout->setWidget(4, QFormLayout::FieldRole, leDatabase);

        label_6 = new QLabel(HSettings);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        leConnessione = new QLineEdit(HSettings);
        leConnessione->setObjectName(QStringLiteral("leConnessione"));

        formLayout->setWidget(5, QFormLayout::FieldRole, leConnessione);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        pushButton = new QPushButton(HSettings);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(HSettings);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pushButton_2);


        verticalLayout->addLayout(formLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HSettings);

        QMetaObject::connectSlotsByName(HSettings);
    } // setupUi

    void retranslateUi(QWidget *HSettings)
    {
        HSettings->setWindowTitle(QApplication::translate("HSettings", "HamletModus 1.0 - Impostazioni", 0));
        label_2->setText(QApplication::translate("HSettings", "User", 0));
        label_5->setText(QApplication::translate("HSettings", "Password:", 0));
        label->setText(QApplication::translate("HSettings", "Indirizzo:", 0));
        label_4->setText(QApplication::translate("HSettings", "Porta:", 0));
        label_3->setText(QApplication::translate("HSettings", "Database:", 0));
        label_6->setText(QApplication::translate("HSettings", "Connessione:", 0));
        pushButton->setText(QApplication::translate("HSettings", "&Salva", 0));
        pushButton_2->setText(QApplication::translate("HSettings", "&Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HSettings: public Ui_HSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSETTINGS_H
