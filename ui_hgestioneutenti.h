/********************************************************************************
** Form generated from reading UI file 'hgestioneutenti.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HGESTIONEUTENTI_H
#define UI_HGESTIONEUTENTI_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HGestioneUtenti
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QListView *lvUtenti;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leUsername;
    QLabel *label_4;
    QLineEdit *lenome;
    QLabel *label_3;
    QComboBox *comboBox;
    QCheckBox *cbAttivo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *leNewPass;
    QPushButton *pbNuovaPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HGestioneUtenti)
    {
        if (HGestioneUtenti->objectName().isEmpty())
            HGestioneUtenti->setObjectName(QStringLiteral("HGestioneUtenti"));
        HGestioneUtenti->setWindowModality(Qt::ApplicationModal);
        HGestioneUtenti->resize(769, 461);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Warning-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HGestioneUtenti->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HGestioneUtenti);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox = new QCheckBox(HGestioneUtenti);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        lvUtenti = new QListView(HGestioneUtenti);
        lvUtenti->setObjectName(QStringLiteral("lvUtenti"));

        verticalLayout->addWidget(lvUtenti);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(HGestioneUtenti);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leUsername = new QLineEdit(HGestioneUtenti);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUsername);

        label_4 = new QLabel(HGestioneUtenti);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lenome = new QLineEdit(HGestioneUtenti);
        lenome->setObjectName(QStringLiteral("lenome"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lenome);

        label_3 = new QLabel(HGestioneUtenti);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(HGestioneUtenti);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        cbAttivo = new QCheckBox(HGestioneUtenti);
        cbAttivo->setObjectName(QStringLiteral("cbAttivo"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cbAttivo);


        verticalLayout_3->addLayout(formLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(HGestioneUtenti);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        leNewPass = new QLineEdit(HGestioneUtenti);
        leNewPass->setObjectName(QStringLiteral("leNewPass"));

        verticalLayout_2->addWidget(leNewPass);

        pbNuovaPassword = new QPushButton(HGestioneUtenti);
        pbNuovaPassword->setObjectName(QStringLiteral("pbNuovaPassword"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbNuovaPassword->setIcon(icon1);

        verticalLayout_2->addWidget(pbNuovaPassword);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HGestioneUtenti);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HGestioneUtenti);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HGestioneUtenti);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(HGestioneUtenti);

        QMetaObject::connectSlotsByName(HGestioneUtenti);
    } // setupUi

    void retranslateUi(QWidget *HGestioneUtenti)
    {
        HGestioneUtenti->setWindowTitle(QApplication::translate("HGestioneUtenti", "Gestione Utenti", 0));
        checkBox->setText(QApplication::translate("HGestioneUtenti", "Mostra utenti non attivi", 0));
        label->setText(QApplication::translate("HGestioneUtenti", "Username:", 0));
        label_4->setText(QApplication::translate("HGestioneUtenti", "Nome:", 0));
        label_3->setText(QApplication::translate("HGestioneUtenti", "Gruppo:", 0));
        cbAttivo->setText(QApplication::translate("HGestioneUtenti", "Attivo", 0));
        label_5->setText(QApplication::translate("HGestioneUtenti", "Nuova password", 0));
        pbNuovaPassword->setText(QApplication::translate("HGestioneUtenti", "Salva nuova password", 0));
        pushButton->setText(QApplication::translate("HGestioneUtenti", "Nuovo", 0));
        pushButton_2->setText(QApplication::translate("HGestioneUtenti", "Salva", 0));
        pushButton_3->setText(QApplication::translate("HGestioneUtenti", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HGestioneUtenti: public Ui_HGestioneUtenti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HGESTIONEUTENTI_H
