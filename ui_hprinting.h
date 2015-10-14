/********************************************************************************
** Form generated from reading UI file 'hprinting.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRINTING_H
#define UI_HPRINTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPrinting
{
public:
    QTextBrowser *editor;

    void setupUi(QWidget *HPrinting)
    {
        if (HPrinting->objectName().isEmpty())
            HPrinting->setObjectName(QStringLiteral("HPrinting"));
        HPrinting->resize(1062, 571);
        editor = new QTextBrowser(HPrinting);
        editor->setObjectName(QStringLiteral("editor"));
        editor->setGeometry(QRect(10, 11, 1041, 461));

        retranslateUi(HPrinting);

        QMetaObject::connectSlotsByName(HPrinting);
    } // setupUi

    void retranslateUi(QWidget *HPrinting)
    {
        HPrinting->setWindowTitle(QApplication::translate("HPrinting", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class HPrinting: public Ui_HPrinting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRINTING_H
