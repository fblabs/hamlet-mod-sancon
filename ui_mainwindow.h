/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QToolButton *tbRicette;
    QToolButton *tnProduzione;
    QToolButton *tbMagaz;
    QToolButton *toolButton;
    QToolButton *tbAnag;
    QToolButton *tbLotti;
    QToolButton *tbAnalisi;
    QToolButton *tbUtenti;
    QToolButton *tbAssociazioni;
    QToolButton *pBNewOperation;
    QToolButton *tbProdotti;
    QPushButton *pbSchede;
    QToolButton *tbSettings;
    QToolButton *tbClose;
    QPushButton *pbPackages;
    QToolButton *tbModificaLotti;
    QToolButton *tbLogout;
    QPushButton *pushButton;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(979, 768);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(208, 192, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(231, 223, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(104, 96, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(139, 128, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/My Network Places.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(326, 256));
        label->setMaximumSize(QSize(256, 256));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/My Network Places.png")));
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(255, 170, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush8(QColor(255, 212, 191, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(127, 85, 63, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(170, 113, 84, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label_2->setPalette(palette1);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);
        label_5->setMinimumSize(QSize(0, 140));

        verticalLayout->addWidget(label_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tbRicette = new QToolButton(centralWidget);
        tbRicette->setObjectName(QStringLiteral("tbRicette"));
        tbRicette->setEnabled(false);
        tbRicette->setMinimumSize(QSize(80, 0));
        tbRicette->setMaximumSize(QSize(120, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Notepad.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbRicette->setIcon(icon1);
        tbRicette->setIconSize(QSize(32, 32));
        tbRicette->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbRicette, 2, 6, 1, 1);

        tnProduzione = new QToolButton(centralWidget);
        tnProduzione->setObjectName(QStringLiteral("tnProduzione"));
        tnProduzione->setEnabled(false);
        tnProduzione->setMinimumSize(QSize(80, 0));
        tnProduzione->setMaximumSize(QSize(120, 16777215));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/App-ark-2-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tnProduzione->setIcon(icon2);
        tnProduzione->setIconSize(QSize(32, 32));
        tnProduzione->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tnProduzione, 2, 7, 1, 1);

        tbMagaz = new QToolButton(centralWidget);
        tbMagaz->setObjectName(QStringLiteral("tbMagaz"));
        tbMagaz->setEnabled(false);
        tbMagaz->setMinimumSize(QSize(80, 0));
        tbMagaz->setMaximumSize(QSize(120, 16777215));
        tbMagaz->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/fork-1-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMagaz->setIcon(icon3);
        tbMagaz->setIconSize(QSize(32, 32));
        tbMagaz->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbMagaz, 2, 2, 1, 1);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(80, 0));
        toolButton->setMaximumSize(QSize(120, 16777215));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/User-Male.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon4);
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(false);

        gridLayout->addWidget(toolButton, 2, 0, 1, 1);

        tbAnag = new QToolButton(centralWidget);
        tbAnag->setObjectName(QStringLiteral("tbAnag"));
        tbAnag->setEnabled(false);
        tbAnag->setMinimumSize(QSize(80, 0));
        tbAnag->setMaximumSize(QSize(120, 16777215));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/User-Black.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnag->setIcon(icon5);
        tbAnag->setIconSize(QSize(32, 32));
        tbAnag->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbAnag->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(tbAnag, 2, 1, 1, 1);

        tbLotti = new QToolButton(centralWidget);
        tbLotti->setObjectName(QStringLiteral("tbLotti"));
        tbLotti->setEnabled(false);
        tbLotti->setMinimumSize(QSize(80, 0));
        tbLotti->setMaximumSize(QSize(120, 16777215));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Resources/Cube.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbLotti->setIcon(icon6);
        tbLotti->setIconSize(QSize(32, 32));
        tbLotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbLotti->setAutoRaise(false);

        gridLayout->addWidget(tbLotti, 2, 4, 1, 1);

        tbAnalisi = new QToolButton(centralWidget);
        tbAnalisi->setObjectName(QStringLiteral("tbAnalisi"));
        tbAnalisi->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tbAnalisi->sizePolicy().hasHeightForWidth());
        tbAnalisi->setSizePolicy(sizePolicy);
        tbAnalisi->setMinimumSize(QSize(80, 0));
        tbAnalisi->setMaximumSize(QSize(120, 16777215));
        tbAnalisi->setAutoFillBackground(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Resources/Chart.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnalisi->setIcon(icon7);
        tbAnalisi->setIconSize(QSize(32, 32));
        tbAnalisi->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbAnalisi->setAutoRaise(false);

        gridLayout->addWidget(tbAnalisi, 2, 8, 1, 1);

        tbUtenti = new QToolButton(centralWidget);
        tbUtenti->setObjectName(QStringLiteral("tbUtenti"));
        tbUtenti->setEnabled(false);
        tbUtenti->setMinimumSize(QSize(80, 0));
        tbUtenti->setMaximumSize(QSize(120, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QRadialGradient gradient(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(255, 255, 127, 255));
        gradient.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush11(gradient);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush11);
        QBrush brush12(QColor(168, 212, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush12);
        QBrush brush13(QColor(121, 181, 240, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        QBrush brush14(QColor(37, 75, 112, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush14);
        QBrush brush15(QColor(50, 100, 150, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QRadialGradient gradient1(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(255, 255, 127, 255));
        gradient1.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient1.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush16(gradient1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush16);
        QRadialGradient gradient2(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(255, 255, 127, 255));
        gradient2.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient2.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush17(gradient2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush18(QColor(165, 202, 240, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QRadialGradient gradient3(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(255, 255, 127, 255));
        gradient3.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient3.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush19(gradient3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QRadialGradient gradient4(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(255, 255, 127, 255));
        gradient4.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient4.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush20(gradient4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        QRadialGradient gradient5(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(255, 255, 127, 255));
        gradient5.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient5.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush21(gradient5);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        QRadialGradient gradient6(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(255, 255, 127, 255));
        gradient6.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient6.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush22(gradient6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        QRadialGradient gradient7(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(255, 255, 127, 255));
        gradient7.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient7.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush23(gradient7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush23);
        QRadialGradient gradient8(0.807, 0.653, 0.5, 0.5, 0.5);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(255, 255, 127, 255));
        gradient8.setColorAt(0.426136, QColor(255, 215, 67, 255));
        gradient8.setColorAt(0.971591, QColor(255, 162, 0, 255));
        QBrush brush24(gradient8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush25(QColor(75, 150, 225, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush25);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tbUtenti->setPalette(palette2);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Resources/Warning-Sign.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbUtenti->setIcon(icon8);
        tbUtenti->setIconSize(QSize(32, 32));
        tbUtenti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbUtenti->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(tbUtenti, 4, 1, 1, 1);

        tbAssociazioni = new QToolButton(centralWidget);
        tbAssociazioni->setObjectName(QStringLiteral("tbAssociazioni"));
        tbAssociazioni->setEnabled(false);
        tbAssociazioni->setMinimumSize(QSize(80, 0));
        tbAssociazioni->setMaximumSize(QSize(120, 16777215));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Resources/Map.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbAssociazioni->setIcon(icon9);
        tbAssociazioni->setIconSize(QSize(32, 32));
        tbAssociazioni->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbAssociazioni, 4, 6, 1, 1);

        pBNewOperation = new QToolButton(centralWidget);
        pBNewOperation->setObjectName(QStringLiteral("pBNewOperation"));
        pBNewOperation->setEnabled(false);
        pBNewOperation->setMinimumSize(QSize(80, 0));
        pBNewOperation->setMaximumSize(QSize(120, 16777215));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Resources/Actions-configure-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBNewOperation->setIcon(icon10);
        pBNewOperation->setIconSize(QSize(32, 32));
        pBNewOperation->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pBNewOperation->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(pBNewOperation, 4, 2, 1, 1);

        tbProdotti = new QToolButton(centralWidget);
        tbProdotti->setObjectName(QStringLiteral("tbProdotti"));
        tbProdotti->setEnabled(false);
        tbProdotti->setMinimumSize(QSize(80, 0));
        tbProdotti->setMaximumSize(QSize(120, 16777215));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Resources/Wood-4-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbProdotti->setIcon(icon11);
        tbProdotti->setIconSize(QSize(32, 32));
        tbProdotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbProdotti, 5, 2, 1, 1);

        pbSchede = new QPushButton(centralWidget);
        pbSchede->setObjectName(QStringLiteral("pbSchede"));
        pbSchede->setEnabled(false);
        pbSchede->setMinimumSize(QSize(80, 0));
        pbSchede->setMaximumSize(QSize(120, 16777215));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Resources/Folder.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbSchede->setIcon(icon12);
        pbSchede->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbSchede, 1, 6, 1, 1);

        tbSettings = new QToolButton(centralWidget);
        tbSettings->setObjectName(QStringLiteral("tbSettings"));
        tbSettings->setEnabled(true);
        tbSettings->setMinimumSize(QSize(80, 0));
        tbSettings->setMaximumSize(QSize(120, 16777215));
        tbSettings->setStyleSheet(QStringLiteral("color:rgb(0, 0, 0)"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Resources/Computer.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbSettings->setIcon(icon13);
        tbSettings->setIconSize(QSize(32, 32));
        tbSettings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbSettings, 4, 0, 1, 1);

        tbClose = new QToolButton(centralWidget);
        tbClose->setObjectName(QStringLiteral("tbClose"));
        tbClose->setEnabled(true);
        tbClose->setMinimumSize(QSize(80, 0));
        tbClose->setMaximumSize(QSize(120, 16777215));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Resources/Actions-window-close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbClose->setIcon(icon14);
        tbClose->setIconSize(QSize(32, 32));
        tbClose->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbClose, 2, 10, 1, 1);

        pbPackages = new QPushButton(centralWidget);
        pbPackages->setObjectName(QStringLiteral("pbPackages"));
        pbPackages->setEnabled(false);
        sizePolicy.setHeightForWidth(pbPackages->sizePolicy().hasHeightForWidth());
        pbPackages->setSizePolicy(sizePolicy);
        pbPackages->setMinimumSize(QSize(120, 0));
        pbPackages->setMaximumSize(QSize(120, 16777215));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Resources/Box.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pbPackages->setIcon(icon15);
        pbPackages->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pbPackages, 4, 7, 1, 1);

        tbModificaLotti = new QToolButton(centralWidget);
        tbModificaLotti->setObjectName(QStringLiteral("tbModificaLotti"));
        tbModificaLotti->setEnabled(false);
        tbModificaLotti->setMinimumSize(QSize(80, 0));
        tbModificaLotti->setMaximumSize(QSize(120, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush26(QColor(255, 197, 21, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush26);
        QBrush brush27(QColor(255, 229, 149, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush27);
        QBrush brush28(QColor(255, 213, 85, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush28);
        QBrush brush29(QColor(127, 98, 10, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush29);
        QBrush brush30(QColor(170, 131, 14, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush30);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush26);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush31(QColor(255, 226, 138, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush31);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush26);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush27);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush28);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush29);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush30);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush26);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush31);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush29);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush27);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush28);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush29);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush30);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush29);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush29);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tbModificaLotti->setPalette(palette3);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/Resources/Pencil.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbModificaLotti->setIcon(icon16);
        tbModificaLotti->setIconSize(QSize(32, 32));
        tbModificaLotti->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbModificaLotti, 4, 4, 1, 1);

        tbLogout = new QToolButton(centralWidget);
        tbLogout->setObjectName(QStringLiteral("tbLogout"));
        tbLogout->setEnabled(false);
        tbLogout->setMinimumSize(QSize(80, 0));
        tbLogout->setMaximumSize(QSize(120, 16777215));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/Resources/Clock.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        tbLogout->setIcon(icon17);
        tbLogout->setIconSize(QSize(32, 32));
        tbLogout->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbLogout, 4, 10, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/Resources/Planet.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon18);
        pushButton->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout->addLayout(verticalLayout_4);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Hamlet Mod 1.5.0.2", 0));
        label_3->setText(QString());
        label_4->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">Hamlet Mod</span></p><p><span style=\" font-size:14pt; font-weight:600;\">Versione: 1.5.0.2</span></p><p><br/></p><p><span style=\" font-size:10pt; font-weight:600;\">Licenza:LGPL v. 3</span></p><p><span style=\" font-size:10pt; font-weight:600;\">Built with Qt 5.5.0 - MinGW 4.9.2</span></p><p><span style=\" font-size:10pt;\">FBLABS 2015</span></p></body></html>", 0));
        label_5->setText(QString());
        tbRicette->setText(QApplication::translate("MainWindow", "Ricette", 0));
        tnProduzione->setText(QApplication::translate("MainWindow", "Produzione", 0));
#ifndef QT_NO_TOOLTIP
        tbMagaz->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Operazioni legate al Magazzino,movimentazione di carico e scarico, correzione errori,ecc.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        tbMagaz->setText(QApplication::translate("MainWindow", "magazzino", 0));
        toolButton->setText(QApplication::translate("MainWindow", "Login", 0));
        toolButton->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        tbAnag->setText(QApplication::translate("MainWindow", "Anagrafica      ", 0));
        tbLotti->setText(QApplication::translate("MainWindow", "Lotti", 0));
        tbAnalisi->setText(QApplication::translate("MainWindow", "Analisi", 0));
        tbUtenti->setText(QApplication::translate("MainWindow", "Utenti", 0));
        tbAssociazioni->setText(QApplication::translate("MainWindow", "Associa Ricette", 0));
        pBNewOperation->setText(QApplication::translate("MainWindow", "Nuova Operazione", 0));
        tbProdotti->setText(QApplication::translate("MainWindow", "Prodotti", 0));
        pbSchede->setText(QApplication::translate("MainWindow", "Schede Clienti", 0));
        tbSettings->setText(QApplication::translate("MainWindow", "Impostazioni   ", 0));
        tbClose->setText(QApplication::translate("MainWindow", "Chiudi", 0));
        pbPackages->setText(QApplication::translate("MainWindow", "Packages", 0));
        tbModificaLotti->setText(QApplication::translate("MainWindow", "Modifica lotti", 0));
        tbLogout->setText(QApplication::translate("MainWindow", "Logout", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Aggiorna", 0));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
