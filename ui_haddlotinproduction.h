/********************************************************************************
** Form generated from reading UI file 'haddlotinproduction.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HADDLOTINPRODUCTION_H
#define UI_HADDLOTINPRODUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HAddLotInProduction->setObjectName(QStringLiteral("HAddLotInProduction"));
        HAddLotInProduction->resize(272, 329);
        verticalLayout = new QVBoxLayout(HAddLotInProduction);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lbDesc = new QLabel(HAddLotInProduction);
        lbDesc->setObjectName(QStringLiteral("lbDesc"));
        lbDesc->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(lbDesc);

        cbLastLots = new QComboBox(HAddLotInProduction);
        cbLastLots->setObjectName(QStringLiteral("cbLastLots"));

        verticalLayout->addWidget(cbLastLots);

        lvLastLots = new QListView(HAddLotInProduction);
        lvLastLots->setObjectName(QStringLiteral("lvLastLots"));

        verticalLayout->addWidget(lvLastLots);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HAddLotInProduction);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dsbQt = new QDoubleSpinBox(HAddLotInProduction);
        dsbQt->setObjectName(QStringLiteral("dsbQt"));
        dsbQt->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly);
        dsbQt->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbQt->setProperty("showGroupSeparator", QVariant(true));
        dsbQt->setDecimals(3);
        dsbQt->setMaximum(1e+07);
        dsbQt->setValue(0);

        horizontalLayout->addWidget(dsbQt);

        horizontalSpacer = new QSpacerItem(45, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pbAdd = new QPushButton(HAddLotInProduction);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));

        horizontalLayout_2->addWidget(pbAdd);

        pdClose = new QPushButton(HAddLotInProduction);
        pdClose->setObjectName(QStringLiteral("pdClose"));

        horizontalLayout_2->addWidget(pdClose);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HAddLotInProduction);

        QMetaObject::connectSlotsByName(HAddLotInProduction);
    } // setupUi

    void retranslateUi(QWidget *HAddLotInProduction)
    {
        HAddLotInProduction->setWindowTitle(QApplication::translate("HAddLotInProduction", "Form", 0));
        lbDesc->setText(QApplication::translate("HAddLotInProduction", "TextLabel", 0));
        label->setText(QApplication::translate("HAddLotInProduction", "Quantit\303\240:", 0));
        dsbQt->setSpecialValueText(QString());
        pbAdd->setText(QApplication::translate("HAddLotInProduction", "Aggiungi", 0));
        pdClose->setText(QApplication::translate("HAddLotInProduction", "Annulla", 0));
    } // retranslateUi

};

namespace Ui {
    class HAddLotInProduction: public Ui_HAddLotInProduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HADDLOTINPRODUCTION_H
