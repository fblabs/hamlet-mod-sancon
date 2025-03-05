/********************************************************************************
** Form generated from reading UI file 'hnewsheet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWSHEET_H
#define UI_HNEWSHEET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNewSheet
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *deDEl;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spLine;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbOK;
    QPushButton *pbCancel;

    void setupUi(QWidget *HNewSheet)
    {
        if (HNewSheet->objectName().isEmpty())
            HNewSheet->setObjectName(QString::fromUtf8("HNewSheet"));
        HNewSheet->setWindowModality(Qt::WindowModal);
        HNewSheet->resize(383, 235);
        verticalLayout = new QVBoxLayout(HNewSheet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(HNewSheet);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(HNewSheet);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        deDEl = new QDateEdit(HNewSheet);
        deDEl->setObjectName(QString::fromUtf8("deDEl"));
        deDEl->setCalendarPopup(true);

        horizontalLayout->addWidget(deDEl);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(HNewSheet);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        spLine = new QSpinBox(HNewSheet);
        spLine->setObjectName(QString::fromUtf8("spLine"));
        spLine->setMinimum(1);
        spLine->setMaximum(5);

        horizontalLayout_2->addWidget(spLine);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbOK = new QPushButton(HNewSheet);
        pbOK->setObjectName(QString::fromUtf8("pbOK"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOK->setIcon(icon);
        pbOK->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbOK);

        pbCancel = new QPushButton(HNewSheet);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancel->setIcon(icon1);
        pbCancel->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbCancel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HNewSheet);

        QMetaObject::connectSlotsByName(HNewSheet);
    } // setupUi

    void retranslateUi(QWidget *HNewSheet)
    {
        HNewSheet->setWindowTitle(QCoreApplication::translate("HNewSheet", "Crea foglio produzione", nullptr));
        label->setText(QCoreApplication::translate("HNewSheet", "Foglio Produzione", nullptr));
        label_2->setText(QCoreApplication::translate("HNewSheet", "Data:", nullptr));
        label_3->setText(QCoreApplication::translate("HNewSheet", "Linea:", nullptr));
        pbOK->setText(QCoreApplication::translate("HNewSheet", "Crea", nullptr));
        pbCancel->setText(QCoreApplication::translate("HNewSheet", "Annulla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNewSheet: public Ui_HNewSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWSHEET_H
