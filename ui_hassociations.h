/********************************************************************************
** Form generated from reading UI file 'hassociations.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HASSOCIATIONS_H
#define UI_HASSOCIATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HAssociations
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbCR;
    QRadioButton *rbRC;
    QComboBox *cb1;
    QListView *lvAssociations;
    QFormLayout *formLayout;
    QTableView *tvAssociations;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *HAssociations)
    {
        if (HAssociations->objectName().isEmpty())
            HAssociations->setObjectName(QStringLiteral("HAssociations"));
        HAssociations->setWindowModality(Qt::ApplicationModal);
        HAssociations->resize(1083, 638);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAssociations->setWindowIcon(icon);
        HAssociations->setSizeGripEnabled(true);
        HAssociations->setModal(true);
        verticalLayout_2 = new QVBoxLayout(HAssociations);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rbCR = new QRadioButton(HAssociations);
        rbCR->setObjectName(QStringLiteral("rbCR"));
        rbCR->setChecked(true);

        horizontalLayout->addWidget(rbCR);

        rbRC = new QRadioButton(HAssociations);
        rbRC->setObjectName(QStringLiteral("rbRC"));

        horizontalLayout->addWidget(rbRC);


        verticalLayout->addLayout(horizontalLayout);

        cb1 = new QComboBox(HAssociations);
        cb1->setObjectName(QStringLiteral("cb1"));
        cb1->setEditable(true);
        cb1->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(cb1);

        lvAssociations = new QListView(HAssociations);
        lvAssociations->setObjectName(QStringLiteral("lvAssociations"));

        verticalLayout->addWidget(lvAssociations);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));

        verticalLayout->addLayout(formLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        tvAssociations = new QTableView(HAssociations);
        tvAssociations->setObjectName(QStringLiteral("tvAssociations"));
        tvAssociations->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvAssociations->setAlternatingRowColors(true);
        tvAssociations->setSelectionMode(QAbstractItemView::SingleSelection);
        tvAssociations->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvAssociations->setShowGrid(false);
        tvAssociations->setSortingEnabled(true);
        tvAssociations->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_3->addWidget(tvAssociations);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(HAssociations);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setDefault(false);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(HAssociations);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(HAssociations);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(HAssociations);

        QMetaObject::connectSlotsByName(HAssociations);
    } // setupUi

    void retranslateUi(QDialog *HAssociations)
    {
        HAssociations->setWindowTitle(QApplication::translate("HAssociations", "Associazione Clienti e Ricette", 0));
        rbCR->setText(QApplication::translate("HAssociations", "Clienti-Ricette", 0));
        rbRC->setText(QApplication::translate("HAssociations", "Ricette-Clienti", 0));
        pushButton->setText(QApplication::translate("HAssociations", "Aggiungi Ass.", 0));
        pushButton_3->setText(QApplication::translate("HAssociations", "Rimuovi Ass.", 0));
        pushButton_5->setText(QApplication::translate("HAssociations", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HAssociations: public Ui_HAssociations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HASSOCIATIONS_H
