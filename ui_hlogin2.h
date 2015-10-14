/********************************************************************************
** Form generated from reading UI file 'hlogin2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOGIN2_H
#define UI_HLOGIN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HLogin2->setObjectName(QStringLiteral("HLogin2"));
        HLogin2->resize(342, 134);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/User-Male.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HLogin2->setWindowIcon(icon);
        HLogin2->setModal(true);
        verticalLayout_2 = new QVBoxLayout(HLogin2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HLogin2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leUser = new QLineEdit(HLogin2);
        leUser->setObjectName(QStringLiteral("leUser"));
        leUser->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leUser);

        label_2 = new QLabel(HLogin2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lePwd = new QLineEdit(HLogin2);
        lePwd->setObjectName(QStringLiteral("lePwd"));
        lePwd->setEchoMode(QLineEdit::Password);
        lePwd->setClearButtonEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lePwd);

        label_3 = new QLabel(HLogin2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        checkBox = new QCheckBox(HLogin2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HLogin2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Key.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setAutoExclusive(false);
        pushButton->setDefault(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HLogin2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HLogin2);

        QMetaObject::connectSlotsByName(HLogin2);
    } // setupUi

    void retranslateUi(QDialog *HLogin2)
    {
        HLogin2->setWindowTitle(QApplication::translate("HLogin2", "HamletMod - Login", 0));
        label->setText(QApplication::translate("HLogin2", "Nome", 0));
        leUser->setText(QString());
        leUser->setPlaceholderText(QApplication::translate("HLogin2", "nome", 0));
        label_2->setText(QApplication::translate("HLogin2", "Password", 0));
        lePwd->setText(QString());
        lePwd->setPlaceholderText(QApplication::translate("HLogin2", "password", 0));
        label_3->setText(QString());
        checkBox->setText(QApplication::translate("HLogin2", "Mostra la password", 0));
        pushButton->setText(QApplication::translate("HLogin2", "Login", 0));
        pushButton_2->setText(QApplication::translate("HLogin2", "Annulla", 0));
    } // retranslateUi

};

namespace Ui {
    class HLogin2: public Ui_HLogin2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOGIN2_H
