/********************************************************************************
** Form generated from reading UI file 'htablet.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTABLET_H
#define UI_HTABLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Htablet
{
public:
    QLineEdit *lineEdit;

    void setupUi(QWidget *Htablet)
    {
        if (Htablet->objectName().isEmpty())
            Htablet->setObjectName(QStringLiteral("Htablet"));
        Htablet->resize(1258, 580);
        lineEdit = new QLineEdit(Htablet);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 60, 251, 20));

        retranslateUi(Htablet);

        QMetaObject::connectSlotsByName(Htablet);
    } // setupUi

    void retranslateUi(QWidget *Htablet)
    {
        Htablet->setWindowTitle(QApplication::translate("Htablet", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Htablet: public Ui_Htablet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTABLET_H
