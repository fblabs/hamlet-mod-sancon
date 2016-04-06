/********************************************************************************
** Form generated from reading UI file 'hgroups.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HGROUPS_H
#define UI_HGROUPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HGroups->setObjectName(QStringLiteral("HGroups"));
        HGroups->resize(754, 464);
        verticalLayout_3 = new QVBoxLayout(HGroups);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lvGruppi = new QListView(HGroups);
        lvGruppi->setObjectName(QStringLiteral("lvGruppi"));

        horizontalLayout_2->addWidget(lvGruppi);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        leNome = new QLineEdit(HGroups);
        leNome->setObjectName(QStringLiteral("leNome"));

        verticalLayout->addWidget(leNome);

        cbCanUpdate = new QCheckBox(HGroups);
        cbCanUpdate->setObjectName(QStringLiteral("cbCanUpdate"));

        verticalLayout->addWidget(cbCanUpdate);

        cbCanUpdateAna = new QCheckBox(HGroups);
        cbCanUpdateAna->setObjectName(QStringLiteral("cbCanUpdateAna"));

        verticalLayout->addWidget(cbCanUpdateAna);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HGroups);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HGroups);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        HGroups->setWindowTitle(QApplication::translate("HGroups", "Gestione Gruppi", 0));
        cbCanUpdate->setText(QApplication::translate("HGroups", "Pu\303\262 modificare Ricette, Prodotti e Schede clienti", 0));
        cbCanUpdateAna->setText(QApplication::translate("HGroups", "Pu\303\262 modificare l'anagrafica", 0));
        pushButton->setText(QApplication::translate("HGroups", "Salva", 0));
        pushButton_2->setText(QApplication::translate("HGroups", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HGroups: public Ui_HGroups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HGROUPS_H
