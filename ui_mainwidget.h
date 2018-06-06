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
    QPushButton *ButtonAutodraw;
    QPushButton *ButtonSaveLoad;
    QPushButton *ButtonQuit;
    QLabel *ImageView;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(900, 702);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/flash.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWidget->setWindowIcon(icon);
        MainWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(MainWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 91, 601));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ButtonSettings = new QPushButton(verticalLayoutWidget);
        ButtonSettings->setObjectName(QStringLiteral("ButtonSettings"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icons/gear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonSettings->setIcon(icon1);
        ButtonSettings->setIconSize(QSize(64, 64));
        ButtonSettings->setFlat(true);

        verticalLayout->addWidget(ButtonSettings);

        ButtonStartStop = new QPushButton(verticalLayoutWidget);
        ButtonStartStop->setObjectName(QStringLiteral("ButtonStartStop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icons/play.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonStartStop->setIcon(icon2);
        ButtonStartStop->setIconSize(QSize(64, 64));
        ButtonStartStop->setFlat(true);

        verticalLayout->addWidget(ButtonStartStop);

        ButtonCapture = new QPushButton(verticalLayoutWidget);
        ButtonCapture->setObjectName(QStringLiteral("ButtonCapture"));
        ButtonCapture->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/icons/camera.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCapture->setIcon(icon3);
        ButtonCapture->setIconSize(QSize(64, 64));
        ButtonCapture->setFlat(true);

        verticalLayout->addWidget(ButtonCapture);

        ButtonDraw = new QPushButton(verticalLayoutWidget);
        ButtonDraw->setObjectName(QStringLiteral("ButtonDraw"));
        ButtonDraw->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/icons/paintbrush2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonDraw->setIcon(icon4);
        ButtonDraw->setIconSize(QSize(64, 64));
        ButtonDraw->setFlat(true);

        verticalLayout->addWidget(ButtonDraw);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(0);
        line->setMidLineWidth(10);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        ButtonAutodraw = new QPushButton(verticalLayoutWidget);
        ButtonAutodraw->setObjectName(QStringLiteral("ButtonAutodraw"));
        ButtonAutodraw->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/icons/magicwand.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonAutodraw->setIcon(icon5);
        ButtonAutodraw->setIconSize(QSize(64, 64));
        ButtonAutodraw->setFlat(true);

        verticalLayout->addWidget(ButtonAutodraw);

        ButtonSaveLoad = new QPushButton(verticalLayoutWidget);
        ButtonSaveLoad->setObjectName(QStringLiteral("ButtonSaveLoad"));
        ButtonSaveLoad->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icons/upload.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonSaveLoad->setIcon(icon6);
        ButtonSaveLoad->setIconSize(QSize(64, 64));
        ButtonSaveLoad->setFlat(true);

        verticalLayout->addWidget(ButtonSaveLoad);

        ButtonQuit = new QPushButton(verticalLayoutWidget);
        ButtonQuit->setObjectName(QStringLiteral("ButtonQuit"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icons/power.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonQuit->setIcon(icon7);
        ButtonQuit->setIconSize(QSize(64, 64));
        ButtonQuit->setFlat(true);

        verticalLayout->addWidget(ButtonQuit);

        ImageView = new QLabel(MainWidget);
        ImageView->setObjectName(QStringLiteral("ImageView"));
        ImageView->setGeometry(QRect(90, 10, 800, 681));
        ImageView->setStyleSheet(QStringLiteral("background-color: rgb(157, 42, 52);"));
        ImageView->setScaledContents(false);
        ImageView->setAlignment(Qt::AlignCenter);

        retranslateUi(MainWidget);
        QObject::connect(ButtonSettings, SIGNAL(clicked()), MainWidget, SLOT(ButtonSettingsClicked()));
        QObject::connect(ButtonStartStop, SIGNAL(clicked()), MainWidget, SLOT(ButtonStartStopClicked()));
        QObject::connect(ButtonCapture, SIGNAL(clicked()), MainWidget, SLOT(ButtonCaptureClicked()));
        QObject::connect(ButtonDraw, SIGNAL(clicked()), MainWidget, SLOT(ButtonDrawClicked()));
        QObject::connect(ButtonQuit, SIGNAL(clicked()), MainWidget, SLOT(close()));
        QObject::connect(ButtonSaveLoad, SIGNAL(clicked()), MainWidget, SLOT(ButtonLoadClicked()));

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "Artist", nullptr));
        ButtonSettings->setText(QString());
        ButtonStartStop->setText(QString());
        ButtonCapture->setText(QString());
        ButtonDraw->setText(QString());
        ButtonAutodraw->setText(QString());
        ButtonSaveLoad->setText(QString());
        ButtonQuit->setText(QString());
        ImageView->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
