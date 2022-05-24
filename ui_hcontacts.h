/********************************************************************************
** Form generated from reading UI file 'hcontacts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCONTACTS_H
#define UI_HCONTACTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HContacts
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QListView *lvMain;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QRadioButton *rbNome;
    QRadioButton *rbFiera;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *leNome;
    QFormLayout *formLayout_7;
    QLabel *label_8;
    QPlainTextEdit *peRecapito;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *leReferente;
    QFormLayout *formLayout_6;
    QLabel *label_7;
    QLineEdit *leArea;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QComboBox *cbTipo;
    QFormLayout *formLayout_8;
    QLabel *label_9;
    QLineEdit *leFiera;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QComboBox *cbEtichetta;
    QFormLayout *formLayout_5;
    QCheckBox *cbImport;
    QCheckBox *cbFoto;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QPlainTextEdit *teInterests;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QPlainTextEdit *teAssaggi;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HContacts)
    {
        if (HContacts->objectName().isEmpty())
            HContacts->setObjectName(QString::fromUtf8("HContacts"));
        HContacts->resize(1097, 678);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HContacts->setWindowIcon(icon);
        verticalLayout_7 = new QVBoxLayout(HContacts);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lvMain = new QListView(HContacts);
        lvMain->setObjectName(QString::fromUtf8("lvMain"));
        lvMain->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvMain->setSelectionBehavior(QAbstractItemView::SelectRows);
        lvMain->setModelColumn(0);
        lvMain->setSelectionRectVisible(true);

        verticalLayout_5->addWidget(lvMain);

        listWidget = new QListWidget(HContacts);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_5->addWidget(listWidget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_10 = new QLabel(HContacts);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        rbNome = new QRadioButton(HContacts);
        rbNome->setObjectName(QString::fromUtf8("rbNome"));
        rbNome->setChecked(true);

        horizontalLayout->addWidget(rbNome);

        rbFiera = new QRadioButton(HContacts);
        rbFiera->setObjectName(QString::fromUtf8("rbFiera"));

        horizontalLayout->addWidget(rbFiera);


        verticalLayout_4->addLayout(horizontalLayout);

        lineEdit_3 = new QLineEdit(HContacts);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setClearButtonEnabled(true);

        verticalLayout_4->addWidget(lineEdit_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(HContacts);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        leNome = new QLineEdit(HContacts);
        leNome->setObjectName(QString::fromUtf8("leNome"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leNome);


        verticalLayout_3->addLayout(formLayout_2);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_8 = new QLabel(HContacts);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_8);

        peRecapito = new QPlainTextEdit(HContacts);
        peRecapito->setObjectName(QString::fromUtf8("peRecapito"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, peRecapito);


        verticalLayout_3->addLayout(formLayout_7);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(HContacts);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        leReferente = new QLineEdit(HContacts);
        leReferente->setObjectName(QString::fromUtf8("leReferente"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leReferente);


        verticalLayout_3->addLayout(formLayout);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_7 = new QLabel(HContacts);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_7);

        leArea = new QLineEdit(HContacts);
        leArea->setObjectName(QString::fromUtf8("leArea"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, leArea);


        verticalLayout_3->addLayout(formLayout_6);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(HContacts);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        cbTipo = new QComboBox(HContacts);
        cbTipo->setObjectName(QString::fromUtf8("cbTipo"));
        cbTipo->setEditable(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbTipo);


        verticalLayout_3->addLayout(formLayout_3);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        label_9 = new QLabel(HContacts);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_9);

        leFiera = new QLineEdit(HContacts);
        leFiera->setObjectName(QString::fromUtf8("leFiera"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, leFiera);


        verticalLayout_3->addLayout(formLayout_8);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_4 = new QLabel(HContacts);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        cbEtichetta = new QComboBox(HContacts);
        cbEtichetta->setObjectName(QString::fromUtf8("cbEtichetta"));
        cbEtichetta->setEditable(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cbEtichetta);


        verticalLayout_3->addLayout(formLayout_4);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        cbImport = new QCheckBox(HContacts);
        cbImport->setObjectName(QString::fromUtf8("cbImport"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, cbImport);

        cbFoto = new QCheckBox(HContacts);
        cbFoto->setObjectName(QString::fromUtf8("cbFoto"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, cbFoto);


        verticalLayout_3->addLayout(formLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(HContacts);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        teInterests = new QPlainTextEdit(HContacts);
        teInterests->setObjectName(QString::fromUtf8("teInterests"));

        verticalLayout->addWidget(teInterests);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(HContacts);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        teAssaggi = new QPlainTextEdit(HContacts);
        teAssaggi->setObjectName(QString::fromUtf8("teAssaggi"));

        verticalLayout_2->addWidget(teAssaggi);

        pushButton_6 = new QPushButton(HContacts);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Chat.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);

        verticalLayout_2->addWidget(pushButton_6);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(HContacts);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_5 = new QPushButton(HContacts);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(HContacts);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HContacts);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(HContacts);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon6);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout_6);


        retranslateUi(HContacts);

        QMetaObject::connectSlotsByName(HContacts);
    } // setupUi

    void retranslateUi(QWidget *HContacts)
    {
        HContacts->setWindowTitle(QCoreApplication::translate("HContacts", "Contatti", nullptr));
        label_10->setText(QCoreApplication::translate("HContacts", "Cerca:", nullptr));
        rbNome->setText(QCoreApplication::translate("HContacts", "Nome", nullptr));
        rbFiera->setText(QCoreApplication::translate("HContacts", "Fiera", nullptr));
        label->setText(QCoreApplication::translate("HContacts", "Nome:", nullptr));
        label_8->setText(QCoreApplication::translate("HContacts", "Recapito:", nullptr));
        label_2->setText(QCoreApplication::translate("HContacts", "Referente:", nullptr));
        label_7->setText(QCoreApplication::translate("HContacts", "Area:", nullptr));
        label_3->setText(QCoreApplication::translate("HContacts", "Tipo:", nullptr));
        label_9->setText(QCoreApplication::translate("HContacts", "Fiera:", nullptr));
        label_4->setText(QCoreApplication::translate("HContacts", "Etichetta:", nullptr));
        cbImport->setText(QCoreApplication::translate("HContacts", "Importa da Italia", nullptr));
        cbFoto->setText(QCoreApplication::translate("HContacts", "Foto", nullptr));
        label_5->setText(QCoreApplication::translate("HContacts", "Interessati a:", nullptr));
        label_6->setText(QCoreApplication::translate("HContacts", "Prodotti assaggiati", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HContacts", "Imposta notifica", nullptr));
        pushButton->setText(QCoreApplication::translate("HContacts", "Nuovo Contatto", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HContacts", "Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HContacts", "Rimuovi", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HContacts", "Aggiungi a Clienti", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HContacts", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HContacts: public Ui_HContacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCONTACTS_H
