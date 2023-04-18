/********************************************************************************
** Form generated from reading UI file 'hcalcolo_costi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCALCOLO_COSTI_H
#define UI_HCALCOLO_COSTI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
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

class Ui_HCalcolo_costi
{
public:
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    QGridLayout *gridLayout;
    QComboBox *cbClienti;
    QLabel *label_4;
    QLineEdit *leFormato;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QListView *lv_prodotti;
    QLabel *label_3;
    QTableView *tvRicetta;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *lbTotQuantita;
    QLabel *label_14;
    QLabel *lbCostoRicetta;
    QLabel *label_16;
    QLabel *lbCostoFormato;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *leCosto_energia;
    QPushButton *pbAddEnergy;
    QLabel *label_7;
    QLineEdit *leCosto_personale;
    QPushButton *pbAddPersonale;
    QLabel *label_8;
    QLineEdit *leCosto_spese_generali;
    QPushButton *pbGeneraleExpenses;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QTableView *tvComponentiCosto;
    QFormLayout *formLayout_3;
    QLabel *label_10;
    QLineEdit *leCosto_formato;
    QLabel *label_11;
    QLineEdit *leMargine;
    QLabel *label_12;
    QLineEdit *leResult;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAggiungi_componente_costo;
    QPushButton *pbRimuovi_componente_costo;
    QPushButton *pbJolly;
    QPushButton *pbCalcolo;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HCalcolo_costi)
    {
        if (HCalcolo_costi->objectName().isEmpty())
            HCalcolo_costi->setObjectName(QString::fromUtf8("HCalcolo_costi"));
        HCalcolo_costi->resize(1074, 693);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Cash-register-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HCalcolo_costi->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HCalcolo_costi);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbClienti = new QComboBox(HCalcolo_costi);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setMinimumSize(QSize(200, 0));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(cbClienti, 0, 1, 1, 1);

        label_4 = new QLabel(HCalcolo_costi);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        leFormato = new QLineEdit(HCalcolo_costi);
        leFormato->setObjectName(QString::fromUtf8("leFormato"));

        gridLayout->addWidget(leFormato, 0, 3, 1, 1);

        label = new QLabel(HCalcolo_costi);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(0, QFormLayout::FieldRole, horizontalSpacer);


        verticalLayout_4->addLayout(formLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(HCalcolo_costi);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        lv_prodotti = new QListView(HCalcolo_costi);
        lv_prodotti->setObjectName(QString::fromUtf8("lv_prodotti"));

        verticalLayout_3->addWidget(lv_prodotti);

        label_3 = new QLabel(HCalcolo_costi);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        tvRicetta = new QTableView(HCalcolo_costi);
        tvRicetta->setObjectName(QString::fromUtf8("tvRicetta"));
        tvRicetta->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvRicetta->setSelectionMode(QAbstractItemView::SingleSelection);
        tvRicetta->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvRicetta->horizontalHeader()->setStretchLastSection(true);
        tvRicetta->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tvRicetta);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HCalcolo_costi);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lbTotQuantita = new QLabel(HCalcolo_costi);
        lbTotQuantita->setObjectName(QString::fromUtf8("lbTotQuantita"));
        lbTotQuantita->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(lbTotQuantita);

        label_14 = new QLabel(HCalcolo_costi);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_2->addWidget(label_14);

        lbCostoRicetta = new QLabel(HCalcolo_costi);
        lbCostoRicetta->setObjectName(QString::fromUtf8("lbCostoRicetta"));
        lbCostoRicetta->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(lbCostoRicetta);

        label_16 = new QLabel(HCalcolo_costi);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_2->addWidget(label_16);

        lbCostoFormato = new QLabel(HCalcolo_costi);
        lbCostoFormato->setObjectName(QString::fromUtf8("lbCostoFormato"));
        lbCostoFormato->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(lbCostoFormato);


        verticalLayout_3->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(HCalcolo_costi);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        leCosto_energia = new QLineEdit(HCalcolo_costi);
        leCosto_energia->setObjectName(QString::fromUtf8("leCosto_energia"));

        gridLayout_2->addWidget(leCosto_energia, 0, 1, 1, 1);

        pbAddEnergy = new QPushButton(HCalcolo_costi);
        pbAddEnergy->setObjectName(QString::fromUtf8("pbAddEnergy"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbAddEnergy->setIcon(icon1);

        gridLayout_2->addWidget(pbAddEnergy, 0, 2, 1, 1);

        label_7 = new QLabel(HCalcolo_costi);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        leCosto_personale = new QLineEdit(HCalcolo_costi);
        leCosto_personale->setObjectName(QString::fromUtf8("leCosto_personale"));

        gridLayout_2->addWidget(leCosto_personale, 1, 1, 1, 1);

        pbAddPersonale = new QPushButton(HCalcolo_costi);
        pbAddPersonale->setObjectName(QString::fromUtf8("pbAddPersonale"));
        pbAddPersonale->setIcon(icon1);

        gridLayout_2->addWidget(pbAddPersonale, 1, 2, 1, 1);

        label_8 = new QLabel(HCalcolo_costi);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        leCosto_spese_generali = new QLineEdit(HCalcolo_costi);
        leCosto_spese_generali->setObjectName(QString::fromUtf8("leCosto_spese_generali"));

        gridLayout_2->addWidget(leCosto_spese_generali, 2, 1, 1, 1);

        pbGeneraleExpenses = new QPushButton(HCalcolo_costi);
        pbGeneraleExpenses->setObjectName(QString::fromUtf8("pbGeneraleExpenses"));
        pbGeneraleExpenses->setIcon(icon1);

        gridLayout_2->addWidget(pbGeneraleExpenses, 2, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(HCalcolo_costi);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        tvComponentiCosto = new QTableView(HCalcolo_costi);
        tvComponentiCosto->setObjectName(QString::fromUtf8("tvComponentiCosto"));
        tvComponentiCosto->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvComponentiCosto->setSelectionMode(QAbstractItemView::SingleSelection);
        tvComponentiCosto->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvComponentiCosto->setSortingEnabled(false);
        tvComponentiCosto->horizontalHeader()->setCascadingSectionResizes(true);
        tvComponentiCosto->horizontalHeader()->setStretchLastSection(true);
        tvComponentiCosto->verticalHeader()->setVisible(false);
        tvComponentiCosto->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(tvComponentiCosto);


        verticalLayout_2->addLayout(verticalLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_10 = new QLabel(HCalcolo_costi);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_10);

        leCosto_formato = new QLineEdit(HCalcolo_costi);
        leCosto_formato->setObjectName(QString::fromUtf8("leCosto_formato"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, leCosto_formato);

        label_11 = new QLabel(HCalcolo_costi);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_11);

        leMargine = new QLineEdit(HCalcolo_costi);
        leMargine->setObjectName(QString::fromUtf8("leMargine"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, leMargine);

        label_12 = new QLabel(HCalcolo_costi);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font;
        font.setBold(true);
        label_12->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_12);

        leResult = new QLineEdit(HCalcolo_costi);
        leResult->setObjectName(QString::fromUtf8("leResult"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, leResult);


        verticalLayout_2->addLayout(formLayout_3);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbAggiungi_componente_costo = new QPushButton(HCalcolo_costi);
        pbAggiungi_componente_costo->setObjectName(QString::fromUtf8("pbAggiungi_componente_costo"));
        pbAggiungi_componente_costo->setIcon(icon1);
        pbAggiungi_componente_costo->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbAggiungi_componente_costo);

        pbRimuovi_componente_costo = new QPushButton(HCalcolo_costi);
        pbRimuovi_componente_costo->setObjectName(QString::fromUtf8("pbRimuovi_componente_costo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbRimuovi_componente_costo->setIcon(icon2);
        pbRimuovi_componente_costo->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbRimuovi_componente_costo);

        pbJolly = new QPushButton(HCalcolo_costi);
        pbJolly->setObjectName(QString::fromUtf8("pbJolly"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Left-align64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbJolly->setIcon(icon3);
        pbJolly->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbJolly);

        pbCalcolo = new QPushButton(HCalcolo_costi);
        pbCalcolo->setObjectName(QString::fromUtf8("pbCalcolo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Line-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalcolo->setIcon(icon4);
        pbCalcolo->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbCalcolo);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pbPrint = new QPushButton(HCalcolo_costi);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon5);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbPrint);

        pbClose = new QPushButton(HCalcolo_costi);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon6);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbClose);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(HCalcolo_costi);

        QMetaObject::connectSlotsByName(HCalcolo_costi);
    } // setupUi

    void retranslateUi(QWidget *HCalcolo_costi)
    {
        HCalcolo_costi->setWindowTitle(QCoreApplication::translate("HCalcolo_costi", "Calcolo Costi", nullptr));
        label_4->setText(QCoreApplication::translate("HCalcolo_costi", "Formato (Kg)", nullptr));
        leFormato->setText(QString());
        label->setText(QCoreApplication::translate("HCalcolo_costi", "Cliente:", nullptr));
        label_5->setText(QCoreApplication::translate("HCalcolo_costi", "Prodotti cliente", nullptr));
        label_3->setText(QCoreApplication::translate("HCalcolo_costi", "Componenti ricetta", nullptr));
        label_2->setText(QCoreApplication::translate("HCalcolo_costi", "Tot. Quantit\303\240", nullptr));
        lbTotQuantita->setText(QString());
        label_14->setText(QCoreApplication::translate("HCalcolo_costi", "Costo/ricetta:", nullptr));
        lbCostoRicetta->setText(QString());
        label_16->setText(QCoreApplication::translate("HCalcolo_costi", "Costo formato (ricetta)", nullptr));
        lbCostoFormato->setText(QString());
        label_6->setText(QCoreApplication::translate("HCalcolo_costi", "Energia:", nullptr));
        pbAddEnergy->setText(QString());
        label_7->setText(QCoreApplication::translate("HCalcolo_costi", "Personale:", nullptr));
        pbAddPersonale->setText(QString());
        label_8->setText(QCoreApplication::translate("HCalcolo_costi", "Spese generali:", nullptr));
        pbGeneraleExpenses->setText(QString());
        label_9->setText(QCoreApplication::translate("HCalcolo_costi", "Componenti costo", nullptr));
        label_10->setText(QCoreApplication::translate("HCalcolo_costi", "Costo formato:", nullptr));
        label_11->setText(QCoreApplication::translate("HCalcolo_costi", "Margine (%):", nullptr));
        label_12->setText(QCoreApplication::translate("HCalcolo_costi", " Prezzo/Item (\342\202\254)", nullptr));
        pbAggiungi_componente_costo->setText(QCoreApplication::translate("HCalcolo_costi", "Aggiungi componente costo", nullptr));
        pbRimuovi_componente_costo->setText(QCoreApplication::translate("HCalcolo_costi", "Rimuovi componente costo", nullptr));
        pbJolly->setText(QCoreApplication::translate("HCalcolo_costi", "Elabora costi", nullptr));
        pbCalcolo->setText(QCoreApplication::translate("HCalcolo_costi", "Aggiorna", nullptr));
        pbPrint->setText(QCoreApplication::translate("HCalcolo_costi", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HCalcolo_costi", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HCalcolo_costi: public Ui_HCalcolo_costi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCALCOLO_COSTI_H
