/********************************************************************************
** Form generated from reading UI file 'hgestioneutenti.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HGESTIONEUTENTI_H
#define UI_HGESTIONEUTENTI_H

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
    QPushButton *pbUserPermissions;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *leNewPass;
    QPushButton *pbNuovaPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pbGroups;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HGestioneUtenti)
    {
        if (HGestioneUtenti->objectName().isEmpty())
            HGestioneUtenti->setObjectName(QString::fromUtf8("HGestioneUtenti"));
        HGestioneUtenti->setWindowModality(Qt::ApplicationModal);
        HGestioneUtenti->resize(769, 461);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Warning-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HGestioneUtenti->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HGestioneUtenti);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(HGestioneUtenti);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        lvUtenti = new QListView(HGestioneUtenti);
        lvUtenti->setObjectName(QString::fromUtf8("lvUtenti"));

        verticalLayout->addWidget(lvUtenti);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HGestioneUtenti);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leUsername = new QLineEdit(HGestioneUtenti);
        leUsername->setObjectName(QString::fromUtf8("leUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUsername);

        label_4 = new QLabel(HGestioneUtenti);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lenome = new QLineEdit(HGestioneUtenti);
        lenome->setObjectName(QString::fromUtf8("lenome"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lenome);

        label_3 = new QLabel(HGestioneUtenti);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(HGestioneUtenti);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        cbAttivo = new QCheckBox(HGestioneUtenti);
        cbAttivo->setObjectName(QString::fromUtf8("cbAttivo"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cbAttivo);


        verticalLayout_3->addLayout(formLayout);

        pbUserPermissions = new QPushButton(HGestioneUtenti);
        pbUserPermissions->setObjectName(QString::fromUtf8("pbUserPermissions"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Bar-chart64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUserPermissions->setIcon(icon1);
        pbUserPermissions->setIconSize(QSize(32, 32));

        verticalLayout_3->addWidget(pbUserPermissions);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(HGestioneUtenti);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        leNewPass = new QLineEdit(HGestioneUtenti);
        leNewPass->setObjectName(QString::fromUtf8("leNewPass"));

        verticalLayout_2->addWidget(leNewPass);

        pbNuovaPassword = new QPushButton(HGestioneUtenti);
        pbNuovaPassword->setObjectName(QString::fromUtf8("pbNuovaPassword"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbNuovaPassword->setIcon(icon2);

        verticalLayout_2->addWidget(pbNuovaPassword);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HGestioneUtenti);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pbGroups = new QPushButton(HGestioneUtenti);
        pbGroups->setObjectName(QString::fromUtf8("pbGroups"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbGroups->setIcon(icon4);
        pbGroups->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbGroups);

        pushButton_2 = new QPushButton(HGestioneUtenti);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon5);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HGestioneUtenti);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(HGestioneUtenti);

        QMetaObject::connectSlotsByName(HGestioneUtenti);
    } // setupUi

    void retranslateUi(QWidget *HGestioneUtenti)
    {
        HGestioneUtenti->setWindowTitle(QCoreApplication::translate("HGestioneUtenti", "Gestione Utenti", nullptr));
        checkBox->setText(QCoreApplication::translate("HGestioneUtenti", "Mostra utenti non attivi", nullptr));
        label->setText(QCoreApplication::translate("HGestioneUtenti", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("HGestioneUtenti", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("HGestioneUtenti", "Gruppo:", nullptr));
        cbAttivo->setText(QCoreApplication::translate("HGestioneUtenti", "Attivo", nullptr));
        pbUserPermissions->setText(QCoreApplication::translate("HGestioneUtenti", "Gestione permessi", nullptr));
        label_5->setText(QCoreApplication::translate("HGestioneUtenti", "Nuova password", nullptr));
        pbNuovaPassword->setText(QCoreApplication::translate("HGestioneUtenti", "Salva nuova password", nullptr));
        pushButton->setText(QCoreApplication::translate("HGestioneUtenti", "Nuovo", nullptr));
        pbGroups->setText(QCoreApplication::translate("HGestioneUtenti", "Gestione Gruppi", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HGestioneUtenti", "Salva", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HGestioneUtenti", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HGestioneUtenti: public Ui_HGestioneUtenti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HGESTIONEUTENTI_H
