#include "camerathread.h"

CameraThread::CameraThread(SettingsStruct settings)
{
    Camera = new cv::VideoCapture(settings.cameraAddress);
    Camera->set(CV_CAP_PROP_FRAME_WIDTH, settings.cameraResolution.Width);
    Camera->set(CV_CAP_PROP_FRAME_HEIGHT, settings.cameraResolution.Height);
    ProgramSettings = settings;
}

void CameraThread::run()
{
    stopWorking = false;
    cv::Mat *frame = new cv::Mat();
    cv::Mat *orig = new cv::Mat();

    while(!stopWorking)
    {
        if (!Camera->read(*frame))
        {
            emit Error();
            return;
        }
        frame->copyTo(*orig);
        drawROIRect(frame);
        emit Ready(frame, orig);
    }
    Camera->release();
}

void CameraThread::stop()
{
    stopWorking = true;
}

void CameraThread::drawROIRect(cv::Mat *frame)
{
    cv::Point RectPoint1(frame->cols/2, frame->rows/2);
    RectPoint1.x -= ProgramSettings.activeRegionSize.Width/2;
    RectPoint1.y -= ProgramSettings.activeRegionSize.Height/2;
    cv::Point RectPoint2;
    RectPoint2.x = RectPoint1.x + ProgramSettings.activeRegionSize.Width;
    RectPoint2.y = RectPoint1.y + ProgramSettings.activeRegionSize.Height;
    cv::rectangle(*frame, RectPoint1, RectPoint2, cv::Scalar(255,0,0));
}
