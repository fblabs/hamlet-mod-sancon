/********************************************************************************
** Form generated from reading UI file 'hschede.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSCHEDE_H
#define UI_HSCHEDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HSchede
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbClienti;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbProdotti;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbMod;
    QPushButton *pbClose;

    void setupUi(QWidget *HSchede)
    {
        if (HSchede->objectName().isEmpty())
            HSchede->setObjectName(QStringLiteral("HSchede"));
        HSchede->resize(1293, 735);
        verticalLayout_2 = new QVBoxLayout(HSchede);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HSchede);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cbClienti = new QComboBox(HSchede);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbClienti);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(HSchede);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cbProdotti = new QComboBox(HSchede);
        cbProdotti->setObjectName(QStringLiteral("cbProdotti"));
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbProdotti);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(HSchede);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pbMod = new QPushButton(HSchede);
        pbMod->setObjectName(QStringLiteral("pbMod"));

        horizontalLayout_4->addWidget(pbMod);

        pbClose = new QPushButton(HSchede);
        pbClose->setObjectName(QStringLiteral("pbClose"));

        horizontalLayout_4->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HSchede);

        QMetaObject::connectSlotsByName(HSchede);
    } // setupUi

    void retranslateUi(QWidget *HSchede)
    {
        HSchede->setWindowTitle(QApplication::translate("HSchede", "Form", 0));
        label->setText(QApplication::translate("HSchede", "Cliente:", 0));
        label_2->setText(QApplication::translate("HSchede", "Prodotto:", 0));
        pbMod->setText(QApplication::translate("HSchede", "Modifica", 0));
        pbClose->setText(QApplication::translate("HSchede", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HSchede: public Ui_HSchede {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSCHEDE_H
