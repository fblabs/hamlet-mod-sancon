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

class Ui_HModifyRow
{
public:
    QVBoxLayout *verticalLayout;
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
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QPlainTextEdit *ptNote;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *leLotScad;
    QLabel *label_7;
    QLineEdit *leTotal;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HModifyRow)
    {
        if (HModifyRow->objectName().isEmpty())
            HModifyRow->setObjectName(QString::fromUtf8("HModifyRow"));
        HModifyRow->setWindowModality(Qt::ApplicationModal);
        HModifyRow->resize(747, 414);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModifyRow->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HModifyRow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
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

        horizontalLayout_4->addWidget(cbProdotto);


        verticalLayout->addLayout(horizontalLayout_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_9 = new QLabel(HModifyRow);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        leNumOrd = new QLineEdit(HModifyRow);
        leNumOrd->setObjectName(QString::fromUtf8("leNumOrd"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNumOrd);


        verticalLayout->addLayout(formLayout);

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


        verticalLayout->addLayout(gridLayout_4);

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

        gridLayout_3->addWidget(cbSanty, 0, 7, 1, 1);

        label_6 = new QLabel(HModifyRow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        leTappo = new QLineEdit(HModifyRow);
        leTappo->setObjectName(QString::fromUtf8("leTappo"));

        gridLayout_3->addWidget(leTappo, 0, 5, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_10 = new QLabel(HModifyRow);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        leAllergeni = new QLineEdit(HModifyRow);
        leAllergeni->setObjectName(QString::fromUtf8("leAllergeni"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leAllergeni);


        verticalLayout->addLayout(formLayout_2);

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


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_11 = new QLabel(HModifyRow);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        ptNote = new QPlainTextEdit(HModifyRow);
        ptNote->setObjectName(QString::fromUtf8("ptNote"));

        horizontalLayout_2->addWidget(ptNote);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(HModifyRow);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        leLotScad = new QLineEdit(HModifyRow);
        leLotScad->setObjectName(QString::fromUtf8("leLotScad"));

        horizontalLayout_3->addWidget(leLotScad);

        label_7 = new QLabel(HModifyRow);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        leTotal = new QLineEdit(HModifyRow);
        leTotal->setObjectName(QString::fromUtf8("leTotal"));
        leTotal->setMaximumSize(QSize(150, 16777215));
        leTotal->setReadOnly(false);

        horizontalLayout_3->addWidget(leTotal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSave = new QPushButton(HModifyRow);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
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


        verticalLayout->addLayout(horizontalLayout);

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
        label_6->setText(QCoreApplication::translate("HModifyRow", "Olio:", nullptr));
        label_10->setText(QCoreApplication::translate("HModifyRow", "Allergeni:", nullptr));
        rbFresh->setText(QCoreApplication::translate("HModifyRow", "Fresco", nullptr));
        rbPastorized->setText(QCoreApplication::translate("HModifyRow", "Pastorizzato", nullptr));
        rbNone->setText(QCoreApplication::translate("HModifyRow", "Nessuna", nullptr));
        label_11->setText(QCoreApplication::translate("HModifyRow", "Note:", nullptr));
        label_13->setText(QCoreApplication::translate("HModifyRow", "Lot/Scadenza", nullptr));
        label_7->setText(QCoreApplication::translate("HModifyRow", "Totale Kg:", nullptr));
        pbSave->setText(QCoreApplication::translate("HModifyRow", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HModifyRow", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModifyRow: public Ui_HModifyRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFYROW_H
