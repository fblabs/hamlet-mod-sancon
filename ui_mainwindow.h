/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QToolButton *tbModificaLotti;
    QToolButton *pBNewOperation;
    QPushButton *pbPackages;
    QToolButton *tbAnalisi;
    QPushButton *pushButton;
    QPushButton *toolButton;
    QToolButton *tbMagaz;
    QPushButton *pbC4R;
    QToolButton *tbRicette;
    QPushButton *pbUnload;
    QPushButton *pbVerifyLabels;
    QToolButton *tbLotti;
    QToolButton *tbProdotti;
    QToolButton *tnProduzione;
    QPushButton *pbExpirations;
    QPushButton *pbCalcoloCosti;
    QToolButton *tbAssociazioni;
    QPushButton *pbSchede;
    QPushButton *pbOldCards;
    QToolButton *tbClose;
    QPushButton *pbNotifiche;
    QToolButton *tbLogout;
    QPushButton *pbContacts;
    QToolButton *tbUtenti;
    QPushButton *pbCkeckNotifications;
    QToolButton *tbSettings;
    QToolButton *tbAnag;
    QPushButton *pbProgrammazione;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1112, 780);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 74, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 111, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 92, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 37, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 49, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/fblabs.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_4->setFont(font);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(300, 300));
        label->setMaximumSize(QSize(400, 400));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/hamlet_graphics.png")));
        label->setScaledContents(true);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAutoFillBackground(true);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2->setOpenExternalLinks(true);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tbModificaLotti = new QToolButton(centralWidget);
        tbModificaLotti->setObjectName(QString::fromUtf8("tbModificaLotti"));
        tbModificaLotti->setEnabled(false);
        tbModificaLotti->setMinimumSize(QSize(80, 0));
        tbModificaLotti->setMaximumSize(QSize(120, 16777215));
        QPalette palette1;
        QBrush brush11(QColor(200, 188, 193, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbModificaLotti->setPalette(palette1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbModificaLotti->setIcon(icon1);
        tbModificaLotti->setIconSize(QSize(32, 32));
        tbModificaLotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbModificaLotti, 8, 4, 1, 1);

        pBNewOperation = new QToolButton(centralWidget);
        pBNewOperation->setObjectName(QString::fromUtf8("pBNewOperation"));
        pBNewOperation->setEnabled(false);
        pBNewOperation->setMinimumSize(QSize(138, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pBNewOperation->setPalette(palette2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBNewOperation->setIcon(icon2);
        pBNewOperation->setIconSize(QSize(32, 32));
        pBNewOperation->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pBNewOperation->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(pBNewOperation, 8, 2, 1, 1);

        pbPackages = new QPushButton(centralWidget);
        pbPackages->setObjectName(QString::fromUtf8("pbPackages"));
        pbPackages->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbPackages->sizePolicy().hasHeightForWidth());
        pbPackages->setSizePolicy(sizePolicy);
        pbPackages->setMinimumSize(QSize(130, 0));
        pbPackages->setMaximumSize(QSize(125, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbPackages->setPalette(palette3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbPackages->setIcon(icon3);
        pbPackages->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbPackages, 8, 7, 1, 1);

        tbAnalisi = new QToolButton(centralWidget);
        tbAnalisi->setObjectName(QString::fromUtf8("tbAnalisi"));
        tbAnalisi->setEnabled(false);
        sizePolicy.setHeightForWidth(tbAnalisi->sizePolicy().hasHeightForWidth());
        tbAnalisi->setSizePolicy(sizePolicy);
        tbAnalisi->setMinimumSize(QSize(140, 0));
        tbAnalisi->setMaximumSize(QSize(120, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbAnalisi->setPalette(palette4);
        tbAnalisi->setAutoFillBackground(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Chart.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnalisi->setIcon(icon4);
        tbAnalisi->setIconSize(QSize(32, 32));
        tbAnalisi->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbAnalisi->setAutoRaise(false);

        gridLayout->addWidget(tbAnalisi, 5, 8, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton->setPalette(palette5);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Planet.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton, 11, 0, 1, 1);

        toolButton = new QPushButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        toolButton->setPalette(palette6);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/User-green64.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon6);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setAutoDefault(true);

        gridLayout->addWidget(toolButton, 5, 0, 1, 1);

        tbMagaz = new QToolButton(centralWidget);
        tbMagaz->setObjectName(QString::fromUtf8("tbMagaz"));
        tbMagaz->setEnabled(false);
        tbMagaz->setMinimumSize(QSize(138, 0));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbMagaz->setPalette(palette7);
        tbMagaz->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/fork-1-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMagaz->setIcon(icon7);
        tbMagaz->setIconSize(QSize(32, 32));
        tbMagaz->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbMagaz, 5, 2, 1, 1);

        pbC4R = new QPushButton(centralWidget);
        pbC4R->setObjectName(QString::fromUtf8("pbC4R"));
        pbC4R->setEnabled(false);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbC4R->setPalette(palette8);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/Link64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbC4R->setIcon(icon8);
        pbC4R->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbC4R, 10, 6, 1, 1);

        tbRicette = new QToolButton(centralWidget);
        tbRicette->setObjectName(QString::fromUtf8("tbRicette"));
        tbRicette->setEnabled(false);
        tbRicette->setMinimumSize(QSize(134, 0));
        tbRicette->setMaximumSize(QSize(16777215, 16777215));
        tbRicette->setBaseSize(QSize(0, 0));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbRicette->setPalette(palette9);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbRicette->setIcon(icon9);
        tbRicette->setIconSize(QSize(32, 32));
        tbRicette->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbRicette, 5, 6, 1, 1);

        pbUnload = new QPushButton(centralWidget);
        pbUnload->setObjectName(QString::fromUtf8("pbUnload"));
        pbUnload->setEnabled(false);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbUnload->setPalette(palette10);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUnload->setIcon(icon10);
        pbUnload->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbUnload, 10, 2, 1, 1);

        pbVerifyLabels = new QPushButton(centralWidget);
        pbVerifyLabels->setObjectName(QString::fromUtf8("pbVerifyLabels"));
        pbVerifyLabels->setEnabled(false);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbVerifyLabels->setPalette(palette11);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbVerifyLabels->setIcon(icon11);
        pbVerifyLabels->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbVerifyLabels, 10, 7, 1, 1);

        tbLotti = new QToolButton(centralWidget);
        tbLotti->setObjectName(QString::fromUtf8("tbLotti"));
        tbLotti->setEnabled(false);
        tbLotti->setMinimumSize(QSize(80, 0));
        tbLotti->setMaximumSize(QSize(120, 16777215));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbLotti->setPalette(palette12);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/Cube.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbLotti->setIcon(icon12);
        tbLotti->setIconSize(QSize(32, 32));
        tbLotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbLotti->setAutoRaise(false);

        gridLayout->addWidget(tbLotti, 5, 4, 1, 1);

        tbProdotti = new QToolButton(centralWidget);
        tbProdotti->setObjectName(QString::fromUtf8("tbProdotti"));
        tbProdotti->setEnabled(false);
        tbProdotti->setMinimumSize(QSize(138, 0));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbProdotti->setPalette(palette13);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/Wood-4-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbProdotti->setIcon(icon13);
        tbProdotti->setIconSize(QSize(32, 32));
        tbProdotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbProdotti, 4, 2, 1, 1);

        tnProduzione = new QToolButton(centralWidget);
        tnProduzione->setObjectName(QString::fromUtf8("tnProduzione"));
        tnProduzione->setEnabled(false);
        tnProduzione->setMinimumSize(QSize(130, 0));
        tnProduzione->setMaximumSize(QSize(120, 16777215));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tnProduzione->setPalette(palette14);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/Gears.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tnProduzione->setIcon(icon14);
        tnProduzione->setIconSize(QSize(32, 32));
        tnProduzione->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tnProduzione, 5, 7, 1, 1);

        pbExpirations = new QPushButton(centralWidget);
        pbExpirations->setObjectName(QString::fromUtf8("pbExpirations"));
        pbExpirations->setEnabled(false);
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbExpirations->setPalette(palette15);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Resources/Calendar.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbExpirations->setIcon(icon15);
        pbExpirations->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbExpirations, 11, 2, 1, 1);

        pbCalcoloCosti = new QPushButton(centralWidget);
        pbCalcoloCosti->setObjectName(QString::fromUtf8("pbCalcoloCosti"));
        pbCalcoloCosti->setEnabled(false);
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbCalcoloCosti->setPalette(palette16);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Resources/Cash-register-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalcoloCosti->setIcon(icon16);
        pbCalcoloCosti->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbCalcoloCosti, 4, 8, 1, 1);

        tbAssociazioni = new QToolButton(centralWidget);
        tbAssociazioni->setObjectName(QString::fromUtf8("tbAssociazioni"));
        tbAssociazioni->setEnabled(false);
        tbAssociazioni->setMinimumSize(QSize(80, 0));
        tbAssociazioni->setMaximumSize(QSize(134, 16777215));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbAssociazioni->setPalette(palette17);
        tbAssociazioni->setIcon(icon11);
        tbAssociazioni->setIconSize(QSize(32, 32));
        tbAssociazioni->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbAssociazioni, 8, 6, 1, 1);

        pbSchede = new QPushButton(centralWidget);
        pbSchede->setObjectName(QString::fromUtf8("pbSchede"));
        pbSchede->setEnabled(false);
        pbSchede->setMinimumSize(QSize(80, 0));
        pbSchede->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbSchede->setPalette(palette18);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSchede->setIcon(icon17);
        pbSchede->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbSchede, 4, 6, 1, 1);

        pbOldCards = new QPushButton(centralWidget);
        pbOldCards->setObjectName(QString::fromUtf8("pbOldCards"));
        pbOldCards->setEnabled(false);
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        pbOldCards->setPalette(palette19);

        gridLayout->addWidget(pbOldCards, 2, 6, 1, 1);

        tbClose = new QToolButton(centralWidget);
        tbClose->setObjectName(QString::fromUtf8("tbClose"));
        tbClose->setEnabled(true);
        tbClose->setMinimumSize(QSize(80, 0));
        tbClose->setMaximumSize(QSize(120, 16777215));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbClose->setPalette(palette20);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbClose->setIcon(icon18);
        tbClose->setIconSize(QSize(32, 32));
        tbClose->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbClose, 8, 9, 1, 1);

        pbNotifiche = new QPushButton(centralWidget);
        pbNotifiche->setObjectName(QString::fromUtf8("pbNotifiche"));
        pbNotifiche->setEnabled(false);
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbNotifiche->setPalette(palette21);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Resources/Chat.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbNotifiche->setIcon(icon19);
        pbNotifiche->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbNotifiche, 5, 1, 1, 1);

        tbLogout = new QToolButton(centralWidget);
        tbLogout->setObjectName(QString::fromUtf8("tbLogout"));
        tbLogout->setEnabled(false);
        tbLogout->setMinimumSize(QSize(80, 0));
        tbLogout->setMaximumSize(QSize(120, 16777215));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush15(QColor(227, 221, 224, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        QBrush brush16(QColor(100, 94, 96, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(133, 125, 129, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush18(QColor(0, 0, 0, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        QBrush brush19(QColor(0, 0, 0, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush19);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush20(QColor(0, 0, 0, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush20);
#endif
        tbLogout->setPalette(palette22);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Resources/User-red64.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbLogout->setIcon(icon20);
        tbLogout->setIconSize(QSize(32, 32));
        tbLogout->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbLogout, 5, 9, 1, 1);

        pbContacts = new QPushButton(centralWidget);
        pbContacts->setObjectName(QString::fromUtf8("pbContacts"));
        pbContacts->setEnabled(false);
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbContacts->setPalette(palette23);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbContacts->setIcon(icon21);
        pbContacts->setIconSize(QSize(32, 32));
        pbContacts->setFlat(false);

        gridLayout->addWidget(pbContacts, 11, 6, 1, 1);

        tbUtenti = new QToolButton(centralWidget);
        tbUtenti->setObjectName(QString::fromUtf8("tbUtenti"));
        tbUtenti->setEnabled(false);
        tbUtenti->setMinimumSize(QSize(80, 0));
        tbUtenti->setMaximumSize(QSize(120, 16777215));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbUtenti->setPalette(palette24);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/Resources/Warning-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbUtenti->setIcon(icon22);
        tbUtenti->setIconSize(QSize(32, 32));
        tbUtenti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbUtenti->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(tbUtenti, 10, 1, 1, 1);

        pbCkeckNotifications = new QPushButton(centralWidget);
        pbCkeckNotifications->setObjectName(QString::fromUtf8("pbCkeckNotifications"));
        pbCkeckNotifications->setEnabled(false);
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbCkeckNotifications->setPalette(palette25);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbCkeckNotifications->setIcon(icon23);
        pbCkeckNotifications->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbCkeckNotifications, 8, 1, 1, 1);

        tbSettings = new QToolButton(centralWidget);
        tbSettings->setObjectName(QString::fromUtf8("tbSettings"));
        tbSettings->setEnabled(true);
        tbSettings->setMinimumSize(QSize(80, 0));
        tbSettings->setMaximumSize(QSize(125, 16777215));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        tbSettings->setPalette(palette26);
        tbSettings->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0)"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/Resources/Computer.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbSettings->setIcon(icon24);
        tbSettings->setIconSize(QSize(32, 32));
        tbSettings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbSettings, 4, 0, 1, 1);

        tbAnag = new QToolButton(centralWidget);
        tbAnag->setObjectName(QString::fromUtf8("tbAnag"));
        tbAnag->setEnabled(false);
        tbAnag->setMinimumSize(QSize(80, 0));
        tbAnag->setMaximumSize(QSize(120, 16777215));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbAnag->setPalette(palette27);
        tbAnag->setAutoFillBackground(true);
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/Resources/Users64.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnag->setIcon(icon25);
        tbAnag->setIconSize(QSize(32, 32));
        tbAnag->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbAnag->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(tbAnag, 4, 1, 1, 1);

        pbProgrammazione = new QPushButton(centralWidget);
        pbProgrammazione->setObjectName(QString::fromUtf8("pbProgrammazione"));
        pbProgrammazione->setEnabled(false);
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush21(QColor(200, 190, 194, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush21);
        palette28.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush);
        palette28.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush22(QColor(255, 255, 255, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush21);
        palette28.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        QBrush brush23(QColor(255, 255, 255, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush21);
        palette28.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush24(QColor(255, 255, 255, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush24);
#endif
        pbProgrammazione->setPalette(palette28);
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/Resources/3D_Icons_Icon_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbProgrammazione->setIcon(icon26);
        pbProgrammazione->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbProgrammazione, 4, 7, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout->addLayout(verticalLayout_4);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        label_6->setPalette(palette29);

        verticalLayout->addWidget(label_6);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        toolButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hamlet MOD 2.9", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600;\">Hamlet Mod 2.9 (64bit)</span></p><p><span style=\" font-size:16pt; font-weight:600;\">Versione: 2.9.9.4</span></p><p><br/></p><p><br/></p><p><span style=\" font-size:10pt; font-weight:600;\">Licenza:LGPL v. 3</span></p><p><span style=\" font-size:10pt; font-weight:600;\">Built with Qt 5.15.2 - MinGW 64</span></p><p><br/></p><p><br/></p><p><span style=\" font-size:10pt;\">\302\251 FBLABS 2015-2022</span></p><p><a href=\"\357\277\274\357\277\274https://github.com/fblabs/hamlet-mod-sancon\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#aaffff;\">Sorgenti (github)</span></a></p></body></html>", nullptr));
        tbModificaLotti->setText(QCoreApplication::translate("MainWindow", "Modifica lotti", nullptr));
        pBNewOperation->setText(QCoreApplication::translate("MainWindow", "Nuova Operazione \n"
"(F6)", nullptr));
#if QT_CONFIG(shortcut)
        pBNewOperation->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPackages->setText(QCoreApplication::translate("MainWindow", "Packages (F9)", nullptr));
#if QT_CONFIG(shortcut)
        pbPackages->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        tbAnalisi->setText(QCoreApplication::translate("MainWindow", "Analisi (F8)", nullptr));
#if QT_CONFIG(shortcut)
        tbAnalisi->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Aggiorna", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
#if QT_CONFIG(tooltip)
        tbMagaz->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Operazioni legate al Magazzino,movimentazione di carico e scarico, correzione errori,ecc.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbMagaz->setText(QCoreApplication::translate("MainWindow", " Movimenti (F2)", nullptr));
#if QT_CONFIG(shortcut)
        tbMagaz->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        pbC4R->setText(QCoreApplication::translate("MainWindow", "Clienti per ricetta", nullptr));
        tbRicette->setText(QCoreApplication::translate("MainWindow", "Ricette (F7)", nullptr));
#if QT_CONFIG(shortcut)
        tbRicette->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        pbUnload->setText(QCoreApplication::translate("MainWindow", "Scarico Packages", nullptr));
        pbVerifyLabels->setText(QCoreApplication::translate("MainWindow", "Verifica etichette", nullptr));
        tbLotti->setText(QCoreApplication::translate("MainWindow", "Lotti (F5)", nullptr));
#if QT_CONFIG(shortcut)
        tbLotti->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        tbProdotti->setText(QCoreApplication::translate("MainWindow", "Prodotti", nullptr));
        tnProduzione->setText(QCoreApplication::translate("MainWindow", "Produzione (F4)", nullptr));
#if QT_CONFIG(shortcut)
        tnProduzione->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        pbExpirations->setText(QCoreApplication::translate("MainWindow", "Scadenze", nullptr));
        pbCalcoloCosti->setText(QCoreApplication::translate("MainWindow", "Calcolo costi (F10)", nullptr));
#if QT_CONFIG(shortcut)
        pbCalcoloCosti->setShortcut(QCoreApplication::translate("MainWindow", "F10", nullptr));
#endif // QT_CONFIG(shortcut)
        tbAssociazioni->setText(QCoreApplication::translate("MainWindow", "Associa Ricette", nullptr));
        pbSchede->setText(QCoreApplication::translate("MainWindow", "Schede Clienti (F3)", nullptr));
#if QT_CONFIG(shortcut)
        pbSchede->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        pbOldCards->setText(QCoreApplication::translate("MainWindow", "Schede (legacy)", nullptr));
        tbClose->setText(QCoreApplication::translate("MainWindow", "Chiudi", nullptr));
        pbNotifiche->setText(QCoreApplication::translate("MainWindow", "Notifiche", nullptr));
        tbLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        pbContacts->setText(QCoreApplication::translate("MainWindow", "Contatti", nullptr));
        tbUtenti->setText(QCoreApplication::translate("MainWindow", "Utenti", nullptr));
        pbCkeckNotifications->setText(QCoreApplication::translate("MainWindow", "Verifica notifiche", nullptr));
        tbSettings->setText(QCoreApplication::translate("MainWindow", "Impostazioni   ", nullptr));
        tbAnag->setText(QCoreApplication::translate("MainWindow", "Anagrafica      ", nullptr));
        pbProgrammazione->setText(QCoreApplication::translate("MainWindow", "Programmazione", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
