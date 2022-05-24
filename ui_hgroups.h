/********************************************************************************
** Form generated from reading UI file 'hgroups.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HGROUPS_H
#define UI_HGROUPS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HGroups
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QListView *lvGruppi;
    QVBoxLayout *verticalLayout;
    QLineEdit *leNome;
    QCheckBox *cbCanUpdate;
    QCheckBox *cbCanUpdateAna;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HGroups)
    {
        if (HGroups->objectName().isEmpty())
            HGroups->setObjectName(QString::fromUtf8("HGroups"));
        HGroups->resize(754, 464);
        verticalLayout_3 = new QVBoxLayout(HGroups);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lvGruppi = new QListView(HGroups);
        lvGruppi->setObjectName(QString::fromUtf8("lvGruppi"));

        horizontalLayout_2->addWidget(lvGruppi);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        leNome = new QLineEdit(HGroups);
        leNome->setObjectName(QString::fromUtf8("leNome"));

        verticalLayout->addWidget(leNome);

        cbCanUpdate = new QCheckBox(HGroups);
        cbCanUpdate->setObjectName(QString::fromUtf8("cbCanUpdate"));

        verticalLayout->addWidget(cbCanUpdate);

        cbCanUpdateAna = new QCheckBox(HGroups);
        cbCanUpdateAna->setObjectName(QString::fromUtf8("cbCanUpdateAna"));

        verticalLayout->addWidget(cbCanUpdateAna);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HGroups);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HGroups);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(HGroups);

        QMetaObject::connectSlotsByName(HGroups);
    } // setupUi

    void retranslateUi(QWidget *HGroups)
    {
        HGroups->setWindowTitle(QCoreApplication::translate("HGroups", "Gestione Gruppi", nullptr));
        cbCanUpdate->setText(QCoreApplication::translate("HGroups", "Pu\303\262 modificare Ricette, Prodotti e Schede clienti", nullptr));
        cbCanUpdateAna->setText(QCoreApplication::translate("HGroups", "Pu\303\262 modificare l'anagrafica", nullptr));
        pushButton->setText(QCoreApplication::translate("HGroups", "Salva", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HGroups", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HGroups: public Ui_HGroups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HGROUPS_H
