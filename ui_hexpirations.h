/********************************************************************************
** Form generated from reading UI file 'hexpirations.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXPIRATIONS_H
#define UI_HEXPIRATIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HExpirations
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDateEdit *deFrom;
    QLabel *label_2;
    QDateEdit *deLimit;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *HExpirations)
    {
        if (HExpirations->objectName().isEmpty())
            HExpirations->setObjectName(QString::fromUtf8("HExpirations"));
        HExpirations->resize(768, 628);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Calendar.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HExpirations->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HExpirations);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(HExpirations);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_2->addWidget(label);

        deFrom = new QDateEdit(HExpirations);
        deFrom->setObjectName(QString::fromUtf8("deFrom"));
        deFrom->setCalendarPopup(true);

        horizontalLayout_2->addWidget(deFrom);

        label_2 = new QLabel(HExpirations);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(15, 0));
        label_2->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(label_2);

        deLimit = new QDateEdit(HExpirations);
        deLimit->setObjectName(QString::fromUtf8("deLimit"));
        deLimit->setMinimumSize(QSize(100, 0));
        deLimit->setMaximumSize(QSize(100, 16777215));
        deLimit->setCalendarPopup(true);

        horizontalLayout_2->addWidget(deLimit);

        pushButton_3 = new QPushButton(HExpirations);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(688, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(HExpirations);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(HExpirations);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(HExpirations);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HExpirations);

        QMetaObject::connectSlotsByName(HExpirations);
    } // setupUi

    void retranslateUi(QWidget *HExpirations)
    {
        HExpirations->setWindowTitle(QCoreApplication::translate("HExpirations", "Scadenza lotti", nullptr));
        label->setText(QCoreApplication::translate("HExpirations", "Scadenze dal", nullptr));
        label_2->setText(QCoreApplication::translate("HExpirations", "al", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HExpirations", "Cerca", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HExpirations", "Stampa", nullptr));
        pushButton->setText(QCoreApplication::translate("HExpirations", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HExpirations: public Ui_HExpirations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXPIRATIONS_H
