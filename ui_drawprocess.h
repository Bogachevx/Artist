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
    QPushButton *ButtonCancel;

    void setupUi(QWidget *DrawProcess)
    {
        if (DrawProcess->objectName().isEmpty())
            DrawProcess->setObjectName(QStringLiteral("DrawProcess"));
        DrawProcess->setWindowModality(Qt::ApplicationModal);
        DrawProcess->resize(310, 157);
        DrawProcess->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sendingProgress = new QProgressBar(DrawProcess);
        sendingProgress->setObjectName(QStringLiteral("sendingProgress"));
        sendingProgress->setGeometry(QRect(10, 30, 300, 23));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        sendingProgress->setFont(font);
        sendingProgress->setValue(24);
        label = new QLabel(DrawProcess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        label->setFont(font);
        ButtonCancel = new QPushButton(DrawProcess);
        ButtonCancel->setObjectName(QStringLiteral("ButtonCancel"));
        ButtonCancel->setGeometry(QRect(190, 70, 89, 72));
        ButtonCancel->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/denied.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonCancel->setIcon(icon);
        ButtonCancel->setIconSize(QSize(64, 64));
        ButtonCancel->setFlat(true);

        retranslateUi(DrawProcess);
        QObject::connect(ButtonCancel, SIGNAL(clicked()), DrawProcess, SLOT(ButtonCancelClicked()));

        QMetaObject::connectSlotsByName(DrawProcess);
    } // setupUi

    void retranslateUi(QWidget *DrawProcess)
    {
        DrawProcess->setWindowTitle(QApplication::translate("DrawProcess", "Sending...", nullptr));
        label->setText(QApplication::translate("DrawProcess", "Points sent:", nullptr));
        ButtonCancel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DrawProcess: public Ui_DrawProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWPROCESS_H
