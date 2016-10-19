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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HModImage
{
public:
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;

    void setupUi(QWidget *HModImage)
    {
        if (HModImage->objectName().isEmpty())
            HModImage->setObjectName(QStringLiteral("HModImage"));
        HModImage->resize(400, 300);
        label = new QLabel(HModImage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 47, 13));
        label_2 = new QLabel(HModImage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 47, 13));
        spinBox = new QSpinBox(HModImage);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(80, 50, 101, 22));
        spinBox_2 = new QSpinBox(HModImage);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(70, 130, 111, 22));

        retranslateUi(HModImage);

        QMetaObject::connectSlotsByName(HModImage);
    } // setupUi

    void retranslateUi(QWidget *HModImage)
    {
        HModImage->setWindowTitle(QApplication::translate("HModImage", "Form", 0));
        label->setText(QApplication::translate("HModImage", "Width:", 0));
        label_2->setText(QApplication::translate("HModImage", "Height", 0));
    } // retranslateUi

};

namespace Ui {
    class HModImage: public Ui_HModImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIMAGE_H
