/********************************************************************************
** Form generated from reading UI file 'hprint.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRINT_H
#define UI_HPRINT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPrint
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spCharSize;
    QLabel *label;
    QSpinBox *sbW;
    QLabel *label_2;
    QSpinBox *sbH;
    QRadioButton *rbPortrait;
    QRadioButton *rbLandscape;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbant;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *HPrint)
    {
        if (HPrint->objectName().isEmpty())
            HPrint->setObjectName(QString::fromUtf8("HPrint"));
        HPrint->setWindowModality(Qt::WindowModal);
        HPrint->resize(975, 922);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HPrint->sizePolicy().hasHeightForWidth());
        HPrint->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HPrint->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HPrint);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_3 = new QLabel(HPrint);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_3);

        spCharSize = new QSpinBox(HPrint);
        spCharSize->setObjectName(QString::fromUtf8("spCharSize"));
        spCharSize->setMaximumSize(QSize(50, 16777215));
        spCharSize->setMinimum(5);
        spCharSize->setMaximum(20);
        spCharSize->setValue(10);

        horizontalLayout_2->addWidget(spCharSize);

        label = new QLabel(HPrint);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label);

        sbW = new QSpinBox(HPrint);
        sbW->setObjectName(QString::fromUtf8("sbW"));
        sbW->setMaximumSize(QSize(80, 16777215));
        sbW->setMinimum(100);
        sbW->setMaximum(1000);
        sbW->setSingleStep(10);
        sbW->setValue(100);

        horizontalLayout_2->addWidget(sbW);

        label_2 = new QLabel(HPrint);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        sbH = new QSpinBox(HPrint);
        sbH->setObjectName(QString::fromUtf8("sbH"));
        sbH->setMaximumSize(QSize(80, 16777215));
        sbH->setMinimum(100);
        sbH->setMaximum(1000);
        sbH->setSingleStep(10);
        sbH->setValue(100);

        horizontalLayout_2->addWidget(sbH);

        rbPortrait = new QRadioButton(HPrint);
        rbPortrait->setObjectName(QString::fromUtf8("rbPortrait"));
        rbPortrait->setChecked(true);

        horizontalLayout_2->addWidget(rbPortrait);

        rbLandscape = new QRadioButton(HPrint);
        rbLandscape->setObjectName(QString::fromUtf8("rbLandscape"));

        horizontalLayout_2->addWidget(rbLandscape);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        textEdit = new QTextEdit(HPrint);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        font.setStyleStrategy(QFont::PreferAntialias);
        textEdit->setFont(font);
        textEdit->setMouseTracking(false);
        textEdit->setAcceptDrops(false);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbant = new QPushButton(HPrint);
        pbant->setObjectName(QString::fromUtf8("pbant"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Photocamera.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbant->setIcon(icon1);
        pbant->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbant);

        pushButton_2 = new QPushButton(HPrint);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(HPrint);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(21, 32));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HPrint);

        QMetaObject::connectSlotsByName(HPrint);
    } // setupUi

    void retranslateUi(QWidget *HPrint)
    {
        HPrint->setWindowTitle(QCoreApplication::translate("HPrint", "Stampa", nullptr));
        label_3->setText(QCoreApplication::translate("HPrint", "Dimensione Caratteri:", nullptr));
        label->setText(QCoreApplication::translate("HPrint", "Larghezza immagine:", nullptr));
        label_2->setText(QCoreApplication::translate("HPrint", "Altezza immagine:", nullptr));
        rbPortrait->setText(QCoreApplication::translate("HPrint", "Verticale", nullptr));
        rbLandscape->setText(QCoreApplication::translate("HPrint", "Orizzontale", nullptr));
        textEdit->setHtml(QCoreApplication::translate("HPrint", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        pbant->setText(QCoreApplication::translate("HPrint", "Anteprima di stampa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HPrint", "Stampa", nullptr));
        pushButton->setText(QCoreApplication::translate("HPrint", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HPrint: public Ui_HPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRINT_H
