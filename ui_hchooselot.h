/********************************************************************************
** Form generated from reading UI file 'hchooselot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCHOOSELOT_H
#define UI_HCHOOSELOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HChooseLot
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *leSearch;
    QTableView *tvSearch;

    void setupUi(QDialog *HChooseLot)
    {
        if (HChooseLot->objectName().isEmpty())
            HChooseLot->setObjectName(QString::fromUtf8("HChooseLot"));
        HChooseLot->setWindowModality(Qt::ApplicationModal);
        HChooseLot->resize(273, 328);
        verticalLayout = new QVBoxLayout(HChooseLot);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        leSearch = new QLineEdit(HChooseLot);
        leSearch->setObjectName(QString::fromUtf8("leSearch"));

        verticalLayout->addWidget(leSearch);

        tvSearch = new QTableView(HChooseLot);
        tvSearch->setObjectName(QString::fromUtf8("tvSearch"));
        tvSearch->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvSearch->setAlternatingRowColors(true);
        tvSearch->setSelectionMode(QAbstractItemView::SingleSelection);
        tvSearch->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvSearch->horizontalHeader()->setVisible(true);
        tvSearch->horizontalHeader()->setStretchLastSection(true);
        tvSearch->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvSearch);


        retranslateUi(HChooseLot);

        QMetaObject::connectSlotsByName(HChooseLot);
    } // setupUi

    void retranslateUi(QDialog *HChooseLot)
    {
        HChooseLot->setWindowTitle(QCoreApplication::translate("HChooseLot", "Scelta lotto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HChooseLot: public Ui_HChooseLot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCHOOSELOT_H
