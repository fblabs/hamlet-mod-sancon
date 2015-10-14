/********************************************************************************
** Form generated from reading UI file 'hutenti.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HUtenti
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QListView *lvUtenti;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lsearch;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lragsoc;
    QLabel *label_3;
    QLineEdit *lind;
    QLineEdit *lcap;
    QLineEdit *lcit;
    QLabel *label_7;
    QLineEdit *lpro;
    QLabel *label_6;
    QLineEdit *lnaz;
    QLabel *label_8;
    QLineEdit *ltel;
    QLabel *label_9;
    QTextEdit *tcon;
    QCheckBox *cbcli;
    QCheckBox *cbtra;
    QCheckBox *cbfor;
    QCheckBox *cbsub;
    QComboBox *cbxMasterCli;
    QLabel *label_5;
    QLabel *label_4;
    QTextBrowser *tnote;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HUtenti)
    {
        if (HUtenti->objectName().isEmpty())
            HUtenti->setObjectName(QStringLiteral("HUtenti"));
        HUtenti->setWindowModality(Qt::ApplicationModal);
        HUtenti->resize(862, 544);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/User-Black.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HUtenti->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HUtenti);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lvUtenti = new QListView(HUtenti);
        lvUtenti->setObjectName(QStringLiteral("lvUtenti"));
        lvUtenti->setSelectionBehavior(QAbstractItemView::SelectRows);
        lvUtenti->setSelectionRectVisible(true);

        verticalLayout->addWidget(lvUtenti);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HUtenti);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lsearch = new QLineEdit(HUtenti);
        lsearch->setObjectName(QStringLiteral("lsearch"));

        horizontalLayout->addWidget(lsearch);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

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

        lcap = new QLineEdit(HUtenti);
        lcap->setObjectName(QStringLiteral("lcap"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lcap);

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

        cbcli = new QCheckBox(HUtenti);
        cbcli->setObjectName(QStringLiteral("cbcli"));

        formLayout->setWidget(10, QFormLayout::FieldRole, cbcli);

        cbtra = new QCheckBox(HUtenti);
        cbtra->setObjectName(QStringLiteral("cbtra"));

        formLayout->setWidget(11, QFormLayout::FieldRole, cbtra);

        cbfor = new QCheckBox(HUtenti);
        cbfor->setObjectName(QStringLiteral("cbfor"));

        formLayout->setWidget(12, QFormLayout::FieldRole, cbfor);

        cbsub = new QCheckBox(HUtenti);
        cbsub->setObjectName(QStringLiteral("cbsub"));

        formLayout->setWidget(13, QFormLayout::FieldRole, cbsub);

        cbxMasterCli = new QComboBox(HUtenti);
        cbxMasterCli->setObjectName(QStringLiteral("cbxMasterCli"));
        cbxMasterCli->setEnabled(true);
        cbxMasterCli->setEditable(true);
        cbxMasterCli->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(14, QFormLayout::FieldRole, cbxMasterCli);

        label_5 = new QLabel(HUtenti);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_4 = new QLabel(HUtenti);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        tnote = new QTextBrowser(HUtenti);
        tnote->setObjectName(QStringLiteral("tnote"));
        tnote->setReadOnly(false);

        formLayout->setWidget(9, QFormLayout::FieldRole, tnote);

        label_10 = new QLabel(HUtenti);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);


        horizontalLayout_3->addLayout(formLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HUtenti);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(HUtenti);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HUtenti);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(HUtenti);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(HUtenti);
        QObject::connect(pushButton_4, SIGNAL(clicked()), HUtenti, SLOT(close()));

        QMetaObject::connectSlotsByName(HUtenti);
    } // setupUi

    void retranslateUi(QWidget *HUtenti)
    {
        HUtenti->setWindowTitle(QApplication::translate("HUtenti", "Anagrafica", 0));
        label->setText(QApplication::translate("HUtenti", "Cerca:", 0));
        label_2->setText(QApplication::translate("HUtenti", "Ragione Sociale", 0));
        label_3->setText(QApplication::translate("HUtenti", "Indirizzo", 0));
        label_7->setText(QApplication::translate("HUtenti", "Provincia/stato", 0));
        label_6->setText(QApplication::translate("HUtenti", "Nazione", 0));
        label_8->setText(QApplication::translate("HUtenti", "Telefono", 0));
        label_9->setText(QApplication::translate("HUtenti", "Contatto", 0));
        cbcli->setText(QApplication::translate("HUtenti", "Cliente", 0));
        cbtra->setText(QApplication::translate("HUtenti", "Trasportatore", 0));
        cbfor->setText(QApplication::translate("HUtenti", "Fornitore", 0));
        cbsub->setText(QApplication::translate("HUtenti", "Subcliente di:", 0));
        label_5->setText(QApplication::translate("HUtenti", "Cap", 0));
        label_4->setText(QApplication::translate("HUtenti", "Citta", 0));
        label_10->setText(QApplication::translate("HUtenti", "Note:", 0));
        pushButton->setText(QApplication::translate("HUtenti", "Nuovo", 0));
        pushButton_2->setText(QApplication::translate("HUtenti", "Annulla", 0));
        pushButton_3->setText(QApplication::translate("HUtenti", "Salva", 0));
        pushButton_4->setText(QApplication::translate("HUtenti", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HUtenti: public Ui_HUtenti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUTENTI_H
