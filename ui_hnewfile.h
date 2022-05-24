/********************************************************************************
** Form generated from reading UI file 'hnewfile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWFILE_H
#define UI_HNEWFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HNewFile
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *lbNomeCliente;
    QLabel *label_8;
    QLabel *lbNomeProdotto;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leOlio;
    QLabel *label_2;
    QLineEdit *leVaso;
    QLabel *label_3;
    QLineEdit *leTappo;
    QLabel *label_4;
    QLineEdit *leEtichette;
    QLabel *label_5;
    QLineEdit *leScatole;
    QLabel *label_6;
    QPlainTextEdit *ptNote;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pbSave;
    QPushButton *pushButton_3;
    QPushButton *pbClose;

    void setupUi(QDialog *HNewFile)
    {
        if (HNewFile->objectName().isEmpty())
            HNewFile->setObjectName(QString::fromUtf8("HNewFile"));
        HNewFile->resize(1136, 453);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewFile->setWindowIcon(icon);
        HNewFile->setModal(true);
        verticalLayout = new QVBoxLayout(HNewFile);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(HNewFile);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        lbNomeCliente = new QLabel(HNewFile);
        lbNomeCliente->setObjectName(QString::fromUtf8("lbNomeCliente"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lbNomeCliente);

        label_8 = new QLabel(HNewFile);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        lbNomeProdotto = new QLabel(HNewFile);
        lbNomeProdotto->setObjectName(QString::fromUtf8("lbNomeProdotto"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lbNomeProdotto);


        verticalLayout->addLayout(formLayout_2);

        line = new QFrame(HNewFile);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HNewFile);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leOlio = new QLineEdit(HNewFile);
        leOlio->setObjectName(QString::fromUtf8("leOlio"));
        leOlio->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leOlio);

        label_2 = new QLabel(HNewFile);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leVaso = new QLineEdit(HNewFile);
        leVaso->setObjectName(QString::fromUtf8("leVaso"));
        leVaso->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, leVaso);

        label_3 = new QLabel(HNewFile);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        leTappo = new QLineEdit(HNewFile);
        leTappo->setObjectName(QString::fromUtf8("leTappo"));
        leTappo->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, leTappo);

        label_4 = new QLabel(HNewFile);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        leEtichette = new QLineEdit(HNewFile);
        leEtichette->setObjectName(QString::fromUtf8("leEtichette"));
        leEtichette->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, leEtichette);

        label_5 = new QLabel(HNewFile);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        leScatole = new QLineEdit(HNewFile);
        leScatole->setObjectName(QString::fromUtf8("leScatole"));
        leScatole->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, leScatole);

        label_6 = new QLabel(HNewFile);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        ptNote = new QPlainTextEdit(HNewFile);
        ptNote->setObjectName(QString::fromUtf8("ptNote"));
        ptNote->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, ptNote);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HNewFile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HNewFile);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Arrow-Left.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pbSave = new QPushButton(HNewFile);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon3);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pushButton_3 = new QPushButton(HNewFile);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        pbClose = new QPushButton(HNewFile);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon5);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HNewFile);

        QMetaObject::connectSlotsByName(HNewFile);
    } // setupUi

    void retranslateUi(QDialog *HNewFile)
    {
        HNewFile->setWindowTitle(QCoreApplication::translate("HNewFile", "Scheda Cliente", nullptr));
        label_7->setText(QCoreApplication::translate("HNewFile", "CLIENTE: ", nullptr));
        label_8->setText(QCoreApplication::translate("HNewFile", "PRODOTTO: ", nullptr));
        lbNomeProdotto->setText(QString());
        label->setText(QCoreApplication::translate("HNewFile", "OLIO: ", nullptr));
        label_2->setText(QCoreApplication::translate("HNewFile", "VASO: ", nullptr));
        label_3->setText(QCoreApplication::translate("HNewFile", "TAPPO: ", nullptr));
        leTappo->setText(QString());
        label_4->setText(QCoreApplication::translate("HNewFile", "ETICHETTE: ", nullptr));
        label_5->setText(QCoreApplication::translate("HNewFile", "SCATOLE: ", nullptr));
        label_6->setText(QCoreApplication::translate("HNewFile", "NOTE:", nullptr));
        pushButton->setText(QCoreApplication::translate("HNewFile", "Modifica", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HNewFile", "Elimina", nullptr));
        pbSave->setText(QCoreApplication::translate("HNewFile", "Salva", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HNewFile", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HNewFile", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNewFile: public Ui_HNewFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWFILE_H
