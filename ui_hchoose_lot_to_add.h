/********************************************************************************
** Form generated from reading UI file 'hchoose_lot_to_add.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCHOOSE_LOT_TO_ADD_H
#define UI_HCHOOSE_LOT_TO_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_HChoose_lot_to_add
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbProducts;
    QTableView *tvLots;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *leAmount;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbAdd;
    QPushButton *pbClose;

    void setupUi(QWidget *HChoose_lot_to_add)
    {
        if (HChoose_lot_to_add->objectName().isEmpty())
            HChoose_lot_to_add->setObjectName(QString::fromUtf8("HChoose_lot_to_add"));
        HChoose_lot_to_add->setWindowModality(Qt::ApplicationModal);
        HChoose_lot_to_add->resize(361, 431);
        verticalLayout = new QVBoxLayout(HChoose_lot_to_add);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HChoose_lot_to_add);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label);

        cbProducts = new QComboBox(HChoose_lot_to_add);
        cbProducts->setObjectName(QString::fromUtf8("cbProducts"));
        cbProducts->setEditable(true);
        cbProducts->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbProducts);


        verticalLayout->addLayout(horizontalLayout);

        tvLots = new QTableView(HChoose_lot_to_add);
        tvLots->setObjectName(QString::fromUtf8("tvLots"));
        tvLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLots->setAlternatingRowColors(true);
        tvLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLots->horizontalHeader()->setStretchLastSection(true);
        tvLots->verticalHeader()->setVisible(false);
        tvLots->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tvLots);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(HChoose_lot_to_add);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_2);

        leAmount = new QLineEdit(HChoose_lot_to_add);
        leAmount->setObjectName(QString::fromUtf8("leAmount"));
        leAmount->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_3->addWidget(leAmount);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 116, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbAdd = new QPushButton(HChoose_lot_to_add);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));

        horizontalLayout_2->addWidget(pbAdd);

        pbClose = new QPushButton(HChoose_lot_to_add);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        horizontalLayout_2->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HChoose_lot_to_add);

        QMetaObject::connectSlotsByName(HChoose_lot_to_add);
    } // setupUi

    void retranslateUi(QWidget *HChoose_lot_to_add)
    {
        HChoose_lot_to_add->setWindowTitle(QCoreApplication::translate("HChoose_lot_to_add", "Form", nullptr));
        label->setText(QCoreApplication::translate("HChoose_lot_to_add", "Prodotti:", nullptr));
        label_2->setText(QCoreApplication::translate("HChoose_lot_to_add", "Quantit\303\240:", nullptr));
        pbAdd->setText(QCoreApplication::translate("HChoose_lot_to_add", "Aggiungi", nullptr));
        pbClose->setText(QCoreApplication::translate("HChoose_lot_to_add", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HChoose_lot_to_add: public Ui_HChoose_lot_to_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCHOOSE_LOT_TO_ADD_H
