/********************************************************************************
** Form generated from reading UI file 'hmodimage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIMAGE_H
#define UI_HMODIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModImage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spWidth;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spHeight;
    QPushButton *pushButton;

    void setupUi(QWidget *HModImage)
    {
        if (HModImage->objectName().isEmpty())
            HModImage->setObjectName(QStringLiteral("HModImage"));
        HModImage->setWindowModality(Qt::ApplicationModal);
        HModImage->resize(233, 116);
        verticalLayout = new QVBoxLayout(HModImage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HModImage);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        spWidth = new QSpinBox(HModImage);
        spWidth->setObjectName(QStringLiteral("spWidth"));
        spWidth->setMinimum(50);
        spWidth->setMaximum(1000);
        spWidth->setValue(50);

        horizontalLayout->addWidget(spWidth);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(HModImage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label_2);

        spHeight = new QSpinBox(HModImage);
        spHeight->setObjectName(QStringLiteral("spHeight"));
        spHeight->setMinimum(50);
        spHeight->setMaximum(1000);

        horizontalLayout_2->addWidget(spHeight);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(HModImage);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(HModImage);

        QMetaObject::connectSlotsByName(HModImage);
    } // setupUi

    void retranslateUi(QWidget *HModImage)
    {
        HModImage->setWindowTitle(QApplication::translate("HModImage", "Moifica immagine", 0));
        label->setText(QApplication::translate("HModImage", "Width:", 0));
        label_2->setText(QApplication::translate("HModImage", "Height", 0));
        pushButton->setText(QApplication::translate("HModImage", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HModImage: public Ui_HModImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIMAGE_H
