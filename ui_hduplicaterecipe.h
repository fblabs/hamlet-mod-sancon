/********************************************************************************
** Form generated from reading UI file 'hduplicaterecipe.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HDUPLICATERECIPE_H
#define UI_HDUPLICATERECIPE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HDuplicateRecipe
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout_2;
    QPushButton *pbOk;
    QPushButton *pbCancel;

    void setupUi(QWidget *HDuplicateRecipe)
    {
        if (HDuplicateRecipe->objectName().isEmpty())
            HDuplicateRecipe->setObjectName(QString::fromUtf8("HDuplicateRecipe"));
        HDuplicateRecipe->resize(461, 150);
        verticalLayout = new QVBoxLayout(HDuplicateRecipe);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(HDuplicateRecipe);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(HDuplicateRecipe);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label = new QLabel(HDuplicateRecipe);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(HDuplicateRecipe);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        pbOk = new QPushButton(HDuplicateRecipe);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOk->setIcon(icon);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pbOk);

        pbCancel = new QPushButton(HDuplicateRecipe);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancel->setIcon(icon1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pbCancel);


        verticalLayout->addLayout(formLayout_2);


        retranslateUi(HDuplicateRecipe);

        QMetaObject::connectSlotsByName(HDuplicateRecipe);
    } // setupUi

    void retranslateUi(QWidget *HDuplicateRecipe)
    {
        HDuplicateRecipe->setWindowTitle(QCoreApplication::translate("HDuplicateRecipe", "Duplica ricetta", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("HDuplicateRecipe", "Tipo prodotto da creare", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("HDuplicateRecipe", "Tipo:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("HDuplicateRecipe", "Nome prodotto da creare", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("HDuplicateRecipe", "Nome:", nullptr));
        pbOk->setText(QCoreApplication::translate("HDuplicateRecipe", "Ok", nullptr));
        pbCancel->setText(QCoreApplication::translate("HDuplicateRecipe", "Annulla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HDuplicateRecipe: public Ui_HDuplicateRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HDUPLICATERECIPE_H
