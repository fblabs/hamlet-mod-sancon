/********************************************************************************
** Form generated from reading UI file 'h_container_cartoni.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_H_CONTAINER_CARTONI_H
#define UI_H_CONTAINER_CARTONI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_H_container_cartoni
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbCartoni;
    QLabel *label_2;
    QLineEdit *lePezzi;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *H_container_cartoni)
    {
        if (H_container_cartoni->objectName().isEmpty())
            H_container_cartoni->setObjectName(QString::fromUtf8("H_container_cartoni"));
        H_container_cartoni->resize(316, 215);
        verticalLayout = new QVBoxLayout(H_container_cartoni);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(H_container_cartoni);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbCartoni = new QComboBox(H_container_cartoni);
        cbCartoni->setObjectName(QString::fromUtf8("cbCartoni"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbCartoni);

        label_2 = new QLabel(H_container_cartoni);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lePezzi = new QLineEdit(H_container_cartoni);
        lePezzi->setObjectName(QString::fromUtf8("lePezzi"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lePezzi);

        label_3 = new QLabel(H_container_cartoni);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(H_container_cartoni);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);

        label_4 = new QLabel(H_container_cartoni);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_2 = new QLineEdit(H_container_cartoni);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_2);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(H_container_cartoni);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(H_container_cartoni);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(H_container_cartoni);

        QMetaObject::connectSlotsByName(H_container_cartoni);
    } // setupUi

    void retranslateUi(QWidget *H_container_cartoni)
    {
        H_container_cartoni->setWindowTitle(QCoreApplication::translate("H_container_cartoni", "Form", nullptr));
        label->setText(QCoreApplication::translate("H_container_cartoni", "Cartone:", nullptr));
        label_2->setText(QCoreApplication::translate("H_container_cartoni", "Pezzi :", nullptr));
        label_3->setText(QCoreApplication::translate("H_container_cartoni", "Costo cartone:", nullptr));
        label_4->setText(QCoreApplication::translate("H_container_cartoni", "Costo per pezzo", nullptr));
        pushButton->setText(QCoreApplication::translate("H_container_cartoni", "Aggiungi", nullptr));
        pushButton_2->setText(QCoreApplication::translate("H_container_cartoni", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class H_container_cartoni: public Ui_H_container_cartoni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_H_CONTAINER_CARTONI_H
