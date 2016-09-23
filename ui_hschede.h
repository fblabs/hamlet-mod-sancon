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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HSchede
{
public:
    QTextEdit *textEdit;
    QComboBox *cbCliente;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lbProdotto;

    void setupUi(QWidget *HSchede)
    {
        if (HSchede->objectName().isEmpty())
            HSchede->setObjectName(QStringLiteral("HSchede"));
        HSchede->resize(1251, 499);
        textEdit = new QTextEdit(HSchede);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(250, 40, 981, 281));
        cbCliente = new QComboBox(HSchede);
        cbCliente->setObjectName(QStringLiteral("cbCliente"));
        cbCliente->setGeometry(QRect(20, 50, 221, 22));
        widget = new QWidget(HSchede);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 1211, 16));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        lbProdotto = new QLabel(widget);
        lbProdotto->setObjectName(QStringLiteral("lbProdotto"));

        horizontalLayout->addWidget(lbProdotto);


        retranslateUi(HSchede);

        QMetaObject::connectSlotsByName(HSchede);
    } // setupUi

    void retranslateUi(QWidget *HSchede)
    {
        HSchede->setWindowTitle(QApplication::translate("HSchede", "Schede", 0));
        label->setText(QApplication::translate("HSchede", "Scheda:", 0));
        lbProdotto->setText(QApplication::translate("HSchede", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class HSchede: public Ui_HSchede {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSCHEDE_H
