/********************************************************************************
** Form generated from reading UI file 'hpreferred_lots.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPREFERRED_LOTS_H
#define UI_HPREFERRED_LOTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPreferred_Lots
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tvPreferredLots;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HPreferred_Lots)
    {
        if (HPreferred_Lots->objectName().isEmpty())
            HPreferred_Lots->setObjectName(QString::fromUtf8("HPreferred_Lots"));
        HPreferred_Lots->setWindowModality(Qt::ApplicationModal);
        HPreferred_Lots->resize(902, 588);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Text-columns64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HPreferred_Lots->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HPreferred_Lots);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tvPreferredLots = new QTableView(HPreferred_Lots);
        tvPreferredLots->setObjectName(QString::fromUtf8("tvPreferredLots"));
        tvPreferredLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvPreferredLots->setAlternatingRowColors(true);
        tvPreferredLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvPreferredLots->setSortingEnabled(true);
        tvPreferredLots->horizontalHeader()->setStretchLastSection(true);
        tvPreferredLots->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvPreferredLots);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbPrint = new QPushButton(HPreferred_Lots);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HPreferred_Lots);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HPreferred_Lots);

        QMetaObject::connectSlotsByName(HPreferred_Lots);
    } // setupUi

    void retranslateUi(QWidget *HPreferred_Lots)
    {
        HPreferred_Lots->setWindowTitle(QCoreApplication::translate("HPreferred_Lots", "Lotti predefiniti (panoramica)", nullptr));
        pbPrint->setText(QCoreApplication::translate("HPreferred_Lots", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HPreferred_Lots", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HPreferred_Lots: public Ui_HPreferred_Lots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPREFERRED_LOTS_H
