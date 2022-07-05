/********************************************************************************
** Form generated from reading UI file 'hlotcomposition.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOTCOMPOSITION_H
#define UI_HLOTCOMPOSITION_H

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

class Ui_HLotComposition
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbLot;
    QTableView *tvComponents;
    QHBoxLayout *horizontalLayout;
    QLabel *lbOriginalAmount;
    QLabel *lbCurrent;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leUpdatedAmount;
    QPushButton *pbRecalculate;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HLotComposition)
    {
        if (HLotComposition->objectName().isEmpty())
            HLotComposition->setObjectName(QString::fromUtf8("HLotComposition"));
        HLotComposition->setWindowModality(Qt::ApplicationModal);
        HLotComposition->resize(735, 584);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Line-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HLotComposition->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HLotComposition);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbLot = new QLabel(HLotComposition);
        lbLot->setObjectName(QString::fromUtf8("lbLot"));
        lbLot->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(lbLot);

        tvComponents = new QTableView(HLotComposition);
        tvComponents->setObjectName(QString::fromUtf8("tvComponents"));

        verticalLayout->addWidget(tvComponents);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbOriginalAmount = new QLabel(HLotComposition);
        lbOriginalAmount->setObjectName(QString::fromUtf8("lbOriginalAmount"));
        lbOriginalAmount->setMinimumSize(QSize(120, 0));
        lbOriginalAmount->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(lbOriginalAmount);

        lbCurrent = new QLabel(HLotComposition);
        lbCurrent->setObjectName(QString::fromUtf8("lbCurrent"));
        lbCurrent->setMinimumSize(QSize(100, 0));
        lbCurrent->setMaximumSize(QSize(100, 16777215));
        lbCurrent->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout->addWidget(lbCurrent);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HLotComposition);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(120, 0));
        label_2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(label_2);

        leUpdatedAmount = new QLineEdit(HLotComposition);
        leUpdatedAmount->setObjectName(QString::fromUtf8("leUpdatedAmount"));
        leUpdatedAmount->setMinimumSize(QSize(100, 0));
        leUpdatedAmount->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(leUpdatedAmount);

        pbRecalculate = new QPushButton(HLotComposition);
        pbRecalculate->setObjectName(QString::fromUtf8("pbRecalculate"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Cash-register-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbRecalculate->setIcon(icon1);
        pbRecalculate->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbRecalculate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbSave = new QPushButton(HLotComposition);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon2);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbSave);

        pbClose = new QPushButton(HLotComposition);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HLotComposition);

        QMetaObject::connectSlotsByName(HLotComposition);
    } // setupUi

    void retranslateUi(QWidget *HLotComposition)
    {
        HLotComposition->setWindowTitle(QCoreApplication::translate("HLotComposition", "Modfica quantit\303\240 lotto produzione", nullptr));
        lbLot->setText(QCoreApplication::translate("HLotComposition", "TextLabel", nullptr));
        lbOriginalAmount->setText(QCoreApplication::translate("HLotComposition", "Quantit\303\240 attuale:", nullptr));
        lbCurrent->setText(QString());
        label_2->setText(QCoreApplication::translate("HLotComposition", "Quantit\303\240 aggiornata:", nullptr));
        pbRecalculate->setText(QCoreApplication::translate("HLotComposition", "Ricalcola", nullptr));
        pbSave->setText(QCoreApplication::translate("HLotComposition", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HLotComposition", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLotComposition: public Ui_HLotComposition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOTCOMPOSITION_H
