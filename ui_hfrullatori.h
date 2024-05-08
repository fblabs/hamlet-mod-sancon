/********************************************************************************
** Form generated from reading UI file 'hfrullatori.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HFRULLATORI_H
#define UI_HFRULLATORI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HFrullatori
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbTitle;
    QFormLayout *formLayout;
    QLabel *label_8;
    QDateEdit *deData;
    QLabel *label;
    QLineEdit *leLine;
    QLabel *label_2;
    QLineEdit *leOperator;
    QLabel *label_3;
    QLineEdit *leBlender;
    QLabel *label_4;
    QLineEdit *lePompe;
    QLabel *label_5;
    QLineEdit *leVasche;
    QLabel *label_6;
    QLineEdit *leAvanzi;
    QLabel *label_9;
    QLabel *label_7;
    QTextEdit *teNote;
    QCheckBox *cbExport;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbInit;
    QPushButton *pbPrint;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HFrullatori)
    {
        if (HFrullatori->objectName().isEmpty())
            HFrullatori->setObjectName(QString::fromUtf8("HFrullatori"));
        HFrullatori->setWindowModality(Qt::ApplicationModal);
        HFrullatori->resize(468, 478);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HFrullatori->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HFrullatori);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbTitle = new QLabel(HFrullatori);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(lbTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_8 = new QLabel(HFrullatori);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        deData = new QDateEdit(HFrullatori);
        deData->setObjectName(QString::fromUtf8("deData"));
        deData->setCalendarPopup(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, deData);

        label = new QLabel(HFrullatori);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        leLine = new QLineEdit(HFrullatori);
        leLine->setObjectName(QString::fromUtf8("leLine"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leLine);

        label_2 = new QLabel(HFrullatori);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        leOperator = new QLineEdit(HFrullatori);
        leOperator->setObjectName(QString::fromUtf8("leOperator"));

        formLayout->setWidget(2, QFormLayout::FieldRole, leOperator);

        label_3 = new QLabel(HFrullatori);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        leBlender = new QLineEdit(HFrullatori);
        leBlender->setObjectName(QString::fromUtf8("leBlender"));

        formLayout->setWidget(3, QFormLayout::FieldRole, leBlender);

        label_4 = new QLabel(HFrullatori);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lePompe = new QLineEdit(HFrullatori);
        lePompe->setObjectName(QString::fromUtf8("lePompe"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lePompe);

        label_5 = new QLabel(HFrullatori);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        leVasche = new QLineEdit(HFrullatori);
        leVasche->setObjectName(QString::fromUtf8("leVasche"));

        formLayout->setWidget(5, QFormLayout::FieldRole, leVasche);

        label_6 = new QLabel(HFrullatori);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        leAvanzi = new QLineEdit(HFrullatori);
        leAvanzi->setObjectName(QString::fromUtf8("leAvanzi"));

        formLayout->setWidget(6, QFormLayout::FieldRole, leAvanzi);

        label_9 = new QLabel(HFrullatori);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        label_7 = new QLabel(HFrullatori);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_7);

        teNote = new QTextEdit(HFrullatori);
        teNote->setObjectName(QString::fromUtf8("teNote"));
        teNote->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(8, QFormLayout::FieldRole, teNote);

        cbExport = new QCheckBox(HFrullatori);
        cbExport->setObjectName(QString::fromUtf8("cbExport"));

        formLayout->setWidget(7, QFormLayout::FieldRole, cbExport);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbInit = new QPushButton(HFrullatori);
        pbInit->setObjectName(QString::fromUtf8("pbInit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Accept64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbInit->setIcon(icon1);

        horizontalLayout->addWidget(pbInit);

        pbPrint = new QPushButton(HFrullatori);
        pbPrint->setObjectName(QString::fromUtf8("pbPrint"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPrint->setIcon(icon2);

        horizontalLayout->addWidget(pbPrint);

        pbSave = new QPushButton(HFrullatori);
        pbSave->setObjectName(QString::fromUtf8("pbSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSave->setIcon(icon3);

        horizontalLayout->addWidget(pbSave);

        pbClose = new QPushButton(HFrullatori);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClose->setIcon(icon4);

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(deData, leLine);
        QWidget::setTabOrder(leLine, leOperator);
        QWidget::setTabOrder(leOperator, leBlender);
        QWidget::setTabOrder(leBlender, lePompe);
        QWidget::setTabOrder(lePompe, leVasche);
        QWidget::setTabOrder(leVasche, leAvanzi);
        QWidget::setTabOrder(leAvanzi, cbExport);
        QWidget::setTabOrder(cbExport, teNote);
        QWidget::setTabOrder(teNote, pbInit);
        QWidget::setTabOrder(pbInit, pbClose);

        retranslateUi(HFrullatori);

        QMetaObject::connectSlotsByName(HFrullatori);
    } // setupUi

    void retranslateUi(QWidget *HFrullatori)
    {
        HFrullatori->setWindowTitle(QCoreApplication::translate("HFrullatori", "Impostazioni frullata", nullptr));
        lbTitle->setText(QCoreApplication::translate("HFrullatori", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("HFrullatori", "Data:", nullptr));
        label->setText(QCoreApplication::translate("HFrullatori", "Linea:", nullptr));
        label_2->setText(QCoreApplication::translate("HFrullatori", "Operatore:", nullptr));
        label_3->setText(QCoreApplication::translate("HFrullatori", "Frullatori:", nullptr));
        label_4->setText(QCoreApplication::translate("HFrullatori", "Pompe:", nullptr));
        label_5->setText(QCoreApplication::translate("HFrullatori", "Vasche:", nullptr));
        label_6->setText(QCoreApplication::translate("HFrullatori", "Avanzi:", nullptr));
        label_9->setText(QString());
        label_7->setText(QCoreApplication::translate("HFrullatori", "Note:", nullptr));
        cbExport->setText(QCoreApplication::translate("HFrullatori", "Esportato", nullptr));
        pbInit->setText(QCoreApplication::translate("HFrullatori", "Operazioni", nullptr));
        pbPrint->setText(QCoreApplication::translate("HFrullatori", "Stampa", nullptr));
        pbSave->setText(QCoreApplication::translate("HFrullatori", "Salva", nullptr));
        pbClose->setText(QCoreApplication::translate("HFrullatori", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HFrullatori: public Ui_HFrullatori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HFRULLATORI_H
