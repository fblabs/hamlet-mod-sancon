/********************************************************************************
** Form generated from reading UI file 'haddlotinproduction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HADDLOTINPRODUCTION_H
#define UI_HADDLOTINPRODUCTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAddLotInProduction
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbDesc;
    QComboBox *cbLastLots;
    QListView *lvLastLots;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *dsbQt;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbAdd;
    QPushButton *pdClose;

    void setupUi(QWidget *HAddLotInProduction)
    {
        if (HAddLotInProduction->objectName().isEmpty())
            HAddLotInProduction->setObjectName(QString::fromUtf8("HAddLotInProduction"));
        HAddLotInProduction->resize(275, 329);
        verticalLayout = new QVBoxLayout(HAddLotInProduction);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbDesc = new QLabel(HAddLotInProduction);
        lbDesc->setObjectName(QString::fromUtf8("lbDesc"));
        lbDesc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(lbDesc);

        cbLastLots = new QComboBox(HAddLotInProduction);
        cbLastLots->setObjectName(QString::fromUtf8("cbLastLots"));

        verticalLayout->addWidget(cbLastLots);

        lvLastLots = new QListView(HAddLotInProduction);
        lvLastLots->setObjectName(QString::fromUtf8("lvLastLots"));
        QFont font;
        font.setPointSize(11);
        lvLastLots->setFont(font);
        lvLastLots->setFrameShape(QFrame::Box);
        lvLastLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvLastLots->setAlternatingRowColors(true);
        lvLastLots->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(lvLastLots);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HAddLotInProduction);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dsbQt = new QDoubleSpinBox(HAddLotInProduction);
        dsbQt->setObjectName(QString::fromUtf8("dsbQt"));
        dsbQt->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly);
        dsbQt->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbQt->setProperty("showGroupSeparator", QVariant(true));
        dsbQt->setDecimals(3);
        dsbQt->setMaximum(10000000.000000000000000);
        dsbQt->setValue(0.000000000000000);

        horizontalLayout->addWidget(dsbQt);

        horizontalSpacer = new QSpacerItem(45, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbAdd = new QPushButton(HAddLotInProduction);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon);

        horizontalLayout_2->addWidget(pbAdd);

        pdClose = new QPushButton(HAddLotInProduction);
        pdClose->setObjectName(QString::fromUtf8("pdClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdClose->setIcon(icon1);

        horizontalLayout_2->addWidget(pdClose);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HAddLotInProduction);

        QMetaObject::connectSlotsByName(HAddLotInProduction);
    } // setupUi

    void retranslateUi(QWidget *HAddLotInProduction)
    {
        HAddLotInProduction->setWindowTitle(QCoreApplication::translate("HAddLotInProduction", "Aggiungi componente", nullptr));
        lbDesc->setText(QCoreApplication::translate("HAddLotInProduction", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("HAddLotInProduction", "Quantit\303\240:", nullptr));
        dsbQt->setSpecialValueText(QString());
        pbAdd->setText(QCoreApplication::translate("HAddLotInProduction", "Aggiungi", nullptr));
        pdClose->setText(QCoreApplication::translate("HAddLotInProduction", "Annulla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HAddLotInProduction: public Ui_HAddLotInProduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HADDLOTINPRODUCTION_H
