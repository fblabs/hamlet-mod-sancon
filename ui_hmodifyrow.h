/********************************************************************************
** Form generated from reading UI file 'hmodifyrow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIFYROW_H
#define UI_HMODIFYROW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_HModifyRow
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *cbCliente;
    QLabel *label_3;
    QComboBox *cbProdotto;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLineEdit *leNumOrd;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *leQuant;
    QLineEdit *leVaso;
    QGridLayout *gridLayout_3;
    QLineEdit *leSpecificaOlio;
    QLabel *label_8;
    QLabel *label_12;
    QLineEdit *leOlio;
    QLabel *label_5;
    QComboBox *cbSanty;
    QLabel *label_6;
    QLineEdit *leTappo;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *leAllergeni;
    QGridLayout *gridLayout_2;
    QRadioButton *rbFresh;
    QRadioButton *rbPastorized;
    QRadioButton *rbNone;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_4;
    QLabel *label_14;
    QPlainTextEdit *ptLotti;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbSaveLots;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_15;
    QLineEdit *leVasiProdotti;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_16;
    QCheckBox *cbPartenza;
    QDateEdit *dePartenza;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QPlainTextEdit *ptNote;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_13;
    QLineEdit *leLotScad;
    QLabel *label_7;
    QLineEdit *leTotal;
    QCheckBox *cbDone;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HModifyRow)
    {
        if (HModifyRow->objectName().isEmpty())
            HModifyRow->setObjectName(QString::fromUtf8("HModifyRow"));
        HModifyRow->setWindowModality(Qt::ApplicationModal);
        HModifyRow->resize(831, 567);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModifyRow->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HModifyRow);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(HModifyRow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_2);

        cbCliente = new QComboBox(HModifyRow);
        cbCliente->setObjectName(QString::fromUtf8("cbCliente"));
        cbCliente->setEditable(true);
        cbCliente->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_4->addWidget(cbCliente);

        label_3 = new QLabel(HModifyRow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_3);

        cbProdotto = new QComboBox(HModifyRow);
        cbProdotto->setObjectName(QString::fromUtf8("cbProdotto"));
        cbProdotto->setEditable(true);
        cbProdotto->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_4->addWidget(cbProdotto);


        verticalLayout_3->addLayout(horizontalLayout_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_9 = new QLabel(HModifyRow);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        leNumOrd = new QLineEdit(HModifyRow);
        leNumOrd->setObjectName(QString::fromUtf8("leNumOrd"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNumOrd);


        verticalLayout_3->addLayout(formLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(HModifyRow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(HModifyRow);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 5, 1, 1);

        leQuant = new QLineEdit(HModifyRow);
        leQuant->setObjectName(QString::fromUtf8("leQuant"));

        gridLayout_4->addWidget(leQuant, 0, 4, 1, 1);

        leVaso = new QLineEdit(HModifyRow);
        leVaso->setObjectName(QString::fromUtf8("leVaso"));

        gridLayout_4->addWidget(leVaso, 0, 6, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        leSpecificaOlio = new QLineEdit(HModifyRow);
        leSpecificaOlio->setObjectName(QString::fromUtf8("leSpecificaOlio"));
        leSpecificaOlio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(leSpecificaOlio, 0, 3, 1, 1);

        label_8 = new QLabel(HModifyRow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(label_8, 0, 6, 1, 1);

        label_12 = new QLabel(HModifyRow);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 0, 2, 1, 1);

        leOlio = new QLineEdit(HModifyRow);
        leOlio->setObjectName(QString::fromUtf8("leOlio"));
        leOlio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(leOlio, 0, 1, 1, 1);

        label_5 = new QLabel(HModifyRow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_5, 0, 4, 1, 1);

        cbSanty = new QComboBox(HModifyRow);
        cbSanty->setObjectName(QString::fromUtf8("cbSanty"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbSanty->sizePolicy().hasHeightForWidth());
        cbSanty->setSizePolicy(sizePolicy);
        cbSanty->setMinimumSize(QSize(130, 0));
        cbSanty->setEditable(true);

        gridLayout_3->addWidget(cbSanty, 0, 7, 1, 1);

        label_6 = new QLabel(HModifyRow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        leTappo = new QLineEdit(HModifyRow);
        leTappo->setObjectName(QString::fromUtf8("leTappo"));

        gridLayout_3->addWidget(leTappo, 0, 5, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_10 = new QLabel(HModifyRow);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        leAllergeni = new QLineEdit(HModifyRow);
        leAllergeni->setObjectName(QString::fromUtf8("leAllergeni"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leAllergeni);


        verticalLayout_3->addLayout(formLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rbFresh = new QRadioButton(HModifyRow);
        rbFresh->setObjectName(QString::fromUtf8("rbFresh"));
        rbFresh->setChecked(false);

        gridLayout_2->addWidget(rbFresh, 0, 0, 1, 1);

        rbPastorized = new QRadioButton(HModifyRow);
        rbPastorized->setObjectName(QString::fromUtf8("rbPastorized"));

        gridLayout_2->addWidget(rbPastorized, 0, 1, 1, 1);

        rbNone = new QRadioButton(HModifyRow);
        rbNone->setObjectName(QString::fromUtf8("rbNone"));
        rbNone->setChecked(true);

        gridLayout_2->addWidget(rbNone, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_14 = new QLabel(HModifyRow);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_14);

        ptLotti = new QPlainTextEdit(HModifyRow);
        ptLotti->setObjectName(QString::fromUtf8("ptLotti"));
        ptLotti->setMaximumSize(QSize(16777215, 80));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, ptLotti);


        verticalLayout->addLayout(formLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbSaveLots = new QPushButton(HModifyRow);
        pbSaveLots->setObjectName(QString::fromUtf8("pbSaveLots"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSaveLots->setIcon(icon1);

        horizontalLayout_2->addWidget(pbSaveLots);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_15 = new QLabel(HModifyRow);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_3->addWidget(label_15);

        leVasiProdotti = new QLineEdit(HModifyRow);
        leVasiProdotti->setObjectName(QString::fromUtf8("leVasiProdotti"));

        horizontalLayout_3->addWidget(leVasiProdotti);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_16 = new QLabel(HModifyRow);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_5->addWidget(label_16);

        cbPartenza = new QCheckBox(HModifyRow);
        cbPartenza->setObjectName(QString::fromUtf8("cbPartenza"));

        horizontalLayout_5->addWidget(cbPartenza);

        dePartenza = new QDateEdit(HModifyRow);
        dePartenza->setObjectName(QString::fromUtf8("dePartenza"));
        dePartenza->setCalendarPopup(true);

        horizontalLayout_5->addWidget(dePartenza);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_11 = new QLabel(HModifyRow);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        ptNote = new QPlainTextEdit(HModifyRow);
        ptNote->setObjectName(QString::fromUtf8("ptNote"));
        ptNote->setMaximumSize(QSize(16777215, 80));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ptNote);


        verticalLayout_3->addLayout(formLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_13 = new QLabel(HModifyRow);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 0, 1, 1, 1);

        leLotScad = new QLineEdit(HModifyRow);
        leLotScad->setObjectName(QString::fromUtf8("leLotScad"));

        gridLayout->addWidget(leLotScad, 0, 2, 1, 1);

        label_7 = new QLabel(HModifyRow);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 3, 1, 1);

        leTotal = new QLineEdit(HModifyRow);
        leTotal->setObjectName(QString::fromUtf8("leTotal"));
        leTotal->setMaximumSize(QSize(150, 16777215));
        leTotal->setReadOnly(false);

        gridLayout->addWidget(leTotal, 0, 4, 1, 1);

        cbDone = new QCheckBox(HModifyRow);
        cbDone->setObjectName(QString::fromUtf8("cbDone"));

        gridLayout->addWidget(cbDone, 0, 5, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSave = new QPushButton(HModifyRow);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbClose = new QPushButton(HModifyRow);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout_3->addLayout(horizontalLayout);

        QWidget::setTabOrder(cbCliente, cbProdotto);
        QWidget::setTabOrder(cbProdotto, leNumOrd);
        QWidget::setTabOrder(leNumOrd, leQuant);
        QWidget::setTabOrder(leQuant, leVaso);
        QWidget::setTabOrder(leVaso, leOlio);
        QWidget::setTabOrder(leOlio, leSpecificaOlio);
        QWidget::setTabOrder(leSpecificaOlio, leTappo);
        QWidget::setTabOrder(leTappo, cbSanty);
        QWidget::setTabOrder(cbSanty, leAllergeni);
        QWidget::setTabOrder(leAllergeni, rbFresh);
        QWidget::setTabOrder(rbFresh, rbPastorized);
        QWidget::setTabOrder(rbPastorized, rbNone);
        QWidget::setTabOrder(rbNone, ptNote);
        QWidget::setTabOrder(ptNote, leTotal);
        QWidget::setTabOrder(leTotal, pbSave);
        QWidget::setTabOrder(pbSave, pbClose);

        retranslateUi(HModifyRow);

        QMetaObject::connectSlotsByName(HModifyRow);
    } // setupUi

    void retranslateUi(QWidget *HModifyRow)
    {
        HModifyRow->setWindowTitle(QCoreApplication::translate("HModifyRow", "Modifica Riga lavorazione", nullptr));
        label_2->setText(QCoreApplication::translate("HModifyRow", "Cliente:", nullptr));
        label_3->setText(QCoreApplication::translate("HModifyRow", "Prodotto:", nullptr));
        label_9->setText(QCoreApplication::translate("HModifyRow", "N.Ordine:", nullptr));
        label->setText(QCoreApplication::translate("HModifyRow", "Quantit\303\240: ", nullptr));
        label_4->setText(QCoreApplication::translate("HModifyRow", "Peso prodotto (gr.)", nullptr));
        label_8->setText(QCoreApplication::translate("HModifyRow", "Sanific.", nullptr));
        label_12->setText(QCoreApplication::translate("HModifyRow", "Peso Olio", nullptr));
        label_5->setText(QCoreApplication::translate("HModifyRow", "Tappo:", nullptr));
        cbSanty->setCurrentText(QString());
        label_6->setText(QCoreApplication::translate("HModifyRow", "Olio:", nullptr));
        label_10->setText(QCoreApplication::translate("HModifyRow", "Allergeni:", nullptr));
        rbFresh->setText(QCoreApplication::translate("HModifyRow", "Fresco", nullptr));
        rbPastorized->setText(QCoreApplication::translate("HModifyRow", "Pastorizzato", nullptr));
        rbNone->setText(QCoreApplication::translate("HModifyRow", "Nessuna", nullptr));
        label_14->setText(QCoreApplication::translate("HModifyRow", "Lotti:", nullptr));
        pbSaveLots->setText(QCoreApplication::translate("HModifyRow", "Salva lotti", nullptr));
        label_15->setText(QCoreApplication::translate("HModifyRow", "Vasi prodotti:", nullptr));
        label_16->setText(QCoreApplication::translate("HModifyRow", "Partenza:", nullptr));
        cbPartenza->setText(QString());
        dePartenza->setSpecialValueText(QString());
        label_11->setText(QCoreApplication::translate("HModifyRow", "Note:", nullptr));
        label_13->setText(QCoreApplication::translate("HModifyRow", "Lot/Scadenza", nullptr));
        label_7->setText(QCoreApplication::translate("HModifyRow", "Totale Kg:", nullptr));
        cbDone->setText(QCoreApplication::translate("HModifyRow", "Completato", nullptr));
        pbSave->setText(QCoreApplication::translate("HModifyRow", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HModifyRow", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModifyRow: public Ui_HModifyRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFYROW_H
