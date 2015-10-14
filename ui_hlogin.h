/********************************************************************************
** Form generated from reading UI file 'hlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOGIN_H
#define UI_HLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLogin
{
public:
    QLineEdit *leUser;
    QLineEdit *lePwd;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *HLogin)
    {
        if (HLogin->objectName().isEmpty())
            HLogin->setObjectName(QStringLiteral("HLogin"));
        HLogin->setWindowModality(Qt::ApplicationModal);
        HLogin->resize(400, 229);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Key.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HLogin->setWindowIcon(icon);
        leUser = new QLineEdit(HLogin);
        leUser->setObjectName(QStringLiteral("leUser"));
        leUser->setGeometry(QRect(40, 60, 311, 20));
        lePwd = new QLineEdit(HLogin);
        lePwd->setObjectName(QStringLiteral("lePwd"));
        lePwd->setGeometry(QRect(40, 120, 311, 20));
        lePwd->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(HLogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 180, 75, 23));
        pushButton->setAutoExclusive(false);
        pushButton->setDefault(true);
        pushButton_2 = new QPushButton(HLogin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 180, 75, 23));
        label = new QLabel(HLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 46, 13));
        label_2 = new QLabel(HLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 100, 46, 13));

        retranslateUi(HLogin);

        QMetaObject::connectSlotsByName(HLogin);
    } // setupUi

    void retranslateUi(QWidget *HLogin)
    {
        HLogin->setWindowTitle(QApplication::translate("HLogin", "Login", 0));
        leUser->setText(QApplication::translate("HLogin", "fabio", 0));
        leUser->setPlaceholderText(QApplication::translate("HLogin", "nome", 0));
        lePwd->setText(QApplication::translate("HLogin", "gnocca63", 0));
        lePwd->setPlaceholderText(QApplication::translate("HLogin", "password", 0));
        pushButton->setText(QApplication::translate("HLogin", "Login", 0));
        pushButton_2->setText(QApplication::translate("HLogin", "Annulla", 0));
        label->setText(QApplication::translate("HLogin", "Nome", 0));
        label_2->setText(QApplication::translate("HLogin", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class HLogin: public Ui_HLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOGIN_H
