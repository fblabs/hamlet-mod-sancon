/********************************************************************************
** Form generated from reading UI file 'hblenddetail.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HBLENDDETAIL_H
#define UI_HBLENDDETAIL_H

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

class Ui_HBlendDetail
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leLot;
    QPushButton *pbAdd;
    QPushButton *pbRemove;
    QTableView *tvData;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbConfirm;
    QPushButton *pbClose;

    void setupUi(QWidget *HBlendDetail)
    {
        if (HBlendDetail->objectName().isEmpty())
            HBlendDetail->setObjectName(QString::fromUtf8("HBlendDetail"));
        HBlendDetail->setWindowModality(Qt::WindowModal);
        HBlendDetail->resize(913, 792);
        verticalLayout = new QVBoxLayout(HBlendDetail);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HBlendDetail);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leLot = new QLineEdit(HBlendDetail);
        leLot->setObjectName(QString::fromUtf8("leLot"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leLot);


        horizontalLayout->addLayout(formLayout);

        pbAdd = new QPushButton(HBlendDetail);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon);
        pbAdd->setAutoExclusive(false);
        pbAdd->setAutoDefault(false);

        horizontalLayout->addWidget(pbAdd);

        pbRemove = new QPushButton(HBlendDetail);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemove->setIcon(icon1);

        horizontalLayout->addWidget(pbRemove);


        verticalLayout->addLayout(horizontalLayout);

        tvData = new QTableView(HBlendDetail);
        tvData->setObjectName(QString::fromUtf8("tvData"));
        tvData->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvData->setSelectionMode(QAbstractItemView::SingleSelection);
        tvData->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvData->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tvData);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbConfirm = new QPushButton(HBlendDetail);
        pbConfirm->setObjectName(QString::fromUtf8("pbConfirm"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbConfirm->setIcon(icon2);

        horizontalLayout_3->addWidget(pbConfirm);

        pbClose = new QPushButton(HBlendDetail);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);

        horizontalLayout_3->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HBlendDetail);

        pbAdd->setDefault(true);


        QMetaObject::connectSlotsByName(HBlendDetail);
    } // setupUi

    void retranslateUi(QWidget *HBlendDetail)
    {
        HBlendDetail->setWindowTitle(QCoreApplication::translate("HBlendDetail", "Dettaglio frullata", nullptr));
        label->setText(QCoreApplication::translate("HBlendDetail", "Lotto", nullptr));
        pbAdd->setText(QCoreApplication::translate("HBlendDetail", "Aggiungi", nullptr));
        pbRemove->setText(QCoreApplication::translate("HBlendDetail", "Rimuovi riga", nullptr));
        pbConfirm->setText(QCoreApplication::translate("HBlendDetail", "Conferma (Invio)", nullptr));
#if QT_CONFIG(shortcut)
        pbConfirm->setShortcut(QCoreApplication::translate("HBlendDetail", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pbClose->setText(QCoreApplication::translate("HBlendDetail", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HBlendDetail: public Ui_HBlendDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HBLENDDETAIL_H