/********************************************************************************
** Form generated from reading UI file 'hrecipesoverview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRECIPESOVERVIEW_H
#define UI_HRECIPESOVERVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HRecipesOverview
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tvResult;
    QGridLayout *gridLayout;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HRecipesOverview)
    {
        if (HRecipesOverview->objectName().isEmpty())
            HRecipesOverview->setObjectName(QString::fromUtf8("HRecipesOverview"));
        HRecipesOverview->resize(1091, 668);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Bar-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HRecipesOverview->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HRecipesOverview);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tvResult = new QTableView(HRecipesOverview);
        tvResult->setObjectName(QString::fromUtf8("tvResult"));
        tvResult->setSelectionMode(QAbstractItemView::SingleSelection);
        tvResult->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvResult->setSortingEnabled(true);
        tvResult->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvResult);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbPrint = new QPushButton(HRecipesOverview);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbPrint, 0, 1, 1, 1);

        pbClose = new QPushButton(HRecipesOverview);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbClose, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(HRecipesOverview);

        QMetaObject::connectSlotsByName(HRecipesOverview);
    } // setupUi

    void retranslateUi(QWidget *HRecipesOverview)
    {
        HRecipesOverview->setWindowTitle(QCoreApplication::translate("HRecipesOverview", " Percentuale Ingredienti Ricette", nullptr));
        pbPrint->setText(QCoreApplication::translate("HRecipesOverview", "Stampa (Ctrl+P)", nullptr));
#if QT_CONFIG(shortcut)
        pbPrint->setShortcut(QCoreApplication::translate("HRecipesOverview", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        pbClose->setText(QCoreApplication::translate("HRecipesOverview", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HRecipesOverview: public Ui_HRecipesOverview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRECIPESOVERVIEW_H
