/********************************************************************************
** Form generated from reading UI file 'drawprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWPROCESS_H
#define UI_DRAWPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawProcess
{
public:
    QProgressBar *sendingProgress;
    QLabel *label;
    QPushButton *ButtonCancelDraw;

    void setupUi(QWidget *DrawProcess)
    {
        if (DrawProcess->objectName().isEmpty())
            DrawProcess->setObjectName(QStringLiteral("DrawProcess"));
        DrawProcess->setWindowModality(Qt::ApplicationModal);
        DrawProcess->resize(310, 157);
        DrawProcess->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sendingProgress = new QProgressBar(DrawProcess);
        sendingProgress->setObjectName(QStringLiteral("sendingProgress"));
        sendingProgress->setGeometry(QRect(10, 30, 291, 23));
        sendingProgress->setValue(45);
        label = new QLabel(DrawProcess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        ButtonCancelDraw = new QPushButton(DrawProcess);
        ButtonCancelDraw->setObjectName(QStringLiteral("ButtonCancelDraw"));
        ButtonCancelDraw->setGeometry(QRect(110, 70, 89, 72));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/denied.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCancelDraw->setIcon(icon);
        ButtonCancelDraw->setIconSize(QSize(64, 64));
        ButtonCancelDraw->setFlat(true);

        retranslateUi(DrawProcess);
        QObject::connect(ButtonCancelDraw, SIGNAL(clicked()), DrawProcess, SLOT(ButtonCancelDrawClicked()));

        QMetaObject::connectSlotsByName(DrawProcess);
    } // setupUi

    void retranslateUi(QWidget *DrawProcess)
    {
        DrawProcess->setWindowTitle(QApplication::translate("DrawProcess", "Sending...", nullptr));
        label->setText(QApplication::translate("DrawProcess", "Points sent:", nullptr));
        ButtonCancelDraw->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DrawProcess: public Ui_DrawProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWPROCESS_H
