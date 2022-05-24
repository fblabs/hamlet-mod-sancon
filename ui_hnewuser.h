/********************************************************************************
** Form generated from reading UI file 'hnewuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWUSER_H
#define UI_HNEWUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HNewUser
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leUserName;
    QLabel *label_2;
    QLineEdit *leNome;
    QLabel *label_3;
    QLineEdit *lePassword;
    QCheckBox *cbShow;
    QLineEdit *leCheckPwd;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *cbxRoles;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HNewUser)
    {
        if (HNewUser->objectName().isEmpty())
            HNewUser->setObjectName(QString::fromUtf8("HNewUser"));
        HNewUser->resize(400, 248);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Key.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewUser->setWindowIcon(icon);
        HNewUser->setModal(true);
        verticalLayout = new QVBoxLayout(HNewUser);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(HNewUser);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leUserName = new QLineEdit(HNewUser);
        leUserName->setObjectName(QString::fromUtf8("leUserName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUserName);

        label_2 = new QLabel(HNewUser);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leNome = new QLineEdit(HNewUser);
        leNome->setObjectName(QString::fromUtf8("leNome"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leNome);

        label_3 = new QLabel(HNewUser);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lePassword = new QLineEdit(HNewUser);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lePassword);

        cbShow = new QCheckBox(HNewUser);
        cbShow->setObjectName(QString::fromUtf8("cbShow"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cbShow);

        leCheckPwd = new QLineEdit(HNewUser);
        leCheckPwd->setObjectName(QString::fromUtf8("leCheckPwd"));
        leCheckPwd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(7, QFormLayout::FieldRole, leCheckPwd);

        label_4 = new QLabel(HNewUser);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(HNewUser);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        cbxRoles = new QComboBox(HNewUser);
        cbxRoles->setObjectName(QString::fromUtf8("cbxRoles"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cbxRoles);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HNewUser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HNewUser);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HNewUser);

        QMetaObject::connectSlotsByName(HNewUser);
    } // setupUi

    void retranslateUi(QDialog *HNewUser)
    {
        HNewUser->setWindowTitle(QCoreApplication::translate("HNewUser", "Nuovo utente", nullptr));
        label->setText(QCoreApplication::translate("HNewUser", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("HNewUser", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("HNewUser", "Password:", nullptr));
        cbShow->setText(QCoreApplication::translate("HNewUser", "Mostra", nullptr));
        label_4->setText(QCoreApplication::translate("HNewUser", "Ripeti password", nullptr));
        label_5->setText(QCoreApplication::translate("HNewUser", "Gruppo:", nullptr));
        pushButton->setText(QCoreApplication::translate("HNewUser", "Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HNewUser", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNewUser: public Ui_HNewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWUSER_H
