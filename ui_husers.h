/********************************************************************************
** Form generated from reading UI file 'husers.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUSERS_H
#define UI_HUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HUsers
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HUsers)
    {
        if (HUsers->objectName().isEmpty())
            HUsers->setObjectName(QStringLiteral("HUsers"));
        HUsers->resize(400, 300);
        widget = new QWidget(HUsers);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 270, 320, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        retranslateUi(HUsers);

        QMetaObject::connectSlotsByName(HUsers);
    } // setupUi

    void retranslateUi(QWidget *HUsers)
    {
        HUsers->setWindowTitle(QApplication::translate("HUsers", "Form", 0));
        pushButton->setText(QApplication::translate("HUsers", "Nuovo", 0));
        pushButton_2->setText(QApplication::translate("HUsers", "Modifica", 0));
        pushButton_4->setText(QApplication::translate("HUsers", "Salva", 0));
        pushButton_3->setText(QApplication::translate("HUsers", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HUsers: public Ui_HUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUSERS_H
