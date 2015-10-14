/********************************************************************************
** Form generated from reading UI file 'hnewuser.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWUSER_H
#define UI_HNEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HNewUser->setObjectName(QStringLiteral("HNewUser"));
        HNewUser->resize(400, 248);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Key.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewUser->setWindowIcon(icon);
        HNewUser->setModal(true);
        verticalLayout = new QVBoxLayout(HNewUser);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(HNewUser);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leUserName = new QLineEdit(HNewUser);
        leUserName->setObjectName(QStringLiteral("leUserName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUserName);

        label_2 = new QLabel(HNewUser);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leNome = new QLineEdit(HNewUser);
        leNome->setObjectName(QStringLiteral("leNome"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leNome);

        label_3 = new QLabel(HNewUser);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lePassword = new QLineEdit(HNewUser);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lePassword);

        cbShow = new QCheckBox(HNewUser);
        cbShow->setObjectName(QStringLiteral("cbShow"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cbShow);

        leCheckPwd = new QLineEdit(HNewUser);
        leCheckPwd->setObjectName(QStringLiteral("leCheckPwd"));
        leCheckPwd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(7, QFormLayout::FieldRole, leCheckPwd);

        label_4 = new QLabel(HNewUser);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(HNewUser);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        cbxRoles = new QComboBox(HNewUser);
        cbxRoles->setObjectName(QStringLiteral("cbxRoles"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cbxRoles);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HNewUser);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HNewUser);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HNewUser);

        QMetaObject::connectSlotsByName(HNewUser);
    } // setupUi

    void retranslateUi(QDialog *HNewUser)
    {
        HNewUser->setWindowTitle(QApplication::translate("HNewUser", "Nuovo utente", 0));
        label->setText(QApplication::translate("HNewUser", "Username", 0));
        label_2->setText(QApplication::translate("HNewUser", "Nome:", 0));
        label_3->setText(QApplication::translate("HNewUser", "Password:", 0));
        cbShow->setText(QApplication::translate("HNewUser", "Mostra", 0));
        label_4->setText(QApplication::translate("HNewUser", "Ripeti password", 0));
        label_5->setText(QApplication::translate("HNewUser", "Gruppo:", 0));
        pushButton->setText(QApplication::translate("HNewUser", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HNewUser", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewUser: public Ui_HNewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWUSER_H
