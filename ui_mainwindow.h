/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
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
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/fblabs.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        label_4->setFont(font);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(300, 300));
        label->setMaximumSize(QSize(400, 400));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/hamlet_graphics.png")));
        label->setScaledContents(true);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
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
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tbModificaLotti = new QToolButton(centralWidget);
        tbModificaLotti->setObjectName(QStringLiteral("tbModificaLotti"));
        tbModificaLotti->setEnabled(false);
        tbModificaLotti->setMinimumSize(QSize(80, 0));
        tbModificaLotti->setMaximumSize(QSize(120, 16777215));
        QPalette palette1;
        QBrush brush8(QColor(200, 188, 193, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbModificaLotti->setPalette(palette1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbModificaLotti->setIcon(icon1);
        tbModificaLotti->setIconSize(QSize(32, 32));
        tbModificaLotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbModificaLotti, 8, 4, 1, 1);

        pBNewOperation = new QToolButton(centralWidget);
        pBNewOperation->setObjectName(QStringLiteral("pBNewOperation"));
        pBNewOperation->setEnabled(false);
        pBNewOperation->setMinimumSize(QSize(138, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pBNewOperation->setPalette(palette2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBNewOperation->setIcon(icon2);
        pBNewOperation->setIconSize(QSize(32, 32));
        pBNewOperation->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pBNewOperation->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(pBNewOperation, 8, 2, 1, 1);

        pbPackages = new QPushButton(centralWidget);
        pbPackages->setObjectName(QStringLiteral("pbPackages"));
        pbPackages->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbPackages->sizePolicy().hasHeightForWidth());
        pbPackages->setSizePolicy(sizePolicy);
        pbPackages->setMinimumSize(QSize(130, 0));
        pbPackages->setMaximumSize(QSize(125, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbPackages->setPalette(palette3);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbPackages->setIcon(icon3);
        pbPackages->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbPackages, 8, 7, 1, 1);

        tbAnalisi = new QToolButton(centralWidget);
        tbAnalisi->setObjectName(QStringLiteral("tbAnalisi"));
        tbAnalisi->setEnabled(false);
        sizePolicy.setHeightForWidth(tbAnalisi->sizePolicy().hasHeightForWidth());
        tbAnalisi->setSizePolicy(sizePolicy);
        tbAnalisi->setMinimumSize(QSize(140, 0));
        tbAnalisi->setMaximumSize(QSize(120, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbAnalisi->setPalette(palette4);
        tbAnalisi->setAutoFillBackground(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/Chart.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnalisi->setIcon(icon4);
        tbAnalisi->setIconSize(QSize(32, 32));
        tbAnalisi->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbAnalisi->setAutoRaise(false);

        gridLayout->addWidget(tbAnalisi, 5, 8, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton->setPalette(palette5);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/Planet.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton, 11, 0, 1, 1);

        toolButton = new QPushButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        toolButton->setPalette(palette6);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/User-green64.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon6);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setAutoDefault(true);

        gridLayout->addWidget(toolButton, 5, 0, 1, 1);

        tbMagaz = new QToolButton(centralWidget);
        tbMagaz->setObjectName(QStringLiteral("tbMagaz"));
        tbMagaz->setEnabled(false);
        tbMagaz->setMinimumSize(QSize(138, 0));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbMagaz->setPalette(palette7);
        tbMagaz->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/fork-1-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMagaz->setIcon(icon7);
        tbMagaz->setIconSize(QSize(32, 32));
        tbMagaz->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbMagaz, 5, 2, 1, 1);

        pbC4R = new QPushButton(centralWidget);
        pbC4R->setObjectName(QStringLiteral("pbC4R"));
        pbC4R->setEnabled(false);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbC4R->setPalette(palette8);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Resources/Link64.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbC4R->setIcon(icon8);
        pbC4R->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbC4R, 10, 6, 1, 1);

        tbRicette = new QToolButton(centralWidget);
        tbRicette->setObjectName(QStringLiteral("tbRicette"));
        tbRicette->setEnabled(false);
        tbRicette->setMinimumSize(QSize(134, 0));
        tbRicette->setMaximumSize(QSize(16777215, 16777215));
        tbRicette->setBaseSize(QSize(0, 0));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbRicette->setPalette(palette9);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbRicette->setIcon(icon9);
        tbRicette->setIconSize(QSize(32, 32));
        tbRicette->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbRicette, 5, 6, 1, 1);

        pbUnload = new QPushButton(centralWidget);
        pbUnload->setObjectName(QStringLiteral("pbUnload"));
        pbUnload->setEnabled(false);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbUnload->setPalette(palette10);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUnload->setIcon(icon10);
        pbUnload->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbUnload, 10, 2, 1, 1);

        pbVerifyLabels = new QPushButton(centralWidget);
        pbVerifyLabels->setObjectName(QStringLiteral("pbVerifyLabels"));
        pbVerifyLabels->setEnabled(false);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbVerifyLabels->setPalette(palette11);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbVerifyLabels->setIcon(icon11);
        pbVerifyLabels->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbVerifyLabels, 10, 7, 1, 1);

        tbLotti = new QToolButton(centralWidget);
        tbLotti->setObjectName(QStringLiteral("tbLotti"));
        tbLotti->setEnabled(false);
        tbLotti->setMinimumSize(QSize(80, 0));
        tbLotti->setMaximumSize(QSize(120, 16777215));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbLotti->setPalette(palette12);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Resources/Cube.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbLotti->setIcon(icon12);
        tbLotti->setIconSize(QSize(32, 32));
        tbLotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbLotti->setAutoRaise(false);

        gridLayout->addWidget(tbLotti, 5, 4, 1, 1);

        tbProdotti = new QToolButton(centralWidget);
        tbProdotti->setObjectName(QStringLiteral("tbProdotti"));
        tbProdotti->setEnabled(false);
        tbProdotti->setMinimumSize(QSize(138, 0));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbProdotti->setPalette(palette13);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Resources/Wood-4-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbProdotti->setIcon(icon13);
        tbProdotti->setIconSize(QSize(32, 32));
        tbProdotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbProdotti, 4, 2, 1, 1);

        tnProduzione = new QToolButton(centralWidget);
        tnProduzione->setObjectName(QStringLiteral("tnProduzione"));
        tnProduzione->setEnabled(false);
        tnProduzione->setMinimumSize(QSize(130, 0));
        tnProduzione->setMaximumSize(QSize(120, 16777215));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tnProduzione->setPalette(palette14);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Resources/Gears.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tnProduzione->setIcon(icon14);
        tnProduzione->setIconSize(QSize(32, 32));
        tnProduzione->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tnProduzione, 5, 7, 1, 1);

        pbExpirations = new QPushButton(centralWidget);
        pbExpirations->setObjectName(QStringLiteral("pbExpirations"));
        pbExpirations->setEnabled(false);
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbExpirations->setPalette(palette15);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Resources/Calendar.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbExpirations->setIcon(icon15);
        pbExpirations->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbExpirations, 11, 2, 1, 1);

        pbCalcoloCosti = new QPushButton(centralWidget);
        pbCalcoloCosti->setObjectName(QStringLiteral("pbCalcoloCosti"));
        pbCalcoloCosti->setEnabled(false);
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbCalcoloCosti->setPalette(palette16);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/Resources/Cash-register-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalcoloCosti->setIcon(icon16);
        pbCalcoloCosti->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbCalcoloCosti, 4, 8, 1, 1);

        tbAssociazioni = new QToolButton(centralWidget);
        tbAssociazioni->setObjectName(QStringLiteral("tbAssociazioni"));
        tbAssociazioni->setEnabled(false);
        tbAssociazioni->setMinimumSize(QSize(80, 0));
        tbAssociazioni->setMaximumSize(QSize(134, 16777215));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbAssociazioni->setPalette(palette17);
        tbAssociazioni->setIcon(icon11);
        tbAssociazioni->setIconSize(QSize(32, 32));
        tbAssociazioni->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbAssociazioni, 8, 6, 1, 1);

        pbSchede = new QPushButton(centralWidget);
        pbSchede->setObjectName(QStringLiteral("pbSchede"));
        pbSchede->setEnabled(false);
        pbSchede->setMinimumSize(QSize(80, 0));
        pbSchede->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbSchede->setPalette(palette18);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSchede->setIcon(icon17);
        pbSchede->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbSchede, 4, 6, 1, 1);

        pbOldCards = new QPushButton(centralWidget);
        pbOldCards->setObjectName(QStringLiteral("pbOldCards"));
        pbOldCards->setEnabled(false);
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        pbOldCards->setPalette(palette19);

        gridLayout->addWidget(pbOldCards, 2, 6, 1, 1);

        tbClose = new QToolButton(centralWidget);
        tbClose->setObjectName(QStringLiteral("tbClose"));
        tbClose->setEnabled(true);
        tbClose->setMinimumSize(QSize(80, 0));
        tbClose->setMaximumSize(QSize(120, 16777215));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbClose->setPalette(palette20);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbClose->setIcon(icon18);
        tbClose->setIconSize(QSize(32, 32));
        tbClose->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbClose, 8, 9, 1, 1);

        pbNotifiche = new QPushButton(centralWidget);
        pbNotifiche->setObjectName(QStringLiteral("pbNotifiche"));
        pbNotifiche->setEnabled(false);
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbNotifiche->setPalette(palette21);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/Resources/Chat.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbNotifiche->setIcon(icon19);
        pbNotifiche->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbNotifiche, 5, 1, 1, 1);

        tbLogout = new QToolButton(centralWidget);
        tbLogout->setObjectName(QStringLiteral("tbLogout"));
        tbLogout->setEnabled(false);
        tbLogout->setMinimumSize(QSize(80, 0));
        tbLogout->setMaximumSize(QSize(120, 16777215));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush9(QColor(227, 221, 224, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(100, 94, 96, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(133, 125, 129, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        tbLogout->setPalette(palette22);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/Resources/User-red64.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbLogout->setIcon(icon20);
        tbLogout->setIconSize(QSize(32, 32));
        tbLogout->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbLogout, 5, 9, 1, 1);

        pbContacts = new QPushButton(centralWidget);
        pbContacts->setObjectName(QStringLiteral("pbContacts"));
        pbContacts->setEnabled(false);
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbContacts->setPalette(palette23);
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/Resources/user-group-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbContacts->setIcon(icon21);
        pbContacts->setIconSize(QSize(32, 32));
        pbContacts->setFlat(false);

        gridLayout->addWidget(pbContacts, 11, 6, 1, 1);

        tbUtenti = new QToolButton(centralWidget);
        tbUtenti->setObjectName(QStringLiteral("tbUtenti"));
        tbUtenti->setEnabled(false);
        tbUtenti->setMinimumSize(QSize(80, 0));
        tbUtenti->setMaximumSize(QSize(120, 16777215));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbUtenti->setPalette(palette24);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/Resources/Warning-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbUtenti->setIcon(icon22);
        tbUtenti->setIconSize(QSize(32, 32));
        tbUtenti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbUtenti->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(tbUtenti, 10, 1, 1, 1);

        pbCkeckNotifications = new QPushButton(centralWidget);
        pbCkeckNotifications->setObjectName(QStringLiteral("pbCkeckNotifications"));
        pbCkeckNotifications->setEnabled(false);
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pbCkeckNotifications->setPalette(palette25);
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/Resources/Search.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbCkeckNotifications->setIcon(icon23);
        pbCkeckNotifications->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbCkeckNotifications, 8, 1, 1, 1);

        tbSettings = new QToolButton(centralWidget);
        tbSettings->setObjectName(QStringLiteral("tbSettings"));
        tbSettings->setEnabled(true);
        tbSettings->setMinimumSize(QSize(80, 0));
        tbSettings->setMaximumSize(QSize(125, 16777215));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        tbSettings->setPalette(palette26);
        tbSettings->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/Resources/Computer.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbSettings->setIcon(icon24);
        tbSettings->setIconSize(QSize(32, 32));
        tbSettings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbSettings, 4, 0, 1, 1);

        tbAnag = new QToolButton(centralWidget);
        tbAnag->setObjectName(QStringLiteral("tbAnag"));
        tbAnag->setEnabled(false);
        tbAnag->setMinimumSize(QSize(80, 0));
        tbAnag->setMaximumSize(QSize(120, 16777215));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        tbAnag->setPalette(palette27);
        tbAnag->setAutoFillBackground(true);
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/Resources/Users64.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnag->setIcon(icon25);
        tbAnag->setIconSize(QSize(32, 32));
        tbAnag->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbAnag->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(tbAnag, 4, 1, 1, 1);

        pbProgrammazione = new QPushButton(centralWidget);
        pbProgrammazione->setObjectName(QStringLiteral("pbProgrammazione"));
        pbProgrammazione->setEnabled(false);
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush12(QColor(200, 190, 194, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush12);
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
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush12);
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
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush12);
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
        pbProgrammazione->setPalette(palette28);
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/Resources/3D_Icons_Icon_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbProgrammazione->setIcon(icon26);
        pbProgrammazione->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbProgrammazione, 4, 7, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout->addLayout(verticalLayout_4);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush8);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Hamlet MOD 2.9", 0));
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600;\">Hamlet Mod 2.9</span></p><p><span style=\" font-size:16pt; font-weight:600;\">Versione: 2.9.8.5</span></p><p><br/></p><p><br/></p><p><span style=\" font-size:10pt; font-weight:600;\">Licenza:LGPL v. 3</span></p><p><span style=\" font-size:10pt; font-weight:600;\">Built with Qt 5.5.1 - MinGW 4.9.2</span></p><p><br/></p><p><br/></p><p><span style=\" font-size:10pt;\">\302\251 FBLABS 2015-2021</span></p><p><a href=\"\357\277\274\357\277\274https://github.com/fblabs/hamlet-mod-sancon\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#aaffff;\">Sorgenti (github)</span></a></p></body></html>", 0));
        tbModificaLotti->setText(QApplication::translate("MainWindow", "Modifica lotti", 0));
        pBNewOperation->setText(QApplication::translate("MainWindow", "Nuova Operazione \n"
"(F6)", 0));
        pBNewOperation->setShortcut(QApplication::translate("MainWindow", "F6", 0));
        pbPackages->setText(QApplication::translate("MainWindow", "Packages (F9)", 0));
        pbPackages->setShortcut(QApplication::translate("MainWindow", "F9", 0));
        tbAnalisi->setText(QApplication::translate("MainWindow", "Analisi (F8)", 0));
        tbAnalisi->setShortcut(QApplication::translate("MainWindow", "F8", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Aggiorna", 0));
        toolButton->setText(QApplication::translate("MainWindow", "Login", 0));
#ifndef QT_NO_TOOLTIP
        tbMagaz->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Operazioni legate al Magazzino,movimentazione di carico e scarico, correzione errori,ecc.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tbMagaz->setText(QApplication::translate("MainWindow", " Movimenti (F2)", 0));
        tbMagaz->setShortcut(QApplication::translate("MainWindow", "F2", 0));
        pbC4R->setText(QApplication::translate("MainWindow", "Clienti per ricetta", 0));
        tbRicette->setText(QApplication::translate("MainWindow", "Ricette (F7)", 0));
        tbRicette->setShortcut(QApplication::translate("MainWindow", "F7", 0));
        pbUnload->setText(QApplication::translate("MainWindow", "Scarico Packages", 0));
        pbVerifyLabels->setText(QApplication::translate("MainWindow", "Verifica etichette", 0));
        tbLotti->setText(QApplication::translate("MainWindow", "Lotti (F5)", 0));
        tbLotti->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        tbProdotti->setText(QApplication::translate("MainWindow", "Prodotti", 0));
        tnProduzione->setText(QApplication::translate("MainWindow", "Produzione (F4)", 0));
        tnProduzione->setShortcut(QApplication::translate("MainWindow", "F4", 0));
        pbExpirations->setText(QApplication::translate("MainWindow", "Scadenze", 0));
        pbCalcoloCosti->setText(QApplication::translate("MainWindow", "Calcolo costi (F10)", 0));
        pbCalcoloCosti->setShortcut(QApplication::translate("MainWindow", "F10", 0));
        tbAssociazioni->setText(QApplication::translate("MainWindow", "Associa Ricette", 0));
        pbSchede->setText(QApplication::translate("MainWindow", "Schede Clienti (F3)", 0));
        pbSchede->setShortcut(QApplication::translate("MainWindow", "F3", 0));
        pbOldCards->setText(QApplication::translate("MainWindow", "Schede (legacy)", 0));
        tbClose->setText(QApplication::translate("MainWindow", "Chiudi", 0));
        pbNotifiche->setText(QApplication::translate("MainWindow", "Notifiche", 0));
        tbLogout->setText(QApplication::translate("MainWindow", "Logout", 0));
        pbContacts->setText(QApplication::translate("MainWindow", "Contatti", 0));
        tbUtenti->setText(QApplication::translate("MainWindow", "Utenti", 0));
        pbCkeckNotifications->setText(QApplication::translate("MainWindow", "Verifica notifiche", 0));
        tbSettings->setText(QApplication::translate("MainWindow", "Impostazioni   ", 0));
        tbAnag->setText(QApplication::translate("MainWindow", "Anagrafica      ", 0));
        pbProgrammazione->setText(QApplication::translate("MainWindow", "Programmazione", 0));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
