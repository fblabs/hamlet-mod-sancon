/********************************************************************************
** Form generated from reading UI file 'hbiodetails.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HBIODETAILS_H
#define UI_HBIODETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HBioDetails
{
public:
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *deBegin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateTimeEdit *deEnd;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lePh;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *leAw;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *leNacl;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *leCaricaBatterica;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *leLieviti;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *leMuffe;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *leBatLattici;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *leColiformi;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *leBacilloCereus;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout;
    QLabel *label_12;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *teNote;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pbSave;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HBioDetails)
    {
        if (HBioDetails->objectName().isEmpty())
            HBioDetails->setObjectName(QString::fromUtf8("HBioDetails"));
        HBioDetails->setWindowModality(Qt::WindowModal);
        HBioDetails->resize(477, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Bar-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HBioDetails->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(HBioDetails);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HBioDetails);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        deBegin = new QDateTimeEdit(HBioDetails);
        deBegin->setObjectName(QString::fromUtf8("deBegin"));
        deBegin->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        deBegin->setCalendarPopup(true);

        horizontalLayout->addWidget(deBegin);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HBioDetails);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        deEnd = new QDateTimeEdit(HBioDetails);
        deEnd->setObjectName(QString::fromUtf8("deEnd"));
        deEnd->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        deEnd->setCalendarPopup(true);

        horizontalLayout_2->addWidget(deEnd);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout_3->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(HBioDetails);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(label_3);

        lePh = new QLineEdit(HBioDetails);
        lePh->setObjectName(QString::fromUtf8("lePh"));
        lePh->setMinimumSize(QSize(50, 0));
        lePh->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(lePh);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(HBioDetails);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(label_4);

        leAw = new QLineEdit(HBioDetails);
        leAw->setObjectName(QString::fromUtf8("leAw"));
        leAw->setMinimumSize(QSize(50, 0));
        leAw->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(leAw);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(HBioDetails);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        leNacl = new QLineEdit(HBioDetails);
        leNacl->setObjectName(QString::fromUtf8("leNacl"));
        leNacl->setMinimumSize(QSize(50, 0));
        leNacl->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(leNacl);


        gridLayout->addLayout(horizontalLayout_5, 0, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(HBioDetails);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(80, 0));
        label_6->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(label_6);

        leCaricaBatterica = new QLineEdit(HBioDetails);
        leCaricaBatterica->setObjectName(QString::fromUtf8("leCaricaBatterica"));
        leCaricaBatterica->setMinimumSize(QSize(50, 0));
        leCaricaBatterica->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(leCaricaBatterica);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(HBioDetails);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(80, 0));
        label_7->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(label_7);

        leLieviti = new QLineEdit(HBioDetails);
        leLieviti->setObjectName(QString::fromUtf8("leLieviti"));
        leLieviti->setMinimumSize(QSize(50, 0));
        leLieviti->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(leLieviti);


        gridLayout->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(HBioDetails);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(80, 0));
        label_8->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(label_8);

        leMuffe = new QLineEdit(HBioDetails);
        leMuffe->setObjectName(QString::fromUtf8("leMuffe"));
        leMuffe->setMinimumSize(QSize(50, 0));
        leMuffe->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(leMuffe);


        gridLayout->addLayout(horizontalLayout_8, 1, 2, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(HBioDetails);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(80, 0));
        label_9->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(label_9);

        leBatLattici = new QLineEdit(HBioDetails);
        leBatLattici->setObjectName(QString::fromUtf8("leBatLattici"));
        leBatLattici->setMinimumSize(QSize(50, 0));
        leBatLattici->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_9->addWidget(leBatLattici);


        gridLayout->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(HBioDetails);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(80, 0));
        label_10->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_10->addWidget(label_10);

        leColiformi = new QLineEdit(HBioDetails);
        leColiformi->setObjectName(QString::fromUtf8("leColiformi"));
        leColiformi->setMinimumSize(QSize(50, 0));
        leColiformi->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_10->addWidget(leColiformi);


        gridLayout->addLayout(horizontalLayout_10, 2, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(HBioDetails);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(80, 0));
        label_11->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_11->addWidget(label_11);

        leBacilloCereus = new QLineEdit(HBioDetails);
        leBacilloCereus->setObjectName(QString::fromUtf8("leBacilloCereus"));
        leBacilloCereus->setMinimumSize(QSize(50, 0));
        leBacilloCereus->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_11->addWidget(leBacilloCereus);


        gridLayout->addLayout(horizontalLayout_11, 2, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_12 = new QLabel(HBioDetails);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_13->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        teNote = new QTextEdit(HBioDetails);
        teNote->setObjectName(QString::fromUtf8("teNote"));
        teNote->setMinimumSize(QSize(0, 80));
        teNote->setMaximumSize(QSize(16777215, 80));

        verticalLayout_2->addWidget(teNote);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_13->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_3 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        pbSave = new QPushButton(HBioDetails);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout_12->addWidget(pbSave);

        pbPrint = new QPushButton(HBioDetails);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon2);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_12->addWidget(pbPrint);

        pbClose = new QPushButton(HBioDetails);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon3);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_12->addWidget(pbClose);


        verticalLayout_3->addLayout(horizontalLayout_12);


        retranslateUi(HBioDetails);

        QMetaObject::connectSlotsByName(HBioDetails);
    } // setupUi

    void retranslateUi(QWidget *HBioDetails)
    {
        HBioDetails->setWindowTitle(QCoreApplication::translate("HBioDetails", "Dati Biometrici Lotto", nullptr));
        label->setText(QCoreApplication::translate("HBioDetails", "Data inizio:", nullptr));
        label_2->setText(QCoreApplication::translate("HBioDetails", "Data fine:", nullptr));
        label_3->setText(QCoreApplication::translate("HBioDetails", "Ph:", nullptr));
        label_4->setText(QCoreApplication::translate("HBioDetails", "Aw:", nullptr));
        label_5->setText(QCoreApplication::translate("HBioDetails", "NaCl:", nullptr));
        label_6->setText(QCoreApplication::translate("HBioDetails", "Carica batterica:", nullptr));
        label_7->setText(QCoreApplication::translate("HBioDetails", "Lieviti:", nullptr));
        label_8->setText(QCoreApplication::translate("HBioDetails", "Muffe:", nullptr));
        label_9->setText(QCoreApplication::translate("HBioDetails", "Batteri Lattici:", nullptr));
        label_10->setText(QCoreApplication::translate("HBioDetails", "Coliformi (Tot.)", nullptr));
        label_11->setText(QCoreApplication::translate("HBioDetails", "Bacillo Cereus:", nullptr));
        label_12->setText(QCoreApplication::translate("HBioDetails", "Note:", nullptr));
        pbSave->setText(QCoreApplication::translate("HBioDetails", "Salva", nullptr));
        pbPrint->setText(QCoreApplication::translate("HBioDetails", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HBioDetails", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HBioDetails: public Ui_HBioDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HBIODETAILS_H
