#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QDesktopWidget>
#include <QThread>
#include <QtNetwork/QUdpSocket>
#include <QFileDialog>
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
    SettingsStruct ProgramSettings;
    Settings *SettingsWindow;
    CameraThread *camera;
    PointsSender *pointsSender;
    DrawProcess *dp;
    cv::Mat Frame;
    std::vector<std::vector<cv::Point>> Contours;
    QUdpSocket *udpSocket;
    QUdpSocket *udpRecvSocket;
    bool isStarted;
    bool drawPhoto = false;
    bool isCaptured;
    bool isDrawing = false;
    bool autoMode;
    void LoadSettings();
    cv::Rect getROIRect(cv::Mat *frame);
    cv::Rect cutRect(cv::Rect rect);
    QString recievedData;
    void ProcessImage();
    void UDP_Send(QByteArray datagram);


private slots:
    void ButtonCaptureClicked();
    void ButtonStartStopClicked();
    void ButtonSettingsClicked();
    void ButtonDrawClicked();
    void ButtonLoadClicked();
    void cancelDrawButtonClicked();
    void processPendingDatagrams();
    QPixmap convertMatToQPixmap(cv::Mat img);
    void SettingsApplied(SettingsStruct settings);
    void FrameReady(cv::Mat *frame, cv::Mat *orig);
    void Update( int*, int*, int*, int*, int*);
    void Error();
};

#endif // MAINWIDGET_H
