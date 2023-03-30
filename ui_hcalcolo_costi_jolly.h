/********************************************************************************
** Form generated from reading UI file 'hcalcolo_costi_jolly.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCALCOLO_COSTI_JOLLY_H
#define UI_HCALCOLO_COSTI_JOLLY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HCalcolo_costi_jolly
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lb_overview;
    QPushButton *pbReset;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QTableView *tv_Recipe;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *lb_costo_formato;
    QTableView *tvComponenti;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbPrint;
    QPushButton *pbClose;

    void setupUi(QWidget *HCalcolo_costi_jolly)
    {
        if (HCalcolo_costi_jolly->objectName().isEmpty())
            HCalcolo_costi_jolly->setObjectName(QString::fromUtf8("HCalcolo_costi_jolly"));
        HCalcolo_costi_jolly->resize(1386, 692);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Right-align64.png"), QSize(), QIcon::Normal, QIcon::Off);
        HCalcolo_costi_jolly->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HCalcolo_costi_jolly);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lb_overview = new QLabel(HCalcolo_costi_jolly);
        lb_overview->setObjectName(QString::fromUtf8("lb_overview"));
        lb_overview->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_4->addWidget(lb_overview);

        pbReset = new QPushButton(HCalcolo_costi_jolly);
        pbReset->setObjectName(QString::fromUtf8("pbReset"));
        pbReset->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(pbReset);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tv_Recipe = new QTableView(HCalcolo_costi_jolly);
        tv_Recipe->setObjectName(QString::fromUtf8("tv_Recipe"));
        tv_Recipe->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tv_Recipe->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tv_Recipe);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(HCalcolo_costi_jolly);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lb_costo_formato = new QLabel(HCalcolo_costi_jolly);
        lb_costo_formato->setObjectName(QString::fromUtf8("lb_costo_formato"));
        lb_costo_formato->setMinimumSize(QSize(80, 0));
        lb_costo_formato->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lb_costo_formato);


        horizontalLayout->addLayout(formLayout);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        tvComponenti = new QTableView(HCalcolo_costi_jolly);
        tvComponenti->setObjectName(QString::fromUtf8("tvComponenti"));
        tvComponenti->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(tvComponenti);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbPrint = new QPushButton(HCalcolo_costi_jolly);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon1);
        pbPrint->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbPrint);

        pbClose = new QPushButton(HCalcolo_costi_jolly);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon2);
        pbClose->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pbClose);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(HCalcolo_costi_jolly);

        QMetaObject::connectSlotsByName(HCalcolo_costi_jolly);
    } // setupUi

    void retranslateUi(QWidget *HCalcolo_costi_jolly)
    {
        HCalcolo_costi_jolly->setWindowTitle(QCoreApplication::translate("HCalcolo_costi_jolly", "Elaborazione calcolo costi", nullptr));
        lb_overview->setText(QString());
        pbReset->setText(QCoreApplication::translate("HCalcolo_costi_jolly", "Reset", nullptr));
        label_2->setText(QCoreApplication::translate("HCalcolo_costi_jolly", "Costo formato:", nullptr));
        lb_costo_formato->setText(QString());
        pbPrint->setText(QCoreApplication::translate("HCalcolo_costi_jolly", "Stampa", nullptr));
        pbClose->setText(QCoreApplication::translate("HCalcolo_costi_jolly", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HCalcolo_costi_jolly: public Ui_HCalcolo_costi_jolly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCALCOLO_COSTI_JOLLY_H
