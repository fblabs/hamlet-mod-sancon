/********************************************************************************
** Form generated from reading UI file 'hmodificaricette.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIFICARICETTE_H
#define UI_HMODIFICARICETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModificaRicette
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HModificaRicette)
    {
        if (HModificaRicette->objectName().isEmpty())
            HModificaRicette->setObjectName(QStringLiteral("HModificaRicette"));
        HModificaRicette->setWindowModality(Qt::ApplicationModal);
        HModificaRicette->resize(428, 338);
        tableView = new QTableView(HModificaRicette);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 20, 391, 192));
        pushButton = new QPushButton(HModificaRicette);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 300, 75, 23));
        pushButton_2 = new QPushButton(HModificaRicette);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 300, 75, 23));

        retranslateUi(HModificaRicette);

        QMetaObject::connectSlotsByName(HModificaRicette);
    } // setupUi

    void retranslateUi(QWidget *HModificaRicette)
    {
        HModificaRicette->setWindowTitle(QApplication::translate("HModificaRicette", "Form", 0));
        pushButton->setText(QApplication::translate("HModificaRicette", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("HModificaRicette", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class HModificaRicette: public Ui_HModificaRicette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFICARICETTE_H
