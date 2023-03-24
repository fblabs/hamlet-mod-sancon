/********************************************************************************
** Form generated from reading UI file 'hboxeswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HBOXESWIDGET_H
#define UI_HBOXESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HBoxesWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *HBoxesWidget)
    {
        if (HBoxesWidget->objectName().isEmpty())
            HBoxesWidget->setObjectName(QString::fromUtf8("HBoxesWidget"));
        HBoxesWidget->resize(400, 300);
        label = new QLabel(HBoxesWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 140, 49, 16));

        retranslateUi(HBoxesWidget);

        QMetaObject::connectSlotsByName(HBoxesWidget);
    } // setupUi

    void retranslateUi(QWidget *HBoxesWidget)
    {
        HBoxesWidget->setWindowTitle(QCoreApplication::translate("HBoxesWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("HBoxesWidget", "BOXES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HBoxesWidget: public Ui_HBoxesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HBOXESWIDGET_H
