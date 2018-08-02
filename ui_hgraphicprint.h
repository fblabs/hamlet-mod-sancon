/********************************************************************************
** Form generated from reading UI file 'hgraphicprint.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HGRAPHICPRINT_H
#define UI_HGRAPHICPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HGraphicPrint
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HGraphicPrint)
    {
        if (HGraphicPrint->objectName().isEmpty())
            HGraphicPrint->setObjectName(QStringLiteral("HGraphicPrint"));
        HGraphicPrint->resize(967, 647);
        verticalLayout = new QVBoxLayout(HGraphicPrint);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(HGraphicPrint);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbPrint = new QPushButton(HGraphicPrint);
        pbPrint->setObjectName(QStringLiteral("pbPrint"));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HGraphicPrint);
        pbClose->setObjectName(QStringLiteral("pbClose"));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HGraphicPrint);

        QMetaObject::connectSlotsByName(HGraphicPrint);
    } // setupUi

    void retranslateUi(QWidget *HGraphicPrint)
    {
        HGraphicPrint->setWindowTitle(QApplication::translate("HGraphicPrint", "Form", 0));
        pbPrint->setText(QApplication::translate("HGraphicPrint", "PushButton", 0));
        pbClose->setText(QApplication::translate("HGraphicPrint", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class HGraphicPrint: public Ui_HGraphicPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HGRAPHICPRINT_H
