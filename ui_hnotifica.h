/********************************************************************************
** Form generated from reading UI file 'hnotifica.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNOTIFICA_H
#define UI_HNOTIFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNotifica
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *peDescrizione;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *HNotifica)
    {
        if (HNotifica->objectName().isEmpty())
            HNotifica->setObjectName(QStringLiteral("HNotifica"));
        HNotifica->resize(400, 300);
        verticalLayout = new QVBoxLayout(HNotifica);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        peDescrizione = new QPlainTextEdit(HNotifica);
        peDescrizione->setObjectName(QStringLiteral("peDescrizione"));
        peDescrizione->setReadOnly(true);

        verticalLayout->addWidget(peDescrizione);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(HNotifica);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(HNotifica);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HNotifica);

        QMetaObject::connectSlotsByName(HNotifica);
    } // setupUi

    void retranslateUi(QWidget *HNotifica)
    {
        HNotifica->setWindowTitle(QApplication::translate("HNotifica", "Form", 0));
        pushButton_2->setText(QApplication::translate("HNotifica", "Cancella", 0));
        pushButton->setText(QApplication::translate("HNotifica", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNotifica: public Ui_HNotifica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNOTIFICA_H
