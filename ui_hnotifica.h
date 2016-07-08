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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNotifica
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbChiudi;

    void setupUi(QWidget *HNotifica)
    {
        if (HNotifica->objectName().isEmpty())
            HNotifica->setObjectName(QStringLiteral("HNotifica"));
        HNotifica->setWindowModality(Qt::ApplicationModal);
        HNotifica->resize(400, 300);
        HNotifica->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        verticalLayout_2 = new QVBoxLayout(HNotifica);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(HNotifica);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 222));
        label->setMaximumSize(QSize(16777215, 222));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbChiudi = new QPushButton(HNotifica);
        pbChiudi->setObjectName(QStringLiteral("pbChiudi"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setBold(true);
        font1.setWeight(75);
        pbChiudi->setFont(font1);
        pbChiudi->setFlat(true);

        horizontalLayout->addWidget(pbChiudi);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HNotifica);

        QMetaObject::connectSlotsByName(HNotifica);
    } // setupUi

    void retranslateUi(QWidget *HNotifica)
    {
        HNotifica->setWindowTitle(QApplication::translate("HNotifica", "Form", 0));
        label->setText(QString());
        pbChiudi->setText(QApplication::translate("HNotifica", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HNotifica: public Ui_HNotifica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNOTIFICA_H
