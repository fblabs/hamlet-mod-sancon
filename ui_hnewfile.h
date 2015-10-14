/********************************************************************************
** Form generated from reading UI file 'hnewfile.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWFILE_H
#define UI_HNEWFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HNewFile->setObjectName(QStringLiteral("HNewFile"));
        HNewFile->resize(1136, 453);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewFile->setWindowIcon(icon);
        HNewFile->setModal(true);
        verticalLayout = new QVBoxLayout(HNewFile);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_7 = new QLabel(HNewFile);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        lbNomeCliente = new QLabel(HNewFile);
        lbNomeCliente->setObjectName(QStringLiteral("lbNomeCliente"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lbNomeCliente);

        label_8 = new QLabel(HNewFile);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        lbNomeProdotto = new QLabel(HNewFile);
        lbNomeProdotto->setObjectName(QStringLiteral("lbNomeProdotto"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lbNomeProdotto);


        verticalLayout->addLayout(formLayout_2);

        line = new QFrame(HNewFile);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HNewFile);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leOlio = new QLineEdit(HNewFile);
        leOlio->setObjectName(QStringLiteral("leOlio"));
        leOlio->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, leOlio);

        label_2 = new QLabel(HNewFile);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leVaso = new QLineEdit(HNewFile);
        leVaso->setObjectName(QStringLiteral("leVaso"));
        leVaso->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, leVaso);

        label_3 = new QLabel(HNewFile);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        leTappo = new QLineEdit(HNewFile);
        leTappo->setObjectName(QStringLiteral("leTappo"));
        leTappo->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, leTappo);

        label_4 = new QLabel(HNewFile);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        leEtichette = new QLineEdit(HNewFile);
        leEtichette->setObjectName(QStringLiteral("leEtichette"));
        leEtichette->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, leEtichette);

        label_5 = new QLabel(HNewFile);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        leScatole = new QLineEdit(HNewFile);
        leScatole->setObjectName(QStringLiteral("leScatole"));
        leScatole->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, leScatole);

        label_6 = new QLabel(HNewFile);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        ptNote = new QPlainTextEdit(HNewFile);
        ptNote->setObjectName(QStringLiteral("ptNote"));
        ptNote->setReadOnly(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, ptNote);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HNewFile);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HNewFile);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Arrow-Left.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pbSave = new QPushButton(HNewFile);
        pbSave->setObjectName(QStringLiteral("pbSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon3);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pushButton_3 = new QPushButton(HNewFile);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);

        pbClose = new QPushButton(HNewFile);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon5);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HNewFile);

        QMetaObject::connectSlotsByName(HNewFile);
    } // setupUi

    void retranslateUi(QDialog *HNewFile)
    {
        HNewFile->setWindowTitle(QApplication::translate("HNewFile", "Scheda Cliente", 0));
        label_7->setText(QApplication::translate("HNewFile", "CLIENTE: ", 0));
        label_8->setText(QApplication::translate("HNewFile", "PRODOTTO: ", 0));
        lbNomeProdotto->setText(QString());
        label->setText(QApplication::translate("HNewFile", "OLIO: ", 0));
        label_2->setText(QApplication::translate("HNewFile", "VASO: ", 0));
        label_3->setText(QApplication::translate("HNewFile", "TAPPO: ", 0));
        leTappo->setText(QString());
        label_4->setText(QApplication::translate("HNewFile", "ETICHETTE: ", 0));
        label_5->setText(QApplication::translate("HNewFile", "SCATOLE: ", 0));
        label_6->setText(QApplication::translate("HNewFile", "NOTE:", 0));
        pushButton->setText(QApplication::translate("HNewFile", "Modifica", 0));
        pushButton_2->setText(QApplication::translate("HNewFile", "Elimina", 0));
        pbSave->setText(QApplication::translate("HNewFile", "Salva", 0));
        pushButton_3->setText(QApplication::translate("HNewFile", "Stampa", 0));
        pbClose->setText(QApplication::translate("HNewFile", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewFile: public Ui_HNewFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWFILE_H
