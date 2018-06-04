/********************************************************************************
** Form generated from reading UI file 'preview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREVIEW_H
#define UI_PREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preview
{
public:
    QLabel *PreviewImage;
    QProgressBar *drawProgress;

    void setupUi(QWidget *Preview)
    {
        if (Preview->objectName().isEmpty())
            Preview->setObjectName(QStringLiteral("Preview"));
        Preview->resize(400, 340);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icons/flash.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Preview->setWindowIcon(icon);
        PreviewImage = new QLabel(Preview);
        PreviewImage->setObjectName(QStringLiteral("PreviewImage"));
        PreviewImage->setGeometry(QRect(0, 0, 271, 251));
        drawProgress = new QProgressBar(Preview);
        drawProgress->setObjectName(QStringLiteral("drawProgress"));
        drawProgress->setGeometry(QRect(10, 310, 151, 23));
        drawProgress->setValue(24);

        retranslateUi(Preview);

        QMetaObject::connectSlotsByName(Preview);
    } // setupUi

    void retranslateUi(QWidget *Preview)
    {
        Preview->setWindowTitle(QApplication::translate("Preview", "Preview", nullptr));
        PreviewImage->setText(QApplication::translate("Preview", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preview: public Ui_Preview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREVIEW_H
