/********************************************************************************
** Form generated from reading UI file 'nouse.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOUSE_H
#define UI_NOUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            NoUse->setObjectName(QStringLiteral("NoUse"));
        NoUse->resize(400, 298);
        NoUse->setStyleSheet(QStringLiteral("background-color: rgb(85, 85, 255);"));
        verticalLayout = new QVBoxLayout(NoUse);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 9);
        label_2 = new QLabel(NoUse);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAutoFillBackground(true);
        label_2->setPixmap(QPixmap(QString::fromUtf8("Resources/palet-03-icon.png")));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(NoUse);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(true);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 0);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(NoUse);

        QMetaObject::connectSlotsByName(NoUse);
    } // setupUi

    void retranslateUi(QWidget *NoUse)
    {
        NoUse->setWindowTitle(QApplication::translate("NoUse", "Form", 0));
        label_2->setText(QString());
        label->setText(QApplication::translate("NoUse", "Questo Lotto non \303\250 ancora mai stato utilizzato", 0));
    } // retranslateUi

};

namespace Ui {
    class NoUse: public Ui_NoUse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOUSE_H
