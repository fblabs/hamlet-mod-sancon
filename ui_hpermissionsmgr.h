/********************************************************************************
** Form generated from reading UI file 'hpermissionsmgr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPERMISSIONSMGR_H
#define UI_HPERMISSIONSMGR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPermissionsMgr
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbsave;
    QPushButton *pbClose;

    void setupUi(QWidget *HPermissionsMgr)
    {
        if (HPermissionsMgr->objectName().isEmpty())
            HPermissionsMgr->setObjectName(QString::fromUtf8("HPermissionsMgr"));
        HPermissionsMgr->setWindowModality(Qt::ApplicationModal);
        HPermissionsMgr->resize(923, 541);
        verticalLayout = new QVBoxLayout(HPermissionsMgr);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(HPermissionsMgr);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbsave = new QPushButton(HPermissionsMgr);
        pbsave->setObjectName(QString::fromUtf8("pbsave"));

        horizontalLayout->addWidget(pbsave);

        pbClose = new QPushButton(HPermissionsMgr);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HPermissionsMgr);

        QMetaObject::connectSlotsByName(HPermissionsMgr);
    } // setupUi

    void retranslateUi(QWidget *HPermissionsMgr)
    {
        HPermissionsMgr->setWindowTitle(QCoreApplication::translate("HPermissionsMgr", "Gestione permessi", nullptr));
        pbsave->setText(QCoreApplication::translate("HPermissionsMgr", "Save", nullptr));
        pbClose->setText(QCoreApplication::translate("HPermissionsMgr", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HPermissionsMgr: public Ui_HPermissionsMgr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPERMISSIONSMGR_H
