/********************************************************************************
** Form generated from reading UI file 'hform.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFORM_H
#define UI_HFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HForm
{
public:

    void setupUi(QWidget *HForm)
    {
        if (HForm->objectName().isEmpty())
            HForm->setObjectName(QStringLiteral("HForm"));
        HForm->resize(400, 300);

        retranslateUi(HForm);

        QMetaObject::connectSlotsByName(HForm);
    } // setupUi

    void retranslateUi(QWidget *HForm)
    {
        HForm->setWindowTitle(QApplication::translate("HForm", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class HForm: public Ui_HForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFORM_H
