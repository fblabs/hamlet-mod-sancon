/********************************************************************************
** Form generated from reading UI file 'hlotti_new.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOTTI_NEW_H
#define UI_HLOTTI_NEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_HLotti_new
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateEdit *deFrom;
    QLabel *label_2;
    QDateEdit *deTo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QCheckBox *ckbUseType;
    QComboBox *cbType;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCheckBox *ckbUseProduct;
    QComboBox *cbProduct;
    QSpacerItem *horizontalSpacer;
    QTableView *tvLotti;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbLotInfo;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HLotti_new)
    {
        if (HLotti_new->objectName().isEmpty())
            HLotti_new->setObjectName(QString::fromUtf8("HLotti_new"));
        HLotti_new->setWindowModality(Qt::ApplicationModal);
        HLotti_new->resize(1188, 538);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Cube.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HLotti_new->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HLotti_new);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(HLotti_new);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        deFrom = new QDateEdit(HLotti_new);
        deFrom->setObjectName(QString::fromUtf8("deFrom"));
        deFrom->setCalendarPopup(true);

        horizontalLayout_3->addWidget(deFrom);

        label_2 = new QLabel(HLotti_new);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        deTo = new QDateEdit(HLotti_new);
        deTo->setObjectName(QString::fromUtf8("deTo"));
        deTo->setCalendarPopup(true);

        horizontalLayout_3->addWidget(deTo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(HLotti_new);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        ckbUseType = new QCheckBox(HLotti_new);
        ckbUseType->setObjectName(QString::fromUtf8("ckbUseType"));

        horizontalLayout_2->addWidget(ckbUseType);

        cbType = new QComboBox(HLotti_new);
        cbType->setObjectName(QString::fromUtf8("cbType"));
        cbType->setEditable(true);
        cbType->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbType);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(HLotti_new);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        ckbUseProduct = new QCheckBox(HLotti_new);
        ckbUseProduct->setObjectName(QString::fromUtf8("ckbUseProduct"));

        horizontalLayout_4->addWidget(ckbUseProduct);

        cbProduct = new QComboBox(HLotti_new);
        cbProduct->setObjectName(QString::fromUtf8("cbProduct"));
        cbProduct->setEditable(true);
        cbProduct->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_4->addWidget(cbProduct);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_3);

        tvLotti = new QTableView(HLotti_new);
        tvLotti->setObjectName(QString::fromUtf8("tvLotti"));
        tvLotti->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tvLotti->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLotti->setAlternatingRowColors(true);
        tvLotti->setSelectionMode(QAbstractItemView::SingleSelection);
        tvLotti->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLotti->setSortingEnabled(true);
        tvLotti->horizontalHeader()->setCascadingSectionResizes(true);
        tvLotti->horizontalHeader()->setMinimumSectionSize(150);
        tvLotti->horizontalHeader()->setDefaultSectionSize(30);
        tvLotti->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tvLotti->horizontalHeader()->setStretchLastSection(true);
        tvLotti->verticalHeader()->setVisible(false);
        tvLotti->verticalHeader()->setCascadingSectionResizes(true);
        tvLotti->verticalHeader()->setMinimumSectionSize(30);
        tvLotti->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tvLotti->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tvLotti);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbLotInfo = new QPushButton(HLotti_new);
        pbLotInfo->setObjectName(QString::fromUtf8("pbLotInfo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbLotInfo->setIcon(icon1);
        pbLotInfo->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbLotInfo);

        pbPrint = new QPushButton(HLotti_new);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon2);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HLotti_new);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HLotti_new);

        QMetaObject::connectSlotsByName(HLotti_new);
    } // setupUi

    void retranslateUi(QWidget *HLotti_new)
    {
        HLotti_new->setWindowTitle(QCoreApplication::translate("HLotti_new", "Lotti", nullptr));
        label->setText(QCoreApplication::translate("HLotti_new", "Dal:", nullptr));
        label_2->setText(QCoreApplication::translate("HLotti_new", "Al:", nullptr));
        label_3->setText(QCoreApplication::translate("HLotti_new", "Tipo lotto:", nullptr));
        ckbUseType->setText(QString());
        label_4->setText(QCoreApplication::translate("HLotti_new", "Prodotto:", nullptr));
        ckbUseProduct->setText(QString());
        pbLotInfo->setText(QCoreApplication::translate("HLotti_new", "Informazioni", nullptr));
        pbPrint->setText(QCoreApplication::translate("HLotti_new", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HLotti_new", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLotti_new: public Ui_HLotti_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOTTI_NEW_H
