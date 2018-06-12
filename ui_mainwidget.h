/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ButtonSettings;
    QPushButton *ButtonStartStop;
    QPushButton *ButtonCapture;
    QPushButton *ButtonDraw;
    QFrame *line;
    QPushButton *ButtonDemo;
    QPushButton *ButtonLoad;
    QPushButton *ButtonQuit;
    QLabel *ImageView;
    QLabel *label;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(900, 606);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/flash.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWidget->setWindowIcon(icon);
        MainWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(MainWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 91, 601));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        verticalLayoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ButtonSettings = new QPushButton(verticalLayoutWidget);
        ButtonSettings->setObjectName(QStringLiteral("ButtonSettings"));
        ButtonSettings->setFont(font);
        ButtonSettings->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/gear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonSettings->setIcon(icon1);
        ButtonSettings->setIconSize(QSize(64, 64));
        ButtonSettings->setFlat(true);

        verticalLayout->addWidget(ButtonSettings);

        ButtonStartStop = new QPushButton(verticalLayoutWidget);
        ButtonStartStop->setObjectName(QStringLiteral("ButtonStartStop"));
        ButtonStartStop->setFont(font);
        ButtonStartStop->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/play.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonStartStop->setIcon(icon2);
        ButtonStartStop->setIconSize(QSize(64, 64));
        ButtonStartStop->setFlat(true);

        verticalLayout->addWidget(ButtonStartStop);

        ButtonCapture = new QPushButton(verticalLayoutWidget);
        ButtonCapture->setObjectName(QStringLiteral("ButtonCapture"));
        ButtonCapture->setEnabled(false);
        ButtonCapture->setFont(font);
        ButtonCapture->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/camera.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCapture->setIcon(icon3);
        ButtonCapture->setIconSize(QSize(64, 64));
        ButtonCapture->setFlat(true);

        verticalLayout->addWidget(ButtonCapture);

        ButtonDraw = new QPushButton(verticalLayoutWidget);
        ButtonDraw->setObjectName(QStringLiteral("ButtonDraw"));
        ButtonDraw->setEnabled(false);
        ButtonDraw->setFont(font);
        ButtonDraw->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/paintbrush2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonDraw->setIcon(icon4);
        ButtonDraw->setIconSize(QSize(64, 64));
        ButtonDraw->setFlat(true);

        verticalLayout->addWidget(ButtonDraw);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFont(font);
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(0);
        line->setMidLineWidth(10);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        ButtonDemo = new QPushButton(verticalLayoutWidget);
        ButtonDemo->setObjectName(QStringLiteral("ButtonDemo"));
        ButtonDemo->setEnabled(true);
        ButtonDemo->setFont(font);
        ButtonDemo->setFocusPolicy(Qt::NoFocus);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icons/hourglass.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonDemo->setIcon(icon5);
        ButtonDemo->setIconSize(QSize(64, 64));
        ButtonDemo->setFlat(true);

        verticalLayout->addWidget(ButtonDemo);

        ButtonLoad = new QPushButton(verticalLayoutWidget);
        ButtonLoad->setObjectName(QStringLiteral("ButtonLoad"));
        ButtonLoad->setEnabled(true);
        ButtonLoad->setFont(font);
        ButtonLoad->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icons/upload.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonLoad->setIcon(icon6);
        ButtonLoad->setIconSize(QSize(64, 64));
        ButtonLoad->setFlat(true);

        verticalLayout->addWidget(ButtonLoad);

        ButtonQuit = new QPushButton(verticalLayoutWidget);
        ButtonQuit->setObjectName(QStringLiteral("ButtonQuit"));
        ButtonQuit->setFont(font);
        ButtonQuit->setFocusPolicy(Qt::NoFocus);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icons/power.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonQuit->setIcon(icon7);
        ButtonQuit->setIconSize(QSize(64, 64));
        ButtonQuit->setFlat(true);

        verticalLayout->addWidget(ButtonQuit);

        ImageView = new QLabel(MainWidget);
        ImageView->setObjectName(QStringLiteral("ImageView"));
        ImageView->setGeometry(QRect(90, 10, 800, 681));
        ImageView->setFont(font);
        ImageView->setStyleSheet(QStringLiteral("background-color: rgb(163, 163, 163);"));
        ImageView->setScaledContents(false);
        ImageView->setAlignment(Qt::AlignCenter);
        label = new QLabel(MainWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 261, 86));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/robowizard__logo.ico")));
        label->setScaledContents(false);

        retranslateUi(MainWidget);
        QObject::connect(ButtonSettings, SIGNAL(clicked()), MainWidget, SLOT(ButtonSettingsClicked()));
        QObject::connect(ButtonStartStop, SIGNAL(clicked()), MainWidget, SLOT(ButtonStartStopClicked()));
        QObject::connect(ButtonCapture, SIGNAL(clicked()), MainWidget, SLOT(ButtonCaptureClicked()));
        QObject::connect(ButtonDraw, SIGNAL(clicked()), MainWidget, SLOT(ButtonDrawClicked()));
        QObject::connect(ButtonQuit, SIGNAL(clicked()), MainWidget, SLOT(close()));
        QObject::connect(ButtonLoad, SIGNAL(clicked()), MainWidget, SLOT(ButtonLoadClicked()));
        QObject::connect(ButtonDemo, SIGNAL(clicked()), MainWidget, SLOT(ButtonDemoClicked()));

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "Artist", nullptr));
        ButtonSettings->setText(QString());
        ButtonStartStop->setText(QString());
        ButtonCapture->setText(QString());
        ButtonDraw->setText(QString());
        ButtonDemo->setText(QString());
        ButtonLoad->setText(QString());
        ButtonQuit->setText(QString());
        ImageView->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
