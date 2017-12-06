/********************************************************************************
** Form generated from reading UI file 'hexpirations.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXPIRATIONS_H
#define UI_HEXPIRATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QSpinBox *sbDays;
    QLabel *label_2;
    QDateEdit *deLimit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *HExpirations)
    {
        if (HExpirations->objectName().isEmpty())
            HExpirations->setObjectName(QStringLiteral("HExpirations"));
        HExpirations->resize(768, 628);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Calendar.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HExpirations->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HExpirations);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(HExpirations);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_2->addWidget(label);

        sbDays = new QSpinBox(HExpirations);
        sbDays->setObjectName(QStringLiteral("sbDays"));
        sbDays->setMaximumSize(QSize(35, 16777215));
        sbDays->setMinimum(0);
        sbDays->setMaximum(31);
        sbDays->setValue(0);

        horizontalLayout_2->addWidget(sbDays);

        label_2 = new QLabel(HExpirations);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(90, 0));
        label_2->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(label_2);

        deLimit = new QDateEdit(HExpirations);
        deLimit->setObjectName(QStringLiteral("deLimit"));
        deLimit->setMinimumSize(QSize(100, 0));
        deLimit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(deLimit);

        label_3 = new QLabel(HExpirations);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(688, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(HExpirations);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(HExpirations);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(HExpirations);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HExpirations);

        QMetaObject::connectSlotsByName(HExpirations);
    } // setupUi

    void retranslateUi(QWidget *HExpirations)
    {
        HExpirations->setWindowTitle(QApplication::translate("HExpirations", "Scadenza lotti", 0));
        label->setText(QApplication::translate("HExpirations", "Scadenze nei", 0));
        label_2->setText(QApplication::translate("HExpirations", "giorni successivi al", 0));
        label_3->setText(QApplication::translate("HExpirations", "(0 = data corrente)", 0));
        pushButton_2->setText(QApplication::translate("HExpirations", "Stampa", 0));
        pushButton->setText(QApplication::translate("HExpirations", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HExpirations: public Ui_HExpirations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXPIRATIONS_H
