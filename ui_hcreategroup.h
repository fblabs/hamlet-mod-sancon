/********************************************************************************
** Form generated from reading UI file 'hcreategroup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCREATEGROUP_H
#define UI_HCREATEGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCreateGroup
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *leDefinition;
    QLabel *label_2;
    QLineEdit *leNote;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HCreateGroup)
    {
        if (HCreateGroup->objectName().isEmpty())
            HCreateGroup->setObjectName(QString::fromUtf8("HCreateGroup"));
        HCreateGroup->setWindowModality(Qt::ApplicationModal);
        HCreateGroup->resize(472, 160);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Users64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HCreateGroup->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HCreateGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(HCreateGroup);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        leDefinition = new QLineEdit(HCreateGroup);
        leDefinition->setObjectName(QString::fromUtf8("leDefinition"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leDefinition);

        label_2 = new QLabel(HCreateGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leNote = new QLineEdit(HCreateGroup);
        leNote->setObjectName(QString::fromUtf8("leNote"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leNote);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSave = new QPushButton(HCreateGroup);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon1);
        pbSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbSave);

        pbClose = new QPushButton(HCreateGroup);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HCreateGroup);

        QMetaObject::connectSlotsByName(HCreateGroup);
    } // setupUi

    void retranslateUi(QWidget *HCreateGroup)
    {
        HCreateGroup->setWindowTitle(QCoreApplication::translate("HCreateGroup", "Definizione gruppo permessi", nullptr));
        label->setText(QCoreApplication::translate("HCreateGroup", "Gruppo:", nullptr));
        label_2->setText(QCoreApplication::translate("HCreateGroup", "Note:", nullptr));
        pbSave->setText(QCoreApplication::translate("HCreateGroup", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HCreateGroup", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HCreateGroup: public Ui_HCreateGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCREATEGROUP_H
