/********************************************************************************
** Form generated from reading UI file 'hlotmod.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOTMOD_H
#define UI_HLOTMOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HlotMod
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *leLotto;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *leProdotto;
    QTableView *tvLotComp;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HlotMod)
    {
        if (HlotMod->objectName().isEmpty())
            HlotMod->setObjectName(QStringLiteral("HlotMod"));
        HlotMod->resize(792, 423);
        verticalLayout = new QVBoxLayout(HlotMod);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(HlotMod);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        leLotto = new QLineEdit(HlotMod);
        leLotto->setObjectName(QStringLiteral("leLotto"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leLotto);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, formLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(HlotMod);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        leProdotto = new QLineEdit(HlotMod);
        leProdotto->setObjectName(QStringLiteral("leProdotto"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leProdotto);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout);


        verticalLayout->addLayout(formLayout_3);

        tvLotComp = new QTableView(HlotMod);
        tvLotComp->setObjectName(QStringLiteral("tvLotComp"));

        verticalLayout->addWidget(tvLotComp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbSave = new QPushButton(HlotMod);
        pbSave->setObjectName(QStringLiteral("pbSave"));

        horizontalLayout->addWidget(pbSave);

        pbClose = new QPushButton(HlotMod);
        pbClose->setObjectName(QStringLiteral("pbClose"));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HlotMod);

        QMetaObject::connectSlotsByName(HlotMod);
    } // setupUi

    void retranslateUi(QWidget *HlotMod)
    {
        HlotMod->setWindowTitle(QApplication::translate("HlotMod", "Form", 0));
        label->setText(QApplication::translate("HlotMod", "Lotto:", 0));
        label_2->setText(QApplication::translate("HlotMod", "Prodotto:", 0));
        pbSave->setText(QApplication::translate("HlotMod", "Salva", 0));
        pbClose->setText(QApplication::translate("HlotMod", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HlotMod: public Ui_HlotMod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOTMOD_H
