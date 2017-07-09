/********************************************************************************
** Form generated from reading UI file 'hscheden2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HSCHEDEN2_H
#define UI_HSCHEDEN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HSchedeN2
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *HSchedeN2)
    {
        if (HSchedeN2->objectName().isEmpty())
            HSchedeN2->setObjectName(QStringLiteral("HSchedeN2"));
        HSchedeN2->resize(400, 300);
        verticalLayout = new QVBoxLayout(HSchedeN2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(HSchedeN2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(HSchedeN2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HSchedeN2);

        QMetaObject::connectSlotsByName(HSchedeN2);
    } // setupUi

    void retranslateUi(QWidget *HSchedeN2)
    {
        HSchedeN2->setWindowTitle(QApplication::translate("HSchedeN2", "Form", 0));
        pushButton->setText(QApplication::translate("HSchedeN2", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class HSchedeN2: public Ui_HSchedeN2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HSCHEDEN2_H
