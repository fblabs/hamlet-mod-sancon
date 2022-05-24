/********************************************************************************
** Form generated from reading UI file 'halarm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALARM_H
#define UI_HALARM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAlarm
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTableView *tvMain;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QDateEdit *deData;
    QLabel *label_2;
    QCheckBox *cbAttiva;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *cbTipo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbGroup;
    QRadioButton *rbUser;
    QListView *lvTarget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *leCreator;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QPlainTextEdit *ptDescrizione;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *HAlarm)
    {
        if (HAlarm->objectName().isEmpty())
            HAlarm->setObjectName(QString::fromUtf8("HAlarm"));
        HAlarm->setWindowModality(Qt::ApplicationModal);
        HAlarm->resize(1072, 659);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Chat.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAlarm->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(HAlarm);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(HAlarm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        tvMain = new QTableView(HAlarm);
        tvMain->setObjectName(QString::fromUtf8("tvMain"));
        tvMain->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMain->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMain->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvMain->horizontalHeader()->setStretchLastSection(true);
        tvMain->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tvMain);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        deData = new QDateEdit(HAlarm);
        deData->setObjectName(QString::fromUtf8("deData"));

        gridLayout->addWidget(deData, 1, 1, 1, 1);

        label_2 = new QLabel(HAlarm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cbAttiva = new QCheckBox(HAlarm);
        cbAttiva->setObjectName(QString::fromUtf8("cbAttiva"));
        cbAttiva->setChecked(true);

        gridLayout->addWidget(cbAttiva, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(HAlarm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        cbTipo = new QComboBox(HAlarm);
        cbTipo->setObjectName(QString::fromUtf8("cbTipo"));
        cbTipo->setEditable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, cbTipo);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(HAlarm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbGroup = new QRadioButton(HAlarm);
        rbGroup->setObjectName(QString::fromUtf8("rbGroup"));
        rbGroup->setChecked(true);

        horizontalLayout_2->addWidget(rbGroup);

        rbUser = new QRadioButton(HAlarm);
        rbUser->setObjectName(QString::fromUtf8("rbUser"));

        horizontalLayout_2->addWidget(rbUser);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        lvTarget = new QListView(HAlarm);
        lvTarget->setObjectName(QString::fromUtf8("lvTarget"));
        lvTarget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvTarget->setAlternatingRowColors(true);
        lvTarget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lvTarget->setSelectionBehavior(QAbstractItemView::SelectRows);
        lvTarget->setViewMode(QListView::ListMode);

        verticalLayout->addWidget(lvTarget);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(HAlarm);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        leCreator = new QLineEdit(HAlarm);
        leCreator->setObjectName(QString::fromUtf8("leCreator"));
        leCreator->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        leCreator->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leCreator);


        verticalLayout->addLayout(formLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(HAlarm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setTextFormat(Qt::PlainText);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(label_5);

        ptDescrizione = new QPlainTextEdit(HAlarm);
        ptDescrizione->setObjectName(QString::fromUtf8("ptDescrizione"));

        verticalLayout_3->addWidget(ptDescrizione);


        verticalLayout->addLayout(verticalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_4 = new QPushButton(HAlarm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(HAlarm);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(HAlarm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton = new QPushButton(HAlarm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_5 = new QPushButton(HAlarm);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(HAlarm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(HAlarm);

        QMetaObject::connectSlotsByName(HAlarm);
    } // setupUi

    void retranslateUi(QWidget *HAlarm)
    {
        HAlarm->setWindowTitle(QCoreApplication::translate("HAlarm", "Impostazione notifiche", nullptr));
        label_6->setText(QCoreApplication::translate("HAlarm", "Notifiche impostate", nullptr));
        label_2->setText(QCoreApplication::translate("HAlarm", "Data:", nullptr));
        cbAttiva->setText(QCoreApplication::translate("HAlarm", "Attiva", nullptr));
        label_3->setText(QCoreApplication::translate("HAlarm", "Tipo:", nullptr));
        label_4->setText(QCoreApplication::translate("HAlarm", "Notificare a:", nullptr));
        rbGroup->setText(QCoreApplication::translate("HAlarm", "Gruppo", nullptr));
        rbUser->setText(QCoreApplication::translate("HAlarm", "Utente", nullptr));
        label->setText(QCoreApplication::translate("HAlarm", "Impostata da:", nullptr));
        label_5->setText(QCoreApplication::translate("HAlarm", "Descrizione:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("HAlarm", "Nuovo", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HAlarm", "Modifica", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HAlarm", "Elimina", nullptr));
        pushButton->setText(QCoreApplication::translate("HAlarm", "Salva", nullptr));
        pushButton_5->setText(QCoreApplication::translate("HAlarm", "Annulla", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HAlarm", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HAlarm: public Ui_HAlarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALARM_H
