/********************************************************************************
** Form generated from reading UI file 'hnschede.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNSCHEDE_H
#define UI_HNSCHEDE_H

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

class Ui_HNSChede
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbClienti;
    QLabel *label_2;
    QComboBox *cbProdotti;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HNSChede)
    {
        if (HNSChede->objectName().isEmpty())
            HNSChede->setObjectName(QStringLiteral("HNSChede"));
        HNSChede->setWindowModality(Qt::ApplicationModal);
        HNSChede->resize(1178, 673);
        HNSChede->setBaseSize(QSize(50, 0));
        verticalLayout = new QVBoxLayout(HNSChede);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HNSChede);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(45, 16777215));
        label->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(label);

        cbClienti = new QComboBox(HNSChede);
        cbClienti->setObjectName(QStringLiteral("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbClienti);

        label_2 = new QLabel(HNSChede);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label_2);

        cbProdotti = new QComboBox(HNSChede);
        cbProdotti->setObjectName(QStringLiteral("cbProdotti"));
        cbProdotti->setEnabled(true);
        cbProdotti->setEditable(true);
        cbProdotti->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbProdotti);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(HNSChede);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(HNSChede);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HNSChede);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HNSChede);

        QMetaObject::connectSlotsByName(HNSChede);
    } // setupUi

    void retranslateUi(QWidget *HNSChede)
    {
        HNSChede->setWindowTitle(QApplication::translate("HNSChede", "SCHEDE CLIENTI", 0));
        label->setText(QApplication::translate("HNSChede", "Cliente:", 0));
        label_2->setText(QApplication::translate("HNSChede", "Prodotto:", 0));
        pushButton_2->setText(QApplication::translate("HNSChede", "Immagine", 0));
        pushButton_3->setText(QApplication::translate("HNSChede", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class HNSChede: public Ui_HNSChede {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNSCHEDE_H
