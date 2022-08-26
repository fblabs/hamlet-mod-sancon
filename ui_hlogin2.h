/********************************************************************************
** Form generated from reading UI file 'hlogin2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOGIN2_H
#define UI_HLOGIN2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HLogin2
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leUser;
    QLabel *label_2;
    QLineEdit *lePwd;
    QLabel *label_3;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HLogin2)
    {
        if (HLogin2->objectName().isEmpty())
            HLogin2->setObjectName(QString::fromUtf8("HLogin2"));
        HLogin2->setWindowModality(Qt::ApplicationModal);
        HLogin2->resize(342, 136);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/fblabs.png"), QSize(), QIcon::Normal, QIcon::Off);
        HLogin2->setWindowIcon(icon);
        HLogin2->setModal(true);
        verticalLayout_2 = new QVBoxLayout(HLogin2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HLogin2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leUser = new QLineEdit(HLogin2);
        leUser->setObjectName(QString::fromUtf8("leUser"));
        leUser->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leUser);

        label_2 = new QLabel(HLogin2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lePwd = new QLineEdit(HLogin2);
        lePwd->setObjectName(QString::fromUtf8("lePwd"));
        lePwd->setEchoMode(QLineEdit::Password);
        lePwd->setClearButtonEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lePwd);

        label_3 = new QLabel(HLogin2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        checkBox = new QCheckBox(HLogin2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HLogin2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Key.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setAutoExclusive(false);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HLogin2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HLogin2);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(HLogin2);
    } // setupUi

    void retranslateUi(QDialog *HLogin2)
    {
        HLogin2->setWindowTitle(QCoreApplication::translate("HLogin2", "HamletMod - Login", nullptr));
        label->setText(QCoreApplication::translate("HLogin2", "Nome", nullptr));
        leUser->setText(QString());
        leUser->setPlaceholderText(QCoreApplication::translate("HLogin2", "nome", nullptr));
        label_2->setText(QCoreApplication::translate("HLogin2", "Password", nullptr));
        lePwd->setText(QString());
        lePwd->setPlaceholderText(QCoreApplication::translate("HLogin2", "password", nullptr));
        label_3->setText(QString());
        checkBox->setText(QCoreApplication::translate("HLogin2", "Mostra la password", nullptr));
        pushButton->setText(QCoreApplication::translate("HLogin2", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HLogin2", "Annulla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLogin2: public Ui_HLogin2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOGIN2_H
