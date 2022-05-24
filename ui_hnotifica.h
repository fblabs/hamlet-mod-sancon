/********************************************************************************
** Form generated from reading UI file 'hnotifica.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HNOTIFICA_H
#define UI_HNOTIFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HNotifica
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pbChiudi;

    void setupUi(QWidget *HNotifica)
    {
        if (HNotifica->objectName().isEmpty())
            HNotifica->setObjectName(QString::fromUtf8("HNotifica"));
        HNotifica->setWindowModality(Qt::ApplicationModal);
        HNotifica->resize(632, 392);
        verticalLayout = new QVBoxLayout(HNotifica);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(HNotifica);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 253, 187);"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        pbChiudi = new QPushButton(HNotifica);
        pbChiudi->setObjectName(QString::fromUtf8("pbChiudi"));
        pbChiudi->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setBold(true);
        font1.setWeight(75);
        pbChiudi->setFont(font1);
        pbChiudi->setAutoDefault(true);
        pbChiudi->setFlat(false);

        verticalLayout->addWidget(pbChiudi);


        retranslateUi(HNotifica);

        pbChiudi->setDefault(true);


        QMetaObject::connectSlotsByName(HNotifica);
    } // setupUi

    void retranslateUi(QWidget *HNotifica)
    {
        HNotifica->setWindowTitle(QCoreApplication::translate("HNotifica", "Notifica", nullptr));
        label->setText(QString());
        pbChiudi->setText(QCoreApplication::translate("HNotifica", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HNotifica: public Ui_HNotifica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HNOTIFICA_H
