#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QDesktopWidget>
#include <QThread>
#include <QKeyEvent>
#include <QtNetwork/QUdpSocket>
#include <QFileDialog>
#include <QDateTime>
#include <fstream>

#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include "drawprocess.h"
#include "camerathread.h"
#include "structs.h"
#include "settings.h"
#include "pointssender.h"

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
    // Widgets
    Settings *SettingsWindow;
    DrawProcess *dp;

    // OpenCV
    cv::Mat Frame;
    std::vector<std::vector<cv::Point>> Contours;

    // Flags
    bool isStarted = false;
    bool isCaptured = false;
    bool isLoaded = false;
    bool isDrawing = false;
    bool isDemo = false;
    bool autoMode;

    // Threads
    CameraThread *camera;
    PointsSender *pointsSender;

    SettingsStruct ProgramSettings;
    QUdpSocket *udpSocket;

    cv::Rect getROIRect(cv::Mat *frame);
    cv::Rect cutRect(cv::Rect rect);
    void LoadSettings();
    void ProcessImage();
    void UDP_Send(QByteArray datagram);

protected:
    void keyPressEvent(QKeyEvent *e);
    void keyReleaseEvent(QKeyEvent *e);

private slots:

    // Button events
    void ButtonCaptureClicked();
    void ButtonStartStopClicked();
    void ButtonSettingsClicked();
    void ButtonDrawClicked();
    void ButtonDemoClicked();
    void ButtonCancelDrawClicked(); // Not this widget button
    void ButtonLoadClicked();

    // From Settings
    void SettingsApplied(SettingsStruct settings);
    void Update( int*, int*, int*, int*, int*);

    // From CameraThread
    void FrameReady(cv::Mat *frame, cv::Mat *orig);
    void Error();
};

#endif // MAINWIDGET_H
