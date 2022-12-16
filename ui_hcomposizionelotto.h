/********************************************************************************
** Form generated from reading UI file 'hcomposizionelotto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCOMPOSIZIONELOTTO_H
#define UI_HCOMPOSIZIONELOTTO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *leDesc;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbUse;
    QPushButton *pbAdd;
    QPushButton *pbRemove;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HComposizioneLotto)
    {
        if (HComposizioneLotto->objectName().isEmpty())
            HComposizioneLotto->setObjectName(QString::fromUtf8("HComposizioneLotto"));
        HComposizioneLotto->setWindowModality(Qt::WindowModal);
        HComposizioneLotto->resize(1213, 770);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Bar-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HComposizioneLotto->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HComposizioneLotto);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(HComposizioneLotto);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        leDesc = new QLineEdit(HComposizioneLotto);
        leDesc->setObjectName(QString::fromUtf8("leDesc"));
        leDesc->setReadOnly(true);

        horizontalLayout_2->addWidget(leDesc);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(HComposizioneLotto);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbUse = new QPushButton(HComposizioneLotto);
        pbUse->setObjectName(QString::fromUtf8("pbUse"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Download.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbUse->setIcon(icon1);
        pbUse->setIconSize(QSize(32, 32));
        pbUse->setCheckable(false);

        horizontalLayout->addWidget(pbUse);

        pbAdd = new QPushButton(HComposizioneLotto);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Arrow-Down.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon2);
        pbAdd->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbAdd);

        pbRemove = new QPushButton(HComposizioneLotto);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Arrow-Up.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemove->setIcon(icon3);
        pbRemove->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(HComposizioneLotto);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HComposizioneLotto);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HComposizioneLotto);

        QMetaObject::connectSlotsByName(HComposizioneLotto);
    } // setupUi

    void retranslateUi(QWidget *HComposizioneLotto)
    {
        HComposizioneLotto->setWindowTitle(QCoreApplication::translate("HComposizioneLotto", "Dettagli Lotto", nullptr));
        label->setText(QCoreApplication::translate("HComposizioneLotto", "Lotto:", nullptr));
        pbUse->setText(QCoreApplication::translate("HComposizioneLotto", "Visualizza", nullptr));
        pbAdd->setText(QCoreApplication::translate("HComposizioneLotto", "Aggiungi componente", nullptr));
        pbRemove->setText(QCoreApplication::translate("HComposizioneLotto", "Rimuovi Componente", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HComposizioneLotto", "Stampa", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HComposizioneLotto", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HComposizioneLotto: public Ui_HComposizioneLotto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCOMPOSIZIONELOTTO_H
