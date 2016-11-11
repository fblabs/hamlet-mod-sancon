/********************************************************************************
** Form generated from reading UI file 'hcopycard.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCOPYCARD_H
#define UI_HCOPYCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCopyCard
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbC;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbP;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HCopyCard)
    {
        if (HCopyCard->objectName().isEmpty())
            HCopyCard->setObjectName(QStringLiteral("HCopyCard"));
        HCopyCard->resize(474, 179);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HCopyCard->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HCopyCard);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HCopyCard);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        cbC = new QComboBox(HCopyCard);
        cbC->setObjectName(QStringLiteral("cbC"));
        cbC->setEditable(true);
        cbC->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbC);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(HCopyCard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label_2);

        cbP = new QComboBox(HCopyCard);
        cbP->setObjectName(QStringLiteral("cbP"));
        cbP->setEditable(true);
        cbP->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbP);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(HCopyCard);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(HCopyCard);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));
        pushButton_2->setAutoExclusive(true);
        pushButton_2->setAutoDefault(true);

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HCopyCard);

        pushButton_2->setDefault(true);


        QMetaObject::connectSlotsByName(HCopyCard);
    } // setupUi

    void retranslateUi(QWidget *HCopyCard)
    {
        HCopyCard->setWindowTitle(QApplication::translate("HCopyCard", "Copia scheda", 0));
        label->setText(QApplication::translate("HCopyCard", "Cliente:", 0));
        label_2->setText(QApplication::translate("HCopyCard", "Prodotto:", 0));
        pushButton->setText(QApplication::translate("HCopyCard", "Copia", 0));
        pushButton_2->setText(QApplication::translate("HCopyCard", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HCopyCard: public Ui_HCopyCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCOPYCARD_H
