#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    LoadSettings();
    isStarted = false;
    isCaptured = false;
    //Frame = nullptr;

    QDesktopWidget *d = QApplication::desktop();
    int cur_x = d->width();     // returns desktop width
    int cur_y = d->height();    // returns desktop height
    int sizew = cur_x - ui->ImageView->x() - 5;
    int sizeh = cur_y - ui->ImageView->y() - 5;
    ui->ImageView->resize(sizew, sizeh);
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::LoadSettings()
{
    std::ifstream fin("settings.dat");
    fin >> ProgramSettings.cameraAddress >>
            ProgramSettings.cameraResolution.Width >>
            ProgramSettings.cameraResolution.Height >>
            ProgramSettings.activeRegionSize.Width >>
            ProgramSettings.activeRegionSize.Height >>
            ProgramSettings.paperSize.Width >>
            ProgramSettings.paperSize.Height >>
            ProgramSettings.processSettings.Threshold1 >>
            ProgramSettings.processSettings.Threshold2 >>
            ProgramSettings.blurValue >>
            ProgramSettings.approxSize >>
            ProgramSettings.minContLen;
    fin.close();
    qDebug() << "SettingsLoaded";

}

cv::Rect MainWidget::getROIRect(cv::Mat *frame)
{

    cv::Point RectPoint1((int)(frame->cols/2), (int)(frame->rows/2));
    RectPoint1.x -= ProgramSettings.activeRegionSize.Width/2;
    RectPoint1.y -= ProgramSettings.activeRegionSize.Height/2;
    cv::Point RectPoint2;
    RectPoint2.x = RectPoint1.x + ProgramSettings.activeRegionSize.Width;
    RectPoint2.y = RectPoint1.y + ProgramSettings.activeRegionSize.Height;

    RectPoint1.x =(RectPoint1.x/20)*20;
    RectPoint1.y =(RectPoint1.y/20)*20;
    RectPoint2.x =(RectPoint2.x/20)*20;
    RectPoint2.y =(RectPoint2.y/20)*20;

    return cv::Rect(RectPoint1, RectPoint2);
}

void MainWidget::ProcessImage()
{

    cv::Mat temp(Frame, getROIRect(&Frame));
    cv::Mat ROI = temp.clone();
    std::vector<std::vector<cv::Point>> contours;

    double scaleX = (double)ProgramSettings.paperSize.Width/ ROI.cols;
    double scaleY = (double)ProgramSettings.paperSize.Height/ ROI.rows;
    double scale;
    if (scaleX < 1 || scaleY < 1)
    {
        scale = (scaleX < scaleY) ? scaleX : scaleY;
        qDebug() << "Scale" << scale;
    }

    cv::cvtColor(ROI, ROI, CV_BGR2GRAY);
    cv::medianBlur(ROI, ROI, ProgramSettings.blurValue);
    cv::Canny(ROI, ROI, ProgramSettings.processSettings.Threshold1,  ProgramSettings.processSettings.Threshold2);
    cv::findContours(ROI, contours, CV_RETR_TREE, CV_CHAIN_APPROX_NONE);
    cv::cvtColor(ROI, ROI, CV_GRAY2RGB);

    ROI = ROI*0;
    int previewSizew = (ProgramSettings.paperSize.Width/20)*20;
    int previewSizeh = (ProgramSettings.paperSize.Height/20)*20;

    cv::Mat ROIScaled = cv::Mat::zeros(cv::Size(previewSizew, previewSizeh), CV_8UC3);
    for (uint i = 0; i < contours.size(); i++)
    {
        cv::approxPolyDP(contours[i], contours[i], ProgramSettings.approxSize/100.0, true);
        if (contours[i].size() >= ProgramSettings.minContLen)
        {
            cv::drawContours(ROI, contours, i, cv::Scalar(255,255,255));

            for (int j = 0; j < contours[i].size(); j++)
            {
                contours[i][j] *= scale;
            }
            cv::drawContours(ROIScaled, contours, i, cv::Scalar(255,255,255));
        }
    }

    Contours = contours;
    ui->ImageView->setPixmap(QPixmap::fromImage(QImage((unsigned char*) ROI.data,
                ROI.cols, ROI.rows, QImage::Format_RGB888)));

    Preview *preview = new Preview();
    preview->setImage(ROIScaled);
    preview->show();
    //preview->setImageSize(ROIScaled.size());
}

void MainWidget::ButtonCaptureClicked()
{
    isCaptured = true;
    qDebug() << "ButtonCaptureClicked";
    ButtonStartStopClicked();
    ProcessImage();
    ui->ButtonDraw->setEnabled(true);
}

void MainWidget::ButtonStartStopClicked()
{    
    if (!isStarted)
    {
        qDebug() << "Camera started";
        isCaptured = false;
        camera = new CameraThread(ProgramSettings.cameraAddress);
        connect(camera, SIGNAL(Ready(cv::Mat * ,cv::Mat *)), this, SLOT(FrameReady(cv::Mat * ,cv::Mat *)));
        connect(camera, SIGNAL(Error()), this, SLOT(Error()));
        //disconnect(SettingsWindow, SIGNAL(EmitUpdate(int*,int*,int*)), this, SLOT(Update(int*,int*,int*)));

        camera->setCameraResolution(ProgramSettings.cameraResolution);
        camera->setProgramSettings(ProgramSettings);
        camera->start();

        ui->ButtonStartStop->setIcon(QIcon(":res/icons/denied.ico"));
        ui->ButtonCapture->setEnabled(true);
        ui->ButtonDraw->setEnabled(false);
    }
    else
    {
        disconnect(camera, SIGNAL(Ready(cv::Mat * ,cv::Mat *)), this, SLOT(FrameReady(cv::Mat * ,cv::Mat *)));
        disconnect(camera, SIGNAL(Error()), this, SLOT(Error()));

        camera->stop();
        camera->wait();
        delete(camera);
        camera = nullptr;

        ui->ButtonStartStop->setIcon(QIcon(":res/icons/play.ico"));
        ui->ButtonCapture->setEnabled(false);
        qDebug() << "Camera stopped";
    }
    isStarted = !isStarted;

}

void MainWidget::ButtonSettingsClicked()
{

    qDebug() << "ButonSettingsClicked";
    SettingsWindow = new Settings();
    SettingsWindow->move(0,0);
    connect(SettingsWindow, SIGNAL(Apply(SettingsStruct)),
            this, SLOT(SettingsApplied(SettingsStruct)));
    if (!isStarted && isCaptured)
    {
        connect(SettingsWindow, SIGNAL(EmitUpdate(int*,int*,int*,int*,int*)), this, SLOT(Update(int*,int*,int*,int*,int*)));
    }
    else
    {
        disconnect(SettingsWindow, SIGNAL(EmitUpdate(int*,int*,int*,int*,int*)), this, SLOT(Update(int*,int*,int*,int*,int*)));
    }
    SettingsWindow->LoadSettings(ProgramSettings);
    SettingsWindow->show();
}

void MainWidget::ButtonDrawClicked()
{
    qDebug() << "ButtonDrawClicked";
    PointsMap pm(Contours);
}

void MainWidget::SettingsApplied(SettingsStruct settings)
{

    qDebug() << "SettingsAppliedSlot";
    ProgramSettings = settings;
}

void MainWidget::FrameReady(cv::Mat *frame, cv::Mat *orig)
{
    //cv::Mat temp = orig->clone();
    //orig->copyTo(*Frame);
    //orig->copyTo(Frame);
    Frame = orig->clone();
    cv::cvtColor(*frame, *frame, CV_BGR2RGB);
    ui->ImageView->setPixmap(QPixmap::fromImage(QImage((unsigned char*) frame->data,
                                                       frame->cols, frame->rows, QImage::Format_RGB888)));
}

void MainWidget::Update(int *thresh1, int *thresh2, int *blur, int *as, int *mcl)
{
    if (isCaptured)
    {
        qDebug() << "Updated";

        ProgramSettings.processSettings.Threshold1 = *thresh1;
        ProgramSettings.processSettings.Threshold2 = *thresh2;
        ProgramSettings.blurValue = *blur;
        ProgramSettings.approxSize = *as;
        ProgramSettings.minContLen = *mcl;
        ProcessImage();
    }
}

void MainWidget::Error()
{
    ButtonStartStopClicked();
    QMessageBox::critical(0, "Error", "Cannot open camera!");

}
