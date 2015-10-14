/********************************************************************************
** Form generated from reading UI file 'hproduction.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRODUCTION_H
#define UI_HPRODUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HProduction
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QComboBox *cbClienti;
    QCheckBox *checkBox;
    QListView *lvSubclienti;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QComboBox *cbTipoLotto;
    QListView *lvRicette;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QComboBox *cbQuanti;
    QListView *lvLastLots;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *leLotToadd;
    QLabel *label_4;
    QLineEdit *leqtytoAdd;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbAddLottoFuoriRicetta;
    QPushButton *pbAnnulla;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLineEdit *leLotToEdit;
    QPushButton *pushButton_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbRicetta;
    QTextBrowser *textBrowser;
    QTableView *tableView;
    QLabel *label_10;
    QPlainTextEdit *tNote;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *leNuovoLot;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QLabel *label_7;
    QComboBox *cbUm;
    QLabel *label_3;
    QLineEdit *leQtyTotal;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HProduction)
    {
        if (HProduction->objectName().isEmpty())
            HProduction->setObjectName(QStringLiteral("HProduction"));
        HProduction->setWindowModality(Qt::ApplicationModal);
        HProduction->resize(1287, 795);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Gears.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HProduction->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HProduction);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(HProduction);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(65, 0));
        label_8->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(label_8);

        cbClienti = new QComboBox(HProduction);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setMinimumSize(QSize(150, 0));
        QFont font;
        font.setPointSize(12);
        cbClienti->setFont(font);
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);
        cbClienti->setModelColumn(1);

        horizontalLayout_6->addWidget(cbClienti);


        verticalLayout->addLayout(horizontalLayout_6);

        checkBox = new QCheckBox(HProduction);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        lvSubclienti = new QListView(HProduction);
        lvSubclienti->setObjectName(QStringLiteral("lvSubclienti"));
        lvSubclienti->setMaximumSize(QSize(16777215, 120));
        lvSubclienti->setFont(font);

        verticalLayout->addWidget(lvSubclienti);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_6 = new QLabel(HProduction);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        cbTipoLotto = new QComboBox(HProduction);
        cbTipoLotto->setObjectName(QStringLiteral("cbTipoLotto"));
        cbTipoLotto->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbTipoLotto);


        verticalLayout->addLayout(formLayout_3);

        lvRicette = new QListView(HProduction);
        lvRicette->setObjectName(QStringLiteral("lvRicette"));
        lvRicette->setFont(font);

        verticalLayout->addWidget(lvRicette);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(HProduction);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_8->addWidget(label);

        cbQuanti = new QComboBox(HProduction);
        cbQuanti->setObjectName(QStringLiteral("cbQuanti"));
        cbQuanti->setFont(font);

        horizontalLayout_8->addWidget(cbQuanti);


        verticalLayout->addLayout(horizontalLayout_8);

        lvLastLots = new QListView(HProduction);
        lvLastLots->setObjectName(QStringLiteral("lvLastLots"));
        lvLastLots->setFont(font);

        verticalLayout->addWidget(lvLastLots);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(HProduction);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_7 = new QPushButton(HProduction);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Download.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(32, 32));
        pushButton_7->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_2 = new QPushButton(HProduction);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(HProduction);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        leLotToadd = new QLineEdit(HProduction);
        leLotToadd->setObjectName(QStringLiteral("leLotToadd"));
        leLotToadd->setClearButtonEnabled(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leLotToadd);

        label_4 = new QLabel(HProduction);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        leqtytoAdd = new QLineEdit(HProduction);
        leqtytoAdd->setObjectName(QStringLiteral("leqtytoAdd"));
        leqtytoAdd->setClearButtonEnabled(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leqtytoAdd);


        verticalLayout_2->addLayout(formLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pbAddLottoFuoriRicetta = new QPushButton(HProduction);
        pbAddLottoFuoriRicetta->setObjectName(QStringLiteral("pbAddLottoFuoriRicetta"));

        horizontalLayout_4->addWidget(pbAddLottoFuoriRicetta);

        pbAnnulla = new QPushButton(HProduction);
        pbAnnulla->setObjectName(QStringLiteral("pbAnnulla"));

        horizontalLayout_4->addWidget(pbAnnulla);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_5 = new QPushButton(HProduction);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(130, 0));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Flag.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(HProduction);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(130, 0));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_6);

        leLotToEdit = new QLineEdit(HProduction);
        leLotToEdit->setObjectName(QStringLiteral("leLotToEdit"));

        horizontalLayout_5->addWidget(leLotToEdit);

        pushButton_9 = new QPushButton(HProduction);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_5->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lbRicetta = new QLabel(HProduction);
        lbRicetta->setObjectName(QStringLiteral("lbRicetta"));
        lbRicetta->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        verticalLayout_3->addWidget(lbRicetta);

        textBrowser = new QTextBrowser(HProduction);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMaximumSize(QSize(16777215, 120));
        QFont font1;
        font1.setPointSize(10);
        textBrowser->setFont(font1);

        verticalLayout_3->addWidget(textBrowser);

        tableView = new QTableView(HProduction);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(false);
        tableView->setFont(font1);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(tableView);

        label_10 = new QLabel(HProduction);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        tNote = new QPlainTextEdit(HProduction);
        tNote->setObjectName(QStringLiteral("tNote"));
        tNote->setMaximumSize(QSize(16777215, 50));
        tNote->setFont(font1);

        verticalLayout_3->addWidget(tNote);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(HProduction);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        leNuovoLot = new QLineEdit(HProduction);
        leNuovoLot->setObjectName(QStringLiteral("leNuovoLot"));
        leNuovoLot->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leNuovoLot->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leNuovoLot);

        label_9 = new QLabel(HProduction);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        dateEdit = new QDateEdit(HProduction);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dateEdit);

        label_7 = new QLabel(HProduction);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        cbUm = new QComboBox(HProduction);
        cbUm->setObjectName(QStringLiteral("cbUm"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cbUm);

        label_3 = new QLabel(HProduction);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        leQtyTotal = new QLineEdit(HProduction);
        leQtyTotal->setObjectName(QStringLiteral("leQtyTotal"));

        formLayout->setWidget(3, QFormLayout::FieldRole, leQtyTotal);


        verticalLayout_3->addLayout(formLayout);

        pushButton_8 = new QPushButton(HProduction);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon6);

        verticalLayout_3->addWidget(pushButton_8);

        pushButton_10 = new QPushButton(HProduction);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setEnabled(false);

        verticalLayout_3->addWidget(pushButton_10);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_3 = new QPushButton(HProduction);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon7);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(HProduction);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon8);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(HProduction);

        QMetaObject::connectSlotsByName(HProduction);
    } // setupUi

    void retranslateUi(QWidget *HProduction)
    {
        HProduction->setWindowTitle(QApplication::translate("HProduction", "Produzione", 0));
        label_8->setText(QApplication::translate("HProduction", "Clienti", 0));
        checkBox->setText(QApplication::translate("HProduction", "mostra subclienti", 0));
        label_6->setText(QApplication::translate("HProduction", "tipo di lotto:", 0));
        label->setText(QApplication::translate("HProduction", "mostra", 0));
        pushButton->setText(QApplication::translate("HProduction", "Aggiungi", 0));
        pushButton_7->setText(QApplication::translate("HProduction", "Aggiungi lotto fuori ricetta", 0));
        pushButton_2->setText(QApplication::translate("HProduction", "Rimuovi", 0));
        label_2->setText(QApplication::translate("HProduction", "Lotto da aggiungere:", 0));
        label_4->setText(QApplication::translate("HProduction", "Quantit\303\240 da aggiungere:", 0));
        pbAddLottoFuoriRicetta->setText(QApplication::translate("HProduction", "Aggiungi", 0));
        pbAnnulla->setText(QApplication::translate("HProduction", "Annulla", 0));
        pushButton_5->setText(QApplication::translate("HProduction", "inizia", 0));
        pushButton_6->setText(QApplication::translate("HProduction", "Annulla", 0));
        pushButton_9->setText(QApplication::translate("HProduction", "Modifica Lotto", 0));
        lbRicetta->setText(QString());
        label_10->setText(QApplication::translate("HProduction", "Note:", 0));
        label_5->setText(QApplication::translate("HProduction", "Nuovo lotto:", 0));
        label_9->setText(QApplication::translate("HProduction", "Scadenza:", 0));
        label_7->setText(QApplication::translate("HProduction", "Unit\303\240 di misura:", 0));
        label_3->setText(QApplication::translate("HProduction", "Quantit\303\240 totale", 0));
        pushButton_8->setText(QApplication::translate("HProduction", "Stampa Ricetta", 0));
        pushButton_10->setText(QApplication::translate("HProduction", "Stampa Produzione", 0));
        pushButton_3->setText(QApplication::translate("HProduction", "Salva", 0));
        pushButton_4->setText(QApplication::translate("HProduction", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HProduction: public Ui_HProduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODUCTION_H
