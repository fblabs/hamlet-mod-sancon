/********************************************************************************
** Form generated from reading UI file 'hworkprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWORKPROGRAM_H
#define UI_HWORKPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HWorkProgram
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pbNewSheet;
    QDateEdit *deAl;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QDateEdit *deDal;
    QSpinBox *spLinea;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *lbSheet;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tvStorico;
    QTableView *tvGeneral;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbshowrows;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbAdd;
    QPushButton *pbModify;
    QPushButton *pbRemove;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HWorkProgram)
    {
        if (HWorkProgram->objectName().isEmpty())
            HWorkProgram->setObjectName(QStringLiteral("HWorkProgram"));
        HWorkProgram->setWindowModality(Qt::ApplicationModal);
        HWorkProgram->resize(1062, 638);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/3D_Icons_Icon_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        HWorkProgram->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HWorkProgram);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbNewSheet = new QPushButton(HWorkProgram);
        pbNewSheet->setObjectName(QStringLiteral("pbNewSheet"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbNewSheet->setIcon(icon1);
        pbNewSheet->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbNewSheet, 0, 8, 1, 1);

        deAl = new QDateEdit(HWorkProgram);
        deAl->setObjectName(QStringLiteral("deAl"));

        gridLayout->addWidget(deAl, 0, 5, 1, 1);

        label_4 = new QLabel(HWorkProgram);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(HWorkProgram);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 9, 1, 1);

        label = new QLabel(HWorkProgram);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        deDal = new QDateEdit(HWorkProgram);
        deDal->setObjectName(QStringLiteral("deDal"));

        gridLayout->addWidget(deDal, 0, 3, 1, 1);

        spLinea = new QSpinBox(HWorkProgram);
        spLinea->setObjectName(QStringLiteral("spLinea"));
        spLinea->setMinimum(1);
        spLinea->setMaximum(2);

        gridLayout->addWidget(spLinea, 0, 7, 1, 1);

        label_3 = new QLabel(HWorkProgram);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 6, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(HWorkProgram);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_4->addWidget(label_2);

        lbSheet = new QLabel(HWorkProgram);
        lbSheet->setObjectName(QStringLiteral("lbSheet"));

        horizontalLayout_4->addWidget(lbSheet);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tvStorico = new QTableView(HWorkProgram);
        tvStorico->setObjectName(QStringLiteral("tvStorico"));
        tvStorico->setMaximumSize(QSize(300, 16777215));
        tvStorico->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvStorico->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_3->addWidget(tvStorico);

        tvGeneral = new QTableView(HWorkProgram);
        tvGeneral->setObjectName(QStringLiteral("tvGeneral"));
        tvGeneral->setDragEnabled(true);
        tvGeneral->setDragDropMode(QAbstractItemView::InternalMove);
        tvGeneral->setDefaultDropAction(Qt::MoveAction);
        tvGeneral->setAlternatingRowColors(true);
        tvGeneral->setSelectionMode(QAbstractItemView::SingleSelection);
        tvGeneral->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvGeneral->setSortingEnabled(true);
        tvGeneral->horizontalHeader()->setStretchLastSection(true);
        tvGeneral->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout_3->addWidget(tvGeneral);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cbshowrows = new QCheckBox(HWorkProgram);
        cbshowrows->setObjectName(QStringLiteral("cbshowrows"));

        horizontalLayout_2->addWidget(cbshowrows);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbAdd = new QPushButton(HWorkProgram);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));
        pbAdd->setIcon(icon1);

        horizontalLayout_2->addWidget(pbAdd);

        pbModify = new QPushButton(HWorkProgram);
        pbModify->setObjectName(QStringLiteral("pbModify"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbModify->setIcon(icon2);

        horizontalLayout_2->addWidget(pbModify);

        pbRemove = new QPushButton(HWorkProgram);
        pbRemove->setObjectName(QStringLiteral("pbRemove"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemove->setIcon(icon3);

        horizontalLayout_2->addWidget(pbRemove);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbSave = new QPushButton(HWorkProgram);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon4);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbPrint = new QPushButton(HWorkProgram);
        pbPrint->setObjectName(QStringLiteral("pbPrint"));
        pbPrint->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon5);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HWorkProgram);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon6);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HWorkProgram);

        QMetaObject::connectSlotsByName(HWorkProgram);
    } // setupUi

    void retranslateUi(QWidget *HWorkProgram)
    {
        HWorkProgram->setWindowTitle(QApplication::translate("HWorkProgram", "Programmazione Lavorazione", 0));
        pbNewSheet->setText(QApplication::translate("HWorkProgram", "Nuovo", 0));
        label_4->setText(QApplication::translate("HWorkProgram", "Dal", 0));
        label_5->setText(QApplication::translate("HWorkProgram", "Al:", 0));
        label->setText(QApplication::translate("HWorkProgram", "PROGRAMMA DI LAVORO", 0));
        label_3->setText(QApplication::translate("HWorkProgram", "Linea", 0));
        label_2->setText(QApplication::translate("HWorkProgram", "Storico:", 0));
        lbSheet->setText(QApplication::translate("HWorkProgram", "Foglio produzione", 0));
        cbshowrows->setText(QApplication::translate("HWorkProgram", "Mostra i numeri di riga", 0));
        pbAdd->setText(QApplication::translate("HWorkProgram", "Aggiungi", 0));
        pbModify->setText(QApplication::translate("HWorkProgram", "Modifica riga", 0));
        pbRemove->setText(QApplication::translate("HWorkProgram", "Rimuovi", 0));
        pbSave->setText(QApplication::translate("HWorkProgram", "Salva", 0));
        pbPrint->setText(QApplication::translate("HWorkProgram", "Stampa", 0));
        pbClose->setText(QApplication::translate("HWorkProgram", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HWorkProgram: public Ui_HWorkProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWORKPROGRAM_H
