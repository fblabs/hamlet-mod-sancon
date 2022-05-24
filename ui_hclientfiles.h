/********************************************************************************
** Form generated from reading UI file 'hclientfiles.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCLIENTFILES_H
#define UI_HCLIENTFILES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HClientFiles
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QRadioButton *rbLeft;
    QRadioButton *rbRight;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QListView *lvLeft;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QListView *lvRight;
    QLabel *label_2;
    QLineEdit *leProd;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HClientFiles)
    {
        if (HClientFiles->objectName().isEmpty())
            HClientFiles->setObjectName(QString::fromUtf8("HClientFiles"));
        HClientFiles->setWindowModality(Qt::ApplicationModal);
        HClientFiles->resize(647, 409);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HClientFiles->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HClientFiles);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(HClientFiles);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 39));
        groupBox->setMaximumSize(QSize(16777215, 39));
        groupBox->setBaseSize(QSize(0, 50));
        groupBox->setFlat(true);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 121, 19));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        rbLeft = new QRadioButton(layoutWidget);
        rbLeft->setObjectName(QString::fromUtf8("rbLeft"));
        rbLeft->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, rbLeft);

        rbRight = new QRadioButton(layoutWidget);
        rbRight->setObjectName(QString::fromUtf8("rbRight"));

        formLayout->setWidget(0, QFormLayout::FieldRole, rbRight);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(150, 10, 70, 17));

        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lvLeft = new QListView(HClientFiles);
        lvLeft->setObjectName(QString::fromUtf8("lvLeft"));

        verticalLayout->addWidget(lvLeft);

        label = new QLabel(HClientFiles);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(HClientFiles);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lvRight = new QListView(HClientFiles);
        lvRight->setObjectName(QString::fromUtf8("lvRight"));

        verticalLayout_2->addWidget(lvRight);

        label_2 = new QLabel(HClientFiles);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        leProd = new QLineEdit(HClientFiles);
        leProd->setObjectName(QString::fromUtf8("leProd"));

        verticalLayout_2->addWidget(leProd);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(HClientFiles);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setAutoDefault(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HClientFiles);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HClientFiles);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(HClientFiles);

        QMetaObject::connectSlotsByName(HClientFiles);
    } // setupUi

    void retranslateUi(QWidget *HClientFiles)
    {
        HClientFiles->setWindowTitle(QCoreApplication::translate("HClientFiles", "Schede cliente", nullptr));
        groupBox->setTitle(QString());
        rbLeft->setText(QCoreApplication::translate("HClientFiles", "Clienti", nullptr));
        rbRight->setText(QCoreApplication::translate("HClientFiles", "Ricette", nullptr));
        checkBox->setText(QCoreApplication::translate("HClientFiles", "Filtra", nullptr));
        label->setText(QCoreApplication::translate("HClientFiles", "Cerca:", nullptr));
        label_2->setText(QCoreApplication::translate("HClientFiles", "Cerca:", nullptr));
        pushButton->setText(QCoreApplication::translate("HClientFiles", "Vai", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HClientFiles", "Nuova/modifica", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HClientFiles", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HClientFiles: public Ui_HClientFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCLIENTFILES_H
