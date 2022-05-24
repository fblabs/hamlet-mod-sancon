/********************************************************************************
** Form generated from reading UI file 'hduplicate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HDUPLICATE_H
#define UI_HDUPLICATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HDuplicate
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *cbClienti;
    QLabel *label_2;
    QComboBox *cbRicette;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HDuplicate)
    {
        if (HDuplicate->objectName().isEmpty())
            HDuplicate->setObjectName(QString::fromUtf8("HDuplicate"));
        HDuplicate->setWindowModality(Qt::ApplicationModal);
        HDuplicate->resize(391, 137);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HDuplicate->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HDuplicate);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(HDuplicate);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cbClienti = new QComboBox(HDuplicate);
        cbClienti->setObjectName(QString::fromUtf8("cbClienti"));
        cbClienti->setEditable(true);
        cbClienti->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(cbClienti);

        label_2 = new QLabel(HDuplicate);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        cbRicette = new QComboBox(HDuplicate);
        cbRicette->setObjectName(QString::fromUtf8("cbRicette"));
        cbRicette->setEditable(true);
        cbRicette->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout->addWidget(cbRicette);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HDuplicate);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HDuplicate);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HDuplicate);

        QMetaObject::connectSlotsByName(HDuplicate);
    } // setupUi

    void retranslateUi(QWidget *HDuplicate)
    {
        HDuplicate->setWindowTitle(QCoreApplication::translate("HDuplicate", "Duplica scheda", nullptr));
        label->setText(QCoreApplication::translate("HDuplicate", "Cliente:", nullptr));
        label_2->setText(QCoreApplication::translate("HDuplicate", "Ricetta:", nullptr));
        pushButton->setText(QCoreApplication::translate("HDuplicate", "Duplica", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HDuplicate", "Esci", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HDuplicate: public Ui_HDuplicate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HDUPLICATE_H
