/********************************************************************************
** Form generated from reading UI file 'hcosti.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCOSTI_H
#define UI_HCOSTI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCosti
{
public:
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *cbClienti;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *leFormato;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QListView *lv_prodotti;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTableView *tvRicetta;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *lbTotQuantita;
    QLabel *label_14;
    QLabel *lbCostoRicetta;
    QLabel *label_16;
    QLabel *lbCostoFormato;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QTableView *tvComponentiCosto;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_5;
    QLabel *label_10;
    QLineEdit *leCosto_formato;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_11;
    QLineEdit *leMargine;
    QPushButton *pbMargin;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_12;
    QLineEdit *leResult;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAggiungi_componente_costo;
    QPushButton *pbRimuovi_componente_costo;
    QPushButton *pbJolly;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HCosti)
    {
        if (HCosti->objectName().isEmpty())
            HCosti->setObjectName(QString::fromUtf8("HCosti"));
        HCosti->resize(1247, 731);
        verticalLayout_7 = new QVBoxLayout(HCosti);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(HCosti);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        cbClienti = new QComboBox(HCosti);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setMinimumSize(QSize(200, 0));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_3->addWidget(cbClienti, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(HCosti);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        leFormato = new QLineEdit(HCosti);
        leFormato->setObjectName(QString::fromUtf8("leFormato"));
        leFormato->setMaximumSize(QSize(100, 16777215));
        leFormato->setClearButtonEnabled(true);

        gridLayout->addWidget(leFormato, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(HCosti);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        lv_prodotti = new QListView(HCosti);
        lv_prodotti->setObjectName(QString::fromUtf8("lv_prodotti"));

        verticalLayout_3->addWidget(lv_prodotti);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(HCosti);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        tvRicetta = new QTableView(HCosti);
        tvRicetta->setObjectName(QString::fromUtf8("tvRicetta"));
        tvRicetta->setEditTriggers(QAbstractItemView::DoubleClicked);
        tvRicetta->setAlternatingRowColors(true);
        tvRicetta->setSelectionMode(QAbstractItemView::SingleSelection);
        tvRicetta->setSelectionBehavior(QAbstractItemView::SelectItems);
        tvRicetta->horizontalHeader()->setStretchLastSection(true);
        tvRicetta->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tvRicetta);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HCosti);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lbTotQuantita = new QLabel(HCosti);
        lbTotQuantita->setObjectName(QString::fromUtf8("lbTotQuantita"));
        lbTotQuantita->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(lbTotQuantita);

        label_14 = new QLabel(HCosti);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_2->addWidget(label_14);

        lbCostoRicetta = new QLabel(HCosti);
        lbCostoRicetta->setObjectName(QString::fromUtf8("lbCostoRicetta"));
        lbCostoRicetta->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(lbCostoRicetta);

        label_16 = new QLabel(HCosti);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_2->addWidget(label_16);

        lbCostoFormato = new QLabel(HCosti);
        lbCostoFormato->setObjectName(QString::fromUtf8("lbCostoFormato"));
        lbCostoFormato->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(lbCostoFormato);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(HCosti);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        tvComponentiCosto = new QTableView(HCosti);
        tvComponentiCosto->setObjectName(QString::fromUtf8("tvComponentiCosto"));
        tvComponentiCosto->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tvComponentiCosto->setSelectionMode(QAbstractItemView::SingleSelection);
        tvComponentiCosto->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvComponentiCosto->setSortingEnabled(false);
        tvComponentiCosto->horizontalHeader()->setCascadingSectionResizes(true);
        tvComponentiCosto->horizontalHeader()->setStretchLastSection(true);
        tvComponentiCosto->verticalHeader()->setVisible(false);
        tvComponentiCosto->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(tvComponentiCosto);


        verticalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_10 = new QLabel(HCosti);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        leCosto_formato = new QLineEdit(HCosti);
        leCosto_formato->setObjectName(QString::fromUtf8("leCosto_formato"));

        gridLayout_5->addWidget(leCosto_formato, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        label_11 = new QLabel(HCosti);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 1, 0, 1, 1);

        leMargine = new QLineEdit(HCosti);
        leMargine->setObjectName(QString::fromUtf8("leMargine"));
        leMargine->setClearButtonEnabled(true);

        gridLayout_5->addWidget(leMargine, 1, 1, 1, 1);

        pbMargin = new QPushButton(HCosti);
        pbMargin->setObjectName(QString::fromUtf8("pbMargin"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbMargin->setIcon(icon);

        gridLayout_5->addWidget(pbMargin, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        label_12 = new QLabel(HCosti);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font;
        font.setBold(true);
        label_12->setFont(font);

        gridLayout_5->addWidget(label_12, 2, 0, 1, 1);

        leResult = new QLineEdit(HCosti);
        leResult->setObjectName(QString::fromUtf8("leResult"));

        gridLayout_5->addWidget(leResult, 2, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 2, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbAggiungi_componente_costo = new QPushButton(HCosti);
        pbAggiungi_componente_costo->setObjectName(QString::fromUtf8("pbAggiungi_componente_costo"));
        pbAggiungi_componente_costo->setMaximumSize(QSize(200, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAggiungi_componente_costo->setIcon(icon1);
        pbAggiungi_componente_costo->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbAggiungi_componente_costo);

        pbRimuovi_componente_costo = new QPushButton(HCosti);
        pbRimuovi_componente_costo->setObjectName(QString::fromUtf8("pbRimuovi_componente_costo"));
        pbRimuovi_componente_costo->setMaximumSize(QSize(200, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRimuovi_componente_costo->setIcon(icon2);
        pbRimuovi_componente_costo->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbRimuovi_componente_costo);

        pbJolly = new QPushButton(HCosti);
        pbJolly->setObjectName(QString::fromUtf8("pbJolly"));
        pbJolly->setMinimumSize(QSize(200, 0));
        pbJolly->setMaximumSize(QSize(200, 16777215));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbJolly->setIcon(icon3);
        pbJolly->setIconSize(QSize(32, 32));
        pbJolly->setCheckable(false);

        horizontalLayout->addWidget(pbJolly);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pbPrint = new QPushButton(HCosti);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon4);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbPrint);

        pbClose = new QPushButton(HCosti);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon5);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbClose);


        verticalLayout_7->addLayout(horizontalLayout_4);


        retranslateUi(HCosti);

        QMetaObject::connectSlotsByName(HCosti);
    } // setupUi

    void retranslateUi(QWidget *HCosti)
    {
        HCosti->setWindowTitle(QCoreApplication::translate("HCosti", "Calcolo costi", nullptr));
        label->setText(QCoreApplication::translate("HCosti", "Cliente:", nullptr));
        label_4->setText(QCoreApplication::translate("HCosti", "Formato (Kg)", nullptr));
        leFormato->setText(QString());
        label_5->setText(QCoreApplication::translate("HCosti", "Prodotti cliente", nullptr));
        label_3->setText(QCoreApplication::translate("HCosti", "Componenti ricetta", nullptr));
        label_2->setText(QCoreApplication::translate("HCosti", "Tot. Quantit\303\240", nullptr));
        lbTotQuantita->setText(QString());
        label_14->setText(QCoreApplication::translate("HCosti", "Costo/ricetta:", nullptr));
        lbCostoRicetta->setText(QString());
        label_16->setText(QCoreApplication::translate("HCosti", "Costo formato (ricetta)", nullptr));
        lbCostoFormato->setText(QString());
        label_9->setText(QCoreApplication::translate("HCosti", "Componenti costo", nullptr));
        label_10->setText(QCoreApplication::translate("HCosti", "Costo formato:", nullptr));
        label_11->setText(QCoreApplication::translate("HCosti", "Margine (%):", nullptr));
        pbMargin->setText(QString());
        label_12->setText(QCoreApplication::translate("HCosti", " Prezzo/Item (\342\202\254)", nullptr));
        pbAggiungi_componente_costo->setText(QCoreApplication::translate("HCosti", "Aggiungi componente costo", nullptr));
        pbRimuovi_componente_costo->setText(QCoreApplication::translate("HCosti", "Rimuovi componente costo", nullptr));
        pbJolly->setText(QCoreApplication::translate("HCosti", "Reset", nullptr));
        pbPrint->setText(QCoreApplication::translate("HCosti", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HCosti", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HCosti: public Ui_HCosti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCOSTI_H
