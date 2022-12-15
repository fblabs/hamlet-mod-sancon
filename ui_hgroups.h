/********************************************************************************
** Form generated from reading UI file 'hgroups.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HGROUPS_H
#define UI_HGROUPS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HGroups
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbGroups;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pBSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HGroups)
    {
        if (HGroups->objectName().isEmpty())
            HGroups->setObjectName(QString::fromUtf8("HGroups"));
        HGroups->setWindowModality(Qt::ApplicationModal);
        HGroups->resize(978, 476);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Users64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HGroups->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HGroups);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HGroups);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label);

        cbGroups = new QComboBox(HGroups);
        cbGroups->setObjectName(QString::fromUtf8("cbGroups"));
        cbGroups->setEditable(true);
        cbGroups->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(cbGroups);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pBSave = new QPushButton(HGroups);
        pBSave->setObjectName(QString::fromUtf8("pBSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBSave->setIcon(icon1);
        pBSave->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pBSave);

        pbClose = new QPushButton(HGroups);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HGroups);

        QMetaObject::connectSlotsByName(HGroups);
    } // setupUi

    void retranslateUi(QWidget *HGroups)
    {
        HGroups->setWindowTitle(QCoreApplication::translate("HGroups", "Gestione permessi", nullptr));
        label->setText(QCoreApplication::translate("HGroups", "Descrizione:", nullptr));
        pBSave->setText(QCoreApplication::translate("HGroups", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HGroups", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HGroups: public Ui_HGroups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HGROUPS_H
