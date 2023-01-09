/********************************************************************************
** Form generated from reading UI file 'hlotti.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOTTI_H
#define UI_HLOTTI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_HLotti
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *leLottoRaw;
    QLabel *label_4;
    QLineEdit *leOperatore;
    QCheckBox *chTipoProdotti;
    QComboBox *cbTipoProd;
    QCheckBox *chbT;
    QComboBox *cbTipiLot;
    QCheckBox *chbP;
    QComboBox *cbProdotti;
    QCheckBox *chBio;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateEdit *datadal;
    QLabel *label_2;
    QDateEdit *dataal;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbRefresh;
    QTableView *twLots;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pbDeleteLot;
    QPushButton *pushButton;
    QPushButton *pbScadenze;
    QCheckBox *cbPdf;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HLotti)
    {
        if (HLotti->objectName().isEmpty())
            HLotti->setObjectName(QString::fromUtf8("HLotti"));
        HLotti->setWindowModality(Qt::NonModal);
        HLotti->resize(1232, 664);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Cube.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HLotti->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HLotti);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(HLotti);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        leLottoRaw = new QLineEdit(HLotti);
        leLottoRaw->setObjectName(QString::fromUtf8("leLottoRaw"));
        leLottoRaw->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(leLottoRaw);

        label_4 = new QLabel(HLotti);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        leOperatore = new QLineEdit(HLotti);
        leOperatore->setObjectName(QString::fromUtf8("leOperatore"));
        leOperatore->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(leOperatore);

        chTipoProdotti = new QCheckBox(HLotti);
        chTipoProdotti->setObjectName(QString::fromUtf8("chTipoProdotti"));
        chTipoProdotti->setMinimumSize(QSize(80, 0));
        chTipoProdotti->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(chTipoProdotti);

        cbTipoProd = new QComboBox(HLotti);
        cbTipoProd->setObjectName(QString::fromUtf8("cbTipoProd"));
        cbTipoProd->setEnabled(false);

        horizontalLayout_2->addWidget(cbTipoProd);

        chbT = new QCheckBox(HLotti);
        chbT->setObjectName(QString::fromUtf8("chbT"));
        chbT->setMinimumSize(QSize(66, 0));
        chbT->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(chbT);

        cbTipiLot = new QComboBox(HLotti);
        cbTipiLot->setObjectName(QString::fromUtf8("cbTipiLot"));
        cbTipiLot->setEnabled(false);

        horizontalLayout_2->addWidget(cbTipiLot);

        chbP = new QCheckBox(HLotti);
        chbP->setObjectName(QString::fromUtf8("chbP"));
        chbP->setMaximumSize(QSize(66, 16777215));

        horizontalLayout_2->addWidget(chbP);

        cbProdotti = new QComboBox(HLotti);
        cbProdotti->setObjectName(QString::fromUtf8("cbProdotti"));
        cbProdotti->setEnabled(false);
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbProdotti);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        chBio = new QCheckBox(HLotti);
        chBio->setObjectName(QString::fromUtf8("chBio"));

        horizontalLayout_4->addWidget(chBio);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(HLotti);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_3->addWidget(label);

        datadal = new QDateEdit(HLotti);
        datadal->setObjectName(QString::fromUtf8("datadal"));
        datadal->setCalendarPopup(true);

        horizontalLayout_3->addWidget(datadal);

        label_2 = new QLabel(HLotti);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_3->addWidget(label_2);

        dataal = new QDateEdit(HLotti);
        dataal->setObjectName(QString::fromUtf8("dataal"));
        dataal->setCalendarPopup(true);

        horizontalLayout_3->addWidget(dataal);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        pbRefresh = new QPushButton(HLotti);
        pbRefresh->setObjectName(QString::fromUtf8("pbRefresh"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbRefresh->setIcon(icon1);

        horizontalLayout_4->addWidget(pbRefresh);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        twLots = new QTableView(HLotti);
        twLots->setObjectName(QString::fromUtf8("twLots"));
        twLots->setEnabled(true);
        twLots->setFrameShape(QFrame::StyledPanel);
        twLots->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        twLots->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twLots->setAlternatingRowColors(true);
        twLots->setSelectionMode(QAbstractItemView::SingleSelection);
        twLots->setSelectionBehavior(QAbstractItemView::SelectRows);
        twLots->setSortingEnabled(true);
        twLots->horizontalHeader()->setCascadingSectionResizes(true);
        twLots->verticalHeader()->setVisible(false);
        twLots->verticalHeader()->setCascadingSectionResizes(true);
        twLots->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_2->addWidget(twLots);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_7 = new QPushButton(HLotti);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Wood-4-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_4 = new QPushButton(HLotti);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_4);

        pbDeleteLot = new QPushButton(HLotti);
        pbDeleteLot->setObjectName(QString::fromUtf8("pbDeleteLot"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbDeleteLot->setIcon(icon4);
        pbDeleteLot->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbDeleteLot);

        pushButton = new QPushButton(HLotti);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pbScadenze = new QPushButton(HLotti);
        pbScadenze->setObjectName(QString::fromUtf8("pbScadenze"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Calendar.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbScadenze->setIcon(icon6);
        pbScadenze->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbScadenze);

        cbPdf = new QCheckBox(HLotti);
        cbPdf->setObjectName(QString::fromUtf8("cbPdf"));
        cbPdf->setMaximumSize(QSize(100, 16777215));
        cbPdf->setChecked(true);

        horizontalLayout->addWidget(cbPdf);

        pushButton_6 = new QPushButton(HLotti);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon7);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(HLotti);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon8);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HLotti);

        QMetaObject::connectSlotsByName(HLotti);
    } // setupUi

    void retranslateUi(QWidget *HLotti)
    {
        HLotti->setWindowTitle(QCoreApplication::translate("HLotti", "Lotti", nullptr));
        label_3->setText(QCoreApplication::translate("HLotti", "Lotto:", nullptr));
        label_4->setText(QCoreApplication::translate("HLotti", "Operatore:", nullptr));
        chTipoProdotti->setText(QCoreApplication::translate("HLotti", "Tipo prodotto:", nullptr));
        chbT->setText(QCoreApplication::translate("HLotti", "Tipo lotto:", nullptr));
        chbP->setText(QCoreApplication::translate("HLotti", "Prodotto:", nullptr));
        chBio->setText(QCoreApplication::translate("HLotti", "Bio", nullptr));
        label->setText(QCoreApplication::translate("HLotti", "Dal:", nullptr));
        label_2->setText(QCoreApplication::translate("HLotti", "Al:", nullptr));
        pbRefresh->setText(QCoreApplication::translate("HLotti", "Aggiorna", nullptr));
        pushButton_7->setText(QCoreApplication::translate("HLotti", "Informazioni su lotto", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HLotti", "Nuova operazione", nullptr));
        pbDeleteLot->setText(QCoreApplication::translate("HLotti", "Elimina Lotto", nullptr));
        pushButton->setText(QCoreApplication::translate("HLotti", "Scarico Packages", nullptr));
        pbScadenze->setText(QCoreApplication::translate("HLotti", "Scadenze", nullptr));
        cbPdf->setText(QCoreApplication::translate("HLotti", "Stampa su pdf", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HLotti", "Stampa", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HLotti", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLotti: public Ui_HLotti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOTTI_H
