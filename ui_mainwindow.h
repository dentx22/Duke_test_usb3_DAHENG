/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionOpenCamera;
    QAction *actionProjector;
    QAction *actionCalib;
    QAction *actionScan;
    QAction *actionReconstruct;
    QAction *actionSet;
    QAction *actionEnglish;
    QAction *actionChinese;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QWidget *displayWidget;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_12;
    QLabel *label;
    QSpinBox *pSizeValue;
    QSpacerItem *verticalSpacer_15;
    QHBoxLayout *displayLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLabel *currentPhotoLabel;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_15;
    QLabel *explainLabel;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *horizontalSpacer_14;
    QSplitter *splitter_4;
    QPushButton *captureButton;
    QPushButton *redoButton;
    QPushButton *calibButton;
    QWidget *tab_2;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuCustomize;
    QMenu *menuLanguage;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_7;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *leftViewLabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *leftCaptureLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_9;
    QSplitter *splitter;
    QLabel *label_5;
    QSpinBox *snapSpeedBox;
    QLabel *label_6;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_10;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_10;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *rightViewLabel;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *horizontalSpacer_11;
    QSplitter *splitter_2;
    QLabel *label_7;
    QSpinBox *spinBox;
    QLabel *label_8;
    QSlider *horizontalSlider_2;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_12;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QLabel *rightCaptureLabel;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(996, 693);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/splash.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(false);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setBold(true);
        font.setWeight(75);
        actionNew->setFont(font);
        actionNew->setMenuRole(QAction::TextHeuristicRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionOpen->setFont(font);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionExit->setFont(font);
        actionOpenCamera = new QAction(MainWindow);
        actionOpenCamera->setObjectName(QString::fromUtf8("actionOpenCamera"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenCamera->setIcon(icon4);
        actionOpenCamera->setFont(font);
        actionProjector = new QAction(MainWindow);
        actionProjector->setObjectName(QString::fromUtf8("actionProjector"));
        actionProjector->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/projon.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/projoff.png"), QSize(), QIcon::Normal, QIcon::On);
        actionProjector->setIcon(icon5);
        actionProjector->setFont(font);
        actionCalib = new QAction(MainWindow);
        actionCalib->setObjectName(QString::fromUtf8("actionCalib"));
        QIcon icon6;
        QString iconThemeName = QString::fromUtf8("Calibration");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8(":/calib.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCalib->setIcon(icon6);
        actionCalib->setFont(font);
        actionScan = new QAction(MainWindow);
        actionScan->setObjectName(QString::fromUtf8("actionScan"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/scan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScan->setIcon(icon7);
        actionScan->setFont(font);
        actionReconstruct = new QAction(MainWindow);
        actionReconstruct->setObjectName(QString::fromUtf8("actionReconstruct"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/reconstruct.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReconstruct->setIcon(icon8);
        actionReconstruct->setFont(font);
        actionSet = new QAction(MainWindow);
        actionSet->setObjectName(QString::fromUtf8("actionSet"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet->setIcon(icon9);
        actionSet->setFont(font);
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/english.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnglish->setIcon(icon10);
        actionEnglish->setFont(font);
        actionChinese = new QAction(MainWindow);
        actionChinese->setObjectName(QString::fromUtf8("actionChinese"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/china.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChinese->setIcon(icon11);
        actionChinese->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(290, 500));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        centralWidget = new QWidget(centralwidget);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setMinimumSize(QSize(358, 0));
        centralWidget->setSizeIncrement(QSize(0, 0));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(2);
        gridLayout_2->setContentsMargins(1, 1, 1, 0);
        displayWidget = new QWidget(centralWidget);
        displayWidget->setObjectName(QString::fromUtf8("displayWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(displayWidget->sizePolicy().hasHeightForWidth());
        displayWidget->setSizePolicy(sizePolicy2);
        displayWidget->setContextMenuPolicy(Qt::NoContextMenu);
        displayWidget->setAutoFillBackground(false);
        displayWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_13 = new QGridLayout(displayWidget);
        gridLayout_13->setSpacing(1);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 1, 0, 1);
        groupBox_3 = new QGroupBox(displayWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(147, 221, 221);"));
        groupBox_3->setTitle(QString::fromUtf8(""));
        gridLayout_12 = new QGridLayout(groupBox_3);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_12->addWidget(label, 0, 0, 1, 1);

        pSizeValue = new QSpinBox(groupBox_3);
        pSizeValue->setObjectName(QString::fromUtf8("pSizeValue"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pSizeValue->sizePolicy().hasHeightForWidth());
        pSizeValue->setSizePolicy(sizePolicy4);
        pSizeValue->setAlignment(Qt::AlignCenter);
        pSizeValue->setSuffix(QString::fromUtf8("(pix)"));
        pSizeValue->setMinimum(1);
        pSizeValue->setMaximum(20);
        pSizeValue->setValue(5);

        gridLayout_12->addWidget(pSizeValue, 1, 0, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 227, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_15, 2, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_3, 0, 0, 1, 1);

        displayLayout = new QHBoxLayout();
        displayLayout->setSpacing(0);
        displayLayout->setObjectName(QString::fromUtf8("displayLayout"));

        gridLayout_13->addLayout(displayLayout, 0, 1, 1, 1);


        gridLayout_2->addWidget(displayWidget, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy5);
        tabWidget->setMinimumSize(QSize(350, 275));
        tabWidget->setToolTipDuration(0);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(111, 215, 253);\n"
"font: 9pt \"Calibri\";"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_11 = new QGridLayout(tab);
        gridLayout_11->setSpacing(3);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        currentPhotoLabel = new QLabel(tab);
        currentPhotoLabel->setObjectName(QString::fromUtf8("currentPhotoLabel"));
        currentPhotoLabel->setLayoutDirection(Qt::LeftToRight);
        currentPhotoLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        currentPhotoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(currentPhotoLabel);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);


        gridLayout_11->addLayout(horizontalLayout, 0, 0, 1, 4);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_15, 0, 4, 1, 1);

        explainLabel = new QLabel(tab);
        explainLabel->setObjectName(QString::fromUtf8("explainLabel"));
        sizePolicy.setHeightForWidth(explainLabel->sizePolicy().hasHeightForWidth());
        explainLabel->setSizePolicy(sizePolicy);
        explainLabel->setMinimumSize(QSize(100, 200));
        explainLabel->setMaximumSize(QSize(400, 300));
        explainLabel->setStyleSheet(QString::fromUtf8("background-color: rgbrgbrgb(238, 238, 238);"));
        explainLabel->setFrameShape(QFrame::NoFrame);
        explainLabel->setScaledContents(true);
        explainLabel->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(explainLabel, 1, 0, 3, 1);

        verticalSpacer_13 = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_13, 1, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_13, 2, 1, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 54, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_14, 3, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(36, 76, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_14, 2, 4, 1, 1);

        splitter_4 = new QSplitter(tab);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        captureButton = new QPushButton(splitter_4);
        captureButton->setObjectName(QString::fromUtf8("captureButton"));
        splitter_4->addWidget(captureButton);
        redoButton = new QPushButton(splitter_4);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));
        splitter_4->addWidget(redoButton);
        calibButton = new QPushButton(splitter_4);
        calibButton->setObjectName(QString::fromUtf8("calibButton"));
        calibButton->setEnabled(true);
        splitter_4->addWidget(calibButton);

        gridLayout_11->addWidget(splitter_4, 2, 2, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Calibri\";"));

        horizontalLayout_2->addWidget(label_2);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setStyleSheet(QString::fromUtf8("font: 75 9pt \"Calibri\";"));
        progressBar->setValue(0);
        progressBar->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(progressBar);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        gridLayout->addWidget(centralWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 996, 23));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0.501, 0, 0.523, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(14, 96, 243, 255));
        gradient.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0.501, 0, 0.523, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(14, 96, 243, 255));
        gradient1.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0.501, 0, 0.523, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(14, 96, 243, 255));
        gradient2.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0.501, 0, 0.523, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(14, 96, 243, 255));
        gradient3.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0.501, 0, 0.523, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(14, 96, 243, 255));
        gradient4.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(0.501, 0, 0.523, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(14, 96, 243, 255));
        gradient5.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        QLinearGradient gradient6(0.501, 0, 0.523, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(14, 96, 243, 255));
        gradient6.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush7(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QLinearGradient gradient7(0.501, 0, 0.523, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(14, 96, 243, 255));
        gradient7.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush8(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        QLinearGradient gradient8(0.501, 0, 0.523, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(14, 96, 243, 255));
        gradient8.setColorAt(0.732955, QColor(0, 150, 255, 255));
        QBrush brush9(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        menubar->setPalette(palette);
        menubar->setAutoFillBackground(false);
        menubar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.501, y1:0, x2:0.523, y2:1, stop:0 rgba(14, 96, 243, 255), stop:0.732955 rgba(0, 150, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        menuFile->setFont(font1);
        menuFile->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(130, 197, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));
        menuCustomize = new QMenu(menubar);
        menuCustomize->setObjectName(QString::fromUtf8("menuCustomize"));
        menuCustomize->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 197, 255);\n"
"selection-background-color: rgb(255, 255, 255);"));
        menuLanguage = new QMenu(menuCustomize);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuLanguage->setFont(font);
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        statusBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(96, 220, 255, 218), stop:1 rgba(26, 132, 255, 213));"));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.522409, y1:0.244, x2:0.5, y2:1, stop:0 rgba(71, 166, 255, 255), stop:0.977273 rgba(115, 217, 255, 255));"));
        toolBar->setMovable(true);
        toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::TopToolBarArea);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setMinimumSize(QSize(312, 528));
        dockWidget->setStyleSheet(QString::fromUtf8("font: 9pt \"Calibri\";"));
        dockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_7 = new QGridLayout(dockWidgetContents);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setVerticalSpacing(1);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(dockWidgetContents);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy6);
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        leftViewLabel = new QLabel(widget_3);
        leftViewLabel->setObjectName(QString::fromUtf8("leftViewLabel"));
        sizePolicy.setHeightForWidth(leftViewLabel->sizePolicy().hasHeightForWidth());
        leftViewLabel->setSizePolicy(sizePolicy);
        leftViewLabel->setMaximumSize(QSize(400, 320));
        leftViewLabel->setStyleSheet(QString::fromUtf8("border:1px solid deepskyblue;"));
        leftViewLabel->setFrameShape(QFrame::Box);
        leftViewLabel->setScaledContents(true);
        leftViewLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(leftViewLabel, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_7->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(dockWidgetContents);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy6.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy6);
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        leftCaptureLabel = new QLabel(widget_4);
        leftCaptureLabel->setObjectName(QString::fromUtf8("leftCaptureLabel"));
        sizePolicy.setHeightForWidth(leftCaptureLabel->sizePolicy().hasHeightForWidth());
        leftCaptureLabel->setSizePolicy(sizePolicy);
        leftCaptureLabel->setMaximumSize(QSize(400, 320));
        leftCaptureLabel->setStyleSheet(QString::fromUtf8("border:1px solid deepskyblue;"));
        leftCaptureLabel->setScaledContents(true);
        leftCaptureLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(leftCaptureLabel, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_4, 2, 1, 1, 1);


        gridLayout_7->addWidget(widget_4, 2, 0, 1, 1);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy6.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy6);
        groupBox->setMaximumSize(QSize(111111, 70));
        groupBox->setStyleSheet(QString::fromUtf8("font: 9pt \"Calibri\";\n"
"background-color: rgbrgb(111, 215, 253)"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_9 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_9, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_9, 1, 0, 2, 1);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter->addWidget(label_5);
        snapSpeedBox = new QSpinBox(splitter);
        snapSpeedBox->setObjectName(QString::fromUtf8("snapSpeedBox"));
        snapSpeedBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        snapSpeedBox->setMinimum(1);
        snapSpeedBox->setMaximum(99);
        snapSpeedBox->setValue(30);
        splitter->addWidget(snapSpeedBox);
        label_6 = new QLabel(splitter);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        splitter->addWidget(label_6);
        horizontalSlider = new QSlider(splitter);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(5);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setValue(3);
        horizontalSlider->setOrientation(Qt::Horizontal);
        splitter->addWidget(horizontalSlider);

        gridLayout_8->addWidget(splitter, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_10, 1, 2, 2, 1);

        verticalSpacer_10 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_10, 2, 1, 1, 1);


        gridLayout_7->addWidget(groupBox, 1, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(310, 500));
        dockWidget_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Calibri\";"));
        dockWidget_2->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
        dockWidget_2->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_10 = new QGridLayout(dockWidgetContents_3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(0);
        gridLayout_10->setVerticalSpacing(1);
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(dockWidgetContents_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(widget_6);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_5->addItem(verticalSpacer_5, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        rightViewLabel = new QLabel(widget_6);
        rightViewLabel->setObjectName(QString::fromUtf8("rightViewLabel"));
        sizePolicy.setHeightForWidth(rightViewLabel->sizePolicy().hasHeightForWidth());
        rightViewLabel->setSizePolicy(sizePolicy);
        rightViewLabel->setMaximumSize(QSize(400, 320));
        rightViewLabel->setStyleSheet(QString::fromUtf8("border:1px solid deepskyblue;"));
        rightViewLabel->setScaledContents(true);
        rightViewLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(rightViewLabel, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_5->addItem(verticalSpacer_6, 2, 1, 1, 1);


        gridLayout_10->addWidget(widget_6, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy6.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy6);
        groupBox_2->setMaximumSize(QSize(111111, 70));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Calibri\";\n"
"background-color: rgbrgb(111, 215, 253)"));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_11 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_11, 0, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_11, 1, 0, 2, 1);

        splitter_2 = new QSplitter(groupBox_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        splitter_2->addWidget(label_7);
        spinBox = new QSpinBox(splitter_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBox->setMinimum(1);
        spinBox->setValue(30);
        splitter_2->addWidget(spinBox);
        label_8 = new QLabel(splitter_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        splitter_2->addWidget(label_8);
        horizontalSlider_2 = new QSlider(splitter_2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(5);
        horizontalSlider_2->setPageStep(1);
        horizontalSlider_2->setValue(3);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        splitter_2->addWidget(horizontalSlider_2);

        gridLayout_9->addWidget(splitter_2, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_12, 1, 2, 2, 1);

        verticalSpacer_12 = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_12, 2, 1, 1, 1);


        gridLayout_10->addWidget(groupBox_2, 1, 0, 1, 1);

        widget_5 = new QWidget(dockWidgetContents_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy7);
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_6->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        rightCaptureLabel = new QLabel(widget_5);
        rightCaptureLabel->setObjectName(QString::fromUtf8("rightCaptureLabel"));
        sizePolicy.setHeightForWidth(rightCaptureLabel->sizePolicy().hasHeightForWidth());
        rightCaptureLabel->setSizePolicy(sizePolicy);
        rightCaptureLabel->setMaximumSize(QSize(400, 320));
        rightCaptureLabel->setStyleSheet(QString::fromUtf8("border:1px solid deepskyblue;"));
        rightCaptureLabel->setScaledContents(true);
        rightCaptureLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(rightCaptureLabel, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_6->addItem(verticalSpacer_8, 2, 1, 1, 1);


        gridLayout_10->addWidget(widget_5, 2, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_2);
#if QT_CONFIG(shortcut)
        label_5->setBuddy(snapSpeedBox);
        label_6->setBuddy(horizontalSlider);
        label_7->setBuddy(spinBox);
        label_8->setBuddy(horizontalSlider_2);
#endif // QT_CONFIG(shortcut)

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuCustomize->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuCustomize->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionChinese);
        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actionOpenCamera);
        toolBar->addSeparator();
        toolBar->addAction(actionProjector);
        toolBar->addSeparator();
        toolBar->addAction(actionCalib);
        toolBar->addSeparator();
        toolBar->addAction(actionScan);
        toolBar->addSeparator();
        toolBar->addAction(actionReconstruct);
        toolBar->addSeparator();
        toolBar->addAction(actionSet);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(snapSpeedBox, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), snapSpeedBox, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New Project", nullptr));
        actionNew->setIconText(QCoreApplication::translate("MainWindow", "  New  ", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Create a new project</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionNew->setStatusTip(QCoreApplication::translate("MainWindow", "Create a new folder to contain project.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open Project", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Open project</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionExit->setIconText(QCoreApplication::translate("MainWindow", "  Exit  ", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionExit->setStatusTip(QCoreApplication::translate("MainWindow", "Close the program.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenCamera->setText(QCoreApplication::translate("MainWindow", "Camera", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenCamera->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Open cameras</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionOpenCamera->setStatusTip(QCoreApplication::translate("MainWindow", "Open Cameras.", nullptr));
#endif // QT_CONFIG(statustip)
        actionProjector->setText(QCoreApplication::translate("MainWindow", "Projector", nullptr));
#if QT_CONFIG(statustip)
        actionProjector->setStatusTip(QCoreApplication::translate("MainWindow", "Turn on/off the projector", nullptr));
#endif // QT_CONFIG(statustip)
        actionCalib->setText(QCoreApplication::translate("MainWindow", "Calibrate", nullptr));
#if QT_CONFIG(tooltip)
        actionCalib->setToolTip(QCoreApplication::translate("MainWindow", "Calibrate", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionCalib->setStatusTip(QCoreApplication::translate("MainWindow", "Active calibration.", nullptr));
#endif // QT_CONFIG(statustip)
        actionScan->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        actionScan->setIconText(QCoreApplication::translate("MainWindow", "  Scan  ", nullptr));
#if QT_CONFIG(tooltip)
        actionScan->setToolTip(QCoreApplication::translate("MainWindow", "Scan", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionScan->setStatusTip(QCoreApplication::translate("MainWindow", "Start scan process.", nullptr));
#endif // QT_CONFIG(statustip)
        actionReconstruct->setText(QCoreApplication::translate("MainWindow", "Reconstruct", nullptr));
#if QT_CONFIG(tooltip)
        actionReconstruct->setToolTip(QCoreApplication::translate("MainWindow", "Reconstruct", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionReconstruct->setStatusTip(QCoreApplication::translate("MainWindow", "Start reconstruction.", nullptr));
#endif // QT_CONFIG(statustip)
        actionSet->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        actionSet->setToolTip(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSet->setStatusTip(QCoreApplication::translate("MainWindow", "Set the parameters of the project.", nullptr));
#endif // QT_CONFIG(statustip)
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
#if QT_CONFIG(tooltip)
        actionEnglish->setToolTip(QCoreApplication::translate("MainWindow", "en", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChinese->setText(QCoreApplication::translate("MainWindow", "\347\256\200\344\275\223\344\270\255\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        actionChinese->setToolTip(QCoreApplication::translate("MainWindow", "zh", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Point Size", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Capture images as displayed:</p></body></html>", nullptr));
        currentPhotoLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>/12 images have been captured.</p></body></html>", nullptr));
        explainLabel->setText(QCoreApplication::translate("MainWindow", "Illustration", nullptr));
        captureButton->setText(QCoreApplication::translate("MainWindow", "Capture", nullptr));
        redoButton->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        calibButton->setText(QCoreApplication::translate("MainWindow", "Calibrate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Calibrate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Scan", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Reconstruct", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Current Operation Processed:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Project", nullptr));
        menuCustomize->setTitle(QCoreApplication::translate("MainWindow", "Customize", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("MainWindow", "Language", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "Left Camera", nullptr));
        leftViewLabel->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        leftCaptureLabel->setText(QCoreApplication::translate("MainWindow", "Capture", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Camera Adjust", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Snap Speed(ms)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Exposure", nullptr));
        dockWidget_2->setWindowTitle(QCoreApplication::translate("MainWindow", "Right Camera", nullptr));
        rightViewLabel->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Camera Adjust", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Snap Speed(ms)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Exposure", nullptr));
        rightCaptureLabel->setText(QCoreApplication::translate("MainWindow", "Capture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
