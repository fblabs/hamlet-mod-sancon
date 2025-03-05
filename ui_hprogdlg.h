/********************************************************************************
** Form generated from reading UI file 'hprogdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPROGDLG_H
#define UI_HPROGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HProgDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *HProgDlg)
    {
        if (HProgDlg->objectName().isEmpty())
            HProgDlg->setObjectName(QString::fromUtf8("HProgDlg"));
        HProgDlg->setWindowModality(Qt::ApplicationModal);
        HProgDlg->resize(400, 42);
        HProgDlg->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        verticalLayout = new QVBoxLayout(HProgDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(HProgDlg);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(18);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(HProgDlg);

        QMetaObject::connectSlotsByName(HProgDlg);
    } // setupUi

    void retranslateUi(QWidget *HProgDlg)
    {
        HProgDlg->setWindowTitle(QCoreApplication::translate("HProgDlg", "Form", nullptr));
        label->setText(QCoreApplication::translate("HProgDlg", "Elaborazione dati - Attendere...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HProgDlg: public Ui_HProgDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPROGDLG_H
