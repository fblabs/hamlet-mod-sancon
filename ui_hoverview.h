/********************************************************************************
** Form generated from reading UI file 'hoverview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOVERVIEW_H
#define UI_HOVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HOverview
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QDateEdit *dateEdit_2;

    void setupUi(QWidget *HOverview)
    {
        if (HOverview->objectName().isEmpty())
            HOverview->setObjectName(QString::fromUtf8("HOverview"));
        HOverview->resize(1308, 702);
        widget = new QWidget(HOverview);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 110, 274, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout->addWidget(dateEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        dateEdit_2 = new QDateEdit(widget);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        horizontalLayout->addWidget(dateEdit_2);


        retranslateUi(HOverview);

        QMetaObject::connectSlotsByName(HOverview);
    } // setupUi

    void retranslateUi(QWidget *HOverview)
    {
        HOverview->setWindowTitle(QCoreApplication::translate("HOverview", "Form", nullptr));
        label->setText(QCoreApplication::translate("HOverview", "Dal:", nullptr));
        label_2->setText(QCoreApplication::translate("HOverview", "Al:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HOverview: public Ui_HOverview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOVERVIEW_H
