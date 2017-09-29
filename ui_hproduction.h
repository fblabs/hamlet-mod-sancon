/********************************************************************************
** Form generated from reading UI file 'hproduction.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QGridLayout>
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
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbAddLottoFuoriRicetta;
    QPushButton *pbAnnulla;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbRicetta;
    QTextBrowser *textBrowser;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QLabel *label_10;
    QPlainTextEdit *tNote;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *leNuovoLot;
    QLineEdit *leQuaRic;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QLabel *label_7;
    QComboBox *cbUm;
    QLabel *label_11;
    QLineEdit *leQtyTotal;
    QPushButton *pushButton_11;
    QPushButton *pushButton_8;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HProduction)
    {
        if (HProduction->objectName().isEmpty())
            HProduction->setObjectName(QStringLiteral("HProduction"));
        HProduction->setWindowModality(Qt::NonModal);
        HProduction->setEnabled(true);
        HProduction->resize(1025, 697);
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

        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(HProduction);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));

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
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Flag.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(HProduction);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(130, 0));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_6);


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
        tableView->setEditTriggers(QAbstractItemView::EditKeyPressed);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableView);

        pushButton_2 = new QPushButton(HProduction);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(32, 32));

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_7 = new QPushButton(HProduction);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Download.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon5);
        pushButton_7->setIconSize(QSize(32, 32));
        pushButton_7->setCheckable(false);

        verticalLayout_3->addWidget(pushButton_7);

        label_10 = new QLabel(HProduction);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        tNote = new QPlainTextEdit(HProduction);
        tNote->setObjectName(QStringLiteral("tNote"));
        tNote->setMaximumSize(QSize(16777215, 50));
        tNote->setFont(font1);

        verticalLayout_3->addWidget(tNote);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(HProduction);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_5 = new QLabel(HProduction);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        leNuovoLot = new QLineEdit(HProduction);
        leNuovoLot->setObjectName(QStringLiteral("leNuovoLot"));
        leNuovoLot->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leNuovoLot->setReadOnly(true);

        gridLayout->addWidget(leNuovoLot, 0, 1, 1, 1);

        leQuaRic = new QLineEdit(HProduction);
        leQuaRic->setObjectName(QStringLiteral("leQuaRic"));
        leQuaRic->setEnabled(true);
        leQuaRic->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leQuaRic->setReadOnly(true);

        gridLayout->addWidget(leQuaRic, 3, 1, 1, 1);

        label_9 = new QLabel(HProduction);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        dateEdit = new QDateEdit(HProduction);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 1, 1, 1, 1);

        label_7 = new QLabel(HProduction);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        cbUm = new QComboBox(HProduction);
        cbUm->setObjectName(QStringLiteral("cbUm"));

        gridLayout->addWidget(cbUm, 2, 1, 1, 1);

        label_11 = new QLabel(HProduction);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        leQtyTotal = new QLineEdit(HProduction);
        leQtyTotal->setObjectName(QStringLiteral("leQtyTotal"));

        gridLayout->addWidget(leQtyTotal, 4, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        pushButton_11 = new QPushButton(HProduction);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Arrow-Left.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon6);

        verticalLayout_3->addWidget(pushButton_11);

        pushButton_8 = new QPushButton(HProduction);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon7);

        verticalLayout_3->addWidget(pushButton_8);

        checkBox_2 = new QCheckBox(HProduction);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout_3->addWidget(checkBox_2);

        pushButton_10 = new QPushButton(HProduction);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setEnabled(true);
        pushButton_10->setIcon(icon7);

        verticalLayout_3->addWidget(pushButton_10);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_3 = new QPushButton(HProduction);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon8);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(HProduction);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon9);
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
        pushButton->setText(QApplication::translate("HProduction", "Aggiungi", 0));
        pbAddLottoFuoriRicetta->setText(QApplication::translate("HProduction", "Aggiungi", 0));
        pbAnnulla->setText(QApplication::translate("HProduction", "Annulla", 0));
        pushButton_5->setText(QApplication::translate("HProduction", "inizia", 0));
        pushButton_6->setText(QApplication::translate("HProduction", "Annulla", 0));
        lbRicetta->setText(QString());
        pushButton_2->setText(QApplication::translate("HProduction", "Rimuovi", 0));
        pushButton_7->setText(QApplication::translate("HProduction", "Aggiungi lotto fuori ricetta", 0));
        label_10->setText(QApplication::translate("HProduction", "Note:", 0));
        label_3->setText(QApplication::translate("HProduction", "Quantit\303\240 totale", 0));
        label_5->setText(QApplication::translate("HProduction", "Nuovo lotto:", 0));
        label_9->setText(QApplication::translate("HProduction", "Scadenza:", 0));
        label_7->setText(QApplication::translate("HProduction", "Unit\303\240 di misura:", 0));
        label_11->setText(QApplication::translate("HProduction", "Quantit\303\240 ricetta:", 0));
        pushButton_11->setText(QApplication::translate("HProduction", "Reset", 0));
        pushButton_8->setText(QApplication::translate("HProduction", "Stampa Ricetta", 0));
        checkBox_2->setText(QApplication::translate("HProduction", "Stampa ricetta originale", 0));
        pushButton_10->setText(QApplication::translate("HProduction", "Stampa", 0));
        pushButton_3->setText(QApplication::translate("HProduction", "Salva", 0));
        pushButton_4->setText(QApplication::translate("HProduction", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HProduction: public Ui_HProduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODUCTION_H
