/********************************************************************************
** Form generated from reading UI file 'hwpmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HWPMANAGER_H
#define UI_HWPMANAGER_H

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
    QLineEdit *leOlio;
    QLineEdit *leSpecOlio;
    QLabel *label_6;
    QComboBox *cbSanty;
    QLabel *label_5;
    QLabel *label_8;
    QComboBox *cbTappo;
    QLabel *label_12;
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

    void setupUi(QWidget *HWpManager)
    {
        if (HWpManager->objectName().isEmpty())
            HWpManager->setObjectName(QStringLiteral("HWpManager"));
        HWpManager->setWindowModality(Qt::ApplicationModal);
        HWpManager->resize(747, 414);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HWpManager->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HWpManager);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(HWpManager);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(HWpManager);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        cbProdotto = new QComboBox(HWpManager);
        cbProdotto->setObjectName(QStringLiteral("cbProdotto"));

        gridLayout->addWidget(cbProdotto, 0, 3, 1, 1);

        cbCliente = new QComboBox(HWpManager);
        cbCliente->setObjectName(QStringLiteral("cbCliente"));

        gridLayout->addWidget(cbCliente, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_9 = new QLabel(HWpManager);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        leNumOrd = new QLineEdit(HWpManager);
        leNumOrd->setObjectName(QStringLiteral("leNumOrd"));
        leNumOrd->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNumOrd);


        verticalLayout->addLayout(formLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        leQuant = new QLineEdit(HWpManager);
        leQuant->setObjectName(QStringLiteral("leQuant"));

        gridLayout_4->addWidget(leQuant, 0, 1, 1, 1);

        label_4 = new QLabel(HWpManager);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 0, 2, 1, 1);

        leVaso = new QLineEdit(HWpManager);
        leVaso->setObjectName(QStringLiteral("leVaso"));

        gridLayout_4->addWidget(leVaso, 0, 3, 1, 1);

        label = new QLabel(HWpManager);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        leOlio = new QLineEdit(HWpManager);
        leOlio->setObjectName(QStringLiteral("leOlio"));
        leOlio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(leOlio, 0, 1, 1, 1);

        leSpecOlio = new QLineEdit(HWpManager);
        leSpecOlio->setObjectName(QStringLiteral("leSpecOlio"));
        leSpecOlio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(leSpecOlio, 0, 3, 1, 1);

        label_6 = new QLabel(HWpManager);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        cbSanty = new QComboBox(HWpManager);
        cbSanty->setObjectName(QStringLiteral("cbSanty"));

        gridLayout_3->addWidget(cbSanty, 0, 7, 1, 1);

        label_5 = new QLabel(HWpManager);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_5, 0, 4, 1, 1);

        label_8 = new QLabel(HWpManager);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(label_8, 0, 6, 1, 1);

        cbTappo = new QComboBox(HWpManager);
        cbTappo->setObjectName(QStringLiteral("cbTappo"));

        gridLayout_3->addWidget(cbTappo, 0, 5, 1, 1);

        label_12 = new QLabel(HWpManager);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_12, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_10 = new QLabel(HWpManager);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        leAllergeni = new QLineEdit(HWpManager);
        leAllergeni->setObjectName(QStringLiteral("leAllergeni"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leAllergeni);


        verticalLayout->addLayout(formLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        rbFresh = new QRadioButton(HWpManager);
        rbFresh->setObjectName(QStringLiteral("rbFresh"));
        rbFresh->setChecked(false);

        gridLayout_2->addWidget(rbFresh, 0, 0, 1, 1);

        rbPastorized = new QRadioButton(HWpManager);
        rbPastorized->setObjectName(QStringLiteral("rbPastorized"));

        gridLayout_2->addWidget(rbPastorized, 0, 1, 1, 1);

        rbNone = new QRadioButton(HWpManager);
        rbNone->setObjectName(QStringLiteral("rbNone"));
        rbNone->setChecked(true);

        gridLayout_2->addWidget(rbNone, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(HWpManager);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        ptNote = new QPlainTextEdit(HWpManager);
        ptNote->setObjectName(QStringLiteral("ptNote"));

        horizontalLayout_2->addWidget(ptNote);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(HWpManager);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        leTotal = new QLineEdit(HWpManager);
        leTotal->setObjectName(QStringLiteral("leTotal"));
        leTotal->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(leTotal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbSave = new QPushButton(HWpManager);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbClose = new QPushButton(HWpManager);
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
        QWidget::setTabOrder(leOlio, leSpecOlio);
        QWidget::setTabOrder(leSpecOlio, cbTappo);
        QWidget::setTabOrder(cbTappo, cbSanty);
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
        HWpManager->setWindowTitle(QApplication::translate("HWpManager", "Aggiungi riga programmazione", 0));
        label_2->setText(QApplication::translate("HWpManager", "Cliente:", 0));
        label_3->setText(QApplication::translate("HWpManager", "Prodotto:", 0));
        label_9->setText(QApplication::translate("HWpManager", "N.Ordine:", 0));
        label_4->setText(QApplication::translate("HWpManager", "Peso prodotto (gr.)", 0));
        label->setText(QApplication::translate("HWpManager", "Quantit\303\240: ", 0));
        label_6->setText(QApplication::translate("HWpManager", "Olio:", 0));
        label_5->setText(QApplication::translate("HWpManager", "Tappo:", 0));
        label_8->setText(QApplication::translate("HWpManager", "Sanificazione:", 0));
        label_12->setText(QApplication::translate("HWpManager", "Peso Olio", 0));
        label_10->setText(QApplication::translate("HWpManager", "Allergeni:", 0));
        rbFresh->setText(QApplication::translate("HWpManager", "Fresco", 0));
        rbPastorized->setText(QApplication::translate("HWpManager", "Pastorizzato", 0));
        rbNone->setText(QApplication::translate("HWpManager", "Nessuna", 0));
        label_11->setText(QApplication::translate("HWpManager", "Note:", 0));
        label_7->setText(QApplication::translate("HWpManager", "Totale:", 0));
        pbSave->setText(QApplication::translate("HWpManager", "Salva", 0));
        pbClose->setText(QApplication::translate("HWpManager", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HWpManager: public Ui_HWpManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HWPMANAGER_H
