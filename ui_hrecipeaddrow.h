/********************************************************************************
** Form generated from reading UI file 'hrecipeaddrow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRECIPEADDROW_H
#define UI_HRECIPEADDROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HRecipeAddRow->setObjectName(QStringLiteral("HRecipeAddRow"));
        HRecipeAddRow->setWindowModality(Qt::ApplicationModal);
        HRecipeAddRow->resize(332, 166);
        verticalLayout_5 = new QVBoxLayout(HRecipeAddRow);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(HRecipeAddRow);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        comboBox = new QComboBox(HRecipeAddRow);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        checkBox = new QCheckBox(HRecipeAddRow);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        verticalLayout_2->addWidget(checkBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(HRecipeAddRow);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(HRecipeAddRow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HRecipeAddRow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HRecipeAddRow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(HRecipeAddRow);

        QMetaObject::connectSlotsByName(HRecipeAddRow);
    } // setupUi

    void retranslateUi(QWidget *HRecipeAddRow)
    {
        HRecipeAddRow->setWindowTitle(QApplication::translate("HRecipeAddRow", "Form", 0));
        label->setText(QApplication::translate("HRecipeAddRow", "Ingrediente:", 0));
        checkBox->setText(QApplication::translate("HRecipeAddRow", "Mostra in produzione", 0));
        label_2->setText(QApplication::translate("HRecipeAddRow", "Quantit\303\240:", 0));
        pushButton->setText(QApplication::translate("HRecipeAddRow", "Inserisci ingrediente", 0));
        pushButton_2->setText(QApplication::translate("HRecipeAddRow", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HRecipeAddRow: public Ui_HRecipeAddRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRECIPEADDROW_H
