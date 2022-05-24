/********************************************************************************
** Form generated from reading UI file 'hutenti.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUTENTI_H
#define UI_HUTENTI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
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
    QRadioButton *rbGraphics;
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
    QComboBox *cbxMasterCli;
    QPushButton *pushButton_5;
    QCheckBox *cbsub;
    QCheckBox *cbVisible;
    QCheckBox *cbfor;
    QCheckBox *cbStamp;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pbPrint;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HUtenti)
    {
        if (HUtenti->objectName().isEmpty())
            HUtenti->setObjectName(QString::fromUtf8("HUtenti"));
        HUtenti->setWindowModality(Qt::NonModal);
        HUtenti->resize(862, 614);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Users64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HUtenti->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HUtenti);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rbAll = new QRadioButton(HUtenti);
        rbAll->setObjectName(QString::fromUtf8("rbAll"));
        rbAll->setChecked(true);

        horizontalLayout_3->addWidget(rbAll);

        rbClients = new QRadioButton(HUtenti);
        rbClients->setObjectName(QString::fromUtf8("rbClients"));

        horizontalLayout_3->addWidget(rbClients);

        rbSuppliers = new QRadioButton(HUtenti);
        rbSuppliers->setObjectName(QString::fromUtf8("rbSuppliers"));

        horizontalLayout_3->addWidget(rbSuppliers);

        rbTrasports = new QRadioButton(HUtenti);
        rbTrasports->setObjectName(QString::fromUtf8("rbTrasports"));

        horizontalLayout_3->addWidget(rbTrasports);

        rbGraphics = new QRadioButton(HUtenti);
        rbGraphics->setObjectName(QString::fromUtf8("rbGraphics"));

        horizontalLayout_3->addWidget(rbGraphics);

        cbVisible_2 = new QCheckBox(HUtenti);
        cbVisible_2->setObjectName(QString::fromUtf8("cbVisible_2"));
        cbVisible_2->setChecked(true);

        horizontalLayout_3->addWidget(cbVisible_2);


        verticalLayout->addLayout(horizontalLayout_3);

        lvUtenti = new QListView(HUtenti);
        lvUtenti->setObjectName(QString::fromUtf8("lvUtenti"));
        lvUtenti->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvUtenti->setAlternatingRowColors(true);
        lvUtenti->setSelectionBehavior(QAbstractItemView::SelectRows);
        lvUtenti->setSelectionRectVisible(false);

        verticalLayout->addWidget(lvUtenti);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HUtenti);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lsearch = new QLineEdit(HUtenti);
        lsearch->setObjectName(QString::fromUtf8("lsearch"));
        lsearch->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lsearch);

        pushButton_6 = new QPushButton(HUtenti);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Arrow-turn-left64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(HUtenti);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lragsoc = new QLineEdit(HUtenti);
        lragsoc->setObjectName(QString::fromUtf8("lragsoc"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lragsoc);

        label_3 = new QLabel(HUtenti);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lind = new QLineEdit(HUtenti);
        lind->setObjectName(QString::fromUtf8("lind"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lind);

        label_4 = new QLabel(HUtenti);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lcap = new QLineEdit(HUtenti);
        lcap->setObjectName(QString::fromUtf8("lcap"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lcap);

        label_5 = new QLabel(HUtenti);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lcit = new QLineEdit(HUtenti);
        lcit->setObjectName(QString::fromUtf8("lcit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lcit);

        label_7 = new QLabel(HUtenti);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lpro = new QLineEdit(HUtenti);
        lpro->setObjectName(QString::fromUtf8("lpro"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lpro);

        label_6 = new QLabel(HUtenti);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        lnaz = new QLineEdit(HUtenti);
        lnaz->setObjectName(QString::fromUtf8("lnaz"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lnaz);

        label_8 = new QLabel(HUtenti);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        ltel = new QLineEdit(HUtenti);
        ltel->setObjectName(QString::fromUtf8("ltel"));

        formLayout->setWidget(7, QFormLayout::FieldRole, ltel);

        label_9 = new QLabel(HUtenti);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        tcon = new QTextEdit(HUtenti);
        tcon->setObjectName(QString::fromUtf8("tcon"));

        formLayout->setWidget(8, QFormLayout::FieldRole, tcon);

        label_10 = new QLabel(HUtenti);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        tnote = new QTextBrowser(HUtenti);
        tnote->setObjectName(QString::fromUtf8("tnote"));
        tnote->setReadOnly(false);

        formLayout->setWidget(9, QFormLayout::FieldRole, tnote);

        cbcli = new QCheckBox(HUtenti);
        cbcli->setObjectName(QString::fromUtf8("cbcli"));

        formLayout->setWidget(10, QFormLayout::FieldRole, cbcli);

        cbtra = new QCheckBox(HUtenti);
        cbtra->setObjectName(QString::fromUtf8("cbtra"));

        formLayout->setWidget(13, QFormLayout::FieldRole, cbtra);

        cbxMasterCli = new QComboBox(HUtenti);
        cbxMasterCli->setObjectName(QString::fromUtf8("cbxMasterCli"));
        cbxMasterCli->setEnabled(true);
        cbxMasterCli->setEditable(true);
        cbxMasterCli->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(17, QFormLayout::FieldRole, cbxMasterCli);

        pushButton_5 = new QPushButton(HUtenti);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Chat.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);

        formLayout->setWidget(19, QFormLayout::FieldRole, pushButton_5);

        cbsub = new QCheckBox(HUtenti);
        cbsub->setObjectName(QString::fromUtf8("cbsub"));

        formLayout->setWidget(15, QFormLayout::FieldRole, cbsub);

        cbVisible = new QCheckBox(HUtenti);
        cbVisible->setObjectName(QString::fromUtf8("cbVisible"));

        formLayout->setWidget(18, QFormLayout::FieldRole, cbVisible);

        cbfor = new QCheckBox(HUtenti);
        cbfor->setObjectName(QString::fromUtf8("cbfor"));

        formLayout->setWidget(11, QFormLayout::FieldRole, cbfor);

        cbStamp = new QCheckBox(HUtenti);
        cbStamp->setObjectName(QString::fromUtf8("cbStamp"));

        formLayout->setWidget(12, QFormLayout::FieldRole, cbStamp);


        horizontalLayout_4->addLayout(formLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(HUtenti);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(HUtenti);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HUtenti);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pbPrint = new QPushButton(HUtenti);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon6);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbPrint);

        pushButton_4 = new QPushButton(HUtenti);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        HUtenti->setWindowTitle(QCoreApplication::translate("HUtenti", "Anagrafica", nullptr));
        rbAll->setText(QCoreApplication::translate("HUtenti", "Tutti", nullptr));
        rbClients->setText(QCoreApplication::translate("HUtenti", "Clienti", nullptr));
        rbSuppliers->setText(QCoreApplication::translate("HUtenti", "Fornitori", nullptr));
        rbTrasports->setText(QCoreApplication::translate("HUtenti", "Trasportatori", nullptr));
        rbGraphics->setText(QCoreApplication::translate("HUtenti", "Stampatori", nullptr));
        cbVisible_2->setText(QCoreApplication::translate("HUtenti", "Visibili", nullptr));
        label->setText(QCoreApplication::translate("HUtenti", "Cerca:", nullptr));
        pushButton_6->setText(QString());
        label_2->setText(QCoreApplication::translate("HUtenti", "Ragione Sociale", nullptr));
        label_3->setText(QCoreApplication::translate("HUtenti", "Indirizzo", nullptr));
        label_4->setText(QCoreApplication::translate("HUtenti", "Citta", nullptr));
        label_5->setText(QCoreApplication::translate("HUtenti", "Cap", nullptr));
        label_7->setText(QCoreApplication::translate("HUtenti", "Provincia/stato", nullptr));
        label_6->setText(QCoreApplication::translate("HUtenti", "Nazione", nullptr));
        label_8->setText(QCoreApplication::translate("HUtenti", "Telefono", nullptr));
        label_9->setText(QCoreApplication::translate("HUtenti", "Contatto", nullptr));
        label_10->setText(QCoreApplication::translate("HUtenti", "Note:", nullptr));
        cbcli->setText(QCoreApplication::translate("HUtenti", "Cliente", nullptr));
        cbtra->setText(QCoreApplication::translate("HUtenti", "Trasportatore", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HUtenti", "Notifica", nullptr));
        cbsub->setText(QCoreApplication::translate("HUtenti", "Subcliente di:", nullptr));
        cbVisible->setText(QCoreApplication::translate("HUtenti", "Visibile in produzione", nullptr));
        cbfor->setText(QCoreApplication::translate("HUtenti", "Fornitore", nullptr));
        cbStamp->setText(QCoreApplication::translate("HUtenti", "Stampatore", nullptr));
        pushButton->setText(QCoreApplication::translate("HUtenti", "Nuovo", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HUtenti", "Annulla", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HUtenti", "Salva", nullptr));
        pbPrint->setText(QCoreApplication::translate("HUtenti", "Stampa", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HUtenti", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HUtenti: public Ui_HUtenti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUTENTI_H
