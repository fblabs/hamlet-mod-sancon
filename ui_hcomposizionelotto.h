/********************************************************************************
** Form generated from reading UI file 'hcomposizionelotto.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCOMPOSIZIONELOTTO_H
#define UI_HCOMPOSIZIONELOTTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HComposizioneLotto
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *leDesc;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbUse;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HComposizioneLotto)
    {
        if (HComposizioneLotto->objectName().isEmpty())
            HComposizioneLotto->setObjectName(QStringLiteral("HComposizioneLotto"));
        HComposizioneLotto->setWindowModality(Qt::WindowModal);
        HComposizioneLotto->resize(1213, 770);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Bar-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HComposizioneLotto->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HComposizioneLotto);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(HComposizioneLotto);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        leDesc = new QLineEdit(HComposizioneLotto);
        leDesc->setObjectName(QStringLiteral("leDesc"));
        leDesc->setReadOnly(true);

        horizontalLayout_2->addWidget(leDesc);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(HComposizioneLotto);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbUse = new QPushButton(HComposizioneLotto);
        pbUse->setObjectName(QStringLiteral("pbUse"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Download.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbUse->setIcon(icon1);
        pbUse->setIconSize(QSize(32, 32));
        pbUse->setCheckable(false);

        horizontalLayout->addWidget(pbUse);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(HComposizioneLotto);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HComposizioneLotto);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HComposizioneLotto);

        QMetaObject::connectSlotsByName(HComposizioneLotto);
    } // setupUi

    void retranslateUi(QWidget *HComposizioneLotto)
    {
        HComposizioneLotto->setWindowTitle(QApplication::translate("HComposizioneLotto", "Dettagli Lotto", 0));
        label->setText(QApplication::translate("HComposizioneLotto", "Lotto:", 0));
        pbUse->setText(QApplication::translate("HComposizioneLotto", "Visualizza", 0));
        pushButton_2->setText(QApplication::translate("HComposizioneLotto", "Stampa", 0));
        pushButton_3->setText(QApplication::translate("HComposizioneLotto", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HComposizioneLotto: public Ui_HComposizioneLotto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCOMPOSIZIONELOTTO_H
