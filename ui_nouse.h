/********************************************************************************
** Form generated from reading UI file 'nouse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOUSE_H
#define UI_NOUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoUse
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *NoUse)
    {
        if (NoUse->objectName().isEmpty())
            NoUse->setObjectName(QString::fromUtf8("NoUse"));
        NoUse->resize(349, 298);
        NoUse->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);"));
        verticalLayout = new QVBoxLayout(NoUse);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 9);
        label_2 = new QLabel(NoUse);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAutoFillBackground(false);
        label_2->setPixmap(QPixmap(QString::fromUtf8("Resources/palet-03-icon.png")));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(NoUse);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(NoUse);

        QMetaObject::connectSlotsByName(NoUse);
    } // setupUi

    void retranslateUi(QWidget *NoUse)
    {
        NoUse->setWindowTitle(QCoreApplication::translate("NoUse", "Form", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("NoUse", "Questo Lotto non \303\250 ancora mai stato utilizzato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoUse: public Ui_NoUse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOUSE_H
