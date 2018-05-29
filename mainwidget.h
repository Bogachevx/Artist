#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QDesktopWidget>
#include <fstream>

#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include "camerathread.h"
#include "structs.h"
#include "settings.h"
#include "pointsmap.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
    SettingsStruct ProgramSettings;
    Settings *SettingsWindow;
    CameraThread *camera;
    cv::Mat *Frame;
    std::vector<std::vector<cv::Point>> Contours;
    bool isStarted;
    bool isCaptured;
    void LoadSettings();
    cv::Rect getROIRect(cv::Mat *frame);
    cv::Rect cutRect(cv::Rect rect);
    void ProcessImage();

private slots:
    void ButtonCaptureClicked();
    void ButtonStartStopClicked();
    void ButtonSettingsClicked();
    void ButtonDrawClicked();
    void SettingsApplied(SettingsStruct settings);
    void FrameReady(cv::Mat *frame, cv::Mat *orig);
    void Update( int*, int*, int*, int*, int*);
    void Error();
};

#endif // MAINWIDGET_H
