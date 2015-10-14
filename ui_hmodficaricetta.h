/********************************************************************************
** Form generated from reading UI file 'hmodficaricetta.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODFICARICETTA_H
#define UI_HMODFICARICETTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModficaRicetta
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HModficaRicetta)
    {
        if (HModficaRicetta->objectName().isEmpty())
            HModficaRicetta->setObjectName(QStringLiteral("HModficaRicetta"));
        HModficaRicetta->setWindowModality(Qt::ApplicationModal);
        HModficaRicetta->resize(428, 338);
        tableView = new QTableView(HModficaRicetta);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(15, 60, 391, 192));
        pushButton = new QPushButton(HModficaRicetta);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 310, 75, 23));
        pushButton_2 = new QPushButton(HModficaRicetta);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 300, 75, 23));

        retranslateUi(HModficaRicetta);

        QMetaObject::connectSlotsByName(HModficaRicetta);
    } // setupUi

    void retranslateUi(QWidget *HModficaRicetta)
    {
        HModficaRicetta->setWindowTitle(QApplication::translate("HModficaRicetta", "Form", 0));
        pushButton->setText(QApplication::translate("HModficaRicetta", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("HModficaRicetta", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class HModficaRicetta: public Ui_HModficaRicetta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODFICARICETTA_H
