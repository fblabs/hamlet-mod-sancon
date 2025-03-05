/********************************************************************************
** Form generated from reading UI file 'hmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMENU_H
#define UI_HMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HMenu
{
public:

    void setupUi(QWidget *HMenu)
    {
        if (HMenu->objectName().isEmpty())
            HMenu->setObjectName(QString::fromUtf8("HMenu"));
        HMenu->resize(400, 300);

        retranslateUi(HMenu);

        QMetaObject::connectSlotsByName(HMenu);
    } // setupUi

    void retranslateUi(QWidget *HMenu)
    {
        HMenu->setWindowTitle(QCoreApplication::translate("HMenu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HMenu: public Ui_HMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMENU_H
