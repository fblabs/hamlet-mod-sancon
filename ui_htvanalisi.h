/********************************************************************************
** Form generated from reading UI file 'htvanalisi.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTVANALISI_H
#define UI_HTVANALISI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HTvAnalisi
{
public:
    QColumnView *columnView;

    void setupUi(QWidget *HTvAnalisi)
    {
        if (HTvAnalisi->objectName().isEmpty())
            HTvAnalisi->setObjectName(QStringLiteral("HTvAnalisi"));
        HTvAnalisi->resize(1279, 549);
        columnView = new QColumnView(HTvAnalisi);
        columnView->setObjectName(QStringLiteral("columnView"));
        columnView->setGeometry(QRect(40, 50, 1141, 301));

        retranslateUi(HTvAnalisi);

        QMetaObject::connectSlotsByName(HTvAnalisi);
    } // setupUi

    void retranslateUi(QWidget *HTvAnalisi)
    {
        HTvAnalisi->setWindowTitle(QApplication::translate("HTvAnalisi", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class HTvAnalisi: public Ui_HTvAnalisi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTVANALISI_H
