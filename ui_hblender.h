/********************************************************************************
** Form generated from reading UI file 'hblender.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HBLENDER_H
#define UI_HBLENDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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

class Ui_HBlender
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *lbTitle;
    QGridLayout *gridLayout;
    QLineEdit *leLot;
    QLabel *label;
    QLineEdit *leAmount;
    QLabel *label_2;
    QPushButton *pbAdd;
    QVBoxLayout *verticalLayout;
    QTableView *tvAdded;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbRemove;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbExport;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HBlender)
    {
        if (HBlender->objectName().isEmpty())
            HBlender->setObjectName(QString::fromUtf8("HBlender"));
        HBlender->resize(1222, 666);
        verticalLayout_2 = new QVBoxLayout(HBlender);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbTitle = new QLabel(HBlender);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        QFont font;
        font.setBold(true);
        lbTitle->setFont(font);
        lbTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        verticalLayout_2->addWidget(lbTitle);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leLot = new QLineEdit(HBlender);
        leLot->setObjectName(QString::fromUtf8("leLot"));

        gridLayout->addWidget(leLot, 0, 1, 1, 1);

        label = new QLabel(HBlender);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leAmount = new QLineEdit(HBlender);
        leAmount->setObjectName(QString::fromUtf8("leAmount"));

        gridLayout->addWidget(leAmount, 0, 3, 1, 1);

        label_2 = new QLabel(HBlender);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        pbAdd = new QPushButton(HBlender);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon);
        pbAdd->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pbAdd, 0, 4, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tvAdded = new QTableView(HBlender);
        tvAdded->setObjectName(QString::fromUtf8("tvAdded"));
        tvAdded->setSelectionMode(QAbstractItemView::SingleSelection);
        tvAdded->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvAdded->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tvAdded);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbRemove = new QPushButton(HBlender);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemove->setIcon(icon1);

        horizontalLayout_2->addWidget(pbRemove);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSave = new QPushButton(HBlender);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon2);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbExport = new QPushButton(HBlender);
        pbExport->setObjectName(QString::fromUtf8("pbExport"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbExport->setIcon(icon3);
        pbExport->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbExport);

        pbPrint = new QPushButton(HBlender);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon4);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HBlender);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon5);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HBlender);

        QMetaObject::connectSlotsByName(HBlender);
    } // setupUi

    void retranslateUi(QWidget *HBlender)
    {
        HBlender->setWindowTitle(QCoreApplication::translate("HBlender", "Frullatori", nullptr));
        lbTitle->setText(QString());
        label->setText(QCoreApplication::translate("HBlender", "Aggiungi:", nullptr));
        label_2->setText(QCoreApplication::translate("HBlender", "Quantit\303\240:", nullptr));
#if QT_CONFIG(tooltip)
        pbAdd->setToolTip(QCoreApplication::translate("HBlender", "INVIO Tastierino numerico", nullptr));
#endif // QT_CONFIG(tooltip)
        pbAdd->setText(QCoreApplication::translate("HBlender", "OK (Enter)", nullptr));
#if QT_CONFIG(shortcut)
        pbAdd->setShortcut(QCoreApplication::translate("HBlender", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        pbRemove->setText(QCoreApplication::translate("HBlender", "Rimuovi riga", nullptr));
        pbSave->setText(QCoreApplication::translate("HBlender", "Salva", nullptr));
        pbExport->setText(QCoreApplication::translate("HBlender", "Esporta", nullptr));
        pbPrint->setText(QCoreApplication::translate("HBlender", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HBlender", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HBlender: public Ui_HBlender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HBLENDER_H
