/********************************************************************************
** Form generated from reading UI file 'Set.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *cellWidth;
    QLabel *label_2;
    QSpinBox *cellHeight;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QSpinBox *cellNumH;
    QLabel *cellNumV;
    QSpinBox *spinBox_4;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QSpinBox *boardWidth;
    QLabel *label_6;
    QSpinBox *boardHeight;
    QWidget *tab_4;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_15;
    QLabel *label_13;
    QSpinBox *camResH;
    QLabel *label_14;
    QSpinBox *camResV;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLabel *label_7;
    QSpinBox *projResH;
    QLabel *label_8;
    QSpinBox *projResV;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_9;
    QLabel *label_4;
    QSpinBox *scanResH;
    QLabel *label_9;
    QSpinBox *scanResV;
    QWidget *tab_3;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QLabel *label_11;
    QSpinBox *blackThresholdEdit;
    QLabel *label_12;
    QSpinBox *whiteThresholdEdit;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_12;
    QVBoxLayout *verticalLayout;
    QCheckBox *autoContrastCheck;
    QCheckBox *saveAutoContrastImagesCheck;
    QCheckBox *raySamplingCheck;
    QCheckBox *exportObjCheck;
    QCheckBox *exportPlyCheck;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *SetDialog)
    {
        if (SetDialog->objectName().isEmpty())
            SetDialog->setObjectName(QString::fromUtf8("SetDialog"));
        SetDialog->resize(455, 356);
        SetDialog->setStyleSheet(QString::fromUtf8("font: 9pt \"Calibri\";"));
        gridLayout_2 = new QGridLayout(SetDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setAutoFillBackground(false);
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        tabWidget = new QTabWidget(SetDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 411, 161));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(10);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cellWidth = new QSpinBox(groupBox);
        cellWidth->setObjectName(QString::fromUtf8("cellWidth"));
        cellWidth->setValue(10);

        gridLayout->addWidget(cellWidth, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        cellHeight = new QSpinBox(groupBox);
        cellHeight->setObjectName(QString::fromUtf8("cellHeight"));
        cellHeight->setValue(10);

        gridLayout->addWidget(cellHeight, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        cellNumH = new QSpinBox(groupBox);
        cellNumH->setObjectName(QString::fromUtf8("cellNumH"));
        cellNumH->setValue(10);

        gridLayout_3->addWidget(cellNumH, 0, 1, 1, 1);

        cellNumV = new QLabel(groupBox);
        cellNumV->setObjectName(QString::fromUtf8("cellNumV"));
        cellNumV->setMargin(0);

        gridLayout_3->addWidget(cellNumV, 1, 0, 1, 1);

        spinBox_4 = new QSpinBox(groupBox);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setValue(10);

        gridLayout_3->addWidget(spinBox_4, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        boardWidth = new QSpinBox(groupBox);
        boardWidth->setObjectName(QString::fromUtf8("boardWidth"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(boardWidth->sizePolicy().hasHeightForWidth());
        boardWidth->setSizePolicy(sizePolicy2);
        boardWidth->setMaximum(1000);
        boardWidth->setValue(200);

        gridLayout_4->addWidget(boardWidth, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        boardHeight = new QSpinBox(groupBox);
        boardHeight->setObjectName(QString::fromUtf8("boardHeight"));
        sizePolicy2.setHeightForWidth(boardHeight->sizePolicy().hasHeightForWidth());
        boardHeight->setSizePolicy(sizePolicy2);
        boardHeight->setMaximum(1000);
        boardHeight->setValue(200);

        gridLayout_4->addWidget(boardHeight, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groupBox_8 = new QGroupBox(tab_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 9, 411, 101));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy3);
        gridLayout_14 = new QGridLayout(groupBox_8);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        label_13 = new QLabel(groupBox_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_15->addWidget(label_13, 0, 0, 1, 1);

        camResH = new QSpinBox(groupBox_8);
        camResH->setObjectName(QString::fromUtf8("camResH"));
        camResH->setMaximum(1280);
        camResH->setValue(1280);

        gridLayout_15->addWidget(camResH, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_15->addWidget(label_14, 1, 0, 1, 1);

        camResV = new QSpinBox(groupBox_8);
        camResV->setObjectName(QString::fromUtf8("camResV"));
        camResV->setMaximum(1024);
        camResV->setValue(1024);

        gridLayout_15->addWidget(camResV, 1, 1, 1, 1);


        gridLayout_14->addLayout(gridLayout_15, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(194, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 9, 413, 111));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 20, 176, 80));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy4);
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        projResH = new QSpinBox(groupBox_3);
        projResH->setObjectName(QString::fromUtf8("projResH"));
        projResH->setMaximum(1280);
        projResH->setValue(1280);

        gridLayout_6->addWidget(projResH, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_6->addWidget(label_8, 1, 0, 1, 1);

        projResV = new QSpinBox(groupBox_3);
        projResV->setObjectName(QString::fromUtf8("projResV"));
        projResV->setMaximum(1024);
        projResV->setValue(1024);

        gridLayout_6->addWidget(projResV, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(210, 20, 176, 80));
        sizePolicy4.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy4);
        gridLayout_8 = new QGridLayout(groupBox_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_9->addWidget(label_4, 0, 0, 1, 1);

        scanResH = new QSpinBox(groupBox_4);
        scanResH->setObjectName(QString::fromUtf8("scanResH"));
        scanResH->setMaximum(1280);
        scanResH->setValue(800);

        gridLayout_9->addWidget(scanResH, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_9->addWidget(label_9, 1, 0, 1, 1);

        scanResV = new QSpinBox(groupBox_4);
        scanResV->setObjectName(QString::fromUtf8("scanResV"));
        scanResV->setMaximum(1024);
        scanResV->setValue(600);

        gridLayout_9->addWidget(scanResV, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_9, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_13 = new QGridLayout(tab_3);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        gridLayout_11 = new QGridLayout(groupBox_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(10);
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_10->addWidget(label_11, 0, 0, 1, 1);

        blackThresholdEdit = new QSpinBox(groupBox_5);
        blackThresholdEdit->setObjectName(QString::fromUtf8("blackThresholdEdit"));
        blackThresholdEdit->setValue(40);

        gridLayout_10->addWidget(blackThresholdEdit, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_10->addWidget(label_12, 1, 0, 1, 1);

        whiteThresholdEdit = new QSpinBox(groupBox_5);
        whiteThresholdEdit->setObjectName(QString::fromUtf8("whiteThresholdEdit"));

        gridLayout_10->addWidget(whiteThresholdEdit, 1, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(244, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_13->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        gridLayout_12 = new QGridLayout(groupBox_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        autoContrastCheck = new QCheckBox(groupBox_6);
        autoContrastCheck->setObjectName(QString::fromUtf8("autoContrastCheck"));

        verticalLayout->addWidget(autoContrastCheck);

        saveAutoContrastImagesCheck = new QCheckBox(groupBox_6);
        saveAutoContrastImagesCheck->setObjectName(QString::fromUtf8("saveAutoContrastImagesCheck"));

        verticalLayout->addWidget(saveAutoContrastImagesCheck);

        raySamplingCheck = new QCheckBox(groupBox_6);
        raySamplingCheck->setObjectName(QString::fromUtf8("raySamplingCheck"));

        verticalLayout->addWidget(raySamplingCheck);

        exportObjCheck = new QCheckBox(groupBox_6);
        exportObjCheck->setObjectName(QString::fromUtf8("exportObjCheck"));
        exportObjCheck->setChecked(true);
        exportObjCheck->setTristate(false);

        verticalLayout->addWidget(exportObjCheck);

        exportPlyCheck = new QCheckBox(groupBox_6);
        exportPlyCheck->setObjectName(QString::fromUtf8("exportPlyCheck"));

        verticalLayout->addWidget(exportPlyCheck);


        gridLayout_12->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        gridLayout_13->addWidget(groupBox_6, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(SetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SetDialog);
    } // setupUi

    void retranslateUi(QDialog *SetDialog)
    {
        SetDialog->setWindowTitle(QCoreApplication::translate("SetDialog", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SetDialog", "Geometry", nullptr));
        label->setText(QCoreApplication::translate("SetDialog", "Cell Width(mm):", nullptr));
        label_2->setText(QCoreApplication::translate("SetDialog", "Cell Height(mm):", nullptr));
        label_3->setText(QCoreApplication::translate("SetDialog", "Cell Number(Horizontal):", nullptr));
        cellNumV->setText(QCoreApplication::translate("SetDialog", "Cell Number(Vertical):", nullptr));
        label_5->setText(QCoreApplication::translate("SetDialog", "Board Width(mm):", nullptr));
        label_6->setText(QCoreApplication::translate("SetDialog", "Board Height(mm):", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SetDialog", "Calibration Board", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("SetDialog", "Camera Resolution", nullptr));
        label_13->setText(QCoreApplication::translate("SetDialog", "Horizontal(pixel):", nullptr));
        label_14->setText(QCoreApplication::translate("SetDialog", "Vertical(pixel):", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("SetDialog", "Camera", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SetDialog", "Project Region", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SetDialog", "Projector Resolution", nullptr));
        label_7->setText(QCoreApplication::translate("SetDialog", "Horizontal(pixel):", nullptr));
        label_8->setText(QCoreApplication::translate("SetDialog", "Vertical(pixel):", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SetDialog", "Scan Resolution", nullptr));
        label_4->setText(QCoreApplication::translate("SetDialog", "Horizontal(pixel):", nullptr));
        label_9->setText(QCoreApplication::translate("SetDialog", "Vertical(pixel):", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SetDialog", "Projector", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SetDialog", "Threshold", nullptr));
        label_11->setText(QCoreApplication::translate("SetDialog", "Black Threshold", nullptr));
        label_12->setText(QCoreApplication::translate("SetDialog", "White Threshold", nullptr));
        groupBox_6->setTitle(QString());
        autoContrastCheck->setText(QCoreApplication::translate("SetDialog", "Auto Contrast", nullptr));
        saveAutoContrastImagesCheck->setText(QCoreApplication::translate("SetDialog", "Save Auto Contrast Image", nullptr));
        raySamplingCheck->setText(QCoreApplication::translate("SetDialog", "Ray Sampling", nullptr));
        exportObjCheck->setText(QCoreApplication::translate("SetDialog", "Export Obj", nullptr));
        exportPlyCheck->setText(QCoreApplication::translate("SetDialog", "Export Ply", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("SetDialog", "Reconstruction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetDialog: public Ui_SetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
