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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HFrullatori
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbTitle;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_3;
    QDateEdit *deData;
    QLineEdit *lePompe;
    QLabel *label_5;
    QLineEdit *leAmount;
    QLabel *label;
    QLineEdit *leAvanzi;
    QLabel *label_2;
    QLineEdit *leOperator;
    QLineEdit *leBlender;
    QLabel *label_4;
    QLabel *label_10;
    QLineEdit *leLine;
    QLineEdit *leVasche;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbIcon;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QSlider *stateSlider;
    QCheckBox *cbExport;
    QFormLayout *formLayout_9;
    QLabel *label_7;
    QTextEdit *teNote;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbInit;
    QPushButton *pbPrint;
    QPushButton *pbSave;
    QPushButton *pbClose;

    void setupUi(QWidget *HFrullatori)
    {
        if (HFrullatori->objectName().isEmpty())
            HFrullatori->setObjectName(QString::fromUtf8("HFrullatori"));
        HFrullatori->setWindowModality(Qt::NonModal);
        HFrullatori->resize(443, 474);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HFrullatori->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HFrullatori);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbTitle = new QLabel(HFrullatori);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(lbTitle);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(HFrullatori);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_3 = new QLabel(HFrullatori);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        deData = new QDateEdit(HFrullatori);
        deData->setObjectName(QString::fromUtf8("deData"));
        deData->setCalendarPopup(true);

        gridLayout->addWidget(deData, 0, 1, 1, 1);

        lePompe = new QLineEdit(HFrullatori);
        lePompe->setObjectName(QString::fromUtf8("lePompe"));

        gridLayout->addWidget(lePompe, 4, 1, 1, 1);

        label_5 = new QLabel(HFrullatori);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        leAmount = new QLineEdit(HFrullatori);
        leAmount->setObjectName(QString::fromUtf8("leAmount"));

        gridLayout->addWidget(leAmount, 7, 1, 1, 1);

        label = new QLabel(HFrullatori);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        leAvanzi = new QLineEdit(HFrullatori);
        leAvanzi->setObjectName(QString::fromUtf8("leAvanzi"));

        gridLayout->addWidget(leAvanzi, 6, 1, 1, 1);

        label_2 = new QLabel(HFrullatori);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        leOperator = new QLineEdit(HFrullatori);
        leOperator->setObjectName(QString::fromUtf8("leOperator"));

        gridLayout->addWidget(leOperator, 2, 1, 1, 1);

        leBlender = new QLineEdit(HFrullatori);
        leBlender->setObjectName(QString::fromUtf8("leBlender"));

        gridLayout->addWidget(leBlender, 3, 1, 1, 1);

        label_4 = new QLabel(HFrullatori);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_10 = new QLabel(HFrullatori);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 7, 0, 1, 1);

        leLine = new QLineEdit(HFrullatori);
        leLine->setObjectName(QString::fromUtf8("leLine"));

        gridLayout->addWidget(leLine, 1, 1, 1, 1);

        leVasche = new QLineEdit(HFrullatori);
        leVasche->setObjectName(QString::fromUtf8("leVasche"));

        gridLayout->addWidget(leVasche, 5, 1, 1, 1);

        label_6 = new QLabel(HFrullatori);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbIcon = new QLabel(HFrullatori);
        lbIcon->setObjectName(QString::fromUtf8("lbIcon"));
        lbIcon->setMinimumSize(QSize(20, 20));
        lbIcon->setMaximumSize(QSize(20, 20));
        lbIcon->setPixmap(QPixmap(QString::fromUtf8(":/Resources/verde.png")));

        horizontalLayout_3->addWidget(lbIcon);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(HFrullatori);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        stateSlider = new QSlider(HFrullatori);
        stateSlider->setObjectName(QString::fromUtf8("stateSlider"));
        stateSlider->setMaximum(2);
        stateSlider->setPageStep(1);
        stateSlider->setValue(0);
        stateSlider->setSliderPosition(0);
        stateSlider->setOrientation(Qt::Horizontal);
        stateSlider->setTickPosition(QSlider::TicksBelow);
        stateSlider->setTickInterval(1);

        horizontalLayout_2->addWidget(stateSlider);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        cbExport = new QCheckBox(HFrullatori);
        cbExport->setObjectName(QString::fromUtf8("cbExport"));

        verticalLayout->addWidget(cbExport);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        label_7 = new QLabel(HFrullatori);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_7);

        teNote = new QTextEdit(HFrullatori);
        teNote->setObjectName(QString::fromUtf8("teNote"));
        teNote->setMaximumSize(QSize(16777215, 80));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, teNote);


        verticalLayout->addLayout(formLayout_9);

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
        label_3->setText(QCoreApplication::translate("HFrullatori", "Frullatore:", nullptr));
        label_5->setText(QCoreApplication::translate("HFrullatori", "Vasche:", nullptr));
        label->setText(QCoreApplication::translate("HFrullatori", "Linea:", nullptr));
        label_2->setText(QCoreApplication::translate("HFrullatori", "Operatore:", nullptr));
        label_4->setText(QCoreApplication::translate("HFrullatori", "Pompe:", nullptr));
        label_10->setText(QCoreApplication::translate("HFrullatori", "Quantit\303\240", nullptr));
        label_6->setText(QCoreApplication::translate("HFrullatori", "Avanzi:", nullptr));
        lbIcon->setText(QString());
        label_9->setText(QCoreApplication::translate("HFrullatori", "Stato:", nullptr));
        cbExport->setText(QCoreApplication::translate("HFrullatori", "Esportato", nullptr));
        label_7->setText(QCoreApplication::translate("HFrullatori", "Note:", nullptr));
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
