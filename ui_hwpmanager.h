/********************************************************************************
** Form generated from reading UI file 'hwpmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWPMANAGER_H
#define UI_HWPMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HWpManager
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *cbProdotto;
    QComboBox *cbCliente;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLineEdit *leNumOrd;
    QGridLayout *gridLayout_4;
    QLineEdit *leQuant;
    QLabel *label_4;
    QLineEdit *leVaso;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *leSpecOlio;
    QLabel *label_12;
    QLineEdit *leOlio;
    QComboBox *cbSanty;
    QLineEdit *leTappo;
    QLabel *label_8;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *leAllergeni;
    QGridLayout *gridLayout_2;
    QRadioButton *rbFresh;
    QRadioButton *rbPastorized;
    QRadioButton *rbNone;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QPlainTextEdit *ptNote;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *leLotScad;
    QLabel *label_7;
    QLineEdit *leTotal;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HWpManager)
    {
        if (HWpManager->objectName().isEmpty())
            HWpManager->setObjectName(QString::fromUtf8("HWpManager"));
        HWpManager->setWindowModality(Qt::ApplicationModal);
        HWpManager->resize(747, 415);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HWpManager->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HWpManager);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(HWpManager);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(HWpManager);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        cbProdotto = new QComboBox(HWpManager);
        cbProdotto->setObjectName(QString::fromUtf8("cbProdotto"));

        gridLayout->addWidget(cbProdotto, 0, 3, 1, 1);

        cbCliente = new QComboBox(HWpManager);
        cbCliente->setObjectName(QString::fromUtf8("cbCliente"));
        cbCliente->setEditable(true);

        gridLayout->addWidget(cbCliente, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_9 = new QLabel(HWpManager);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        leNumOrd = new QLineEdit(HWpManager);
        leNumOrd->setObjectName(QString::fromUtf8("leNumOrd"));
        leNumOrd->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNumOrd);


        verticalLayout->addLayout(formLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        leQuant = new QLineEdit(HWpManager);
        leQuant->setObjectName(QString::fromUtf8("leQuant"));

        gridLayout_4->addWidget(leQuant, 0, 1, 1, 1);

        label_4 = new QLabel(HWpManager);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 2, 1, 1);

        leVaso = new QLineEdit(HWpManager);
        leVaso->setObjectName(QString::fromUtf8("leVaso"));

        gridLayout_4->addWidget(leVaso, 0, 3, 1, 1);

        label = new QLabel(HWpManager);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(HWpManager);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_5, 0, 4, 1, 1);

        label_6 = new QLabel(HWpManager);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        leSpecOlio = new QLineEdit(HWpManager);
        leSpecOlio->setObjectName(QString::fromUtf8("leSpecOlio"));
        leSpecOlio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(leSpecOlio, 0, 3, 1, 1);

        label_12 = new QLabel(HWpManager);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_12, 0, 2, 1, 1);

        leOlio = new QLineEdit(HWpManager);
        leOlio->setObjectName(QString::fromUtf8("leOlio"));
        leOlio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(leOlio, 0, 1, 1, 1);

        cbSanty = new QComboBox(HWpManager);
        cbSanty->setObjectName(QString::fromUtf8("cbSanty"));

        gridLayout_3->addWidget(cbSanty, 0, 7, 1, 1);

        leTappo = new QLineEdit(HWpManager);
        leTappo->setObjectName(QString::fromUtf8("leTappo"));

        gridLayout_3->addWidget(leTappo, 0, 5, 1, 1);

        label_8 = new QLabel(HWpManager);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(label_8, 0, 6, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_10 = new QLabel(HWpManager);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        leAllergeni = new QLineEdit(HWpManager);
        leAllergeni->setObjectName(QString::fromUtf8("leAllergeni"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leAllergeni);


        verticalLayout->addLayout(formLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rbFresh = new QRadioButton(HWpManager);
        rbFresh->setObjectName(QString::fromUtf8("rbFresh"));
        rbFresh->setChecked(false);

        gridLayout_2->addWidget(rbFresh, 0, 0, 1, 1);

        rbPastorized = new QRadioButton(HWpManager);
        rbPastorized->setObjectName(QString::fromUtf8("rbPastorized"));

        gridLayout_2->addWidget(rbPastorized, 0, 1, 1, 1);

        rbNone = new QRadioButton(HWpManager);
        rbNone->setObjectName(QString::fromUtf8("rbNone"));
        rbNone->setChecked(true);

        gridLayout_2->addWidget(rbNone, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_11 = new QLabel(HWpManager);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        ptNote = new QPlainTextEdit(HWpManager);
        ptNote->setObjectName(QString::fromUtf8("ptNote"));

        horizontalLayout_2->addWidget(ptNote);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(HWpManager);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        leLotScad = new QLineEdit(HWpManager);
        leLotScad->setObjectName(QString::fromUtf8("leLotScad"));

        horizontalLayout_3->addWidget(leLotScad);

        label_7 = new QLabel(HWpManager);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        leTotal = new QLineEdit(HWpManager);
        leTotal->setObjectName(QString::fromUtf8("leTotal"));
        leTotal->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(leTotal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pbSave = new QPushButton(HWpManager);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbSave);

        pbClose = new QPushButton(HWpManager);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_4);

        QWidget::setTabOrder(cbCliente, cbProdotto);
        QWidget::setTabOrder(cbProdotto, leNumOrd);
        QWidget::setTabOrder(leNumOrd, leQuant);
        QWidget::setTabOrder(leQuant, leVaso);
        QWidget::setTabOrder(leVaso, leOlio);
        QWidget::setTabOrder(leOlio, leSpecOlio);
        QWidget::setTabOrder(leSpecOlio, leTappo);
        QWidget::setTabOrder(leTappo, cbSanty);
        QWidget::setTabOrder(cbSanty, leAllergeni);
        QWidget::setTabOrder(leAllergeni, rbFresh);
        QWidget::setTabOrder(rbFresh, rbPastorized);
        QWidget::setTabOrder(rbPastorized, rbNone);
        QWidget::setTabOrder(rbNone, ptNote);
        QWidget::setTabOrder(ptNote, leTotal);
        QWidget::setTabOrder(leTotal, pbSave);
        QWidget::setTabOrder(pbSave, pbClose);

        retranslateUi(HWpManager);

        QMetaObject::connectSlotsByName(HWpManager);
    } // setupUi

    void retranslateUi(QWidget *HWpManager)
    {
        HWpManager->setWindowTitle(QCoreApplication::translate("HWpManager", "Aggiungi riga programmazione", nullptr));
        label_2->setText(QCoreApplication::translate("HWpManager", "Cliente:", nullptr));
        label_3->setText(QCoreApplication::translate("HWpManager", "Prodotto:", nullptr));
        label_9->setText(QCoreApplication::translate("HWpManager", "N.Ordine:", nullptr));
        label_4->setText(QCoreApplication::translate("HWpManager", "Peso prodotto (gr.)", nullptr));
        label->setText(QCoreApplication::translate("HWpManager", "Quantit\303\240: ", nullptr));
        label_5->setText(QCoreApplication::translate("HWpManager", "Tappo:", nullptr));
        label_6->setText(QCoreApplication::translate("HWpManager", "Olio:", nullptr));
        label_12->setText(QCoreApplication::translate("HWpManager", "Peso Olio", nullptr));
        label_8->setText(QCoreApplication::translate("HWpManager", "Sanific.", nullptr));
        label_10->setText(QCoreApplication::translate("HWpManager", "Allergeni:", nullptr));
        rbFresh->setText(QCoreApplication::translate("HWpManager", "Fresco", nullptr));
        rbPastorized->setText(QCoreApplication::translate("HWpManager", "Pastorizzato", nullptr));
        rbNone->setText(QCoreApplication::translate("HWpManager", "Nessuna", nullptr));
        label_11->setText(QCoreApplication::translate("HWpManager", "Note:", nullptr));
        label_13->setText(QCoreApplication::translate("HWpManager", "Lotto/scadenza:", nullptr));
        label_7->setText(QCoreApplication::translate("HWpManager", "Totale:", nullptr));
        pbSave->setText(QCoreApplication::translate("HWpManager", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HWpManager", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HWpManager: public Ui_HWpManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWPMANAGER_H
