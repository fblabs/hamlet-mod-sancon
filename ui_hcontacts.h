/********************************************************************************
** Form generated from reading UI file 'hcontacts.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCONTACTS_H
#define UI_HCONTACTS_H

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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HContacts
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QListView *lvMain;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *leNome;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *leReferente;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QComboBox *cbTipo;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QComboBox *cbEtichetta;
    QCheckBox *cbImport;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTextEdit *teInterests;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTextEdit *teProdotti;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HContacts)
    {
        if (HContacts->objectName().isEmpty())
            HContacts->setObjectName(QStringLiteral("HContacts"));
        HContacts->resize(1022, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HContacts->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HContacts);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lvMain = new QListView(HContacts);
        lvMain->setObjectName(QStringLiteral("lvMain"));
        lvMain->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvMain->setModelColumn(0);
        lvMain->setSelectionRectVisible(true);

        horizontalLayout->addWidget(lvMain);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(HContacts);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        leNome = new QLineEdit(HContacts);
        leNome->setObjectName(QStringLiteral("leNome"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leNome);


        verticalLayout_3->addLayout(formLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(HContacts);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        leReferente = new QLineEdit(HContacts);
        leReferente->setObjectName(QStringLiteral("leReferente"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leReferente);


        verticalLayout_3->addLayout(formLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(HContacts);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        cbTipo = new QComboBox(HContacts);
        cbTipo->setObjectName(QStringLiteral("cbTipo"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cbTipo);


        verticalLayout_3->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(HContacts);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        cbEtichetta = new QComboBox(HContacts);
        cbEtichetta->setObjectName(QStringLiteral("cbEtichetta"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cbEtichetta);

        cbImport = new QCheckBox(HContacts);
        cbImport->setObjectName(QStringLiteral("cbImport"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, cbImport);


        verticalLayout_3->addLayout(formLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(HContacts);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        teInterests = new QTextEdit(HContacts);
        teInterests->setObjectName(QStringLiteral("teInterests"));

        verticalLayout->addWidget(teInterests);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(HContacts);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        teProdotti = new QTextEdit(HContacts);
        teProdotti->setObjectName(QStringLiteral("teProdotti"));

        verticalLayout_2->addWidget(teProdotti);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HContacts);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_5 = new QPushButton(HContacts);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(HContacts);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HContacts);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(HContacts);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(HContacts);

        QMetaObject::connectSlotsByName(HContacts);
    } // setupUi

    void retranslateUi(QWidget *HContacts)
    {
        HContacts->setWindowTitle(QApplication::translate("HContacts", "Contatti", 0));
        label->setText(QApplication::translate("HContacts", "Nome:", 0));
        label_2->setText(QApplication::translate("HContacts", "Referente:", 0));
        label_3->setText(QApplication::translate("HContacts", "Tipo:", 0));
        label_4->setText(QApplication::translate("HContacts", "Etichetta:", 0));
        cbImport->setText(QApplication::translate("HContacts", "Importa da Italia", 0));
        label_5->setText(QApplication::translate("HContacts", "Interessati a:", 0));
        label_6->setText(QApplication::translate("HContacts", "Prodotti assaggiati", 0));
        pushButton->setText(QApplication::translate("HContacts", "Nuovo Contatto", 0));
        pushButton_5->setText(QApplication::translate("HContacts", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HContacts", "Rimuovi", 0));
        pushButton_3->setText(QApplication::translate("HContacts", "Aggiungi a Clienti", 0));
        pushButton_4->setText(QApplication::translate("HContacts", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HContacts: public Ui_HContacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCONTACTS_H
