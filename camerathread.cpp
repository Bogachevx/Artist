#include "camerathread.h"

CameraThread::CameraThread(int cameraAddress)
{
    Camera = new cv::VideoCapture(cameraAddress);
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
            delete(frame);
            delete(orig);
            delete(Camera);
            break;
        }
        frame->copyTo(*orig);
        drawROIRect(frame);
        emit Ready(frame, orig);
    }
    if (Camera != nullptr)
    {
        Camera->release();
    }
}

void CameraThread::stop()
{
    stopWorking = true;
}

void CameraThread::setCameraResolution(mSize Resolution)
{
    Camera->set(CV_CAP_PROP_FRAME_WIDTH, Resolution.Width);
    Camera->set(CV_CAP_PROP_FRAME_HEIGHT, Resolution.Height);

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

void CameraThread::setProgramSettings(SettingsStruct settings)
{
    ProgramSettings = settings;
}

