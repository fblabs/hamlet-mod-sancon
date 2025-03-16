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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *leUser;
    QLabel *label_5;
    QLineEdit *lePassword;
    QCheckBox *checkBox;
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
        HSettings->resize(485, 282);
        verticalLayout = new QVBoxLayout(HSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(HSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        leUser = new QLineEdit(HSettings);
        leUser->setObjectName(QString::fromUtf8("leUser"));

        gridLayout->addWidget(leUser, 0, 1, 1, 1);

        label_5 = new QLabel(HSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        lePassword = new QLineEdit(HSettings);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePassword, 1, 1, 1, 1);

        checkBox = new QCheckBox(HSettings);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 1, 2, 1, 1);

        label = new QLabel(HSettings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        leAddress = new QLineEdit(HSettings);
        leAddress->setObjectName(QString::fromUtf8("leAddress"));

        gridLayout->addWidget(leAddress, 2, 1, 1, 1);

        label_4 = new QLabel(HSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lePort = new QLineEdit(HSettings);
        lePort->setObjectName(QString::fromUtf8("lePort"));

        gridLayout->addWidget(lePort, 3, 1, 1, 1);

        label_3 = new QLabel(HSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        leDatabase = new QLineEdit(HSettings);
        leDatabase->setObjectName(QString::fromUtf8("leDatabase"));

        gridLayout->addWidget(leDatabase, 4, 1, 1, 1);

        label_6 = new QLabel(HSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        leConnessione = new QLineEdit(HSettings);
        leConnessione->setObjectName(QString::fromUtf8("leConnessione"));

        gridLayout->addWidget(leConnessione, 5, 1, 1, 1);

        label_7 = new QLabel(HSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lePreferredDb = new QLineEdit(HSettings);
        lePreferredDb->setObjectName(QString::fromUtf8("lePreferredDb"));

        gridLayout->addWidget(lePreferredDb, 6, 1, 1, 1);

        pbSelect = new QPushButton(HSettings);
        pbSelect->setObjectName(QString::fromUtf8("pbSelect"));

        gridLayout->addWidget(pbSelect, 6, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

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
        label_2->setText(QCoreApplication::translate("HSettings", "User:", nullptr));
        label_5->setText(QCoreApplication::translate("HSettings", "Password:", nullptr));
        checkBox->setText(QCoreApplication::translate("HSettings", "Mostra", nullptr));
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
