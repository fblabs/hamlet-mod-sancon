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
    QComboBox *cbType;
    QCheckBox *ckbUseType;
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

        cbType = new QComboBox(HLotti_new);
        cbType->setObjectName(QString::fromUtf8("cbType"));
        cbType->setEditable(true);
        cbType->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbType);

        ckbUseType = new QCheckBox(HLotti_new);
        ckbUseType->setObjectName(QString::fromUtf8("ckbUseType"));

        horizontalLayout_2->addWidget(ckbUseType);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        tvLotti = new QTableView(HLotti_new);
        tvLotti->setObjectName(QString::fromUtf8("tvLotti"));
        tvLotti->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvLotti->setAlternatingRowColors(true);
        tvLotti->setSelectionMode(QAbstractItemView::SingleSelection);
        tvLotti->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvLotti->setSortingEnabled(true);
        tvLotti->horizontalHeader()->setMinimumSectionSize(300);
        tvLotti->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tvLotti->horizontalHeader()->setStretchLastSection(true);
        tvLotti->verticalHeader()->setVisible(false);
        tvLotti->verticalHeader()->setCascadingSectionResizes(true);
        tvLotti->verticalHeader()->setMinimumSectionSize(30);

        verticalLayout->addWidget(tvLotti);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbLotInfo = new QPushButton(HLotti_new);
        pbLotInfo->setObjectName(QString::fromUtf8("pbLotInfo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbLotInfo->setIcon(icon);
        pbLotInfo->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbLotInfo);

        pbPrint = new QPushButton(HLotti_new);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HLotti_new);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HLotti_new);

        QMetaObject::connectSlotsByName(HLotti_new);
    } // setupUi

    void retranslateUi(QWidget *HLotti_new)
    {
        HLotti_new->setWindowTitle(QCoreApplication::translate("HLotti_new", "Form", nullptr));
        label->setText(QCoreApplication::translate("HLotti_new", "Dal:", nullptr));
        label_2->setText(QCoreApplication::translate("HLotti_new", "Al:", nullptr));
        label_3->setText(QCoreApplication::translate("HLotti_new", "Tipo lotto:", nullptr));
        ckbUseType->setText(QString());
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
