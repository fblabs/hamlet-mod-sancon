/********************************************************************************
** Form generated from reading UI file 'hprogtable.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPROGTABLE_H
#define UI_HPROGTABLE_H

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

class Ui_HProgTable
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *view;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HProgTable)
    {
        if (HProgTable->objectName().isEmpty())
            HProgTable->setObjectName(QString::fromUtf8("HProgTable"));
        HProgTable->setWindowModality(Qt::ApplicationModal);
        HProgTable->resize(1014, 727);
        verticalLayout = new QVBoxLayout(HProgTable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        view = new QTableView(HProgTable);
        view->setObjectName(QString::fromUtf8("view"));
        view->setEditTriggers(QAbstractItemView::NoEditTriggers);
        view->setSelectionBehavior(QAbstractItemView::SelectRows);
        view->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(view);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbPrint = new QPushButton(HProgTable);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        pbPrint->setMinimumSize(QSize(120, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HProgTable);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setMinimumSize(QSize(120, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon1);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HProgTable);

        QMetaObject::connectSlotsByName(HProgTable);
    } // setupUi

    void retranslateUi(QWidget *HProgTable)
    {
        HProgTable->setWindowTitle(QCoreApplication::translate("HProgTable", "Form", nullptr));
        pbPrint->setText(QCoreApplication::translate("HProgTable", "Stampa(Ctrl+P)", nullptr));
#if QT_CONFIG(shortcut)
        pbPrint->setShortcut(QCoreApplication::translate("HProgTable", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        pbClose->setText(QCoreApplication::translate("HProgTable", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HProgTable: public Ui_HProgTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPROGTABLE_H
