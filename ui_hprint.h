/********************************************************************************
** Form generated from reading UI file 'hprint.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HPRINT_H
#define UI_HPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HPrint
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbant;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *HPrint)
    {
        if (HPrint->objectName().isEmpty())
            HPrint->setObjectName(QStringLiteral("HPrint"));
        HPrint->setWindowModality(Qt::ApplicationModal);
        HPrint->resize(922, 435);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HPrint->sizePolicy().hasHeightForWidth());
        HPrint->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HPrint->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HPrint);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(HPrint);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        font.setStyleStrategy(QFont::PreferAntialias);
        textEdit->setFont(font);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pbant = new QPushButton(HPrint);
        pbant->setObjectName(QStringLiteral("pbant"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Photocamera.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbant->setIcon(icon1);
        pbant->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pbant);

        pushButton_2 = new QPushButton(HPrint);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(HPrint);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(21, 32));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HPrint);

        QMetaObject::connectSlotsByName(HPrint);
    } // setupUi

    void retranslateUi(QWidget *HPrint)
    {
        HPrint->setWindowTitle(QApplication::translate("HPrint", "Stampa", 0));
        textEdit->setHtml(QApplication::translate("HPrint", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", 0));
        pbant->setText(QApplication::translate("HPrint", "Anteprima di stampa", 0));
        pushButton_2->setText(QApplication::translate("HPrint", "Stampa", 0));
        pushButton->setText(QApplication::translate("HPrint", "Chiudi", 0));
    } // retranslateUi

};

namespace Ui {
    class HPrint: public Ui_HPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HPRINT_H
