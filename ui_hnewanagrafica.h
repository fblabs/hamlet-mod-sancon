/********************************************************************************
** Form generated from reading UI file 'hnewanagrafica.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWANAGRAFICA_H
#define UI_HNEWANAGRAFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNewAnagrafica
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leRagsoc;
    QLabel *label_2;
    QLineEdit *leAddress;
    QLabel *label_3;
    QLineEdit *leCity;
    QLabel *label_4;
    QLineEdit *leCap;
    QLabel *label_5;
    QLineEdit *leProvincia;
    QLabel *label_6;
    QLineEdit *leTel;
    QLabel *label_7;
    QLineEdit *leContatto;
    QLabel *label_8;
    QLineEdit *leNote;
    QLabel *label_9;
    QLineEdit *leNazione;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbCliente;
    QCheckBox *cbfornitore;
    QCheckBox *cbTrasportatore;
    QCheckBox *cbSubcliente;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HNewAnagrafica)
    {
        if (HNewAnagrafica->objectName().isEmpty())
            HNewAnagrafica->setObjectName(QStringLiteral("HNewAnagrafica"));
        HNewAnagrafica->setWindowModality(Qt::ApplicationModal);
        HNewAnagrafica->resize(487, 307);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/User-Male.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewAnagrafica->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HNewAnagrafica);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HNewAnagrafica);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leRagsoc = new QLineEdit(HNewAnagrafica);
        leRagsoc->setObjectName(QStringLiteral("leRagsoc"));
        leRagsoc->setMaxLength(45);

        formLayout->setWidget(0, QFormLayout::FieldRole, leRagsoc);

        label_2 = new QLabel(HNewAnagrafica);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leAddress = new QLineEdit(HNewAnagrafica);
        leAddress->setObjectName(QStringLiteral("leAddress"));
        leAddress->setMaxLength(50);

        formLayout->setWidget(1, QFormLayout::FieldRole, leAddress);

        label_3 = new QLabel(HNewAnagrafica);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        leCity = new QLineEdit(HNewAnagrafica);
        leCity->setObjectName(QStringLiteral("leCity"));
        leCity->setMaxLength(50);

        formLayout->setWidget(2, QFormLayout::FieldRole, leCity);

        label_4 = new QLabel(HNewAnagrafica);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        leCap = new QLineEdit(HNewAnagrafica);
        leCap->setObjectName(QStringLiteral("leCap"));
        leCap->setMaxLength(12);

        formLayout->setWidget(3, QFormLayout::FieldRole, leCap);

        label_5 = new QLabel(HNewAnagrafica);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        leProvincia = new QLineEdit(HNewAnagrafica);
        leProvincia->setObjectName(QStringLiteral("leProvincia"));

        formLayout->setWidget(4, QFormLayout::FieldRole, leProvincia);

        label_6 = new QLabel(HNewAnagrafica);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        leTel = new QLineEdit(HNewAnagrafica);
        leTel->setObjectName(QStringLiteral("leTel"));
        leTel->setMaxLength(45);

        formLayout->setWidget(6, QFormLayout::FieldRole, leTel);

        label_7 = new QLabel(HNewAnagrafica);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        leContatto = new QLineEdit(HNewAnagrafica);
        leContatto->setObjectName(QStringLiteral("leContatto"));
        leContatto->setMaxLength(45);

        formLayout->setWidget(7, QFormLayout::FieldRole, leContatto);

        label_8 = new QLabel(HNewAnagrafica);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        leNote = new QLineEdit(HNewAnagrafica);
        leNote->setObjectName(QStringLiteral("leNote"));

        formLayout->setWidget(8, QFormLayout::FieldRole, leNote);

        label_9 = new QLabel(HNewAnagrafica);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        leNazione = new QLineEdit(HNewAnagrafica);
        leNazione->setObjectName(QStringLiteral("leNazione"));
        leNazione->setMaxLength(45);

        formLayout->setWidget(5, QFormLayout::FieldRole, leNazione);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cbCliente = new QCheckBox(HNewAnagrafica);
        cbCliente->setObjectName(QStringLiteral("cbCliente"));

        horizontalLayout->addWidget(cbCliente);

        cbfornitore = new QCheckBox(HNewAnagrafica);
        cbfornitore->setObjectName(QStringLiteral("cbfornitore"));

        horizontalLayout->addWidget(cbfornitore);

        cbTrasportatore = new QCheckBox(HNewAnagrafica);
        cbTrasportatore->setObjectName(QStringLiteral("cbTrasportatore"));

        horizontalLayout->addWidget(cbTrasportatore);

        cbSubcliente = new QCheckBox(HNewAnagrafica);
        cbSubcliente->setObjectName(QStringLiteral("cbSubcliente"));

        horizontalLayout->addWidget(cbSubcliente);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HNewAnagrafica);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(HNewAnagrafica);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(leRagsoc, leAddress);
        QWidget::setTabOrder(leAddress, leCity);
        QWidget::setTabOrder(leCity, leCap);
        QWidget::setTabOrder(leCap, leProvincia);
        QWidget::setTabOrder(leProvincia, leNazione);
        QWidget::setTabOrder(leNazione, leTel);
        QWidget::setTabOrder(leTel, leContatto);
        QWidget::setTabOrder(leContatto, leNote);
        QWidget::setTabOrder(leNote, cbCliente);
        QWidget::setTabOrder(cbCliente, cbfornitore);
        QWidget::setTabOrder(cbfornitore, cbTrasportatore);
        QWidget::setTabOrder(cbTrasportatore, cbSubcliente);
        QWidget::setTabOrder(cbSubcliente, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(HNewAnagrafica);

        QMetaObject::connectSlotsByName(HNewAnagrafica);
    } // setupUi

    void retranslateUi(QWidget *HNewAnagrafica)
    {
        HNewAnagrafica->setWindowTitle(QApplication::translate("HNewAnagrafica", "Nuova anagrafica", 0));
        label->setText(QApplication::translate("HNewAnagrafica", "*Ragione sociale:", 0));
        label_2->setText(QApplication::translate("HNewAnagrafica", "Indirizzo:", 0));
        label_3->setText(QApplication::translate("HNewAnagrafica", "Citt\303\240:", 0));
        label_4->setText(QApplication::translate("HNewAnagrafica", "CAP:", 0));
        label_5->setText(QApplication::translate("HNewAnagrafica", "Provincia/stato:", 0));
        label_6->setText(QApplication::translate("HNewAnagrafica", "Telefono:", 0));
        label_7->setText(QApplication::translate("HNewAnagrafica", "Contatto:", 0));
        label_8->setText(QApplication::translate("HNewAnagrafica", "Note:", 0));
        label_9->setText(QApplication::translate("HNewAnagrafica", "Nazione:", 0));
        cbCliente->setText(QApplication::translate("HNewAnagrafica", "Cliente", 0));
        cbfornitore->setText(QApplication::translate("HNewAnagrafica", "Fornitore", 0));
        cbTrasportatore->setText(QApplication::translate("HNewAnagrafica", "Trasportatore", 0));
        cbSubcliente->setText(QApplication::translate("HNewAnagrafica", "Subcliente", 0));
        pushButton->setText(QApplication::translate("HNewAnagrafica", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HNewAnagrafica", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewAnagrafica: public Ui_HNewAnagrafica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWANAGRAFICA_H
