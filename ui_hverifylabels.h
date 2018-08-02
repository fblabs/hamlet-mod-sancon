/********************************************************************************
** Form generated from reading UI file 'hverifylabels.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HVERIFYLABELS_H
#define UI_HVERIFYLABELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HVerifyLabels
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *lbOutcome;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbVerify;
    QPushButton *pbClose;

    void setupUi(QWidget *HVerifyLabels)
    {
        if (HVerifyLabels->objectName().isEmpty())
            HVerifyLabels->setObjectName(QStringLiteral("HVerifyLabels"));
        HVerifyLabels->resize(557, 220);
        verticalLayout_3 = new QVBoxLayout(HVerifyLabels);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(HVerifyLabels);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(HVerifyLabels);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        lbOutcome = new QLabel(HVerifyLabels);
        lbOutcome->setObjectName(QStringLiteral("lbOutcome"));

        verticalLayout->addWidget(lbOutcome);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbVerify = new QPushButton(HVerifyLabels);
        pbVerify->setObjectName(QStringLiteral("pbVerify"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbVerify->setIcon(icon);

        horizontalLayout->addWidget(pbVerify);

        pbClose = new QPushButton(HVerifyLabels);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon1);

        horizontalLayout->addWidget(pbClose);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(HVerifyLabels);

        QMetaObject::connectSlotsByName(HVerifyLabels);
    } // setupUi

    void retranslateUi(QWidget *HVerifyLabels)
    {
        HVerifyLabels->setWindowTitle(QApplication::translate("HVerifyLabels", "Form", 0));
        label->setText(QApplication::translate("HVerifyLabels", "EAN:", 0));
        lbOutcome->setText(QString());
        pbVerify->setText(QApplication::translate("HVerifyLabels", "Verifica", 0));
        pbClose->setText(QApplication::translate("HVerifyLabels", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HVerifyLabels: public Ui_HVerifyLabels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HVERIFYLABELS_H
