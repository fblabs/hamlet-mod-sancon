/********************************************************************************
** Form generated from reading UI file 'temp.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMP_H
#define UI_TEMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Temp
{
public:
    QTableView *tableView;

    void setupUi(QWidget *Temp)
    {
        if (Temp->objectName().isEmpty())
            Temp->setObjectName(QStringLiteral("Temp"));
        Temp->resize(842, 438);
        tableView = new QTableView(Temp);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 20, 801, 311));

        retranslateUi(Temp);

        QMetaObject::connectSlotsByName(Temp);
    } // setupUi

    void retranslateUi(QWidget *Temp)
    {
        Temp->setWindowTitle(QApplication::translate("Temp", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Temp: public Ui_Temp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMP_H
