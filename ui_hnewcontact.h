/********************************************************************************
** Form generated from reading UI file 'hnewcontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWCONTACT_H
#define UI_HNEWCONTACT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNewContact
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_6;
    QLabel *label_8;
    QLineEdit *leFiera;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leNome;
    QFormLayout *formLayout_5;
    QLabel *label_7;
    QLineEdit *leArea;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cbImport;
    QCheckBox *cbFoto;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *leReferente;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QComboBox *cbTipo;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QComboBox *cbEtichetta;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QPlainTextEdit *peRecapito;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTextEdit *teInterests;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTextEdit *teAssaggi;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HNewContact)
    {
        if (HNewContact->objectName().isEmpty())
            HNewContact->setObjectName(QString::fromUtf8("HNewContact"));
        HNewContact->resize(1118, 990);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HNewContact->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HNewContact);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_8 = new QLabel(HNewContact);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_8);

        leFiera = new QLineEdit(HNewContact);
        leFiera->setObjectName(QString::fromUtf8("leFiera"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, leFiera);


        verticalLayout_3->addLayout(formLayout_6);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HNewContact);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leNome = new QLineEdit(HNewContact);
        leNome->setObjectName(QString::fromUtf8("leNome"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNome);


        verticalLayout_3->addLayout(formLayout);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_7 = new QLabel(HNewContact);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_7);

        leArea = new QLineEdit(HNewContact);
        leArea->setObjectName(QString::fromUtf8("leArea"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, leArea);


        verticalLayout_3->addLayout(formLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cbImport = new QCheckBox(HNewContact);
        cbImport->setObjectName(QString::fromUtf8("cbImport"));

        horizontalLayout_2->addWidget(cbImport);

        cbFoto = new QCheckBox(HNewContact);
        cbFoto->setObjectName(QString::fromUtf8("cbFoto"));

        horizontalLayout_2->addWidget(cbFoto);


        verticalLayout_3->addLayout(horizontalLayout_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(HNewContact);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        leReferente = new QLineEdit(HNewContact);
        leReferente->setObjectName(QString::fromUtf8("leReferente"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leReferente);


        verticalLayout_3->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(HNewContact);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        cbTipo = new QComboBox(HNewContact);
        cbTipo->setObjectName(QString::fromUtf8("cbTipo"));
        cbTipo->setEditable(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbTipo);


        verticalLayout_3->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_4 = new QLabel(HNewContact);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        cbEtichetta = new QComboBox(HNewContact);
        cbEtichetta->setObjectName(QString::fromUtf8("cbEtichetta"));
        cbEtichetta->setEditable(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cbEtichetta);


        verticalLayout_3->addLayout(formLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_9 = new QLabel(HNewContact);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_4->addWidget(label_9);

        peRecapito = new QPlainTextEdit(HNewContact);
        peRecapito->setObjectName(QString::fromUtf8("peRecapito"));

        verticalLayout_4->addWidget(peRecapito);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(HNewContact);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        teInterests = new QTextEdit(HNewContact);
        teInterests->setObjectName(QString::fromUtf8("teInterests"));

        verticalLayout->addWidget(teInterests);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(HNewContact);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        teAssaggi = new QTextEdit(HNewContact);
        teAssaggi->setObjectName(QString::fromUtf8("teAssaggi"));

        verticalLayout_2->addWidget(teAssaggi);


        verticalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HNewContact);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HNewContact);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(HNewContact);

        QMetaObject::connectSlotsByName(HNewContact);
    } // setupUi

    void retranslateUi(QWidget *HNewContact)
    {
        HNewContact->setWindowTitle(QCoreApplication::translate("HNewContact", "Nuovo Contatto", nullptr));
        label_8->setText(QCoreApplication::translate("HNewContact", "Fiera:", nullptr));
        label->setText(QCoreApplication::translate("HNewContact", "Nome:", nullptr));
        label_7->setText(QCoreApplication::translate("HNewContact", "Area:", nullptr));
        cbImport->setText(QCoreApplication::translate("HNewContact", "Importa da italia", nullptr));
        cbFoto->setText(QCoreApplication::translate("HNewContact", "Foto", nullptr));
        label_2->setText(QCoreApplication::translate("HNewContact", "Referente:", nullptr));
        label_3->setText(QCoreApplication::translate("HNewContact", "Tipo:", nullptr));
        label_4->setText(QCoreApplication::translate("HNewContact", "Etichetta:", nullptr));
        label_9->setText(QCoreApplication::translate("HNewContact", "Recapito:", nullptr));
        label_5->setText(QCoreApplication::translate("HNewContact", "Intereressati a:", nullptr));
        label_6->setText(QCoreApplication::translate("HNewContact", "Assaggi:", nullptr));
        pushButton->setText(QCoreApplication::translate("HNewContact", "Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HNewContact", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNewContact: public Ui_HNewContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWCONTACT_H
