/********************************************************************************
** Form generated from reading UI file 'hanalisi2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANALISI2_H
#define UI_HANALISI2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAnalisi2
{
public:
    QTreeView *treeView;
    QCheckBox *checkBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QComboBox *comboBox;
    QLineEdit *leCompleter;

    void setupUi(QWidget *HAnalisi2)
    {
        if (HAnalisi2->objectName().isEmpty())
            HAnalisi2->setObjectName(QStringLiteral("HAnalisi2"));
        HAnalisi2->resize(1254, 580);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAnalisi2->setWindowIcon(icon);
        treeView = new QTreeView(HAnalisi2);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(20, 120, 361, 401));
        treeView->setIconSize(QSize(16, 16));
        checkBox = new QCheckBox(HAnalisi2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 100, 141, 17));
        layoutWidget = new QWidget(HAnalisi2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 361, 82));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(0, QFormLayout::LabelRole, dateEdit);

        dateEdit_2 = new QDateEdit(layoutWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dateEdit_2);


        verticalLayout->addLayout(formLayout);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        leCompleter = new QLineEdit(layoutWidget);
        leCompleter->setObjectName(QStringLiteral("leCompleter"));

        verticalLayout->addWidget(leCompleter);


        retranslateUi(HAnalisi2);

        QMetaObject::connectSlotsByName(HAnalisi2);
    } // setupUi

    void retranslateUi(QWidget *HAnalisi2)
    {
        HAnalisi2->setWindowTitle(QApplication::translate("HAnalisi2", "Analisi ", 0));
        checkBox->setText(QApplication::translate("HAnalisi2", "Solo ricette prodotte", 0));
    } // retranslateUi

};

namespace Ui {
    class HAnalisi2: public Ui_HAnalisi2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANALISI2_H
