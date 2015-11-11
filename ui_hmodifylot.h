/********************************************************************************
** Form generated from reading UI file 'hmodifylot.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIFYLOT_H
#define UI_HMODIFYLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QLabel *label;
    QLineEdit *leLot;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *leProd;
    QLineEdit *leGiac;
    QGridLayout *gridLayout_2;
    QComboBox *cbUm;
    QLabel *label_2;
    QComboBox *cbAnag;
    QLabel *label_6;
    QLineEdit *leLotFornitore;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QPlainTextEdit *plainTextEdit;
    QComboBox *cbtipo;
    QLineEdit *leEan;
    QDateEdit *deScad;
    QLabel *label_4;
    QCheckBox *cbScad;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HModifyLot)
    {
        if (HModifyLot->objectName().isEmpty())
            HModifyLot->setObjectName(QStringLiteral("HModifyLot"));
        HModifyLot->setWindowModality(Qt::NonModal);
        HModifyLot->resize(914, 429);
        verticalLayout = new QVBoxLayout(HModifyLot);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(HModifyLot);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leLot = new QLineEdit(HModifyLot);
        leLot->setObjectName(QStringLiteral("leLot"));
        leLot->setMaximumSize(QSize(100, 16777215));
        leLot->setReadOnly(true);

        gridLayout->addWidget(leLot, 0, 1, 1, 1);

        label_5 = new QLabel(HModifyLot);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(label_5, 0, 4, 1, 1);

        label_3 = new QLabel(HModifyLot);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        leProd = new QLineEdit(HModifyLot);
        leProd->setObjectName(QStringLiteral("leProd"));
        leProd->setMaximumSize(QSize(16777215, 16777215));
        leProd->setReadOnly(true);

        gridLayout->addWidget(leProd, 0, 3, 1, 1);

        leGiac = new QLineEdit(HModifyLot);
        leGiac->setObjectName(QStringLiteral("leGiac"));
        leGiac->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(leGiac, 0, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cbUm = new QComboBox(HModifyLot);
        cbUm->setObjectName(QStringLiteral("cbUm"));
        cbUm->setEditable(true);
        cbUm->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbUm, 0, 2, 1, 1);

        label_2 = new QLabel(HModifyLot);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        cbAnag = new QComboBox(HModifyLot);
        cbAnag->setObjectName(QStringLiteral("cbAnag"));
        cbAnag->setEditable(true);
        cbAnag->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbAnag, 3, 2, 1, 1);

        label_6 = new QLabel(HModifyLot);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        leLotFornitore = new QLineEdit(HModifyLot);
        leLotFornitore->setObjectName(QStringLiteral("leLotFornitore"));

        gridLayout_2->addWidget(leLotFornitore, 4, 2, 1, 1);

        label_8 = new QLabel(HModifyLot);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        label_7 = new QLabel(HModifyLot);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        label_9 = new QLabel(HModifyLot);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 6, 0, 1, 1);

        label_10 = new QLabel(HModifyLot);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 7, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(HModifyLot);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 100));

        gridLayout_2->addWidget(plainTextEdit, 7, 2, 1, 1);

        cbtipo = new QComboBox(HModifyLot);
        cbtipo->setObjectName(QStringLiteral("cbtipo"));
        cbtipo->setEditable(true);
        cbtipo->setInsertPolicy(QComboBox::NoInsert);

        gridLayout_2->addWidget(cbtipo, 6, 2, 1, 1);

        leEan = new QLineEdit(HModifyLot);
        leEan->setObjectName(QStringLiteral("leEan"));

        gridLayout_2->addWidget(leEan, 5, 2, 1, 1);

        deScad = new QDateEdit(HModifyLot);
        deScad->setObjectName(QStringLiteral("deScad"));

        gridLayout_2->addWidget(deScad, 1, 2, 1, 1);

        label_4 = new QLabel(HModifyLot);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        cbScad = new QCheckBox(HModifyLot);
        cbScad->setObjectName(QStringLiteral("cbScad"));

        gridLayout_2->addWidget(cbScad, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HModifyLot);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(HModifyLot);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HModifyLot);

        QMetaObject::connectSlotsByName(HModifyLot);
    } // setupUi

    void retranslateUi(QWidget *HModifyLot)
    {
        HModifyLot->setWindowTitle(QApplication::translate("HModifyLot", "Form", 0));
        label->setText(QApplication::translate("HModifyLot", "Lotto:", 0));
        label_5->setText(QApplication::translate("HModifyLot", "Giacenza:", 0));
        label_3->setText(QApplication::translate("HModifyLot", "Prodotto:", 0));
        label_2->setText(QApplication::translate("HModifyLot", "Unit\303\240 di misura:", 0));
        label_6->setText(QApplication::translate("HModifyLot", "Cliente/fornitore:", 0));
        label_8->setText(QApplication::translate("HModifyLot", "lotto  di uscita:", 0));
        label_7->setText(QApplication::translate("HModifyLot", "lotto Fornitore:", 0));
        label_9->setText(QApplication::translate("HModifyLot", "Tipo:", 0));
        label_10->setText(QApplication::translate("HModifyLot", "Note:", 0));
        label_4->setText(QApplication::translate("HModifyLot", "Scadenza:", 0));
        cbScad->setText(QApplication::translate("HModifyLot", "No scadenza", 0));
        pushButton->setText(QApplication::translate("HModifyLot", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HModifyLot", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HModifyLot: public Ui_HModifyLot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIFYLOT_H
