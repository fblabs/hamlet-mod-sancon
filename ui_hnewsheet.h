/********************************************************************************
** Form generated from reading UI file 'hnewsheet.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNEWSHEET_H
#define UI_HNEWSHEET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HNewSheet->setObjectName(QStringLiteral("HNewSheet"));
        HNewSheet->setWindowModality(Qt::ApplicationModal);
        HNewSheet->resize(383, 235);
        verticalLayout = new QVBoxLayout(HNewSheet);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(HNewSheet);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(HNewSheet);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        deDEl = new QDateEdit(HNewSheet);
        deDEl->setObjectName(QStringLiteral("deDEl"));
        deDEl->setCalendarPopup(true);

        horizontalLayout->addWidget(deDEl);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(HNewSheet);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        spLine = new QSpinBox(HNewSheet);
        spLine->setObjectName(QStringLiteral("spLine"));
        spLine->setMinimum(1);
        spLine->setMaximum(5);

        horizontalLayout_2->addWidget(spLine);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pbOK = new QPushButton(HNewSheet);
        pbOK->setObjectName(QStringLiteral("pbOK"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOK->setIcon(icon);
        pbOK->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbOK);

        pbCancel = new QPushButton(HNewSheet);
        pbCancel->setObjectName(QStringLiteral("pbCancel"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCancel->setIcon(icon1);
        pbCancel->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pbCancel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(HNewSheet);

        QMetaObject::connectSlotsByName(HNewSheet);
    } // setupUi

    void retranslateUi(QWidget *HNewSheet)
    {
        HNewSheet->setWindowTitle(QApplication::translate("HNewSheet", "Crea foglio produzione", 0));
        label->setText(QApplication::translate("HNewSheet", "Foglio Produzione", 0));
        label_2->setText(QApplication::translate("HNewSheet", "Data:", 0));
        label_3->setText(QApplication::translate("HNewSheet", "Linea:", 0));
        pbOK->setText(QApplication::translate("HNewSheet", "Crea", 0));
        pbCancel->setText(QApplication::translate("HNewSheet", "Annulla", 0));
    } // retranslateUi

};

namespace Ui {
    class HNewSheet: public Ui_HNewSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNEWSHEET_H
