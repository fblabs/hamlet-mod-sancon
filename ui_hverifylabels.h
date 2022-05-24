/********************************************************************************
** Form generated from reading UI file 'hverifylabels.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HVERIFYLABELS_H
#define UI_HVERIFYLABELS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
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
            HVerifyLabels->setObjectName(QString::fromUtf8("HVerifyLabels"));
        HVerifyLabels->resize(557, 220);
        verticalLayout_3 = new QVBoxLayout(HVerifyLabels);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(HVerifyLabels);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(HVerifyLabels);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        lbOutcome = new QLabel(HVerifyLabels);
        lbOutcome->setObjectName(QString::fromUtf8("lbOutcome"));

        verticalLayout->addWidget(lbOutcome);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbVerify = new QPushButton(HVerifyLabels);
        pbVerify->setObjectName(QString::fromUtf8("pbVerify"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Arrow-Right.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbVerify->setIcon(icon);

        horizontalLayout->addWidget(pbVerify);

        pbClose = new QPushButton(HVerifyLabels);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon1);

        horizontalLayout->addWidget(pbClose);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(HVerifyLabels);

        QMetaObject::connectSlotsByName(HVerifyLabels);
    } // setupUi

    void retranslateUi(QWidget *HVerifyLabels)
    {
        HVerifyLabels->setWindowTitle(QCoreApplication::translate("HVerifyLabels", "Form", nullptr));
        label->setText(QCoreApplication::translate("HVerifyLabels", "EAN:", nullptr));
        lbOutcome->setText(QString());
        pbVerify->setText(QCoreApplication::translate("HVerifyLabels", "Verifica", nullptr));
        pbClose->setText(QCoreApplication::translate("HVerifyLabels", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HVerifyLabels: public Ui_HVerifyLabels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HVERIFYLABELS_H
