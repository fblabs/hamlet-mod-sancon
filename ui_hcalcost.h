/********************************************************************************
** Form generated from reading UI file 'hcalcost.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCALCOST_H
#define UI_HCALCOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCalcost
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cbClients;
    QListView *lvProdotti;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_3;
    QTableView *tvComponenti;
    QLabel *label_14;
    QFormLayout *formLayout;
    QLabel *label_10;
    QLineEdit *leQuantitaProdotto;
    QLabel *label_2;
    QLineEdit *leCostoProdotto;
    QLabel *label_11;
    QLineEdit *leDaprodurre;
    QLabel *label_16;
    QLineEdit *leCostoFisso;
    QLabel *label_12;
    QLineEdit *leCostoProduzione;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_5;
    QComboBox *cbTappi;
    QLineEdit *leQtTappi;
    QLabel *label_8;
    QLineEdit *leCostoTappi;
    QLabel *label_6;
    QComboBox *cbCartoni;
    QLineEdit *leQtCartoni;
    QLabel *label_9;
    QLineEdit *leCostoCartoni;
    QLineEdit *leCostoVasi;
    QLabel *label_4;
    QComboBox *cbVasi;
    QLineEdit *leQtVasi;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *leCostoTotale;
    QPushButton *pbCalcola;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrint;
    QPushButton *pushButton;
    QPushButton *pbClose;

    void setupUi(QWidget *HCalcost)
    {
        if (HCalcost->objectName().isEmpty())
            HCalcost->setObjectName(QStringLiteral("HCalcost"));
        HCalcost->setWindowModality(Qt::ApplicationModal);
        HCalcost->resize(1144, 706);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Cash-register-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HCalcost->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HCalcost);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(HCalcost);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label);

        cbClients = new QComboBox(HCalcost);
        cbClients->setObjectName(QStringLiteral("cbClients"));
        cbClients->setMinimumSize(QSize(300, 0));
        cbClients->setEditable(true);

        horizontalLayout_2->addWidget(cbClients);


        verticalLayout->addLayout(horizontalLayout_2);

        lvProdotti = new QListView(HCalcost);
        lvProdotti->setObjectName(QStringLiteral("lvProdotti"));

        verticalLayout->addWidget(lvProdotti);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_15 = new QLabel(HCalcost);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_4->addWidget(label_15);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tvComponenti = new QTableView(HCalcost);
        tvComponenti->setObjectName(QStringLiteral("tvComponenti"));
        tvComponenti->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvComponenti->setSelectionMode(QAbstractItemView::SingleSelection);
        tvComponenti->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvComponenti->horizontalHeader()->setCascadingSectionResizes(true);
        tvComponenti->horizontalHeader()->setStretchLastSection(true);
        tvComponenti->verticalHeader()->setVisible(false);
        tvComponenti->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(tvComponenti);

        label_14 = new QLabel(HCalcost);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_14->setFont(font);

        verticalLayout_3->addWidget(label_14);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_10 = new QLabel(HCalcost);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        leQuantitaProdotto = new QLineEdit(HCalcost);
        leQuantitaProdotto->setObjectName(QStringLiteral("leQuantitaProdotto"));
        leQuantitaProdotto->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leQuantitaProdotto->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leQuantitaProdotto);

        label_2 = new QLabel(HCalcost);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leCostoProdotto = new QLineEdit(HCalcost);
        leCostoProdotto->setObjectName(QStringLiteral("leCostoProdotto"));
        leCostoProdotto->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leCostoProdotto->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, leCostoProdotto);

        label_11 = new QLabel(HCalcost);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_11);

        leDaprodurre = new QLineEdit(HCalcost);
        leDaprodurre->setObjectName(QStringLiteral("leDaprodurre"));

        formLayout->setWidget(3, QFormLayout::FieldRole, leDaprodurre);

        label_16 = new QLabel(HCalcost);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_16);

        leCostoFisso = new QLineEdit(HCalcost);
        leCostoFisso->setObjectName(QStringLiteral("leCostoFisso"));

        formLayout->setWidget(6, QFormLayout::FieldRole, leCostoFisso);

        label_12 = new QLabel(HCalcost);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_12);

        leCostoProduzione = new QLineEdit(HCalcost);
        leCostoProduzione->setObjectName(QStringLiteral("leCostoProduzione"));
        leCostoProduzione->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, leCostoProduzione);


        verticalLayout_3->addLayout(formLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(HCalcost);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_7 = new QLabel(HCalcost);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 3, 1, 1);

        label_5 = new QLabel(HCalcost);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        cbTappi = new QComboBox(HCalcost);
        cbTappi->setObjectName(QStringLiteral("cbTappi"));

        gridLayout->addWidget(cbTappi, 1, 1, 1, 1);

        leQtTappi = new QLineEdit(HCalcost);
        leQtTappi->setObjectName(QStringLiteral("leQtTappi"));

        gridLayout->addWidget(leQtTappi, 1, 2, 1, 1);

        label_8 = new QLabel(HCalcost);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 3, 1, 1);

        leCostoTappi = new QLineEdit(HCalcost);
        leCostoTappi->setObjectName(QStringLiteral("leCostoTappi"));

        gridLayout->addWidget(leCostoTappi, 1, 4, 1, 1);

        label_6 = new QLabel(HCalcost);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        cbCartoni = new QComboBox(HCalcost);
        cbCartoni->setObjectName(QStringLiteral("cbCartoni"));

        gridLayout->addWidget(cbCartoni, 2, 1, 1, 1);

        leQtCartoni = new QLineEdit(HCalcost);
        leQtCartoni->setObjectName(QStringLiteral("leQtCartoni"));

        gridLayout->addWidget(leQtCartoni, 2, 2, 1, 1);

        label_9 = new QLabel(HCalcost);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 2, 3, 1, 1);

        leCostoCartoni = new QLineEdit(HCalcost);
        leCostoCartoni->setObjectName(QStringLiteral("leCostoCartoni"));

        gridLayout->addWidget(leCostoCartoni, 2, 4, 1, 1);

        leCostoVasi = new QLineEdit(HCalcost);
        leCostoVasi->setObjectName(QStringLiteral("leCostoVasi"));

        gridLayout->addWidget(leCostoVasi, 0, 4, 1, 1);

        label_4 = new QLabel(HCalcost);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        cbVasi = new QComboBox(HCalcost);
        cbVasi->setObjectName(QStringLiteral("cbVasi"));

        gridLayout->addWidget(cbVasi, 0, 1, 1, 1);

        leQtVasi = new QLineEdit(HCalcost);
        leQtVasi->setObjectName(QStringLiteral("leQtVasi"));

        gridLayout->addWidget(leQtVasi, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_13 = new QLabel(HCalcost);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        horizontalLayout_3->addWidget(label_13);

        leCostoTotale = new QLineEdit(HCalcost);
        leCostoTotale->setObjectName(QStringLiteral("leCostoTotale"));

        horizontalLayout_3->addWidget(leCostoTotale);

        pbCalcola = new QPushButton(HCalcost);
        pbCalcola->setObjectName(QStringLiteral("pbCalcola"));

        horizontalLayout_3->addWidget(pbCalcola);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbPrint = new QPushButton(HCalcost);
        pbPrint->setObjectName(QStringLiteral("pbPrint"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pushButton = new QPushButton(HCalcost);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pbClose = new QPushButton(HCalcost);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(HCalcost);

        QMetaObject::connectSlotsByName(HCalcost);
    } // setupUi

    void retranslateUi(QWidget *HCalcost)
    {
        HCalcost->setWindowTitle(QApplication::translate("HCalcost", "Calcolo costi", 0));
        label->setText(QApplication::translate("HCalcost", "Clienti:", 0));
        label_15->setText(QApplication::translate("HCalcost", "Componenti prodotto ", 0));
        label_14->setText(QApplication::translate("HCalcost", "Costo prodotto finito", 0));
        label_10->setText(QApplication::translate("HCalcost", "Quantit\303\240 ricetta", 0));
        label_2->setText(QApplication::translate("HCalcost", "Costo Ricetta", 0));
        label_11->setText(QApplication::translate("HCalcost", "Da produrre:", 0));
        label_16->setText(QApplication::translate("HCalcost", "Costo fisso", 0));
        label_12->setText(QApplication::translate("HCalcost", "Costo prodotto", 0));
        label_3->setText(QApplication::translate("HCalcost", "Costo confezionamento (vasi - tappi)", 0));
        label_7->setText(QApplication::translate("HCalcost", "Costo vasi", 0));
        label_5->setText(QApplication::translate("HCalcost", "Tappi:", 0));
        leQtTappi->setPlaceholderText(QApplication::translate("HCalcost", "numero tappi", 0));
        label_8->setText(QApplication::translate("HCalcost", "Costo tappi", 0));
        label_6->setText(QApplication::translate("HCalcost", "Cartoni:", 0));
        leQtCartoni->setPlaceholderText(QApplication::translate("HCalcost", "numero cartoni", 0));
        label_9->setText(QApplication::translate("HCalcost", "Costo cartoni", 0));
        label_4->setText(QApplication::translate("HCalcost", "Vasi:", 0));
        leQtVasi->setPlaceholderText(QApplication::translate("HCalcost", "numero vasi", 0));
        label_13->setText(QApplication::translate("HCalcost", "Costo totale produzione", 0));
        pbCalcola->setText(QApplication::translate("HCalcost", "Calcola", 0));
        pbPrint->setText(QApplication::translate("HCalcost", "Stampa", 0));
        pushButton->setText(QApplication::translate("HCalcost", "Prodotti", 0));
        pbClose->setText(QApplication::translate("HCalcost", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HCalcost: public Ui_HCalcost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCALCOST_H