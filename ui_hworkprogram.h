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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HWorkProgram
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_4;
    QDateEdit *deDal;
    QLabel *label_5;
    QDateEdit *deAl;
    QLabel *label_3;
    QSpinBox *spLinea;
    QLabel *label_9;
    QLabel *lblCheck;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbApprova;
    QPushButton *pbDisapprova;
    QSplitter *splitter;
    QTableView *tvStorico;
    QTableView *tvGeneral;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *cbshowrows;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *pbUncompleteRow;
    QPushButton *pbModify;
    QPushButton *pbCopy;
    QPushButton *pbNotComplete;
    QPushButton *pbRemove;
    QPushButton *pbAdd;
    QPushButton *pbCompleteRow;
    QPushButton *pbComplete;
    QPushButton *pbPaste;
    QPushButton *pbCutRow;
    QPushButton *pbUndo;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpinBox *spSearchLinea;
    QFrame *line;
    QLabel *label_7;
    QDateEdit *deSearch;
    QLabel *label_8;
    QDateEdit *deSearchTo;
    QPushButton *pbSearch;
    QPushButton *pbReset;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbNewSheet;
    QPushButton *pbSingleSheet;
    QPushButton *pbDetails;
    QPushButton *pbBlender;
    QCheckBox *cbAll;
    QPushButton *pbSave;
    QPushButton *pbDeleteSheet;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HWorkProgram)
    {
        if (HWorkProgram->objectName().isEmpty())
            HWorkProgram->setObjectName(QString::fromUtf8("HWorkProgram"));
        HWorkProgram->setWindowModality(Qt::NonModal);
        HWorkProgram->resize(1544, 638);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/3D_Icons_Icon_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        HWorkProgram->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HWorkProgram);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(HWorkProgram);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        label_4 = new QLabel(HWorkProgram);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        deDal = new QDateEdit(HWorkProgram);
        deDal->setObjectName(QString::fromUtf8("deDal"));
        deDal->setCalendarPopup(true);

        horizontalLayout_3->addWidget(deDal);

        label_5 = new QLabel(HWorkProgram);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        deAl = new QDateEdit(HWorkProgram);
        deAl->setObjectName(QString::fromUtf8("deAl"));
        deAl->setCalendarPopup(true);

        horizontalLayout_3->addWidget(deAl);

        label_3 = new QLabel(HWorkProgram);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spLinea = new QSpinBox(HWorkProgram);
        spLinea->setObjectName(QString::fromUtf8("spLinea"));
        spLinea->setMinimum(1);
        spLinea->setMaximum(3);

        horizontalLayout_3->addWidget(spLinea);

        label_9 = new QLabel(HWorkProgram);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lblCheck = new QLabel(HWorkProgram);
        lblCheck->setObjectName(QString::fromUtf8("lblCheck"));
        lblCheck->setMaximumSize(QSize(48, 48));
        lblCheck->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Accept64.png")));
        lblCheck->setScaledContents(true);

        horizontalLayout_3->addWidget(lblCheck);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbApprova = new QPushButton(HWorkProgram);
        pbApprova->setObjectName(QString::fromUtf8("pbApprova"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbApprova->setIcon(icon1);

        horizontalLayout_3->addWidget(pbApprova);

        pbDisapprova = new QPushButton(HWorkProgram);
        pbDisapprova->setObjectName(QString::fromUtf8("pbDisapprova"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDisapprova->setIcon(icon2);

        horizontalLayout_3->addWidget(pbDisapprova);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter = new QSplitter(HWorkProgram);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tvStorico = new QTableView(splitter);
        tvStorico->setObjectName(QString::fromUtf8("tvStorico"));
        tvStorico->setMaximumSize(QSize(190, 16777215));
        tvStorico->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvStorico->setAlternatingRowColors(true);
        tvStorico->setSelectionMode(QAbstractItemView::SingleSelection);
        tvStorico->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvStorico->setSortingEnabled(true);
        splitter->addWidget(tvStorico);
        tvStorico->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tvStorico->verticalHeader()->setVisible(false);
        tvStorico->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tvGeneral = new QTableView(splitter);
        tvGeneral->setObjectName(QString::fromUtf8("tvGeneral"));
        tvGeneral->setEnabled(true);
        tvGeneral->setEditTriggers(QAbstractItemView::SelectedClicked);
        tvGeneral->setProperty("showDropIndicator", QVariant(false));
        tvGeneral->setDragEnabled(false);
        tvGeneral->setDragDropOverwriteMode(false);
        tvGeneral->setDragDropMode(QAbstractItemView::NoDragDrop);
        tvGeneral->setDefaultDropAction(Qt::MoveAction);
        tvGeneral->setAlternatingRowColors(true);
        tvGeneral->setSelectionMode(QAbstractItemView::SingleSelection);
        tvGeneral->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvGeneral->setSortingEnabled(true);
        splitter->addWidget(tvGeneral);
        tvGeneral->horizontalHeader()->setVisible(true);
        tvGeneral->horizontalHeader()->setStretchLastSection(true);
        tvGeneral->verticalHeader()->setVisible(true);
        tvGeneral->verticalHeader()->setDefaultSectionSize(40);
        tvGeneral->verticalHeader()->setHighlightSections(false);
        tvGeneral->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(splitter);

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
        cbshowrows->setChecked(false);

        horizontalLayout_2->addWidget(cbshowrows);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbUncompleteRow = new QPushButton(HWorkProgram);
        pbUncompleteRow->setObjectName(QString::fromUtf8("pbUncompleteRow"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbUncompleteRow->setIcon(icon3);

        gridLayout->addWidget(pbUncompleteRow, 1, 1, 1, 1);

        pbModify = new QPushButton(HWorkProgram);
        pbModify->setObjectName(QString::fromUtf8("pbModify"));
        pbModify->setIcon(icon2);

        gridLayout->addWidget(pbModify, 0, 1, 1, 2);

        pbCopy = new QPushButton(HWorkProgram);
        pbCopy->setObjectName(QString::fromUtf8("pbCopy"));
        pbCopy->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/fork-1-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCopy->setIcon(icon4);

        gridLayout->addWidget(pbCopy, 0, 3, 1, 1);

        pbNotComplete = new QPushButton(HWorkProgram);
        pbNotComplete->setObjectName(QString::fromUtf8("pbNotComplete"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Comment-delete64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbNotComplete->setIcon(icon5);

        gridLayout->addWidget(pbNotComplete, 1, 3, 1, 1);

        pbRemove = new QPushButton(HWorkProgram);
        pbRemove->setObjectName(QString::fromUtf8("pbRemove"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRemove->setIcon(icon6);

        gridLayout->addWidget(pbRemove, 0, 6, 1, 1);

        pbAdd = new QPushButton(HWorkProgram);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAdd->setIcon(icon7);

        gridLayout->addWidget(pbAdd, 0, 0, 1, 1);

        pbCompleteRow = new QPushButton(HWorkProgram);
        pbCompleteRow->setObjectName(QString::fromUtf8("pbCompleteRow"));
        pbCompleteRow->setIcon(icon1);

        gridLayout->addWidget(pbCompleteRow, 1, 0, 1, 1);

        pbComplete = new QPushButton(HWorkProgram);
        pbComplete->setObjectName(QString::fromUtf8("pbComplete"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/Comment-add64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbComplete->setIcon(icon8);

        gridLayout->addWidget(pbComplete, 1, 2, 1, 1);

        pbPaste = new QPushButton(HWorkProgram);
        pbPaste->setObjectName(QString::fromUtf8("pbPaste"));
        pbPaste->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPaste->setIcon(icon9);

        gridLayout->addWidget(pbPaste, 0, 4, 1, 1);

        pbCutRow = new QPushButton(HWorkProgram);
        pbCutRow->setObjectName(QString::fromUtf8("pbCutRow"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCutRow->setIcon(icon10);

        gridLayout->addWidget(pbCutRow, 0, 5, 1, 1);

        pbUndo = new QPushButton(HWorkProgram);
        pbUndo->setObjectName(QString::fromUtf8("pbUndo"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/Arrow-turn-left64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUndo->setIcon(icon11);

        gridLayout->addWidget(pbUndo, 1, 4, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(HWorkProgram);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        spSearchLinea = new QSpinBox(HWorkProgram);
        spSearchLinea->setObjectName(QString::fromUtf8("spSearchLinea"));
        spSearchLinea->setMinimum(0);
        spSearchLinea->setMaximum(5);
        spSearchLinea->setValue(0);

        horizontalLayout_4->addWidget(spSearchLinea);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        line = new QFrame(HWorkProgram);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);

        label_7 = new QLabel(HWorkProgram);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        deSearch = new QDateEdit(HWorkProgram);
        deSearch->setObjectName(QString::fromUtf8("deSearch"));
        deSearch->setCalendarPopup(true);

        horizontalLayout_5->addWidget(deSearch);

        label_8 = new QLabel(HWorkProgram);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        deSearchTo = new QDateEdit(HWorkProgram);
        deSearchTo->setObjectName(QString::fromUtf8("deSearchTo"));
        deSearchTo->setCalendarPopup(true);

        horizontalLayout_5->addWidget(deSearchTo);

        pbSearch = new QPushButton(HWorkProgram);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSearch->setIcon(icon12);

        horizontalLayout_5->addWidget(pbSearch);

        pbReset = new QPushButton(HWorkProgram);
        pbReset->setObjectName(QString::fromUtf8("pbReset"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbReset->setIcon(icon13);

        horizontalLayout_5->addWidget(pbReset);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbNewSheet = new QPushButton(HWorkProgram);
        pbNewSheet->setObjectName(QString::fromUtf8("pbNewSheet"));
        pbNewSheet->setIcon(icon7);
        pbNewSheet->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbNewSheet);

        pbSingleSheet = new QPushButton(HWorkProgram);
        pbSingleSheet->setObjectName(QString::fromUtf8("pbSingleSheet"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/Text-columns64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSingleSheet->setIcon(icon14);
        pbSingleSheet->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSingleSheet);

        pbDetails = new QPushButton(HWorkProgram);
        pbDetails->setObjectName(QString::fromUtf8("pbDetails"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Resources/Pie-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDetails->setIcon(icon15);
        pbDetails->setIconSize(QSize(32, 32));
        pbDetails->setCheckable(true);

        horizontalLayout->addWidget(pbDetails);

        pbBlender = new QPushButton(HWorkProgram);
        pbBlender->setObjectName(QString::fromUtf8("pbBlender"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Resources/Cart.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbBlender->setIcon(icon16);
        pbBlender->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbBlender);

        cbAll = new QCheckBox(HWorkProgram);
        cbAll->setObjectName(QString::fromUtf8("cbAll"));

        horizontalLayout->addWidget(cbAll);

        pbSave = new QPushButton(HWorkProgram);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon17);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbDeleteSheet = new QPushButton(HWorkProgram);
        pbDeleteSheet->setObjectName(QString::fromUtf8("pbDeleteSheet"));
        pbDeleteSheet->setIcon(icon3);
        pbDeleteSheet->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbDeleteSheet);

        pbPrint = new QPushButton(HWorkProgram);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        pbPrint->setEnabled(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon18);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HWorkProgram);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon19);
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
        label_5->setText(QCoreApplication::translate("HWorkProgram", "Al:", nullptr));
        label_3->setText(QCoreApplication::translate("HWorkProgram", "Linea", nullptr));
        label_9->setText(QCoreApplication::translate("HWorkProgram", "Stato: ", nullptr));
        lblCheck->setText(QString());
        pbApprova->setText(QCoreApplication::translate("HWorkProgram", "Approva", nullptr));
        pbDisapprova->setText(QCoreApplication::translate("HWorkProgram", "Revoca approvazione", nullptr));
        checkBox->setText(QCoreApplication::translate("HWorkProgram", "Nascondi Storico (S)", nullptr));
#if QT_CONFIG(shortcut)
        checkBox->setShortcut(QCoreApplication::translate("HWorkProgram", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        cbshowrows->setText(QCoreApplication::translate("HWorkProgram", "Mostra i numeri di riga (R)", nullptr));
#if QT_CONFIG(shortcut)
        cbshowrows->setShortcut(QCoreApplication::translate("HWorkProgram", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        pbUncompleteRow->setText(QCoreApplication::translate("HWorkProgram", "Reset riga (N)", nullptr));
#if QT_CONFIG(shortcut)
        pbUncompleteRow->setShortcut(QCoreApplication::translate("HWorkProgram", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        pbModify->setText(QCoreApplication::translate("HWorkProgram", "Modifica riga (Ctrl+M)", nullptr));
#if QT_CONFIG(shortcut)
        pbModify->setShortcut(QCoreApplication::translate("HWorkProgram", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        pbCopy->setText(QCoreApplication::translate("HWorkProgram", "Copia riga", nullptr));
#if QT_CONFIG(shortcut)
        pbCopy->setShortcut(QCoreApplication::translate("HWorkProgram", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        pbNotComplete->setText(QCoreApplication::translate("HWorkProgram", "Resetta righe", nullptr));
        pbRemove->setText(QCoreApplication::translate("HWorkProgram", "Elimina riga (-)", nullptr));
#if QT_CONFIG(shortcut)
        pbRemove->setShortcut(QCoreApplication::translate("HWorkProgram", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        pbAdd->setText(QCoreApplication::translate("HWorkProgram", "Aggiungi riga (+)", nullptr));
#if QT_CONFIG(shortcut)
        pbAdd->setShortcut(QCoreApplication::translate("HWorkProgram", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        pbCompleteRow->setText(QCoreApplication::translate("HWorkProgram", " Completa riga(C)", nullptr));
#if QT_CONFIG(shortcut)
        pbCompleteRow->setShortcut(QCoreApplication::translate("HWorkProgram", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        pbComplete->setText(QCoreApplication::translate("HWorkProgram", "Completa tutte le righe", nullptr));
#if QT_CONFIG(shortcut)
        pbComplete->setShortcut(QCoreApplication::translate("HWorkProgram", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPaste->setText(QCoreApplication::translate("HWorkProgram", "Incolla riga", nullptr));
#if QT_CONFIG(shortcut)
        pbPaste->setShortcut(QCoreApplication::translate("HWorkProgram", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        pbCutRow->setText(QCoreApplication::translate("HWorkProgram", "Taglia riga", nullptr));
#if QT_CONFIG(shortcut)
        pbCutRow->setShortcut(QCoreApplication::translate("HWorkProgram", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pbUndo->setToolTip(QCoreApplication::translate("HWorkProgram", "Annlla operazione e ricarica", nullptr));
#endif // QT_CONFIG(tooltip)
        pbUndo->setText(QCoreApplication::translate("HWorkProgram", "Annulla ", nullptr));
        label_6->setText(QCoreApplication::translate("HWorkProgram", "Linea:", nullptr));
        label_7->setText(QCoreApplication::translate("HWorkProgram", "Ricerca per data tra il:", nullptr));
        label_8->setText(QCoreApplication::translate("HWorkProgram", "e il:", nullptr));
        pbSearch->setText(QCoreApplication::translate("HWorkProgram", "Cerca", nullptr));
        pbReset->setText(QCoreApplication::translate("HWorkProgram", "Reset", nullptr));
        pbNewSheet->setText(QCoreApplication::translate("HWorkProgram", "Nuovo (Ctrl+N)", nullptr));
#if QT_CONFIG(shortcut)
        pbNewSheet->setShortcut(QCoreApplication::translate("HWorkProgram", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        pbSingleSheet->setText(QCoreApplication::translate("HWorkProgram", "Foglio (F)", nullptr));
#if QT_CONFIG(shortcut)
        pbSingleSheet->setShortcut(QCoreApplication::translate("HWorkProgram", "F", nullptr));
#endif // QT_CONFIG(shortcut)
        pbDetails->setText(QCoreApplication::translate("HWorkProgram", "Dettagli (D)", nullptr));
#if QT_CONFIG(shortcut)
        pbDetails->setShortcut(QCoreApplication::translate("HWorkProgram", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        pbBlender->setText(QCoreApplication::translate("HWorkProgram", "Frullatori (B)", nullptr));
#if QT_CONFIG(shortcut)
        pbBlender->setShortcut(QCoreApplication::translate("HWorkProgram", "B", nullptr));
#endif // QT_CONFIG(shortcut)
        cbAll->setText(QCoreApplication::translate("HWorkProgram", "Dettaglio complessivo intervallo (Alt+D)", nullptr));
#if QT_CONFIG(shortcut)
        cbAll->setShortcut(QCoreApplication::translate("HWorkProgram", "Alt+D", nullptr));
#endif // QT_CONFIG(shortcut)
        pbSave->setText(QCoreApplication::translate("HWorkProgram", "Salva (Ctrl+S)", nullptr));
#if QT_CONFIG(shortcut)
        pbSave->setShortcut(QCoreApplication::translate("HWorkProgram", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        pbDeleteSheet->setText(QCoreApplication::translate("HWorkProgram", "Elimina foglio selezionato", nullptr));
        pbPrint->setText(QCoreApplication::translate("HWorkProgram", " Stampa (Ctrl+P)", nullptr));
#if QT_CONFIG(shortcut)
        pbPrint->setShortcut(QCoreApplication::translate("HWorkProgram", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        pbClose->setText(QCoreApplication::translate("HWorkProgram", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HWorkProgram: public Ui_HWorkProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWORKPROGRAM_H
