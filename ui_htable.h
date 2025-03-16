/********************************************************************************
** Form generated from reading UI file 'htable.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTABLE_H
#define UI_HTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HTable
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *view;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HTable)
    {
        if (HTable->objectName().isEmpty())
            HTable->setObjectName(QString::fromUtf8("HTable"));
        HTable->resize(1042, 430);
        verticalLayout = new QVBoxLayout(HTable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        view = new QTableView(HTable);
        view->setObjectName(QString::fromUtf8("view"));

        verticalLayout->addWidget(view);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbPrint = new QPushButton(HTable);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HTable);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HTable);

        QMetaObject::connectSlotsByName(HTable);
    } // setupUi

    void retranslateUi(QWidget *HTable)
    {
        HTable->setWindowTitle(QCoreApplication::translate("HTable", "Form", nullptr));
        pbPrint->setText(QCoreApplication::translate("HTable", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HTable", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HTable: public Ui_HTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTABLE_H
