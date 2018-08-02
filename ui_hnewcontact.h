/********************************************************************************
** Form generated from reading UI file 'hnewcontact.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWCONTACT_H
#define UI_HNEWCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HNewContact->setObjectName(QStringLiteral("HNewContact"));
        HNewContact->resize(1118, 990);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HNewContact->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HNewContact);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_8 = new QLabel(HNewContact);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_8);

        leFiera = new QLineEdit(HNewContact);
        leFiera->setObjectName(QStringLiteral("leFiera"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, leFiera);


        verticalLayout_3->addLayout(formLayout_6);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HNewContact);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leNome = new QLineEdit(HNewContact);
        leNome->setObjectName(QStringLiteral("leNome"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leNome);


        verticalLayout_3->addLayout(formLayout);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_7 = new QLabel(HNewContact);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_7);

        leArea = new QLineEdit(HNewContact);
        leArea->setObjectName(QStringLiteral("leArea"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, leArea);


        verticalLayout_3->addLayout(formLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cbImport = new QCheckBox(HNewContact);
        cbImport->setObjectName(QStringLiteral("cbImport"));

        horizontalLayout_2->addWidget(cbImport);

        cbFoto = new QCheckBox(HNewContact);
        cbFoto->setObjectName(QStringLiteral("cbFoto"));

        horizontalLayout_2->addWidget(cbFoto);


        verticalLayout_3->addLayout(horizontalLayout_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(HNewContact);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        leReferente = new QLineEdit(HNewContact);
        leReferente->setObjectName(QStringLiteral("leReferente"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leReferente);


        verticalLayout_3->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(HNewContact);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        cbTipo = new QComboBox(HNewContact);
        cbTipo->setObjectName(QStringLiteral("cbTipo"));
        cbTipo->setEditable(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbTipo);


        verticalLayout_3->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(HNewContact);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        cbEtichetta = new QComboBox(HNewContact);
        cbEtichetta->setObjectName(QStringLiteral("cbEtichetta"));
        cbEtichetta->setEditable(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cbEtichetta);


        verticalLayout_3->addLayout(formLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(HNewContact);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        peRecapito = new QPlainTextEdit(HNewContact);
        peRecapito->setObjectName(QStringLiteral("peRecapito"));

        verticalLayout_4->addWidget(peRecapito);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(HNewContact);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        teInterests = new QTextEdit(HNewContact);
        teInterests->setObjectName(QStringLiteral("teInterests"));

        verticalLayout->addWidget(teInterests);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(HNewContact);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        teAssaggi = new QTextEdit(HNewContact);
        teAssaggi->setObjectName(QStringLiteral("teAssaggi"));

        verticalLayout_2->addWidget(teAssaggi);


        verticalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HNewContact);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HNewContact);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(HNewContact);

        QMetaObject::connectSlotsByName(HNewContact);
    } // setupUi

    void retranslateUi(QWidget *HNewContact)
    {
        HNewContact->setWindowTitle(QApplication::translate("HNewContact", "Nuovo Contatto", 0));
        label_8->setText(QApplication::translate("HNewContact", "Fiera:", 0));
        label->setText(QApplication::translate("HNewContact", "Nome:", 0));
        label_7->setText(QApplication::translate("HNewContact", "Area:", 0));
        cbImport->setText(QApplication::translate("HNewContact", "Importa da italia", 0));
        cbFoto->setText(QApplication::translate("HNewContact", "Foto", 0));
        label_2->setText(QApplication::translate("HNewContact", "Referente:", 0));
        label_3->setText(QApplication::translate("HNewContact", "Tipo:", 0));
        label_4->setText(QApplication::translate("HNewContact", "Etichetta:", 0));
        label_9->setText(QApplication::translate("HNewContact", "Recapito:", 0));
        label_5->setText(QApplication::translate("HNewContact", "Intereressati a:", 0));
        label_6->setText(QApplication::translate("HNewContact", "Assaggi:", 0));
        pushButton->setText(QApplication::translate("HNewContact", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HNewContact", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewContact: public Ui_HNewContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWCONTACT_H
