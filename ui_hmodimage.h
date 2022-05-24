/********************************************************************************
** Form generated from reading UI file 'hmodimage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HMODIMAGE_H
#define UI_HMODIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
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
    QSlider *hSlider;
    QSpinBox *spWidth;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *vSlider;
    QSpinBox *spHeight;
    QPushButton *pushButton;

    void setupUi(QWidget *HModImage)
    {
        if (HModImage->objectName().isEmpty())
            HModImage->setObjectName(QString::fromUtf8("HModImage"));
        HModImage->setWindowModality(Qt::ApplicationModal);
        HModImage->resize(334, 99);
        verticalLayout = new QVBoxLayout(HModImage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(HModImage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        hSlider = new QSlider(HModImage);
        hSlider->setObjectName(QString::fromUtf8("hSlider"));
        hSlider->setMinimum(50);
        hSlider->setMaximum(1020);
        hSlider->setSingleStep(10);
        hSlider->setSliderPosition(200);
        hSlider->setOrientation(Qt::Horizontal);
        hSlider->setInvertedControls(false);
        hSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout->addWidget(hSlider);

        spWidth = new QSpinBox(HModImage);
        spWidth->setObjectName(QString::fromUtf8("spWidth"));
        spWidth->setMinimum(10);
        spWidth->setMaximum(2000);
        spWidth->setValue(50);

        horizontalLayout->addWidget(spWidth);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HModImage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label_2);

        vSlider = new QSlider(HModImage);
        vSlider->setObjectName(QString::fromUtf8("vSlider"));
        vSlider->setMinimum(50);
        vSlider->setMaximum(1020);
        vSlider->setSingleStep(10);
        vSlider->setValue(200);
        vSlider->setSliderPosition(200);
        vSlider->setTracking(true);
        vSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(vSlider);

        spHeight = new QSpinBox(HModImage);
        spHeight->setObjectName(QString::fromUtf8("spHeight"));
        spHeight->setMinimum(50);
        spHeight->setMaximum(2000);
        spHeight->setValue(50);

        horizontalLayout_2->addWidget(spHeight);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(HModImage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(HModImage);

        QMetaObject::connectSlotsByName(HModImage);
    } // setupUi

    void retranslateUi(QWidget *HModImage)
    {
        HModImage->setWindowTitle(QCoreApplication::translate("HModImage", "Moifica immagine", nullptr));
        label->setText(QCoreApplication::translate("HModImage", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("HModImage", "Height", nullptr));
        pushButton->setText(QCoreApplication::translate("HModImage", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HModImage: public Ui_HModImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HMODIMAGE_H
