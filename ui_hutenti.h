/********************************************************************************
** Form generated from reading UI file 'hutenti.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUTENTI_H
#define UI_HUTENTI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HUtenti
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rbAll;
    QRadioButton *rbClients;
    QRadioButton *rbSuppliers;
    QRadioButton *rbTrasports;
    QCheckBox *cbVisible_2;
    QListView *lvUtenti;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lsearch;
    QPushButton *pushButton_6;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lragsoc;
    QLabel *label_3;
    QLineEdit *lind;
    QLabel *label_4;
    QLineEdit *lcap;
    QLabel *label_5;
    QLineEdit *lcit;
    QLabel *label_7;
    QLineEdit *lpro;
    QLabel *label_6;
    QLineEdit *lnaz;
    QLabel *label_8;
    QLineEdit *ltel;
    QLabel *label_9;
    QTextEdit *tcon;
    QLabel *label_10;
    QTextBrowser *tnote;
    QCheckBox *cbcli;
    QCheckBox *cbtra;
    QCheckBox *cbfor;
    QComboBox *cbxMasterCli;
    QPushButton *pushButton_5;
    QCheckBox *cbsub;
    QCheckBox *cbVisible;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pbPrint;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HUtenti)
    {
        if (HUtenti->objectName().isEmpty())
            HUtenti->setObjectName(QStringLiteral("HUtenti"));
        HUtenti->setWindowModality(Qt::NonModal);
        HUtenti->resize(862, 565);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Users64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HUtenti->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HUtenti);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rbAll = new QRadioButton(HUtenti);
        rbAll->setObjectName(QStringLiteral("rbAll"));
        rbAll->setChecked(true);

        horizontalLayout_3->addWidget(rbAll);

        rbClients = new QRadioButton(HUtenti);
        rbClients->setObjectName(QStringLiteral("rbClients"));

        horizontalLayout_3->addWidget(rbClients);

        rbSuppliers = new QRadioButton(HUtenti);
        rbSuppliers->setObjectName(QStringLiteral("rbSuppliers"));

        horizontalLayout_3->addWidget(rbSuppliers);

        rbTrasports = new QRadioButton(HUtenti);
        rbTrasports->setObjectName(QStringLiteral("rbTrasports"));

        horizontalLayout_3->addWidget(rbTrasports);

        cbVisible_2 = new QCheckBox(HUtenti);
        cbVisible_2->setObjectName(QStringLiteral("cbVisible_2"));
        cbVisible_2->setChecked(true);

        horizontalLayout_3->addWidget(cbVisible_2);


        verticalLayout->addLayout(horizontalLayout_3);

        lvUtenti = new QListView(HUtenti);
        lvUtenti->setObjectName(QStringLiteral("lvUtenti"));
        lvUtenti->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvUtenti->setAlternatingRowColors(true);
        lvUtenti->setSelectionBehavior(QAbstractItemView::SelectRows);
        lvUtenti->setSelectionRectVisible(false);

        verticalLayout->addWidget(lvUtenti);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HUtenti);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lsearch = new QLineEdit(HUtenti);
        lsearch->setObjectName(QStringLiteral("lsearch"));
        lsearch->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lsearch);

        pushButton_6 = new QPushButton(HUtenti);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Arrow-turn-left64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(HUtenti);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lragsoc = new QLineEdit(HUtenti);
        lragsoc->setObjectName(QStringLiteral("lragsoc"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lragsoc);

        label_3 = new QLabel(HUtenti);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lind = new QLineEdit(HUtenti);
        lind->setObjectName(QStringLiteral("lind"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lind);

        label_4 = new QLabel(HUtenti);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lcap = new QLineEdit(HUtenti);
        lcap->setObjectName(QStringLiteral("lcap"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lcap);

        label_5 = new QLabel(HUtenti);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lcit = new QLineEdit(HUtenti);
        lcit->setObjectName(QStringLiteral("lcit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lcit);

        label_7 = new QLabel(HUtenti);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lpro = new QLineEdit(HUtenti);
        lpro->setObjectName(QStringLiteral("lpro"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lpro);

        label_6 = new QLabel(HUtenti);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        lnaz = new QLineEdit(HUtenti);
        lnaz->setObjectName(QStringLiteral("lnaz"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lnaz);

        label_8 = new QLabel(HUtenti);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        ltel = new QLineEdit(HUtenti);
        ltel->setObjectName(QStringLiteral("ltel"));

        formLayout->setWidget(7, QFormLayout::FieldRole, ltel);

        label_9 = new QLabel(HUtenti);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        tcon = new QTextEdit(HUtenti);
        tcon->setObjectName(QStringLiteral("tcon"));

        formLayout->setWidget(8, QFormLayout::FieldRole, tcon);

        label_10 = new QLabel(HUtenti);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        tnote = new QTextBrowser(HUtenti);
        tnote->setObjectName(QStringLiteral("tnote"));
        tnote->setReadOnly(false);

        formLayout->setWidget(9, QFormLayout::FieldRole, tnote);

        cbcli = new QCheckBox(HUtenti);
        cbcli->setObjectName(QStringLiteral("cbcli"));

        formLayout->setWidget(10, QFormLayout::FieldRole, cbcli);

        cbtra = new QCheckBox(HUtenti);
        cbtra->setObjectName(QStringLiteral("cbtra"));

        formLayout->setWidget(11, QFormLayout::FieldRole, cbtra);

        cbfor = new QCheckBox(HUtenti);
        cbfor->setObjectName(QStringLiteral("cbfor"));

        formLayout->setWidget(12, QFormLayout::FieldRole, cbfor);

        cbxMasterCli = new QComboBox(HUtenti);
        cbxMasterCli->setObjectName(QStringLiteral("cbxMasterCli"));
        cbxMasterCli->setEnabled(true);
        cbxMasterCli->setEditable(true);
        cbxMasterCli->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(15, QFormLayout::FieldRole, cbxMasterCli);

        pushButton_5 = new QPushButton(HUtenti);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Chat.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);

        formLayout->setWidget(17, QFormLayout::FieldRole, pushButton_5);

        cbsub = new QCheckBox(HUtenti);
        cbsub->setObjectName(QStringLiteral("cbsub"));

        formLayout->setWidget(13, QFormLayout::FieldRole, cbsub);

        cbVisible = new QCheckBox(HUtenti);
        cbVisible->setObjectName(QStringLiteral("cbVisible"));

        formLayout->setWidget(16, QFormLayout::FieldRole, cbVisible);


        horizontalLayout_4->addLayout(formLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HUtenti);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(HUtenti);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HUtenti);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pbPrint = new QPushButton(HUtenti);
        pbPrint->setObjectName(QStringLiteral("pbPrint"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon6);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbPrint);

        pushButton_4 = new QPushButton(HUtenti);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon7);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(HUtenti);
        QObject::connect(pushButton_4, SIGNAL(clicked()), HUtenti, SLOT(close()));

        QMetaObject::connectSlotsByName(HUtenti);
    } // setupUi

    void retranslateUi(QWidget *HUtenti)
    {
        HUtenti->setWindowTitle(QApplication::translate("HUtenti", "Anagrafica", 0));
        rbAll->setText(QApplication::translate("HUtenti", "Tutti", 0));
        rbClients->setText(QApplication::translate("HUtenti", "Clienti", 0));
        rbSuppliers->setText(QApplication::translate("HUtenti", "Fornitori", 0));
        rbTrasports->setText(QApplication::translate("HUtenti", "Trasportatori", 0));
        cbVisible_2->setText(QApplication::translate("HUtenti", "Visibili", 0));
        label->setText(QApplication::translate("HUtenti", "Cerca:", 0));
        pushButton_6->setText(QString());
        label_2->setText(QApplication::translate("HUtenti", "Ragione Sociale", 0));
        label_3->setText(QApplication::translate("HUtenti", "Indirizzo", 0));
        label_4->setText(QApplication::translate("HUtenti", "Citta", 0));
        label_5->setText(QApplication::translate("HUtenti", "Cap", 0));
        label_7->setText(QApplication::translate("HUtenti", "Provincia/stato", 0));
        label_6->setText(QApplication::translate("HUtenti", "Nazione", 0));
        label_8->setText(QApplication::translate("HUtenti", "Telefono", 0));
        label_9->setText(QApplication::translate("HUtenti", "Contatto", 0));
        label_10->setText(QApplication::translate("HUtenti", "Note:", 0));
        cbcli->setText(QApplication::translate("HUtenti", "Cliente", 0));
        cbtra->setText(QApplication::translate("HUtenti", "Trasportatore", 0));
        cbfor->setText(QApplication::translate("HUtenti", "Fornitore", 0));
        pushButton_5->setText(QApplication::translate("HUtenti", "Notifica", 0));
        cbsub->setText(QApplication::translate("HUtenti", "Subcliente di:", 0));
        cbVisible->setText(QApplication::translate("HUtenti", "Visibile in produzione", 0));
        pushButton->setText(QApplication::translate("HUtenti", "Nuovo", 0));
        pushButton_2->setText(QApplication::translate("HUtenti", "Annulla", 0));
        pushButton_3->setText(QApplication::translate("HUtenti", "Salva", 0));
        pbPrint->setText(QApplication::translate("HUtenti", "Stampa", 0));
        pushButton_4->setText(QApplication::translate("HUtenti", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HUtenti: public Ui_HUtenti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUTENTI_H
