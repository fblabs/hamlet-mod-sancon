/********************************************************************************
** Form generated from reading UI file 'hpdfviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPDFVIEWER_H
#define UI_HPDFVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPdfViewer
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *HPdfViewer)
    {
        if (HPdfViewer->objectName().isEmpty())
            HPdfViewer->setObjectName(QStringLiteral("HPdfViewer"));
        HPdfViewer->resize(909, 548);
        widget = new QWidget(HPdfViewer);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(310, 520, 170, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(HPdfViewer);

        QMetaObject::connectSlotsByName(HPdfViewer);
    } // setupUi

    void retranslateUi(QDialog *HPdfViewer)
    {
        HPdfViewer->setWindowTitle(QApplication::translate("HPdfViewer", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("HPdfViewer", "Stampa", 0));
        pushButton->setText(QApplication::translate("HPdfViewer", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HPdfViewer: public Ui_HPdfViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPDFVIEWER_H
