/********************************************************************************
** Form generated from reading UI file 'hnuovaoperazione.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNUOVAOPERAZIONE_H
#define UI_HNUOVAOPERAZIONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HnuovaOperazione
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QComboBox *cbAnagrafica;
    QListView *lvProdotti;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QLineEdit *leProdotti;
    QLabel *label_2;
    QComboBox *cbtipo;
    QGridLayout *gridLayout_2;
    QLineEdit *leLotto;
    QLabel *label_10;
    QCheckBox *cbShowPackages;
    QFrame *line_2;
    QFormLayout *formLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *leLotfornitore;
    QLabel *label_7;
    QDateEdit *deScadenza;
    QCheckBox *cbScadenza;
    QLabel *label_3;
    QLineEdit *leQuantita;
    QLabel *label_5;
    QComboBox *cbUM;
    QLabel *label_11;
    QComboBox *cbTipoLot;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLineEdit *leNewLot;
    QLabel *label_14;
    QLineEdit *leProdottoCreato;
    QLabel *label_13;
    QLineEdit *ledispLottoforn;
    QLabel *label_8;
    QLineEdit *leScadenza;
    QFrame *line;
    QLabel *label_4;
    QPlainTextEdit *tNote;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HnuovaOperazione)
    {
        if (HnuovaOperazione->objectName().isEmpty())
            HnuovaOperazione->setObjectName(QStringLiteral("HnuovaOperazione"));
        HnuovaOperazione->setWindowModality(Qt::NonModal);
        HnuovaOperazione->resize(991, 652);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HnuovaOperazione->sizePolicy().hasHeightForWidth());
        HnuovaOperazione->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HnuovaOperazione->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HnuovaOperazione);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton = new QRadioButton(HnuovaOperazione);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(HnuovaOperazione);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        pushButton_3 = new QPushButton(HnuovaOperazione);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label = new QLabel(HnuovaOperazione);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        cbAnagrafica = new QComboBox(HnuovaOperazione);
        cbAnagrafica->setObjectName(QStringLiteral("cbAnagrafica"));
        cbAnagrafica->setEditable(true);
        cbAnagrafica->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout_2->addWidget(cbAnagrafica);

        lvProdotti = new QListView(HnuovaOperazione);
        lvProdotti->setObjectName(QStringLiteral("lvProdotti"));

        verticalLayout_2->addWidget(lvProdotti);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_12 = new QLabel(HnuovaOperazione);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout->addWidget(label_12);

        leProdotti = new QLineEdit(HnuovaOperazione);
        leProdotti->setObjectName(QStringLiteral("leProdotti"));

        horizontalLayout->addWidget(leProdotti);

        label_2 = new QLabel(HnuovaOperazione);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        cbtipo = new QComboBox(HnuovaOperazione);
        cbtipo->setObjectName(QStringLiteral("cbtipo"));

        horizontalLayout->addWidget(cbtipo);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        leLotto = new QLineEdit(HnuovaOperazione);
        leLotto->setObjectName(QStringLiteral("leLotto"));

        gridLayout_2->addWidget(leLotto, 1, 3, 1, 1);

        label_10 = new QLabel(HnuovaOperazione);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 1, 2, 1, 1);

        cbShowPackages = new QCheckBox(HnuovaOperazione);
        cbShowPackages->setObjectName(QStringLiteral("cbShowPackages"));
        cbShowPackages->setChecked(false);

        gridLayout_2->addWidget(cbShowPackages, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        line_2 = new QFrame(HnuovaOperazione);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(HnuovaOperazione);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        leLotfornitore = new QLineEdit(HnuovaOperazione);
        leLotfornitore->setObjectName(QStringLiteral("leLotfornitore"));

        gridLayout->addWidget(leLotfornitore, 0, 1, 1, 3);

        label_7 = new QLabel(HnuovaOperazione);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        deScadenza = new QDateEdit(HnuovaOperazione);
        deScadenza->setObjectName(QStringLiteral("deScadenza"));
        deScadenza->setCalendarPopup(true);

        gridLayout->addWidget(deScadenza, 1, 1, 1, 1);

        cbScadenza = new QCheckBox(HnuovaOperazione);
        cbScadenza->setObjectName(QStringLiteral("cbScadenza"));

        gridLayout->addWidget(cbScadenza, 1, 2, 1, 3);

        label_3 = new QLabel(HnuovaOperazione);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        leQuantita = new QLineEdit(HnuovaOperazione);
        leQuantita->setObjectName(QStringLiteral("leQuantita"));

        gridLayout->addWidget(leQuantita, 2, 1, 1, 2);

        label_5 = new QLabel(HnuovaOperazione);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        cbUM = new QComboBox(HnuovaOperazione);
        cbUM->setObjectName(QStringLiteral("cbUM"));

        gridLayout->addWidget(cbUM, 2, 4, 1, 1);

        label_11 = new QLabel(HnuovaOperazione);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        cbTipoLot = new QComboBox(HnuovaOperazione);
        cbTipoLot->setObjectName(QStringLiteral("cbTipoLot"));

        gridLayout->addWidget(cbTipoLot, 3, 1, 1, 1);


        formLayout_2->setLayout(1, QFormLayout::LabelRole, gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_9 = new QLabel(HnuovaOperazione);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        leNewLot = new QLineEdit(HnuovaOperazione);
        leNewLot->setObjectName(QStringLiteral("leNewLot"));
        leNewLot->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leNewLot->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, leNewLot);

        label_14 = new QLabel(HnuovaOperazione);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_14);

        leProdottoCreato = new QLineEdit(HnuovaOperazione);
        leProdottoCreato->setObjectName(QStringLiteral("leProdottoCreato"));
        leProdottoCreato->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leProdottoCreato->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, leProdottoCreato);

        label_13 = new QLabel(HnuovaOperazione);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_13);

        ledispLottoforn = new QLineEdit(HnuovaOperazione);
        ledispLottoforn->setObjectName(QStringLiteral("ledispLottoforn"));
        ledispLottoforn->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        ledispLottoforn->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, ledispLottoforn);

        label_8 = new QLabel(HnuovaOperazione);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        leScadenza = new QLineEdit(HnuovaOperazione);
        leScadenza->setObjectName(QStringLiteral("leScadenza"));
        leScadenza->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        leScadenza->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, leScadenza);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, formLayout);

        line = new QFrame(HnuovaOperazione);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, line);


        verticalLayout_2->addLayout(formLayout_2);

        label_4 = new QLabel(HnuovaOperazione);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        tNote = new QPlainTextEdit(HnuovaOperazione);
        tNote->setObjectName(QStringLiteral("tNote"));

        verticalLayout_2->addWidget(tNote);


        horizontalLayout_4->addLayout(verticalLayout_2);

        tableView = new QTableView(HnuovaOperazione);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        horizontalLayout_4->addWidget(tableView);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(HnuovaOperazione);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(HnuovaOperazione);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(HnuovaOperazione);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(tableView, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_4);

        retranslateUi(HnuovaOperazione);

        QMetaObject::connectSlotsByName(HnuovaOperazione);
    } // setupUi

    void retranslateUi(QWidget *HnuovaOperazione)
    {
        HnuovaOperazione->setWindowTitle(QApplication::translate("HnuovaOperazione", "Nuova operazione", 0));
        radioButton->setText(QApplication::translate("HnuovaOperazione", "Carico", 0));
        radioButton_2->setText(QApplication::translate("HnuovaOperazione", "Scarico", 0));
        pushButton_3->setText(QApplication::translate("HnuovaOperazione", "Nuova", 0));
        label->setText(QApplication::translate("HnuovaOperazione", "Fornitore", 0));
        label_12->setText(QApplication::translate("HnuovaOperazione", "Cerca prodotto:", 0));
        label_2->setText(QApplication::translate("HnuovaOperazione", "Ricerca per tipologia prodotti:", 0));
        label_10->setText(QApplication::translate("HnuovaOperazione", "Lotto", 0));
        cbShowPackages->setText(QApplication::translate("HnuovaOperazione", "Mostra solo Packages", 0));
        label_6->setText(QApplication::translate("HnuovaOperazione", "Lotto fornitore", 0));
        label_7->setText(QApplication::translate("HnuovaOperazione", "Scadenza:", 0));
        cbScadenza->setText(QApplication::translate("HnuovaOperazione", "Nessuna scadenza", 0));
        label_3->setText(QApplication::translate("HnuovaOperazione", "Quantit\303\240:", 0));
        label_5->setText(QApplication::translate("HnuovaOperazione", " U.M.", 0));
        label_11->setText(QApplication::translate("HnuovaOperazione", "Tipo", 0));
        label_9->setText(QApplication::translate("HnuovaOperazione", "Nuovo Lotto", 0));
        label_14->setText(QApplication::translate("HnuovaOperazione", "Prodotto:", 0));
        label_13->setText(QApplication::translate("HnuovaOperazione", "Lotto Fornitore:", 0));
        label_8->setText(QApplication::translate("HnuovaOperazione", "Scadenza:", 0));
        label_4->setText(QApplication::translate("HnuovaOperazione", "Note:", 0));
        pushButton->setText(QApplication::translate("HnuovaOperazione", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HnuovaOperazione", "Annulla", 0));
        pushButton_4->setText(QApplication::translate("HnuovaOperazione", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HnuovaOperazione: public Ui_HnuovaOperazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNUOVAOPERAZIONE_H
