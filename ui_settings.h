/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *PaperWidth;
    QLineEdit *PaperHeight;
    QLabel *label_4;
    QGroupBox *groupBox_7;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *CameraAddress;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *ActiveRegionWidth;
    QLineEdit *ActveRegionHeight;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *CameraWidth;
    QLineEdit *CameraHeight;
    QGroupBox *groupBox_8;
    QGroupBox *groupBox_6;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *BlurValue;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_10;
    QSlider *Threshold2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QSlider *Threshold1;
    QGroupBox *groupBox_9;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *label_12;
    QSlider *ApproxEpsilon;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLabel *label_14;
    QSlider *MinContLen;
    QFrame *frame;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ButtonCancel;
    QPushButton *ButtonApply;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->setWindowModality(Qt::ApplicationModal);
        Settings->resize(531, 446);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/flash.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Settings->setWindowIcon(icon);
        Settings->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox_3 = new QGroupBox(Settings);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 360, 181, 71));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayoutWidget_2 = new QWidget(groupBox_3);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 160, 44));
        gridLayoutWidget_2->setFont(font);
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        PaperWidth = new QLineEdit(gridLayoutWidget_2);
        PaperWidth->setObjectName(QStringLiteral("PaperWidth"));
        PaperWidth->setFont(font);

        gridLayout_2->addWidget(PaperWidth, 1, 0, 1, 1);

        PaperHeight = new QLineEdit(gridLayoutWidget_2);
        PaperHeight->setObjectName(QStringLiteral("PaperHeight"));
        PaperHeight->setFont(font);

        gridLayout_2->addWidget(PaperHeight, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(Settings);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 501, 101));
        groupBox_7->setFont(font);
        groupBox_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(groupBox_7);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 101, 71));
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 81, 41));
        layoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CameraAddress = new QComboBox(layoutWidget);
        CameraAddress->setObjectName(QStringLiteral("CameraAddress"));
        CameraAddress->setFont(font);

        horizontalLayout->addWidget(CameraAddress);

        groupBox_4 = new QGroupBox(groupBox_7);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(310, 20, 181, 71));
        groupBox_4->setFont(font);
        gridLayoutWidget_3 = new QWidget(groupBox_4);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 20, 160, 44));
        gridLayoutWidget_3->setFont(font);
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        ActiveRegionWidth = new QLineEdit(gridLayoutWidget_3);
        ActiveRegionWidth->setObjectName(QStringLiteral("ActiveRegionWidth"));
        ActiveRegionWidth->setFont(font);

        gridLayout_3->addWidget(ActiveRegionWidth, 1, 0, 1, 1);

        ActveRegionHeight = new QLineEdit(gridLayoutWidget_3);
        ActveRegionHeight->setObjectName(QStringLiteral("ActveRegionHeight"));
        ActveRegionHeight->setFont(font);

        gridLayout_3->addWidget(ActveRegionHeight, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(groupBox_7);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 20, 181, 71));
        groupBox_2->setFont(font);
        gridLayoutWidget = new QWidget(groupBox_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 160, 44));
        gridLayoutWidget->setFont(font);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        CameraWidth = new QLineEdit(gridLayoutWidget);
        CameraWidth->setObjectName(QStringLiteral("CameraWidth"));
        CameraWidth->setFont(font);

        gridLayout->addWidget(CameraWidth, 1, 0, 1, 1);

        CameraHeight = new QLineEdit(gridLayoutWidget);
        CameraHeight->setObjectName(QStringLiteral("CameraHeight"));
        CameraHeight->setFont(font);

        gridLayout->addWidget(CameraHeight, 1, 1, 1, 1);

        groupBox_8 = new QGroupBox(Settings);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 120, 501, 231));
        groupBox_8->setFont(font);
        groupBox_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox_6 = new QGroupBox(groupBox_8);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 20, 101, 71));
        groupBox_6->setFont(font);
        horizontalLayoutWidget = new QWidget(groupBox_6);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 81, 41));
        horizontalLayoutWidget->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BlurValue = new QComboBox(horizontalLayoutWidget);
        BlurValue->setObjectName(QStringLiteral("BlurValue"));
        BlurValue->setFont(font);

        horizontalLayout_2->addWidget(BlurValue);

        groupBox_5 = new QGroupBox(groupBox_8);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(130, 20, 361, 101));
        groupBox_5->setFont(font);
        layoutWidget1 = new QWidget(groupBox_5);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 341, 71));
        layoutWidget1->setFont(font);
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        horizontalLayout_4->addWidget(label_7);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(20, 0));
        label_10->setMaximumSize(QSize(20, 16777215));
        label_10->setFont(font);

        horizontalLayout_4->addWidget(label_10);

        Threshold2 = new QSlider(layoutWidget1);
        Threshold2->setObjectName(QStringLiteral("Threshold2"));
        Threshold2->setFont(font);
        Threshold2->setMinimum(1);
        Threshold2->setMaximum(200);
        Threshold2->setOrientation(Qt::Horizontal);
        Threshold2->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_4->addWidget(Threshold2);


        formLayout_2->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(20, 0));
        label_9->setMaximumSize(QSize(20, 16777215));
        label_9->setFont(font);

        horizontalLayout_5->addWidget(label_9);

        Threshold1 = new QSlider(layoutWidget1);
        Threshold1->setObjectName(QStringLiteral("Threshold1"));
        Threshold1->setFont(font);
        Threshold1->setMinimum(1);
        Threshold1->setMaximum(200);
        Threshold1->setOrientation(Qt::Horizontal);
        Threshold1->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_5->addWidget(Threshold1);


        formLayout_2->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_5);

        groupBox_9 = new QGroupBox(groupBox_8);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 120, 481, 91));
        groupBox_9->setFont(font);
        layoutWidget_2 = new QWidget(groupBox_9);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 461, 31));
        layoutWidget_2->setFont(font);
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        horizontalLayout_6->addWidget(label_11);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(25, 0));
        label_12->setMaximumSize(QSize(25, 16777215));
        label_12->setFont(font);

        horizontalLayout_6->addWidget(label_12);

        ApproxEpsilon = new QSlider(layoutWidget_2);
        ApproxEpsilon->setObjectName(QStringLiteral("ApproxEpsilon"));
        ApproxEpsilon->setFont(font);
        ApproxEpsilon->setMinimum(1);
        ApproxEpsilon->setMaximum(500);
        ApproxEpsilon->setOrientation(Qt::Horizontal);
        ApproxEpsilon->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_6->addWidget(ApproxEpsilon);

        layoutWidget_3 = new QWidget(groupBox_9);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 50, 461, 31));
        layoutWidget_3->setFont(font);
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        horizontalLayout_7->addWidget(label_13);

        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(20, 0));
        label_14->setMaximumSize(QSize(20, 16777215));
        label_14->setFont(font);

        horizontalLayout_7->addWidget(label_14);

        MinContLen = new QSlider(layoutWidget_3);
        MinContLen->setObjectName(QStringLiteral("MinContLen"));
        MinContLen->setFont(font);
        MinContLen->setMinimum(2);
        MinContLen->setMaximum(50);
        MinContLen->setOrientation(Qt::Horizontal);
        MinContLen->setTickPosition(QSlider::TicksBothSides);

        horizontalLayout_7->addWidget(MinContLen);

        frame = new QFrame(Settings);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(350, 350, 171, 91));
        frame->setFont(font);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 160, 74));
        layoutWidget2->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ButtonCancel = new QPushButton(layoutWidget2);
        ButtonCancel->setObjectName(QStringLiteral("ButtonCancel"));
        ButtonCancel->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/x.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCancel->setIcon(icon1);
        ButtonCancel->setIconSize(QSize(64, 64));
        ButtonCancel->setFlat(true);

        horizontalLayout_3->addWidget(ButtonCancel);

        ButtonApply = new QPushButton(layoutWidget2);
        ButtonApply->setObjectName(QStringLiteral("ButtonApply"));
        ButtonApply->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonApply->setIcon(icon2);
        ButtonApply->setIconSize(QSize(64, 64));
        ButtonApply->setFlat(true);

        horizontalLayout_3->addWidget(ButtonApply);


        retranslateUi(Settings);
        QObject::connect(ButtonApply, SIGNAL(clicked()), Settings, SLOT(ButtonApplyClicked()));
        QObject::connect(BlurValue, SIGNAL(currentIndexChanged(int)), Settings, SLOT(Update()));
        QObject::connect(Threshold2, SIGNAL(valueChanged(int)), Settings, SLOT(Update()));
        QObject::connect(Threshold1, SIGNAL(valueChanged(int)), Settings, SLOT(Update()));
        QObject::connect(ButtonCancel, SIGNAL(clicked()), Settings, SLOT(ButtonCancelClicked()));
        QObject::connect(Threshold2, SIGNAL(valueChanged(int)), label_10, SLOT(setNum(int)));
        QObject::connect(Threshold1, SIGNAL(valueChanged(int)), label_9, SLOT(setNum(int)));
        QObject::connect(MinContLen, SIGNAL(valueChanged(int)), label_14, SLOT(setNum(int)));
        QObject::connect(ApproxEpsilon, SIGNAL(valueChanged(int)), Settings, SLOT(ApproxEpsilonValueChanged(int)));
        QObject::connect(ApproxEpsilon, SIGNAL(valueChanged(int)), Settings, SLOT(Update()));
        QObject::connect(MinContLen, SIGNAL(valueChanged(int)), Settings, SLOT(Update()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", nullptr));
        groupBox_3->setTitle(QApplication::translate("Settings", "Paper size:", nullptr));
        label_3->setText(QApplication::translate("Settings", "Width:", nullptr));
        PaperWidth->setText(QApplication::translate("Settings", "300", nullptr));
        PaperHeight->setText(QApplication::translate("Settings", "600", nullptr));
        label_4->setText(QApplication::translate("Settings", "Height:", nullptr));
        groupBox_7->setTitle(QApplication::translate("Settings", "Camera:", nullptr));
        groupBox->setTitle(QApplication::translate("Settings", "Camera address:", nullptr));
        groupBox_4->setTitle(QApplication::translate("Settings", "Active region size:", nullptr));
        label_5->setText(QApplication::translate("Settings", "Width:", nullptr));
        label_6->setText(QApplication::translate("Settings", "Height:", nullptr));
        ActiveRegionWidth->setText(QApplication::translate("Settings", "400", nullptr));
        ActveRegionHeight->setText(QApplication::translate("Settings", "900", nullptr));
        groupBox_2->setTitle(QApplication::translate("Settings", "Camera resolution:", nullptr));
        label->setText(QApplication::translate("Settings", "Width:", nullptr));
        label_2->setText(QApplication::translate("Settings", "Height:", nullptr));
        CameraWidth->setText(QApplication::translate("Settings", "1280", nullptr));
        CameraHeight->setText(QApplication::translate("Settings", "1024", nullptr));
        groupBox_8->setTitle(QApplication::translate("Settings", "Processing:", nullptr));
        groupBox_6->setTitle(QApplication::translate("Settings", "Blur level:", nullptr));
        groupBox_5->setTitle(QApplication::translate("Settings", "Canny settings:", nullptr));
        label_7->setText(QApplication::translate("Settings", "Threshold 1:", nullptr));
        label_10->setText(QApplication::translate("Settings", "1", nullptr));
        label_8->setText(QApplication::translate("Settings", "Threshold 2:", nullptr));
        label_9->setText(QApplication::translate("Settings", "1", nullptr));
        groupBox_9->setTitle(QApplication::translate("Settings", "Approximation", nullptr));
        label_11->setText(QApplication::translate("Settings", "Approx. epsilon:", nullptr));
        label_12->setText(QApplication::translate("Settings", "0.01", nullptr));
        label_13->setText(QApplication::translate("Settings", "Minimum cont. length:", nullptr));
        label_14->setText(QApplication::translate("Settings", "2", nullptr));
        ButtonCancel->setText(QString());
        ButtonApply->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
