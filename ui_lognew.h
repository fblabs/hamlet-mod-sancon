/********************************************************************************
** Form generated from reading UI file 'lognew.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGNEW_H
#define UI_LOGNEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Lognew
{
public:

    void setupUi(QDialog *Lognew)
    {
        if (Lognew->objectName().isEmpty())
            Lognew->setObjectName(QString::fromUtf8("Lognew"));
        Lognew->resize(400, 300);

        retranslateUi(Lognew);

        QMetaObject::connectSlotsByName(Lognew);
    } // setupUi

    void retranslateUi(QDialog *Lognew)
    {
        Lognew->setWindowTitle(QCoreApplication::translate("Lognew", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lognew: public Ui_Lognew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGNEW_H
