/********************************************************************************
** Form generated from reading UI file 'halarm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALARM_H
#define UI_HALARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTableView *tvMain;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QDateEdit *deData;
    QLabel *label_2;
    QCheckBox *cbAttiva;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *cbTipo;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbGroup;
    QRadioButton *rbUser;
    QListView *lvTarget;
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
            HAlarm->setObjectName(QStringLiteral("HAlarm"));
        HAlarm->setWindowModality(Qt::ApplicationModal);
        HAlarm->resize(1072, 659);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Chat.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        HAlarm->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(HAlarm);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(HAlarm);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        tvMain = new QTableView(HAlarm);
        tvMain->setObjectName(QStringLiteral("tvMain"));
        tvMain->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tvMain->setSelectionMode(QAbstractItemView::SingleSelection);
        tvMain->setSelectionBehavior(QAbstractItemView::SelectRows);
        tvMain->horizontalHeader()->setStretchLastSection(true);
        tvMain->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tvMain);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        deData = new QDateEdit(HAlarm);
        deData->setObjectName(QStringLiteral("deData"));

        gridLayout->addWidget(deData, 1, 1, 1, 1);

        label_2 = new QLabel(HAlarm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cbAttiva = new QCheckBox(HAlarm);
        cbAttiva->setObjectName(QStringLiteral("cbAttiva"));
        cbAttiva->setChecked(true);

        gridLayout->addWidget(cbAttiva, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(HAlarm);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        cbTipo = new QComboBox(HAlarm);
        cbTipo->setObjectName(QStringLiteral("cbTipo"));
        cbTipo->setEditable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, cbTipo);


        verticalLayout_4->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(HAlarm);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rbGroup = new QRadioButton(HAlarm);
        rbGroup->setObjectName(QStringLiteral("rbGroup"));
        rbGroup->setChecked(true);

        horizontalLayout_2->addWidget(rbGroup);

        rbUser = new QRadioButton(HAlarm);
        rbUser->setObjectName(QStringLiteral("rbUser"));

        horizontalLayout_2->addWidget(rbUser);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        lvTarget = new QListView(HAlarm);
        lvTarget->setObjectName(QStringLiteral("lvTarget"));
        lvTarget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lvTarget->setAlternatingRowColors(true);
        lvTarget->setSelectionMode(QAbstractItemView::MultiSelection);
        lvTarget->setSelectionBehavior(QAbstractItemView::SelectRows);
        lvTarget->setViewMode(QListView::ListMode);

        verticalLayout->addWidget(lvTarget);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(HAlarm);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setTextFormat(Qt::PlainText);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3->addWidget(label_5);

        ptDescrizione = new QPlainTextEdit(HAlarm);
        ptDescrizione->setObjectName(QStringLiteral("ptDescrizione"));

        verticalLayout_3->addWidget(ptDescrizione);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_4 = new QPushButton(HAlarm);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Plus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(HAlarm);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(HAlarm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Minus.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton = new QPushButton(HAlarm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_5 = new QPushButton(HAlarm);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Banned-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(HAlarm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout_4);


        retranslateUi(HAlarm);

        QMetaObject::connectSlotsByName(HAlarm);
    } // setupUi

    void retranslateUi(QWidget *HAlarm)
    {
        HAlarm->setWindowTitle(QApplication::translate("HAlarm", "Impostazione notifiche", 0));
        label_6->setText(QApplication::translate("HAlarm", "Notifiche impostate", 0));
        label_2->setText(QApplication::translate("HAlarm", "Data:", 0));
        cbAttiva->setText(QApplication::translate("HAlarm", "Attiva", 0));
        label_3->setText(QApplication::translate("HAlarm", "Tipo:", 0));
        label_4->setText(QApplication::translate("HAlarm", "Notificare a:", 0));
        rbGroup->setText(QApplication::translate("HAlarm", "Gruppo", 0));
        rbUser->setText(QApplication::translate("HAlarm", "Utente", 0));
        label_5->setText(QApplication::translate("HAlarm", "Descrizione:", 0));
        pushButton_4->setText(QApplication::translate("HAlarm", "Nuovo", 0));
        pushButton_6->setText(QApplication::translate("HAlarm", "Modifica", 0));
        pushButton_3->setText(QApplication::translate("HAlarm", "Elimina", 0));
        pushButton->setText(QApplication::translate("HAlarm", "Salva", 0));
        pushButton_5->setText(QApplication::translate("HAlarm", "Annulla", 0));
        pushButton_2->setText(QApplication::translate("HAlarm", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HAlarm: public Ui_HAlarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALARM_H
