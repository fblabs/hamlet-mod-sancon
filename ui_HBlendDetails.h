/********************************************************************************
** Form generated from reading UI file 'HBlendDetails.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HBLENDDETAILS_H
#define UI_HBLENDDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
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

class Ui_HBlendDetails
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leLotto;
    QPushButton *pbAdd;
    QTableView *tvData;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbRemove;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbConfirm;
    QPushButton *pbabort;
    QPushButton *pbClose;

    void setupUi(QWidget *HBlendDetails)
    {
        if (HBlendDetails->objectName().isEmpty())
            HBlendDetails->setObjectName(QString::fromUtf8("HBlendDetails"));
        HBlendDetails->resize(877, 574);
        verticalLayout = new QVBoxLayout(HBlendDetails);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HBlendDetails);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leLotto = new QLineEdit(HBlendDetails);
        leLotto->setObjectName(QString::fromUtf8("leLotto"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leLotto);


        horizontalLayout->addLayout(formLayout);

        pbAdd = new QPushButton(HBlendDetails);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));

        horizontalLayout->addWidget(pbAdd);


        verticalLayout->addLayout(horizontalLayout);

        tvData = new QTableView(HBlendDetails);
        tvData->setObjectName(QString::fromUtf8("tvData"));
        tvData->setSelectionMode(QAbstractItemView::SingleSelection);
        tvData->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvData->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tvData);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbRemove = new QPushButton(HBlendDetails);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));

        horizontalLayout_2->addWidget(pbRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbConfirm = new QPushButton(HBlendDetails);
        pbConfirm->setObjectName(QString::fromUtf8("pbConfirm"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbConfirm->setIcon(icon);

        horizontalLayout_3->addWidget(pbConfirm);

        pbabort = new QPushButton(HBlendDetails);
        pbabort->setObjectName(QString::fromUtf8("pbabort"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbabort->setIcon(icon1);

        horizontalLayout_3->addWidget(pbabort);

        pbClose = new QPushButton(HBlendDetails);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);

        horizontalLayout_3->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HBlendDetails);

        QMetaObject::connectSlotsByName(HBlendDetails);
    } // setupUi

    void retranslateUi(QWidget *HBlendDetails)
    {
        HBlendDetails->setWindowTitle(QCoreApplication::translate("HBlendDetails", "Form", nullptr));
        label->setText(QCoreApplication::translate("HBlendDetails", "Lotto", nullptr));
        pbAdd->setText(QCoreApplication::translate("HBlendDetails", "Aggiungi", nullptr));
        pbRemove->setText(QCoreApplication::translate("HBlendDetails", "Rimuovi riga", nullptr));
        pbConfirm->setText(QCoreApplication::translate("HBlendDetails", "Conferma", nullptr));
        pbabort->setText(QCoreApplication::translate("HBlendDetails", "Annulla", nullptr));
        pbClose->setText(QCoreApplication::translate("HBlendDetails", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HBlendDetails: public Ui_HBlendDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HBLENDDETAILS_H
