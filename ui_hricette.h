/********************************************************************************
** Form generated from reading UI file 'hricette.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRICETTE_H
#define UI_HRICETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HRicette
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QListView *lvRicette;
    QTableView *cvRigric;
    QLineEdit *leID;
    QTextEdit *teNote;
    QLabel *label;

    void setupUi(QWidget *HRicette)
    {
        if (HRicette->objectName().isEmpty())
            HRicette->setObjectName(QStringLiteral("HRicette"));
        HRicette->resize(1275, 675);
        pushButton = new QPushButton(HRicette);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 610, 121, 23));
        lineEdit = new QLineEdit(HRicette);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 70, 271, 20));
        pushButton_2 = new QPushButton(HRicette);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 610, 121, 23));
        lvRicette = new QListView(HRicette);
        lvRicette->setObjectName(QStringLiteral("lvRicette"));
        lvRicette->setGeometry(QRect(30, 110, 271, 481));
        cvRigric = new QTableView(HRicette);
        cvRigric->setObjectName(QStringLiteral("cvRigric"));
        cvRigric->setGeometry(QRect(320, 220, 461, 371));
        leID = new QLineEdit(HRicette);
        leID->setObjectName(QStringLiteral("leID"));
        leID->setGeometry(QRect(330, 70, 113, 20));
        teNote = new QTextEdit(HRicette);
        teNote->setObjectName(QStringLiteral("teNote"));
        teNote->setGeometry(QRect(320, 130, 461, 64));
        label = new QLabel(HRicette);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 610, 111, 16));

        retranslateUi(HRicette);
        QObject::connect(pushButton, SIGNAL(clicked()), HRicette, SLOT(addRecipe()));

        QMetaObject::connectSlotsByName(HRicette);
    } // setupUi

    void retranslateUi(QWidget *HRicette)
    {
        HRicette->setWindowTitle(QApplication::translate("HRicette", "Ricette", 0));
        pushButton->setText(QApplication::translate("HRicette", "Crea &Nuova Ricetta", 0));
        pushButton_2->setText(QApplication::translate("HRicette", "Duplica &Ricetta", 0));
        label->setText(QApplication::translate("HRicette", "Aggiungi Ingrediente", 0));
    } // retranslateUi

};

namespace Ui {
    class HRicette: public Ui_HRicette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRICETTE_H
