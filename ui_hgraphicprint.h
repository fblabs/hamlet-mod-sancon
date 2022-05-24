/********************************************************************************
** Form generated from reading UI file 'hgraphicprint.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HGRAPHICPRINT_H
#define UI_HGRAPHICPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
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
            HGraphicPrint->setObjectName(QString::fromUtf8("HGraphicPrint"));
        HGraphicPrint->resize(967, 647);
        verticalLayout = new QVBoxLayout(HGraphicPrint);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QGraphicsView(HGraphicPrint);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbPrint = new QPushButton(HGraphicPrint);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));

        horizontalLayout->addWidget(pbPrint);

        pbClose = new QPushButton(HGraphicPrint);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HGraphicPrint);

        QMetaObject::connectSlotsByName(HGraphicPrint);
    } // setupUi

    void retranslateUi(QWidget *HGraphicPrint)
    {
        HGraphicPrint->setWindowTitle(QCoreApplication::translate("HGraphicPrint", "Form", nullptr));
        pbPrint->setText(QCoreApplication::translate("HGraphicPrint", "PushButton", nullptr));
        pbClose->setText(QCoreApplication::translate("HGraphicPrint", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HGraphicPrint: public Ui_HGraphicPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HGRAPHICPRINT_H
