/********************************************************************************
** Form generated from reading UI file 'lognew.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGNEW_H
#define UI_LOGNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Lognew
{
public:

    void setupUi(QDialog *Lognew)
    {
        if (Lognew->objectName().isEmpty())
            Lognew->setObjectName(QStringLiteral("Lognew"));
        Lognew->resize(400, 300);

        retranslateUi(Lognew);

        QMetaObject::connectSlotsByName(Lognew);
    } // setupUi

    void retranslateUi(QDialog *Lognew)
    {
        Lognew->setWindowTitle(QApplication::translate("Lognew", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Lognew: public Ui_Lognew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGNEW_H
