/********************************************************************************
** Form generated from reading UI file 'hrecipeaddrow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRECIPEADDROW_H
#define UI_HRECIPEADDROW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HRecipeAddRow
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HRecipeAddRow)
    {
        if (HRecipeAddRow->objectName().isEmpty())
            HRecipeAddRow->setObjectName(QString::fromUtf8("HRecipeAddRow"));
        HRecipeAddRow->setWindowModality(Qt::WindowModal);
        HRecipeAddRow->resize(332, 166);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HRecipeAddRow->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HRecipeAddRow);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(HRecipeAddRow);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        comboBox = new QComboBox(HRecipeAddRow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(true);

        verticalLayout_2->addWidget(comboBox);

        checkBox = new QCheckBox(HRecipeAddRow);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        verticalLayout_2->addWidget(checkBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(HRecipeAddRow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(HRecipeAddRow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HRecipeAddRow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HRecipeAddRow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(HRecipeAddRow);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(HRecipeAddRow);
    } // setupUi

    void retranslateUi(QWidget *HRecipeAddRow)
    {
        HRecipeAddRow->setWindowTitle(QCoreApplication::translate("HRecipeAddRow", "Aggiungi ingrediente", nullptr));
        label->setText(QCoreApplication::translate("HRecipeAddRow", "Ingrediente:", nullptr));
        checkBox->setText(QCoreApplication::translate("HRecipeAddRow", "Mostra in produzione", nullptr));
        label_2->setText(QCoreApplication::translate("HRecipeAddRow", "Quantit\303\240:", nullptr));
        pushButton->setText(QCoreApplication::translate("HRecipeAddRow", "Inserisci ingrediente", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HRecipeAddRow", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HRecipeAddRow: public Ui_HRecipeAddRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRECIPEADDROW_H
