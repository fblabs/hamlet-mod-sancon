/********************************************************************************
** Form generated from reading UI file 'hscheda.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSCHEDA_H
#define UI_HSCHEDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "htextedit.h"

QT_BEGIN_NAMESPACE

class Ui_HScheda
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *cbClienti;
    QCheckBox *checkBox;
    QListView *lvSubclients;
    QListView *listView;
    HTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *HScheda)
    {
        if (HScheda->objectName().isEmpty())
            HScheda->setObjectName(QStringLiteral("HScheda"));
        HScheda->resize(1069, 687);
        verticalLayout_2 = new QVBoxLayout(HScheda);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cbClienti = new QComboBox(HScheda);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(cbClienti);

        checkBox = new QCheckBox(HScheda);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        lvSubclients = new QListView(HScheda);
        lvSubclients->setObjectName(QStringLiteral("lvSubclients"));
        lvSubclients->setMaximumSize(QSize(300, 120));

        verticalLayout->addWidget(lvSubclients);

        listView = new QListView(HScheda);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setMaximumSize(QSize(300, 16777215));

        verticalLayout->addWidget(listView);


        horizontalLayout_2->addLayout(verticalLayout);

        textEdit = new HTextEdit(HScheda);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_4 = new QPushButton(HScheda);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setCheckable(true);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(HScheda);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HScheda);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(HScheda);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(HScheda);

        QMetaObject::connectSlotsByName(HScheda);
    } // setupUi

    void retranslateUi(QWidget *HScheda)
    {
        HScheda->setWindowTitle(QApplication::translate("HScheda", "Form", 0));
        checkBox->setText(QApplication::translate("HScheda", "Mostra subclienti", 0));
        pushButton_4->setText(QApplication::translate("HScheda", "Carica scheda vecchio formato", 0));
        pushButton_2->setText(QApplication::translate("HScheda", "Salva", 0));
        pushButton_3->setText(QApplication::translate("HScheda", "Stampa", 0));
        pushButton->setText(QApplication::translate("HScheda", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HScheda: public Ui_HScheda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSCHEDA_H
