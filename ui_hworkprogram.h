/********************************************************************************
** Form generated from reading UI file 'hworkprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWORKPROGRAM_H
#define UI_HWORKPROGRAM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QDateEdit *deAl;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pbApprova;
    QDateEdit *deDal;
    QSpinBox *spLinea;
    QPushButton *pbDisapprova;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QLabel *lblCheck;
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
    QPushButton *pbAdd;
    QPushButton *pbModify;
    QPushButton *pbRemove;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbNewSheet;
    QPushButton *pbSave;
    QPushButton *pbDeleteSheet;
    QCheckBox *cbPdf;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HWorkProgram)
    {
        if (HWorkProgram->objectName().isEmpty())
            HWorkProgram->setObjectName(QString::fromUtf8("HWorkProgram"));
        HWorkProgram->setWindowModality(Qt::NonModal);
        HWorkProgram->resize(1211, 638);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/3D_Icons_Icon_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        HWorkProgram->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HWorkProgram);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        deAl = new QDateEdit(HWorkProgram);
        deAl->setObjectName(QString::fromUtf8("deAl"));
        deAl->setCalendarPopup(true);

        gridLayout->addWidget(deAl, 3, 6, 1, 1);

        label = new QLabel(HWorkProgram);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 3, 1, 1, 1);

        label_4 = new QLabel(HWorkProgram);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        label_3 = new QLabel(HWorkProgram);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 7, 1, 1);

        pbApprova = new QPushButton(HWorkProgram);
        pbApprova->setObjectName(QString::fromUtf8("pbApprova"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbApprova->setIcon(icon1);

        gridLayout->addWidget(pbApprova, 3, 12, 1, 1);

        deDal = new QDateEdit(HWorkProgram);
        deDal->setObjectName(QString::fromUtf8("deDal"));
        deDal->setCalendarPopup(true);

        gridLayout->addWidget(deDal, 3, 4, 1, 1);

        spLinea = new QSpinBox(HWorkProgram);
        spLinea->setObjectName(QString::fromUtf8("spLinea"));
        spLinea->setMinimum(1);
        spLinea->setMaximum(2);

        gridLayout->addWidget(spLinea, 3, 8, 1, 1);

        pbDisapprova = new QPushButton(HWorkProgram);
        pbDisapprova->setObjectName(QString::fromUtf8("pbDisapprova"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDisapprova->setIcon(icon2);

        gridLayout->addWidget(pbDisapprova, 3, 13, 1, 1);

        label_5 = new QLabel(HWorkProgram);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 10, 1, 1);

        label_9 = new QLabel(HWorkProgram);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 11, 1, 1);

        lblCheck = new QLabel(HWorkProgram);
        lblCheck->setObjectName(QString::fromUtf8("lblCheck"));
        lblCheck->setMaximumSize(QSize(48, 48));
        lblCheck->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Accept64.png")));
        lblCheck->setScaledContents(true);

        gridLayout->addWidget(lblCheck, 3, 9, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(HWorkProgram);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_4->addWidget(label_2);

        lbSheet = new QLabel(HWorkProgram);
        lbSheet->setObjectName(QString::fromUtf8("lbSheet"));

        horizontalLayout_4->addWidget(lbSheet);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tvStorico = new QTableView(HWorkProgram);
        tvStorico->setObjectName(QString::fromUtf8("tvStorico"));
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
        tvGeneral->setObjectName(QString::fromUtf8("tvGeneral"));
        tvGeneral->setEditTriggers(QAbstractItemView::DoubleClicked);
        tvGeneral->setDragEnabled(true);
        tvGeneral->setDragDropMode(QAbstractItemView::InternalMove);
        tvGeneral->setDefaultDropAction(Qt::MoveAction);
        tvGeneral->setAlternatingRowColors(true);
        tvGeneral->setSelectionMode(QAbstractItemView::SingleSelection);
        tvGeneral->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvGeneral->setSortingEnabled(false);
        tvGeneral->horizontalHeader()->setStretchLastSection(true);
        tvGeneral->verticalHeader()->setDefaultSectionSize(40);
        tvGeneral->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout_3->addWidget(tvGeneral);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(HWorkProgram);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(false);
        checkBox->setAutoExclusive(true);

        horizontalLayout_2->addWidget(checkBox);

        cbshowrows = new QCheckBox(HWorkProgram);
        cbshowrows->setObjectName(QString::fromUtf8("cbshowrows"));
        cbshowrows->setMinimumSize(QSize(125, 0));
        cbshowrows->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(cbshowrows);

        line = new QFrame(HWorkProgram);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        label_6 = new QLabel(HWorkProgram);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        spSearchLinea = new QSpinBox(HWorkProgram);
        spSearchLinea->setObjectName(QString::fromUtf8("spSearchLinea"));
        spSearchLinea->setMinimum(0);
        spSearchLinea->setMaximum(5);
        spSearchLinea->setValue(0);

        horizontalLayout_2->addWidget(spSearchLinea);

        label_7 = new QLabel(HWorkProgram);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        deSearch = new QDateEdit(HWorkProgram);
        deSearch->setObjectName(QString::fromUtf8("deSearch"));
        deSearch->setCalendarPopup(true);

        horizontalLayout_2->addWidget(deSearch);

        label_8 = new QLabel(HWorkProgram);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        deSearchTo = new QDateEdit(HWorkProgram);
        deSearchTo->setObjectName(QString::fromUtf8("deSearchTo"));
        deSearchTo->setCalendarPopup(true);

        horizontalLayout_2->addWidget(deSearchTo);

        pbSearch = new QPushButton(HWorkProgram);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSearch->setIcon(icon3);

        horizontalLayout_2->addWidget(pbSearch);

        pbReset = new QPushButton(HWorkProgram);
        pbReset->setObjectName(QString::fromUtf8("pbReset"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbReset->setIcon(icon4);

        horizontalLayout_2->addWidget(pbReset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbAdd = new QPushButton(HWorkProgram);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon5);

        horizontalLayout_2->addWidget(pbAdd);

        pbModify = new QPushButton(HWorkProgram);
        pbModify->setObjectName(QString::fromUtf8("pbModify"));
        pbModify->setIcon(icon2);

        horizontalLayout_2->addWidget(pbModify);

        pbRemove = new QPushButton(HWorkProgram);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemove->setIcon(icon6);

        horizontalLayout_2->addWidget(pbRemove);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbNewSheet = new QPushButton(HWorkProgram);
        pbNewSheet->setObjectName(QString::fromUtf8("pbNewSheet"));
        pbNewSheet->setIcon(icon5);
        pbNewSheet->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbNewSheet);

        pbSave = new QPushButton(HWorkProgram);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon7);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbDeleteSheet = new QPushButton(HWorkProgram);
        pbDeleteSheet->setObjectName(QString::fromUtf8("pbDeleteSheet"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDeleteSheet->setIcon(icon8);
        pbDeleteSheet->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbDeleteSheet);

        cbPdf = new QCheckBox(HWorkProgram);
        cbPdf->setObjectName(QString::fromUtf8("cbPdf"));
        cbPdf->setMinimumSize(QSize(100, 0));
        cbPdf->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(cbPdf);

        pbPrint = new QPushButton(HWorkProgram);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        pbPrint->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon9);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HWorkProgram);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon10);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HWorkProgram);

        QMetaObject::connectSlotsByName(HWorkProgram);
    } // setupUi

    void retranslateUi(QWidget *HWorkProgram)
    {
        HWorkProgram->setWindowTitle(QCoreApplication::translate("HWorkProgram", "Programmazione Lavorazione", nullptr));
        label->setText(QCoreApplication::translate("HWorkProgram", "PROGRAMMA DI LAVORO", nullptr));
        label_4->setText(QCoreApplication::translate("HWorkProgram", "del", nullptr));
        label_3->setText(QCoreApplication::translate("HWorkProgram", "Linea", nullptr));
        pbApprova->setText(QCoreApplication::translate("HWorkProgram", "Approva", nullptr));
        pbDisapprova->setText(QCoreApplication::translate("HWorkProgram", "Modifica", nullptr));
        label_5->setText(QCoreApplication::translate("HWorkProgram", "Al:", nullptr));
        label_9->setText(QCoreApplication::translate("HWorkProgram", "Stato: ", nullptr));
        lblCheck->setText(QString());
        label_2->setText(QCoreApplication::translate("HWorkProgram", "Storico:", nullptr));
        lbSheet->setText(QCoreApplication::translate("HWorkProgram", "Foglio produzione", nullptr));
        checkBox->setText(QCoreApplication::translate("HWorkProgram", "Nascondi Storico", nullptr));
        cbshowrows->setText(QCoreApplication::translate("HWorkProgram", "Mostra i numeri di riga", nullptr));
        label_6->setText(QCoreApplication::translate("HWorkProgram", "Filtra per linea:", nullptr));
        label_7->setText(QCoreApplication::translate("HWorkProgram", "Ricerca per data tra il:", nullptr));
        label_8->setText(QCoreApplication::translate("HWorkProgram", "e il:", nullptr));
        pbSearch->setText(QCoreApplication::translate("HWorkProgram", "Cerca", nullptr));
        pbReset->setText(QCoreApplication::translate("HWorkProgram", "Reset", nullptr));
        pbAdd->setText(QCoreApplication::translate("HWorkProgram", "Aggiungi riga", nullptr));
        pbModify->setText(QCoreApplication::translate("HWorkProgram", "Modifica riga", nullptr));
        pbRemove->setText(QCoreApplication::translate("HWorkProgram", "Rimuovi riga", nullptr));
        pbNewSheet->setText(QCoreApplication::translate("HWorkProgram", "Nuovo", nullptr));
        pbSave->setText(QCoreApplication::translate("HWorkProgram", "Salva", nullptr));
        pbDeleteSheet->setText(QCoreApplication::translate("HWorkProgram", "Elimina foglio selezionato", nullptr));
        cbPdf->setText(QCoreApplication::translate("HWorkProgram", "Stampa su pdf", nullptr));
        pbPrint->setText(QCoreApplication::translate("HWorkProgram", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HWorkProgram", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HWorkProgram: public Ui_HWorkProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWORKPROGRAM_H
