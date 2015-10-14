/********************************************************************************
** Form generated from reading UI file 'hoverview.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOVERVIEW_H
#define UI_HOVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HOverview->setObjectName(QStringLiteral("HOverview"));
        HOverview->resize(1308, 702);
        widget = new QWidget(HOverview);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 110, 274, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout->addWidget(dateEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        dateEdit_2 = new QDateEdit(widget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        horizontalLayout->addWidget(dateEdit_2);


        retranslateUi(HOverview);

        QMetaObject::connectSlotsByName(HOverview);
    } // setupUi

    void retranslateUi(QWidget *HOverview)
    {
        HOverview->setWindowTitle(QApplication::translate("HOverview", "Form", 0));
        label->setText(QApplication::translate("HOverview", "Dal:", 0));
        label_2->setText(QApplication::translate("HOverview", "Al:", 0));
    } // retranslateUi

};

namespace Ui {
    class HOverview: public Ui_HOverview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOVERVIEW_H
