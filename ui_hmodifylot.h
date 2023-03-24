/********************************************************************************
** Form generated from reading UI file 'hmodifylot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIFYLOT_H
#define UI_HMODIFYLOT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModifyLot
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *leGiac;
    QLineEdit *leProd;
    QLineEdit *leLot;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QCheckBox *cbAttivo;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *leLotFornitore;
    QLabel *label_11;
    QLabel *label_7;
    QLineEdit *leOperatore;
    QCheckBox *cbScad;
    QComboBox *cbAnag;
    QLabel *label_9;
    QComboBox *cbUm;
    QDateEdit *deScad;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *leEan;
    QComboBox *cbtipo;
    QLabel *label_10;
    QPlainTextEdit *plainTextEdit;
    QLabel *lbLoad;
    QLineEdit *leLoad;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pbComposizione;
    QPushButton *pbLotOperations;
    QPushButton *pbClose;

    void setupUi(QWidget *HModifyLot)
    {
        if (HModifyLot->objectName().isEmpty())
            HModifyLot->setObjectName(QString::fromUtf8("HModifyLot"));
        HModifyLot->setWindowModality(Qt::WindowModal);
        HModifyLot->resize(914, 437);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Wood-4-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HModifyLot->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HModifyLot);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leGiac = new QLineEdit(HModifyLot);
        leGiac->setObjectName(QString::fromUtf8("leGiac"));
        leGiac->setMaximumSize(QSize(80, 16777215));
        leGiac->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leGiac->setReadOnly(true);

        gridLayout->addWidget(leGiac, 0, 6, 1, 1);

        leProd = new QLineEdit(HModifyLot);
        leProd->setObjectName(QString::fromUtf8("leProd"));
        leProd->setMaximumSize(QSize(16777215, 16777215));
        leProd->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leProd->setReadOnly(true);

        gridLayout->addWidget(leProd, 0, 4, 1, 1);

        leLot = new QLineEdit(HModifyLot);
        leLot->setObjectName(QString::fromUtf8("leLot"));
        leLot->setMaximumSize(QSize(100, 16777215));
        leLot->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leLot->setReadOnly(true);

        gridLayout->addWidget(leLot, 0, 1, 1, 1);

        label_5 = new QLabel(HModifyLot);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        label_3 = new QLabel(HModifyLot);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        label = new QLabel(HModifyLot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cbAttivo = new QCheckBox(HModifyLot);
        cbAttivo->setObjectName(QString::fromUtf8("cbAttivo"));

        gridLayout_2->addWidget(cbAttivo, 0, 0, 1, 1);

        label_6 = new QLabel(HModifyLot);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_4 = new QLabel(HModifyLot);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        leLotFornitore = new QLineEdit(HModifyLot);
        leLotFornitore->setObjectName(QString::fromUtf8("leLotFornitore"));

        gridLayout_2->addWidget(leLotFornitore, 5, 2, 1, 1);

        label_11 = new QLabel(HModifyLot);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 9, 0, 1, 1);

        label_7 = new QLabel(HModifyLot);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        leOperatore = new QLineEdit(HModifyLot);
        leOperatore->setObjectName(QString::fromUtf8("leOperatore"));

        gridLayout_2->addWidget(leOperatore, 9, 2, 1, 1);

        cbScad = new QCheckBox(HModifyLot);
        cbScad->setObjectName(QString::fromUtf8("cbScad"));

        gridLayout_2->addWidget(cbScad, 2, 1, 1, 1);

        cbAnag = new QComboBox(HModifyLot);
        cbAnag->setObjectName(QString::fromUtf8("cbAnag"));
        cbAnag->setEditable(true);
        cbAnag->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbAnag, 4, 2, 1, 1);

        label_9 = new QLabel(HModifyLot);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

        cbUm = new QComboBox(HModifyLot);
        cbUm->setObjectName(QString::fromUtf8("cbUm"));
        cbUm->setEditable(true);
        cbUm->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbUm, 1, 2, 1, 1);

        deScad = new QDateEdit(HModifyLot);
        deScad->setObjectName(QString::fromUtf8("deScad"));
        deScad->setCalendarPopup(true);

        gridLayout_2->addWidget(deScad, 2, 2, 1, 1);

        label_2 = new QLabel(HModifyLot);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_8 = new QLabel(HModifyLot);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        leEan = new QLineEdit(HModifyLot);
        leEan->setObjectName(QString::fromUtf8("leEan"));

        gridLayout_2->addWidget(leEan, 6, 2, 1, 1);

        cbtipo = new QComboBox(HModifyLot);
        cbtipo->setObjectName(QString::fromUtf8("cbtipo"));
        cbtipo->setEditable(true);
        cbtipo->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbtipo, 7, 2, 1, 1);

        label_10 = new QLabel(HModifyLot);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 8, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(HModifyLot);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 100));

        gridLayout_2->addWidget(plainTextEdit, 8, 2, 1, 1);

        lbLoad = new QLabel(HModifyLot);
        lbLoad->setObjectName(QString::fromUtf8("lbLoad"));

        gridLayout_2->addWidget(lbLoad, 10, 0, 1, 1);

        leLoad = new QLineEdit(HModifyLot);
        leLoad->setObjectName(QString::fromUtf8("leLoad"));
        leLoad->setMaximumSize(QSize(100, 16777215));
        leLoad->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leLoad->setReadOnly(true);

        gridLayout_2->addWidget(leLoad, 10, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(HModifyLot);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pbComposizione = new QPushButton(HModifyLot);
        pbComposizione->setObjectName(QString::fromUtf8("pbComposizione"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Bar-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbComposizione->setIcon(icon2);
        pbComposizione->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbComposizione);

        pbLotOperations = new QPushButton(HModifyLot);
        pbLotOperations->setObjectName(QString::fromUtf8("pbLotOperations"));
        pbLotOperations->setIcon(icon);
        pbLotOperations->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbLotOperations);

        pbClose = new QPushButton(HModifyLot);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HModifyLot);

        QMetaObject::connectSlotsByName(HModifyLot);
    } // setupUi

    void retranslateUi(QWidget *HModifyLot)
    {
        HModifyLot->setWindowTitle(QCoreApplication::translate("HModifyLot", "Informazioni su lotto", nullptr));
        label_5->setText(QCoreApplication::translate("HModifyLot", "Giacenza:", nullptr));
        label_3->setText(QCoreApplication::translate("HModifyLot", "Prodotto:", nullptr));
        label->setText(QCoreApplication::translate("HModifyLot", "Lotto:", nullptr));
        cbAttivo->setText(QCoreApplication::translate("HModifyLot", "Attivo", nullptr));
        label_6->setText(QCoreApplication::translate("HModifyLot", "Cliente/fornitore:", nullptr));
        label_4->setText(QCoreApplication::translate("HModifyLot", "Scadenza:", nullptr));
        label_11->setText(QCoreApplication::translate("HModifyLot", "Operatore:", nullptr));
        label_7->setText(QCoreApplication::translate("HModifyLot", "lotto Fornitore:", nullptr));
        cbScad->setText(QCoreApplication::translate("HModifyLot", "No scadenza", nullptr));
        label_9->setText(QCoreApplication::translate("HModifyLot", "Tipo:", nullptr));
        label_2->setText(QCoreApplication::translate("HModifyLot", "Unit\303\240 di misura:", nullptr));
        label_8->setText(QCoreApplication::translate("HModifyLot", "lotto  di uscita:", nullptr));
        label_10->setText(QCoreApplication::translate("HModifyLot", "Note:", nullptr));
        lbLoad->setText(QCoreApplication::translate("HModifyLot", "Carichi tra", nullptr));
        pushButton->setText(QCoreApplication::translate("HModifyLot", "Salva", nullptr));
        pbComposizione->setText(QCoreApplication::translate("HModifyLot", "Dettagli", nullptr));
        pbLotOperations->setText(QCoreApplication::translate("HModifyLot", "Movimenti Lotto", nullptr));
        pbClose->setText(QCoreApplication::translate("HModifyLot", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModifyLot: public Ui_HModifyLot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFYLOT_H
