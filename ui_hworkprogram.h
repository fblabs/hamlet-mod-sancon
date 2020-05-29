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
#include <QtWidgets/QFrame>
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
    QLabel *label_4;
    QDateEdit *deDal;
    QLabel *label_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QDateEdit *deAl;
    QSpinBox *spLinea;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *lbSheet;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tvStorico;
    QTableView *tvGeneral;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *cbshowrows;
    QFrame *line;
    QLabel *label_6;
    QSpinBox *spSearchLinea;
    QLabel *label_7;
    QDateEdit *deSearch;
    QLabel *label_8;
    QDateEdit *deSearchTo;
    QPushButton *pbSearch;
    QPushButton *pbReset;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pbAdd;
    QPushButton *pbModify;
    QPushButton *pbRemove;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbNewSheet;
    QPushButton *pbSave;
    QPushButton *pbDeleteSheet;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HWorkProgram)
    {
        if (HWorkProgram->objectName().isEmpty())
            HWorkProgram->setObjectName(QStringLiteral("HWorkProgram"));
        HWorkProgram->setWindowModality(Qt::ApplicationModal);
        HWorkProgram->resize(1143, 638);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/3D_Icons_Icon_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        HWorkProgram->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HWorkProgram);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(HWorkProgram);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        deDal = new QDateEdit(HWorkProgram);
        deDal->setObjectName(QStringLiteral("deDal"));
        deDal->setCalendarPopup(true);

        gridLayout->addWidget(deDal, 1, 4, 1, 1);

        label_5 = new QLabel(HWorkProgram);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 5, 1, 1);

        label_3 = new QLabel(HWorkProgram);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 7, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 10, 1, 1);

        deAl = new QDateEdit(HWorkProgram);
        deAl->setObjectName(QStringLiteral("deAl"));
        deAl->setCalendarPopup(true);

        gridLayout->addWidget(deAl, 1, 6, 1, 1);

        spLinea = new QSpinBox(HWorkProgram);
        spLinea->setObjectName(QStringLiteral("spLinea"));
        spLinea->setMinimum(1);
        spLinea->setMaximum(2);

        gridLayout->addWidget(spLinea, 1, 8, 1, 1);

        label = new QLabel(HWorkProgram);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);


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
        tvStorico->setAlternatingRowColors(true);
        tvStorico->setSelectionMode(QAbstractItemView::SingleSelection);
        tvStorico->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvStorico->setSortingEnabled(true);
        tvStorico->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tvStorico->verticalHeader()->setVisible(false);
        tvStorico->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout_3->addWidget(tvStorico);

        tvGeneral = new QTableView(HWorkProgram);
        tvGeneral->setObjectName(QStringLiteral("tvGeneral"));
        tvGeneral->setEditTriggers(QAbstractItemView::DoubleClicked);
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
        checkBox = new QCheckBox(HWorkProgram);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);
        checkBox->setAutoExclusive(true);

        horizontalLayout_2->addWidget(checkBox);

        cbshowrows = new QCheckBox(HWorkProgram);
        cbshowrows->setObjectName(QStringLiteral("cbshowrows"));
        cbshowrows->setMinimumSize(QSize(125, 0));
        cbshowrows->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(cbshowrows);

        line = new QFrame(HWorkProgram);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        label_6 = new QLabel(HWorkProgram);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        spSearchLinea = new QSpinBox(HWorkProgram);
        spSearchLinea->setObjectName(QStringLiteral("spSearchLinea"));
        spSearchLinea->setMinimum(0);
        spSearchLinea->setMaximum(5);
        spSearchLinea->setValue(0);

        horizontalLayout_2->addWidget(spSearchLinea);

        label_7 = new QLabel(HWorkProgram);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        deSearch = new QDateEdit(HWorkProgram);
        deSearch->setObjectName(QStringLiteral("deSearch"));
        deSearch->setCalendarPopup(true);

        horizontalLayout_2->addWidget(deSearch);

        label_8 = new QLabel(HWorkProgram);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        deSearchTo = new QDateEdit(HWorkProgram);
        deSearchTo->setObjectName(QStringLiteral("deSearchTo"));
        deSearchTo->setCalendarPopup(true);

        horizontalLayout_2->addWidget(deSearchTo);

        pbSearch = new QPushButton(HWorkProgram);
        pbSearch->setObjectName(QStringLiteral("pbSearch"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSearch->setIcon(icon1);

        horizontalLayout_2->addWidget(pbSearch);

        pbReset = new QPushButton(HWorkProgram);
        pbReset->setObjectName(QStringLiteral("pbReset"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbReset->setIcon(icon2);

        horizontalLayout_2->addWidget(pbReset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pbAdd = new QPushButton(HWorkProgram);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon3);

        horizontalLayout_2->addWidget(pbAdd);

        pbModify = new QPushButton(HWorkProgram);
        pbModify->setObjectName(QStringLiteral("pbModify"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbModify->setIcon(icon4);

        horizontalLayout_2->addWidget(pbModify);

        pbRemove = new QPushButton(HWorkProgram);
        pbRemove->setObjectName(QStringLiteral("pbRemove"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemove->setIcon(icon5);

        horizontalLayout_2->addWidget(pbRemove);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbNewSheet = new QPushButton(HWorkProgram);
        pbNewSheet->setObjectName(QStringLiteral("pbNewSheet"));
        pbNewSheet->setIcon(icon3);
        pbNewSheet->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbNewSheet);

        pbSave = new QPushButton(HWorkProgram);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon6);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbDeleteSheet = new QPushButton(HWorkProgram);
        pbDeleteSheet->setObjectName(QStringLiteral("pbDeleteSheet"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDeleteSheet->setIcon(icon7);
        pbDeleteSheet->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbDeleteSheet);

        pbPrint = new QPushButton(HWorkProgram);
        pbPrint->setObjectName(QStringLiteral("pbPrint"));
        pbPrint->setEnabled(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon8);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HWorkProgram);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon9);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HWorkProgram);

        QMetaObject::connectSlotsByName(HWorkProgram);
    } // setupUi

    void retranslateUi(QWidget *HWorkProgram)
    {
        HWorkProgram->setWindowTitle(QApplication::translate("HWorkProgram", "Programmazione Lavorazione", 0));
        label_4->setText(QApplication::translate("HWorkProgram", "del", 0));
        label_5->setText(QApplication::translate("HWorkProgram", "Al:", 0));
        label_3->setText(QApplication::translate("HWorkProgram", "Linea", 0));
        label->setText(QApplication::translate("HWorkProgram", "PROGRAMMA DI LAVORO", 0));
        label_2->setText(QApplication::translate("HWorkProgram", "Storico:", 0));
        lbSheet->setText(QApplication::translate("HWorkProgram", "Foglio produzione", 0));
        checkBox->setText(QApplication::translate("HWorkProgram", "Nascondi Storico", 0));
        cbshowrows->setText(QApplication::translate("HWorkProgram", "Mostra i numeri di riga", 0));
        label_6->setText(QApplication::translate("HWorkProgram", "Filtra per linea:", 0));
        label_7->setText(QApplication::translate("HWorkProgram", "Ricerca per data tra il:", 0));
        label_8->setText(QApplication::translate("HWorkProgram", "e il:", 0));
        pbSearch->setText(QApplication::translate("HWorkProgram", "Cerca", 0));
        pbReset->setText(QApplication::translate("HWorkProgram", "Reset", 0));
        pbAdd->setText(QApplication::translate("HWorkProgram", "Aggiungi riga", 0));
        pbModify->setText(QApplication::translate("HWorkProgram", "Modifica riga", 0));
        pbRemove->setText(QApplication::translate("HWorkProgram", "Rimuovi riga", 0));
        pbNewSheet->setText(QApplication::translate("HWorkProgram", "Nuovo", 0));
        pbSave->setText(QApplication::translate("HWorkProgram", "Salva", 0));
        pbDeleteSheet->setText(QApplication::translate("HWorkProgram", "Elimina foglio selezionato", 0));
        pbPrint->setText(QApplication::translate("HWorkProgram", "Stampa", 0));
        pbClose->setText(QApplication::translate("HWorkProgram", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HWorkProgram: public Ui_HWorkProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWORKPROGRAM_H
