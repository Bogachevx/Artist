#ifndef CAMERATHREAD_H
#define CAMERATHREAD_H

#include <QThread>
#include <QMessageBox>
#include <QDebug>
#include "structs.h"
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

class CameraThread : public QThread
{
    Q_OBJECT
private:
    cv::VideoCapture *Camera;
    SettingsStruct ProgramSettings;
    bool stopWorking;
    void drawROIRect(cv::Mat *frame);

signals:
    void Ready(cv::Mat *, cv::Mat *);
    void Error();
protected:
    void run();

public:
    void stop();
    CameraThread(SettingsStruct settings);
};

#endif // CAMERATHREAD_H
