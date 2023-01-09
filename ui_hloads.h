/********************************************************************************
** Form generated from reading UI file 'hloads.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HLOADS_H
#define UI_HLOADS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HLoads
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *deFrom;
    QLabel *label_2;
    QDateEdit *deTo;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *leAmount;
    QPushButton *pbClose;

    void setupUi(QWidget *HLoads)
    {
        if (HLoads->objectName().isEmpty())
            HLoads->setObjectName(QString::fromUtf8("HLoads"));
        HLoads->setWindowModality(Qt::ApplicationModal);
        HLoads->resize(253, 282);
        verticalLayout = new QVBoxLayout(HLoads);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HLoads);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        deFrom = new QDateEdit(HLoads);
        deFrom->setObjectName(QString::fromUtf8("deFrom"));
        deFrom->setCalendarPopup(true);

        horizontalLayout->addWidget(deFrom);

        label_2 = new QLabel(HLoads);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        deTo = new QDateEdit(HLoads);
        deTo->setObjectName(QString::fromUtf8("deTo"));
        deTo->setCalendarPopup(true);

        horizontalLayout->addWidget(deTo);

        pushButton = new QPushButton(HLoads);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Monitoring64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(HLoads);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        leAmount = new QLineEdit(HLoads);
        leAmount->setObjectName(QString::fromUtf8("leAmount"));
        leAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leAmount->setReadOnly(true);

        horizontalLayout_2->addWidget(leAmount);


        verticalLayout->addLayout(horizontalLayout_2);

        pbClose = new QPushButton(HLoads);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon1);

        verticalLayout->addWidget(pbClose);


        retranslateUi(HLoads);

        QMetaObject::connectSlotsByName(HLoads);
    } // setupUi

    void retranslateUi(QWidget *HLoads)
    {
        HLoads->setWindowTitle(QCoreApplication::translate("HLoads", "Carichi", nullptr));
        label->setText(QCoreApplication::translate("HLoads", "Tra il:", nullptr));
        label_2->setText(QCoreApplication::translate("HLoads", "e il:", nullptr));
        pushButton->setText(QCoreApplication::translate("HLoads", "Cerca", nullptr));
        label_3->setText(QCoreApplication::translate("HLoads", "Totale carichi:", nullptr));
        pbClose->setText(QCoreApplication::translate("HLoads", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HLoads: public Ui_HLoads {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HLOADS_H
