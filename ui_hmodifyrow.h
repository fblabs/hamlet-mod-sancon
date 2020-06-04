/********************************************************************************
** Form generated from reading UI file 'hmodifyrow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIFYROW_H
#define UI_HMODIFYROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QLineEdit *leOlio;
    QComboBox *cbSanty;
    QLabel *label_8;
    QLabel *label_12;
    QComboBox *cbTappo;
    QLineEdit *leSpecificaOlio;
    QLabel *label_5;
    QLabel *label_6;
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
    QLabel *label_7;
    QLineEdit *leTotal;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HModifyRow)
    {
        if (HModifyRow->objectName().isEmpty())
            HModifyRow->setObjectName(QStringLiteral("HModifyRow"));
        HModifyRow->setWindowModality(Qt::ApplicationModal);
        HModifyRow->resize(747, 414);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HModifyRow->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HModifyRow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(HModifyRow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_2);

        cbCliente = new QComboBox(HModifyRow);
        cbCliente->setObjectName(QStringLiteral("cbCliente"));
        cbCliente->setEditable(true);
        cbCliente->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_4->addWidget(cbCliente);

        label_3 = new QLabel(HModifyRow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_3);

        cbProdotto = new QComboBox(HModifyRow);
        cbProdotto->setObjectName(QStringLiteral("cbProdotto"));

        horizontalLayout_4->addWidget(cbProdotto);


        verticalLayout->addLayout(horizontalLayout_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_9 = new QLabel(HModifyRow);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        leNumOrd = new QLineEdit(HModifyRow);
        leNumOrd->setObjectName(QStringLiteral("leNumOrd"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNumOrd);


        verticalLayout->addLayout(formLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label = new QLabel(HModifyRow);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(HModifyRow);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 5, 1, 1);

        leQuant = new QLineEdit(HModifyRow);
        leQuant->setObjectName(QStringLiteral("leQuant"));

        gridLayout_4->addWidget(leQuant, 0, 4, 1, 1);

        leVaso = new QLineEdit(HModifyRow);
        leVaso->setObjectName(QStringLiteral("leVaso"));

        gridLayout_4->addWidget(leVaso, 0, 6, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        leOlio = new QLineEdit(HModifyRow);
        leOlio->setObjectName(QStringLiteral("leOlio"));
        leOlio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(leOlio, 0, 1, 1, 1);

        cbSanty = new QComboBox(HModifyRow);
        cbSanty->setObjectName(QStringLiteral("cbSanty"));

        gridLayout_3->addWidget(cbSanty, 0, 7, 1, 1);

        label_8 = new QLabel(HModifyRow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(label_8, 0, 6, 1, 1);

        label_12 = new QLabel(HModifyRow);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 0, 2, 1, 1);

        cbTappo = new QComboBox(HModifyRow);
        cbTappo->setObjectName(QStringLiteral("cbTappo"));

        gridLayout_3->addWidget(cbTappo, 0, 5, 1, 1);

        leSpecificaOlio = new QLineEdit(HModifyRow);
        leSpecificaOlio->setObjectName(QStringLiteral("leSpecificaOlio"));
        leSpecificaOlio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(leSpecificaOlio, 0, 3, 1, 1);

        label_5 = new QLabel(HModifyRow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_5, 0, 4, 1, 1);

        label_6 = new QLabel(HModifyRow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_10 = new QLabel(HModifyRow);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        leAllergeni = new QLineEdit(HModifyRow);
        leAllergeni->setObjectName(QStringLiteral("leAllergeni"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leAllergeni);


        verticalLayout->addLayout(formLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        rbFresh = new QRadioButton(HModifyRow);
        rbFresh->setObjectName(QStringLiteral("rbFresh"));
        rbFresh->setChecked(false);

        gridLayout_2->addWidget(rbFresh, 0, 0, 1, 1);

        rbPastorized = new QRadioButton(HModifyRow);
        rbPastorized->setObjectName(QStringLiteral("rbPastorized"));

        gridLayout_2->addWidget(rbPastorized, 0, 1, 1, 1);

        rbNone = new QRadioButton(HModifyRow);
        rbNone->setObjectName(QStringLiteral("rbNone"));
        rbNone->setChecked(true);

        gridLayout_2->addWidget(rbNone, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(HModifyRow);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        ptNote = new QPlainTextEdit(HModifyRow);
        ptNote->setObjectName(QStringLiteral("ptNote"));

        horizontalLayout_2->addWidget(ptNote);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(HModifyRow);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        leTotal = new QLineEdit(HModifyRow);
        leTotal->setObjectName(QStringLiteral("leTotal"));
        leTotal->setMaximumSize(QSize(150, 16777215));
        leTotal->setReadOnly(false);

        horizontalLayout_3->addWidget(leTotal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbSave = new QPushButton(HModifyRow);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbClose = new QPushButton(HModifyRow);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        QWidget::setTabOrder(leSpecificaOlio, cbTappo);
        QWidget::setTabOrder(cbTappo, cbSanty);
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
        HModifyRow->setWindowTitle(QApplication::translate("HModifyRow", "Modifica Riga lavorazione", 0));
        label_2->setText(QApplication::translate("HModifyRow", "Cliente:", 0));
        label_3->setText(QApplication::translate("HModifyRow", "Prodotto:", 0));
        label_9->setText(QApplication::translate("HModifyRow", "N.Ordine:", 0));
        label->setText(QApplication::translate("HModifyRow", "Quantit\303\240: ", 0));
        label_4->setText(QApplication::translate("HModifyRow", "Peso prodotto (gr.)", 0));
        label_8->setText(QApplication::translate("HModifyRow", "Sanificazione:", 0));
        label_12->setText(QApplication::translate("HModifyRow", "Peso Olio", 0));
        label_5->setText(QApplication::translate("HModifyRow", "Tappo:", 0));
        label_6->setText(QApplication::translate("HModifyRow", "Olio:", 0));
        label_10->setText(QApplication::translate("HModifyRow", "Allergeni:", 0));
        rbFresh->setText(QApplication::translate("HModifyRow", "Fresco", 0));
        rbPastorized->setText(QApplication::translate("HModifyRow", "Pastorizzato", 0));
        rbNone->setText(QApplication::translate("HModifyRow", "Nessuna", 0));
        label_11->setText(QApplication::translate("HModifyRow", "Note:", 0));
        label_7->setText(QApplication::translate("HModifyRow", "Totale Kg:", 0));
        pbSave->setText(QApplication::translate("HModifyRow", "Salva", 0));
        pbClose->setText(QApplication::translate("HModifyRow", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HModifyRow: public Ui_HModifyRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFYROW_H
