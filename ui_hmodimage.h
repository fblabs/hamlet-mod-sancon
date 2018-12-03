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
            HModImage->setObjectName(QStringLiteral("HModImage"));
        HModImage->setWindowModality(Qt::ApplicationModal);
        HModImage->resize(334, 99);
        verticalLayout = new QVBoxLayout(HModImage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HModImage);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        hSlider = new QSlider(HModImage);
        hSlider->setObjectName(QStringLiteral("hSlider"));
        hSlider->setMinimum(50);
        hSlider->setMaximum(1020);
        hSlider->setSingleStep(10);
        hSlider->setSliderPosition(200);
        hSlider->setOrientation(Qt::Horizontal);
        hSlider->setInvertedControls(false);
        hSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout->addWidget(hSlider);

        spWidth = new QSpinBox(HModImage);
        spWidth->setObjectName(QStringLiteral("spWidth"));
        spWidth->setMinimum(10);
        spWidth->setMaximum(2000);
        spWidth->setValue(50);

        horizontalLayout->addWidget(spWidth);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(HModImage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label_2);

        vSlider = new QSlider(HModImage);
        vSlider->setObjectName(QStringLiteral("vSlider"));
        vSlider->setMinimum(50);
        vSlider->setMaximum(1020);
        vSlider->setSingleStep(10);
        vSlider->setValue(200);
        vSlider->setSliderPosition(200);
        vSlider->setTracking(true);
        vSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(vSlider);

        spHeight = new QSpinBox(HModImage);
        spHeight->setObjectName(QStringLiteral("spHeight"));
        spHeight->setMinimum(50);
        spHeight->setMaximum(2000);
        spHeight->setValue(50);

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
