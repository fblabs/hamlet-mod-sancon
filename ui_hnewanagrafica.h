/********************************************************************************
** Form generated from reading UI file 'hnewanagrafica.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWANAGRAFICA_H
#define UI_HNEWANAGRAFICA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
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
    QCheckBox *cbStampatore;
    QCheckBox *cbSubcliente;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HNewAnagrafica)
    {
        if (HNewAnagrafica->objectName().isEmpty())
            HNewAnagrafica->setObjectName(QString::fromUtf8("HNewAnagrafica"));
        HNewAnagrafica->setWindowModality(Qt::ApplicationModal);
        HNewAnagrafica->resize(636, 397);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/User-Male.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HNewAnagrafica->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HNewAnagrafica);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HNewAnagrafica);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leRagsoc = new QLineEdit(HNewAnagrafica);
        leRagsoc->setObjectName(QString::fromUtf8("leRagsoc"));
        leRagsoc->setMaxLength(45);

        formLayout->setWidget(0, QFormLayout::FieldRole, leRagsoc);

        label_2 = new QLabel(HNewAnagrafica);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leAddress = new QLineEdit(HNewAnagrafica);
        leAddress->setObjectName(QString::fromUtf8("leAddress"));
        leAddress->setMaxLength(50);

        formLayout->setWidget(1, QFormLayout::FieldRole, leAddress);

        label_3 = new QLabel(HNewAnagrafica);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        leCity = new QLineEdit(HNewAnagrafica);
        leCity->setObjectName(QString::fromUtf8("leCity"));
        leCity->setMaxLength(50);

        formLayout->setWidget(2, QFormLayout::FieldRole, leCity);

        label_4 = new QLabel(HNewAnagrafica);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        leCap = new QLineEdit(HNewAnagrafica);
        leCap->setObjectName(QString::fromUtf8("leCap"));
        leCap->setMaxLength(12);

        formLayout->setWidget(3, QFormLayout::FieldRole, leCap);

        label_5 = new QLabel(HNewAnagrafica);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        leProvincia = new QLineEdit(HNewAnagrafica);
        leProvincia->setObjectName(QString::fromUtf8("leProvincia"));

        formLayout->setWidget(4, QFormLayout::FieldRole, leProvincia);

        label_6 = new QLabel(HNewAnagrafica);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        leTel = new QLineEdit(HNewAnagrafica);
        leTel->setObjectName(QString::fromUtf8("leTel"));
        leTel->setMaxLength(45);

        formLayout->setWidget(6, QFormLayout::FieldRole, leTel);

        label_7 = new QLabel(HNewAnagrafica);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        leContatto = new QLineEdit(HNewAnagrafica);
        leContatto->setObjectName(QString::fromUtf8("leContatto"));
        leContatto->setMaxLength(45);

        formLayout->setWidget(7, QFormLayout::FieldRole, leContatto);

        label_8 = new QLabel(HNewAnagrafica);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        leNote = new QLineEdit(HNewAnagrafica);
        leNote->setObjectName(QString::fromUtf8("leNote"));

        formLayout->setWidget(8, QFormLayout::FieldRole, leNote);

        label_9 = new QLabel(HNewAnagrafica);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        leNazione = new QLineEdit(HNewAnagrafica);
        leNazione->setObjectName(QString::fromUtf8("leNazione"));
        leNazione->setMaxLength(45);

        formLayout->setWidget(5, QFormLayout::FieldRole, leNazione);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cbCliente = new QCheckBox(HNewAnagrafica);
        cbCliente->setObjectName(QString::fromUtf8("cbCliente"));

        horizontalLayout->addWidget(cbCliente);

        cbfornitore = new QCheckBox(HNewAnagrafica);
        cbfornitore->setObjectName(QString::fromUtf8("cbfornitore"));

        horizontalLayout->addWidget(cbfornitore);

        cbTrasportatore = new QCheckBox(HNewAnagrafica);
        cbTrasportatore->setObjectName(QString::fromUtf8("cbTrasportatore"));

        horizontalLayout->addWidget(cbTrasportatore);

        cbStampatore = new QCheckBox(HNewAnagrafica);
        cbStampatore->setObjectName(QString::fromUtf8("cbStampatore"));

        horizontalLayout->addWidget(cbStampatore);

        cbSubcliente = new QCheckBox(HNewAnagrafica);
        cbSubcliente->setObjectName(QString::fromUtf8("cbSubcliente"));

        horizontalLayout->addWidget(cbSubcliente);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(HNewAnagrafica);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(HNewAnagrafica);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

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
        HNewAnagrafica->setWindowTitle(QCoreApplication::translate("HNewAnagrafica", "Nuova anagrafica", nullptr));
        label->setText(QCoreApplication::translate("HNewAnagrafica", "*Ragione sociale:", nullptr));
        label_2->setText(QCoreApplication::translate("HNewAnagrafica", "Indirizzo:", nullptr));
        label_3->setText(QCoreApplication::translate("HNewAnagrafica", "Citt\303\240:", nullptr));
        label_4->setText(QCoreApplication::translate("HNewAnagrafica", "CAP:", nullptr));
        label_5->setText(QCoreApplication::translate("HNewAnagrafica", "Provincia/stato:", nullptr));
        label_6->setText(QCoreApplication::translate("HNewAnagrafica", "Telefono:", nullptr));
        label_7->setText(QCoreApplication::translate("HNewAnagrafica", "Contatto:", nullptr));
        label_8->setText(QCoreApplication::translate("HNewAnagrafica", "Note:", nullptr));
        label_9->setText(QCoreApplication::translate("HNewAnagrafica", "Nazione:", nullptr));
        cbCliente->setText(QCoreApplication::translate("HNewAnagrafica", "Cliente", nullptr));
        cbfornitore->setText(QCoreApplication::translate("HNewAnagrafica", "Fornitore", nullptr));
        cbTrasportatore->setText(QCoreApplication::translate("HNewAnagrafica", "Trasportatore", nullptr));
        cbStampatore->setText(QCoreApplication::translate("HNewAnagrafica", "Stampatore", nullptr));
        cbSubcliente->setText(QCoreApplication::translate("HNewAnagrafica", "Subcliente", nullptr));
        pushButton->setText(QCoreApplication::translate("HNewAnagrafica", "Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HNewAnagrafica", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNewAnagrafica: public Ui_HNewAnagrafica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWANAGRAFICA_H
