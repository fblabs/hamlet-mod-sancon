/********************************************************************************
** Form generated from reading UI file 'hcalcost.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCALCOST_H
#define UI_HCALCOST_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCalcost
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cbClients;
    QListView *lvProdotti;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_15;
    QTableView *tvComponenti;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_14;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *leDaprodurre;
    QLabel *label_10;
    QLineEdit *leQuantitaProdotto;
    QLineEdit *leCostoProdotto;
    QLineEdit *leCostoFisso;
    QLabel *label_11;
    QLabel *label_16;
    QLabel *label_12;
    QLineEdit *leCostoProduzione;
    QLineEdit *leCostounitaricetta;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_7;
    QComboBox *cbVasi;
    QLineEdit *leQtVasi;
    QLineEdit *leCostoVasi;
    QLabel *label_8;
    QComboBox *cbTappi;
    QLineEdit *leQtTappi;
    QLineEdit *leCostoTappi;
    QLabel *label_6;
    QComboBox *cbCartoni;
    QLabel *label_17;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_9;
    QLineEdit *leCostoEtichette;
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
            HCalcost->setObjectName(QString::fromUtf8("HCalcost"));
        HCalcost->setWindowModality(Qt::NonModal);
        HCalcost->resize(1259, 869);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Cash-register-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HCalcost->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HCalcost);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(HCalcost);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label);

        cbClients = new QComboBox(HCalcost);
        cbClients->setObjectName(QString::fromUtf8("cbClients"));
        cbClients->setMinimumSize(QSize(300, 0));
        cbClients->setEditable(true);
        cbClients->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbClients);


        verticalLayout->addLayout(horizontalLayout_2);

        lvProdotti = new QListView(HCalcost);
        lvProdotti->setObjectName(QString::fromUtf8("lvProdotti"));

        verticalLayout->addWidget(lvProdotti);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_15 = new QLabel(HCalcost);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font;
        font.setBold(true);
        label_15->setFont(font);

        verticalLayout_3->addWidget(label_15);

        tvComponenti = new QTableView(HCalcost);
        tvComponenti->setObjectName(QString::fromUtf8("tvComponenti"));
        tvComponenti->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvComponenti->setSelectionMode(QAbstractItemView::SingleSelection);
        tvComponenti->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvComponenti->horizontalHeader()->setCascadingSectionResizes(true);
        tvComponenti->horizontalHeader()->setStretchLastSection(true);
        tvComponenti->verticalHeader()->setVisible(false);
        tvComponenti->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(tvComponenti);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_14 = new QLabel(HCalcost);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        verticalLayout_2->addWidget(label_14);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(HCalcost);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        leDaprodurre = new QLineEdit(HCalcost);
        leDaprodurre->setObjectName(QString::fromUtf8("leDaprodurre"));

        gridLayout_2->addWidget(leDaprodurre, 3, 1, 1, 1);

        label_10 = new QLabel(HCalcost);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        leQuantitaProdotto = new QLineEdit(HCalcost);
        leQuantitaProdotto->setObjectName(QString::fromUtf8("leQuantitaProdotto"));
        leQuantitaProdotto->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leQuantitaProdotto->setReadOnly(true);

        gridLayout_2->addWidget(leQuantitaProdotto, 0, 1, 1, 1);

        leCostoProdotto = new QLineEdit(HCalcost);
        leCostoProdotto->setObjectName(QString::fromUtf8("leCostoProdotto"));
        leCostoProdotto->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leCostoProdotto->setReadOnly(true);

        gridLayout_2->addWidget(leCostoProdotto, 1, 1, 1, 1);

        leCostoFisso = new QLineEdit(HCalcost);
        leCostoFisso->setObjectName(QString::fromUtf8("leCostoFisso"));

        gridLayout_2->addWidget(leCostoFisso, 5, 1, 1, 1);

        label_11 = new QLabel(HCalcost);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label_16 = new QLabel(HCalcost);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 5, 0, 1, 1);

        label_12 = new QLabel(HCalcost);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 4, 0, 1, 1);

        leCostoProduzione = new QLineEdit(HCalcost);
        leCostoProduzione->setObjectName(QString::fromUtf8("leCostoProduzione"));
        leCostoProduzione->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        gridLayout_2->addWidget(leCostoProduzione, 4, 1, 1, 1);

        leCostounitaricetta = new QLineEdit(HCalcost);
        leCostounitaricetta->setObjectName(QString::fromUtf8("leCostounitaricetta"));
        leCostounitaricetta->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leCostounitaricetta->setReadOnly(true);

        gridLayout_2->addWidget(leCostounitaricetta, 2, 1, 1, 1);

        label_4 = new QLabel(HCalcost);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(HCalcost);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 6);

        label_7 = new QLabel(HCalcost);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 2);

        cbVasi = new QComboBox(HCalcost);
        cbVasi->setObjectName(QString::fromUtf8("cbVasi"));
        cbVasi->setEditable(true);
        cbVasi->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(cbVasi, 1, 2, 1, 3);

        leQtVasi = new QLineEdit(HCalcost);
        leQtVasi->setObjectName(QString::fromUtf8("leQtVasi"));

        gridLayout->addWidget(leQtVasi, 1, 5, 1, 2);

        leCostoVasi = new QLineEdit(HCalcost);
        leCostoVasi->setObjectName(QString::fromUtf8("leCostoVasi"));

        gridLayout->addWidget(leCostoVasi, 1, 7, 1, 2);

        label_8 = new QLabel(HCalcost);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 2);

        cbTappi = new QComboBox(HCalcost);
        cbTappi->setObjectName(QString::fromUtf8("cbTappi"));
        cbTappi->setEditable(true);
        cbTappi->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(cbTappi, 2, 2, 1, 3);

        leQtTappi = new QLineEdit(HCalcost);
        leQtTappi->setObjectName(QString::fromUtf8("leQtTappi"));

        gridLayout->addWidget(leQtTappi, 2, 5, 1, 2);

        leCostoTappi = new QLineEdit(HCalcost);
        leCostoTappi->setObjectName(QString::fromUtf8("leCostoTappi"));

        gridLayout->addWidget(leCostoTappi, 2, 7, 1, 2);

        label_6 = new QLabel(HCalcost);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        cbCartoni = new QComboBox(HCalcost);
        cbCartoni->setObjectName(QString::fromUtf8("cbCartoni"));
        cbCartoni->setInsertPolicy(QComboBox::NoInsert);
        cbCartoni->setModelColumn(1);

        gridLayout->addWidget(cbCartoni, 3, 1, 1, 3);

        label_17 = new QLabel(HCalcost);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 3, 4, 1, 2);

        lineEdit_2 = new QLineEdit(HCalcost);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 6, 1, 2);

        label_5 = new QLabel(HCalcost);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 8, 1, 1);

        lineEdit = new QLineEdit(HCalcost);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 9, 1, 1);

        label_9 = new QLabel(HCalcost);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(label_9, 4, 0, 1, 3);

        leCostoEtichette = new QLineEdit(HCalcost);
        leCostoEtichette->setObjectName(QString::fromUtf8("leCostoEtichette"));

        gridLayout->addWidget(leCostoEtichette, 4, 3, 1, 3);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(HCalcost);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_3->addWidget(label_13);

        leCostoTotale = new QLineEdit(HCalcost);
        leCostoTotale->setObjectName(QString::fromUtf8("leCostoTotale"));

        horizontalLayout_3->addWidget(leCostoTotale);

        pbCalcola = new QPushButton(HCalcost);
        pbCalcola->setObjectName(QString::fromUtf8("pbCalcola"));

        horizontalLayout_3->addWidget(pbCalcola);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbPrint = new QPushButton(HCalcost);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        pbPrint->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPrint);

        pushButton = new QPushButton(HCalcost);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pbClose = new QPushButton(HCalcost);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(HCalcost);

        QMetaObject::connectSlotsByName(HCalcost);
    } // setupUi

    void retranslateUi(QWidget *HCalcost)
    {
        HCalcost->setWindowTitle(QCoreApplication::translate("HCalcost", "Calcolo costi", nullptr));
        label->setText(QCoreApplication::translate("HCalcost", "Clienti:", nullptr));
        label_15->setText(QCoreApplication::translate("HCalcost", "Componenti prodotto ", nullptr));
        label_14->setText(QCoreApplication::translate("HCalcost", "Costo prodotto finito", nullptr));
        label_2->setText(QCoreApplication::translate("HCalcost", "Costo Ricetta (\342\202\254)", nullptr));
        label_10->setText(QCoreApplication::translate("HCalcost", "Quantit\303\240 ricetta (Kg)", nullptr));
        label_11->setText(QCoreApplication::translate("HCalcost", "Formato (Kg):", nullptr));
        label_16->setText(QCoreApplication::translate("HCalcost", "Costo fisso(\342\202\254)", nullptr));
        label_12->setText(QCoreApplication::translate("HCalcost", "Costo prodotto(\342\202\254)", nullptr));
        label_4->setText(QCoreApplication::translate("HCalcost", "Costo per kg. (\342\202\254)", nullptr));
        label_3->setText(QCoreApplication::translate("HCalcost", "Costo confezionamento (vasi - tappi)", nullptr));
        label_7->setText(QCoreApplication::translate("HCalcost", "Costo vasi (\342\202\254)", nullptr));
        leQtVasi->setText(QCoreApplication::translate("HCalcost", "1", nullptr));
        leQtVasi->setPlaceholderText(QCoreApplication::translate("HCalcost", "numero vasi", nullptr));
        label_8->setText(QCoreApplication::translate("HCalcost", "Costo tappi (\342\202\254)", nullptr));
        leQtTappi->setText(QCoreApplication::translate("HCalcost", "1", nullptr));
        leQtTappi->setPlaceholderText(QCoreApplication::translate("HCalcost", "numero tappi", nullptr));
        label_6->setText(QCoreApplication::translate("HCalcost", "Cartoni:", nullptr));
        label_17->setText(QCoreApplication::translate("HCalcost", "Costo cartone", nullptr));
        label_5->setText(QCoreApplication::translate("HCalcost", "N. vasi cartone", nullptr));
        label_9->setText(QCoreApplication::translate("HCalcost", "Costo Etichette (\342\202\254)", nullptr));
        label_13->setText(QCoreApplication::translate("HCalcost", "Costo totale produzione", nullptr));
        pbCalcola->setText(QCoreApplication::translate("HCalcost", "Calcola", nullptr));
        pbPrint->setText(QCoreApplication::translate("HCalcost", "Stampa", nullptr));
        pushButton->setText(QCoreApplication::translate("HCalcost", "Prodotti", nullptr));
        pbClose->setText(QCoreApplication::translate("HCalcost", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HCalcost: public Ui_HCalcost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCALCOST_H
