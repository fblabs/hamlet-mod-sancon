/********************************************************************************
** Form generated from reading UI file 'hclientfiles.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HCLIENTFILES_H
#define UI_HCLIENTFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            HClientFiles->setObjectName(QStringLiteral("HClientFiles"));
        HClientFiles->setWindowModality(Qt::ApplicationModal);
        HClientFiles->resize(647, 409);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HClientFiles->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HClientFiles);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(HClientFiles);
        groupBox->setObjectName(QStringLiteral("groupBox"));
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
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 121, 19));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        rbLeft = new QRadioButton(layoutWidget);
        rbLeft->setObjectName(QStringLiteral("rbLeft"));
        rbLeft->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, rbLeft);

        rbRight = new QRadioButton(layoutWidget);
        rbRight->setObjectName(QStringLiteral("rbRight"));

        formLayout->setWidget(0, QFormLayout::FieldRole, rbRight);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(150, 10, 70, 17));

        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lvLeft = new QListView(HClientFiles);
        lvLeft->setObjectName(QStringLiteral("lvLeft"));

        verticalLayout->addWidget(lvLeft);

        label = new QLabel(HClientFiles);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(HClientFiles);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lvRight = new QListView(HClientFiles);
        lvRight->setObjectName(QStringLiteral("lvRight"));

        verticalLayout_2->addWidget(lvRight);

        label_2 = new QLabel(HClientFiles);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        leProd = new QLineEdit(HClientFiles);
        leProd->setObjectName(QStringLiteral("leProd"));

        verticalLayout_2->addWidget(leProd);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(HClientFiles);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setAutoDefault(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(HClientFiles);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Sheet-Of-Paper.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(HClientFiles);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(HClientFiles);

        QMetaObject::connectSlotsByName(HClientFiles);
    } // setupUi

    void retranslateUi(QWidget *HClientFiles)
    {
        HClientFiles->setWindowTitle(QApplication::translate("HClientFiles", "Schede cliente", 0));
        groupBox->setTitle(QString());
        rbLeft->setText(QApplication::translate("HClientFiles", "Clienti", 0));
        rbRight->setText(QApplication::translate("HClientFiles", "Ricette", 0));
        checkBox->setText(QApplication::translate("HClientFiles", "Filtra", 0));
        label->setText(QApplication::translate("HClientFiles", "Cerca:", 0));
        label_2->setText(QApplication::translate("HClientFiles", "Cerca:", 0));
        pushButton->setText(QApplication::translate("HClientFiles", "Vai", 0));
        pushButton_2->setText(QApplication::translate("HClientFiles", "Nuova/modifica", 0));
        pushButton_3->setText(QApplication::translate("HClientFiles", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HClientFiles: public Ui_HClientFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HCLIENTFILES_H
