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
    QHBoxLayout *horizontalLayout_3;
    QListView *lvLastLots;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *dsbQt;
    QPushButton *pbDefaultLot;
    QPushButton *pbCancel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbAdd;
    QPushButton *pdClose;

    void setupUi(QWidget *HAddLotInProduction)
    {
        if (HAddLotInProduction->objectName().isEmpty())
            HAddLotInProduction->setObjectName(QString::fromUtf8("HAddLotInProduction"));
        HAddLotInProduction->setWindowModality(Qt::WindowModal);
        HAddLotInProduction->resize(393, 361);
        verticalLayout = new QVBoxLayout(HAddLotInProduction);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbDesc = new QLabel(HAddLotInProduction);
        lbDesc->setObjectName(QString::fromUtf8("lbDesc"));
        lbDesc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(lbDesc);

        cbLastLots = new QComboBox(HAddLotInProduction);
        cbLastLots->setObjectName(QString::fromUtf8("cbLastLots"));

        verticalLayout->addWidget(cbLastLots);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

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

        pbDefaultLot = new QPushButton(HAddLotInProduction);
        pbDefaultLot->setObjectName(QString::fromUtf8("pbDefaultLot"));
        pbDefaultLot->setMinimumSize(QSize(110, 0));
        pbDefaultLot->setMaximumSize(QSize(110, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Flag-green64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDefaultLot->setIcon(icon);

        horizontalLayout->addWidget(pbDefaultLot);

        pbCancel = new QPushButton(HAddLotInProduction);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        pbCancel->setMinimumSize(QSize(110, 0));
        pbCancel->setMaximumSize(QSize(110, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Flag-red64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancel->setIcon(icon1);

        horizontalLayout->addWidget(pbCancel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbAdd = new QPushButton(HAddLotInProduction);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon2);

        horizontalLayout_2->addWidget(pbAdd);

        pdClose = new QPushButton(HAddLotInProduction);
        pdClose->setObjectName(QString::fromUtf8("pdClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pdClose->setIcon(icon3);

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
        pbDefaultLot->setText(QCoreApplication::translate("HAddLotInProduction", "Lot predefinito", nullptr));
        pbCancel->setText(QCoreApplication::translate("HAddLotInProduction", "Annulla", nullptr));
        pbAdd->setText(QCoreApplication::translate("HAddLotInProduction", "Aggiungi", nullptr));
        pdClose->setText(QCoreApplication::translate("HAddLotInProduction", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HAddLotInProduction: public Ui_HAddLotInProduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HADDLOTINPRODUCTION_H
