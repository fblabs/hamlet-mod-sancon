/********************************************************************************
** Form generated from reading UI file 'hproduction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRODUCTION_H
#define UI_HPRODUCTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QComboBox *cbClienti;
    QLabel *label;
    QLineEdit *leOperatore;
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
    QVBoxLayout *verticalLayout_5;
    QLabel *lbRicetta;
    QTextBrowser *textBrowser;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QPlainTextEdit *tNote;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QPushButton *pbPreferredLots;
    QPushButton *pushButton_3;
    QPushButton *pushButton_11;
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
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HProduction)
    {
        if (HProduction->objectName().isEmpty())
            HProduction->setObjectName(QString::fromUtf8("HProduction"));
        HProduction->setWindowModality(Qt::NonModal);
        HProduction->setEnabled(true);
        HProduction->resize(1025, 605);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Gears.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HProduction->setWindowIcon(icon);
        verticalLayout_6 = new QVBoxLayout(HProduction);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(HProduction);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(65, 0));
        label_8->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(label_8);

        cbClienti = new QComboBox(HProduction);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setMinimumSize(QSize(150, 0));
        QFont font;
        font.setPointSize(12);
        cbClienti->setFont(font);
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);
        cbClienti->setModelColumn(1);

        horizontalLayout_6->addWidget(cbClienti);


        verticalLayout->addLayout(horizontalLayout_6);

        label = new QLabel(HProduction);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        leOperatore = new QLineEdit(HProduction);
        leOperatore->setObjectName(QString::fromUtf8("leOperatore"));
        leOperatore->setClearButtonEnabled(true);

        verticalLayout->addWidget(leOperatore);

        checkBox = new QCheckBox(HProduction);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        lvSubclienti = new QListView(HProduction);
        lvSubclienti->setObjectName(QString::fromUtf8("lvSubclienti"));
        lvSubclienti->setMaximumSize(QSize(16777215, 120));
        lvSubclienti->setFont(font);

        verticalLayout->addWidget(lvSubclienti);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_6 = new QLabel(HProduction);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        cbTipoLotto = new QComboBox(HProduction);
        cbTipoLotto->setObjectName(QString::fromUtf8("cbTipoLotto"));
        cbTipoLotto->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbTipoLotto);


        verticalLayout->addLayout(formLayout_3);

        lvRicette = new QListView(HProduction);
        lvRicette->setObjectName(QString::fromUtf8("lvRicette"));
        lvRicette->setMaximumSize(QSize(16777215, 16777215));
        lvRicette->setFont(font);
        lvRicette->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(lvRicette);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));

        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(HProduction);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));

        verticalLayout_2->addLayout(formLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pbAddLottoFuoriRicetta = new QPushButton(HProduction);
        pbAddLottoFuoriRicetta->setObjectName(QString::fromUtf8("pbAddLottoFuoriRicetta"));
        pbAddLottoFuoriRicetta->setIcon(icon1);

        horizontalLayout_4->addWidget(pbAddLottoFuoriRicetta);

        pbAnnulla = new QPushButton(HProduction);
        pbAnnulla->setObjectName(QString::fromUtf8("pbAnnulla"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Counterclockwise-arrow64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAnnulla->setIcon(icon2);

        horizontalLayout_4->addWidget(pbAnnulla);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_5 = new QPushButton(HProduction);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(130, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Play64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(HProduction);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(130, 0));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lbRicetta = new QLabel(HProduction);
        lbRicetta->setObjectName(QString::fromUtf8("lbRicetta"));
        lbRicetta->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        verticalLayout_5->addWidget(lbRicetta);

        textBrowser = new QTextBrowser(HProduction);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(16777215, 120));
        QFont font1;
        font1.setPointSize(10);
        textBrowser->setFont(font1);

        verticalLayout_5->addWidget(textBrowser);

        tableView = new QTableView(HProduction);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->setFont(font1);
        tableView->setAutoScroll(false);
        tableView->setEditTriggers(QAbstractItemView::EditKeyPressed);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(tableView);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_10 = new QLabel(HProduction);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(label_10);

        tNote = new QPlainTextEdit(HProduction);
        tNote->setObjectName(QString::fromUtf8("tNote"));
        tNote->setMaximumSize(QSize(16777215, 50));
        tNote->setFont(font1);

        verticalLayout_3->addWidget(tNote);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_7 = new QPushButton(HProduction);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Download.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon5);
        pushButton_7->setIconSize(QSize(32, 32));
        pushButton_7->setCheckable(false);

        horizontalLayout->addWidget(pushButton_7);

        pushButton_2 = new QPushButton(HProduction);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pbPreferredLots = new QPushButton(HProduction);
        pbPreferredLots->setObjectName(QString::fromUtf8("pbPreferredLots"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/Center64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPreferredLots->setIcon(icon7);
        pbPreferredLots->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbPreferredLots);

        pushButton_3 = new QPushButton(HProduction);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon8);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_11 = new QPushButton(HProduction);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/Arrow-Left.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon9);
        pushButton_11->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_11);


        verticalLayout_5->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(HProduction);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_5 = new QLabel(HProduction);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        leNuovoLot = new QLineEdit(HProduction);
        leNuovoLot->setObjectName(QString::fromUtf8("leNuovoLot"));
        leNuovoLot->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leNuovoLot->setReadOnly(true);

        gridLayout->addWidget(leNuovoLot, 0, 1, 1, 1);

        leQuaRic = new QLineEdit(HProduction);
        leQuaRic->setObjectName(QString::fromUtf8("leQuaRic"));
        leQuaRic->setEnabled(true);
        leQuaRic->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leQuaRic->setReadOnly(true);

        gridLayout->addWidget(leQuaRic, 3, 1, 1, 1);

        label_9 = new QLabel(HProduction);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        dateEdit = new QDateEdit(HProduction);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 1, 1, 1, 1);

        label_7 = new QLabel(HProduction);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        cbUm = new QComboBox(HProduction);
        cbUm->setObjectName(QString::fromUtf8("cbUm"));

        gridLayout->addWidget(cbUm, 2, 1, 1, 1);

        label_11 = new QLabel(HProduction);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        leQtyTotal = new QLineEdit(HProduction);
        leQtyTotal->setObjectName(QString::fromUtf8("leQtyTotal"));
        leQtyTotal->setClearButtonEnabled(true);

        gridLayout->addWidget(leQtyTotal, 4, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_2 = new QCheckBox(HProduction);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setMinimumSize(QSize(145, 0));
        checkBox_2->setMaximumSize(QSize(145, 16777215));

        horizontalLayout_2->addWidget(checkBox_2);

        pushButton_10 = new QPushButton(HProduction);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setEnabled(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon10);
        pushButton_10->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_10);

        pushButton_4 = new QPushButton(HProduction);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon11);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_6->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(pushButton, checkBox);
        QWidget::setTabOrder(checkBox, pbAnnulla);
        QWidget::setTabOrder(pbAnnulla, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_6);
        QWidget::setTabOrder(pushButton_6, leQtyTotal);
        QWidget::setTabOrder(leQtyTotal, cbTipoLotto);
        QWidget::setTabOrder(cbTipoLotto, tableView);
        QWidget::setTabOrder(tableView, pushButton_7);
        QWidget::setTabOrder(pushButton_7, tNote);
        QWidget::setTabOrder(tNote, leNuovoLot);
        QWidget::setTabOrder(leNuovoLot, leQuaRic);
        QWidget::setTabOrder(leQuaRic, dateEdit);
        QWidget::setTabOrder(dateEdit, cbUm);
        QWidget::setTabOrder(cbUm, lvSubclienti);
        QWidget::setTabOrder(lvSubclienti, cbClienti);
        QWidget::setTabOrder(cbClienti, leOperatore);
        QWidget::setTabOrder(leOperatore, pushButton_4);
        QWidget::setTabOrder(pushButton_4, textBrowser);
        QWidget::setTabOrder(textBrowser, pbAddLottoFuoriRicetta);
        QWidget::setTabOrder(pbAddLottoFuoriRicetta, lvRicette);

        retranslateUi(HProduction);

        QMetaObject::connectSlotsByName(HProduction);
    } // setupUi

    void retranslateUi(QWidget *HProduction)
    {
        HProduction->setWindowTitle(QCoreApplication::translate("HProduction", "Produzione", nullptr));
        label_8->setText(QCoreApplication::translate("HProduction", "Clienti", nullptr));
        label->setText(QCoreApplication::translate("HProduction", "Operatore:", nullptr));
        checkBox->setText(QCoreApplication::translate("HProduction", "mostra subclienti", nullptr));
        label_6->setText(QCoreApplication::translate("HProduction", "tipo di lotto:", nullptr));
        pushButton->setText(QCoreApplication::translate("HProduction", "Aggiungi", nullptr));
        pbAddLottoFuoriRicetta->setText(QCoreApplication::translate("HProduction", "Aggiungi", nullptr));
        pbAnnulla->setText(QCoreApplication::translate("HProduction", "Annulla", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HProduction", "inizia", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HProduction", "Annulla", nullptr));
        lbRicetta->setText(QString());
        label_10->setText(QCoreApplication::translate("HProduction", "Note produzione:", nullptr));
        pushButton_7->setText(QCoreApplication::translate("HProduction", "Aggiungi lotto fuori ricetta", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HProduction", "Rimuovi riga", nullptr));
        pbPreferredLots->setText(QCoreApplication::translate("HProduction", "Mostra Lotti predefinti", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HProduction", "Salva", nullptr));
        pushButton_11->setText(QCoreApplication::translate("HProduction", "Reset Ricetta", nullptr));
        label_3->setText(QCoreApplication::translate("HProduction", "Quantit\303\240 totale", nullptr));
        label_5->setText(QCoreApplication::translate("HProduction", "Nuovo lotto:", nullptr));
        label_9->setText(QCoreApplication::translate("HProduction", "Scadenza:", nullptr));
        label_7->setText(QCoreApplication::translate("HProduction", "Unit\303\240 di misura:", nullptr));
        label_11->setText(QCoreApplication::translate("HProduction", "Quantit\303\240 ricetta:", nullptr));
        checkBox_2->setText(QCoreApplication::translate("HProduction", "Stampa ricetta originale", nullptr));
        pushButton_10->setText(QCoreApplication::translate("HProduction", "Stampa", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HProduction", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HProduction: public Ui_HProduction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRODUCTION_H
