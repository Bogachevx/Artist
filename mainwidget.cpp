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
    udpSocket = new QUdpSocket();
    udpRecvSocket = new QUdpSocket();
    udpRecvSocket->bind(49153, QUdpSocket::ShareAddress);
    connect(udpRecvSocket, SIGNAL(readyRead()),
            this, SLOT(processPendingDatagrams()));
    recievedData = "";

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

    cv::Rect rect(RectPoint1, RectPoint2);
    rect.x = (rect.y < 0)?20:rect.x;
    rect.y = (rect.y < 0)?20:rect.y;
    rect.width = (rect.x + rect.width < frame->cols)?rect.width:frame->cols - rect.x - 5;
    rect.height = (rect.y + rect.height < frame->rows)?rect.height:frame->rows - rect.y - 5;

    return rect;
}

void MainWidget::ProcessImage()
{

    cv::Mat temp(Frame, getROIRect(&Frame));
    cv::Mat ROI = temp.clone();
    std::vector<std::vector<cv::Point>> contours;
    std::vector<std::vector<cv::Point>> smallcontours;
    double scaleX = (double)ProgramSettings.paperSize.Width/ ROI.cols;
    double scaleY = (double)ProgramSettings.paperSize.Height/ ROI.rows;
    double scale = 0;

    if (scaleX < 1 || scaleY < 1)
    {
        scale = (scaleX < scaleY) ? scaleX : scaleY;
    }
    else
    {
        scale = (scaleX > scaleY) ? scaleX : scaleY;
    }
    qDebug() << scale;
    cv::cvtColor(ROI, ROI, CV_BGR2GRAY);
    cv::medianBlur(ROI, ROI, ProgramSettings.blurValue);
    cv::Canny(ROI, ROI, ProgramSettings.processSettings.Threshold1,  ProgramSettings.processSettings.Threshold2);
    cv::findContours(ROI, contours, CV_RETR_TREE, CV_CHAIN_APPROX_NONE);
    cv::cvtColor(ROI, ROI, CV_GRAY2RGB);

    ROI = ROI*0;
    int previewSizew = (ProgramSettings.paperSize.Width/20)*20;
    int previewSizeh = (ProgramSettings.paperSize.Height/20)*20;
    //contours = contours;
    cv::Mat ROIScaled = cv::Mat::zeros(cv::Size(previewSizew, previewSizeh), CV_8UC3);
    for (uint i = 0; i < contours.size(); i++)
    {
        cv::approxPolyDP(contours[i], contours[i], ProgramSettings.approxSize/100.0, true);
        if ((int)contours[i].size() >= ProgramSettings.minContLen)
        {
            cv::drawContours(ROI, contours, i, cv::Scalar(255,255,255));

            for (uint j = 0; j < contours[i].size(); j++)
            {
                contours[i][j].x = (int)((double)contours[i][j].x * scale);
                contours[i][j].y = (int)((double)contours[i][j].y * scale);
            }
            std::vector<cv::Point> temp;
            for (uint t = 0; t < contours[i].size()/2; t++)
            {
                temp.push_back(contours[i][t]);
            }
            smallcontours.push_back(contours[i]);
            cv::drawContours(ROIScaled, contours, i, cv::Scalar(255,255,255));
        }
    }
    //cv::imshow("ewe", ROIScaled);
    Contours = smallcontours;
    ui->ImageView->setPixmap(QPixmap::fromImage(QImage((unsigned char*) ROI.data,
                ROI.cols, ROI.rows, QImage::Format_RGB888)));
}

void MainWidget::UDP_Send(QByteArray datagram)
{
    udpSocket->writeDatagram(datagram, QHostAddress::Broadcast, 49152);
    QThread::msleep(50);
}

void MainWidget::keyPressEvent(QKeyEvent *e)
{
    switch (e->key())
    {
    case Qt::Key_Return:
    {
        if (ui->ButtonCapture->isEnabled())
        {
            ButtonCaptureClicked();
        }
        break;
    }
    }
    if (isStarted && !e->isAutoRepeat())
    {
        switch (e->key())
        {
        case Qt::Key_Up:
        case Qt::Key_W:
        {
            UDP_Send("U");
            break;
        }

        case Qt::Key_Right:
        case Qt::Key_D:
        {
            UDP_Send("R");
            break;
        }

        case Qt::Key_Down:
        case Qt::Key_S:
        {
            UDP_Send("D");
            break;
        }

        case Qt::Key_Left:
        case Qt::Key_A:
        {
            UDP_Send("L");
            break;
        }
        }
    }
}

void MainWidget::keyReleaseEvent(QKeyEvent *e)
{
    if (isStarted && !e->isAutoRepeat())
    {
        UDP_Send("B");
    }
}

void MainWidget::ButtonCaptureClicked()
{
    isCaptured = true;
    ButtonStartStopClicked();
    cv::imwrite("cap.jpg", Frame);
    ProcessImage();
    ui->ButtonDraw->setEnabled(true);
}

void MainWidget::ButtonStartStopClicked()
{    
    if (!isStarted)
    {
        UDP_Send(QByteArray::number(-1));

        isCaptured = false;
        isDrawing = false;

        camera = new CameraThread(ProgramSettings.cameraAddress);
        connect(camera, SIGNAL(Ready(cv::Mat * ,cv::Mat *)), this, SLOT(FrameReady(cv::Mat * ,cv::Mat *)));
        connect(camera, SIGNAL(Error()), this, SLOT(Error()));

        camera->setCameraResolution(ProgramSettings.cameraResolution);
        camera->setProgramSettings(ProgramSettings);
        camera->start();
        qDebug() << camera->isRunning();
        ui->ButtonStartStop->setIcon(QIcon(":res/icons/denied.ico"));
        ui->ButtonCapture->setEnabled(true);
        ui->ButtonDraw->setEnabled(false);
    }
    else
    {
        UDP_Send(QByteArray::number(-2));
        disconnect(camera, SIGNAL(Ready(cv::Mat * ,cv::Mat *)), this, SLOT(FrameReady(cv::Mat * ,cv::Mat *)));
        disconnect(camera, SIGNAL(Error()), this, SLOT(Error()));

        camera->stop();
        camera->wait();

        delete(camera);
        qDebug() << camera->isRunning();
        camera = nullptr;

        ui->ButtonStartStop->setIcon(QIcon(":res/icons/play.ico"));
        ui->ButtonCapture->setEnabled(false);
    }
    isStarted = !isStarted;

}

void MainWidget::ButtonSettingsClicked()
{

    SettingsWindow = new Settings();
    SettingsWindow->move(0,0);

    SettingsWindow->LoadSettings(ProgramSettings);

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
    SettingsWindow->show();
}

void MainWidget::ButtonDrawClicked()
{
        dp = new DrawProcess();
        UDP_Send(QByteArray::number(-3));
        pointsSender = new PointsSender(Contours);
        pointsSender->start();

        connect(pointsSender, SIGNAL(sendPercent(int)), dp, SLOT(setProgressBarValue(int)));
        connect(dp, SIGNAL(cancelButtonClicked()), this, SLOT(cancelDrawButtonClicked()));
        dp->show();
        isDrawing = true;
}

void MainWidget::cancelDrawButtonClicked()
{
    pointsSender->stop();
    dp->close();
    QThread::msleep(100);
    delete(dp);
    delete(pointsSender);   
    UDP_Send(QByteArray::number(-10));

}
/*
void MainWidget::processPendingDatagrams()
{
    QByteArray datagram;
    while (udpRecvSocket->hasPendingDatagrams()) {
        datagram.resize(int(udpRecvSocket->pendingDatagramSize()));
        udpRecvSocket->readDatagram(datagram.data(), datagram.size());
        QString recvData;
        recvData = datagram.constData();
        qDebug() << recvData;
        //if (recvData == "5")
        {
            recievedData = "q";
        }
        //udpRecvSocket->
        //recievedData = datagram.constData();
        //statusLabel->setText(statusLabel->text() + tr("Received datagram: \"%1\"")
        //                     .arg(datagram.constData()));
    }
}
*/
void MainWidget::SettingsApplied(SettingsStruct settings)
{
    ProgramSettings = settings;
}

void MainWidget::FrameReady(cv::Mat *frame, cv::Mat *orig)
{

    Frame = orig->clone();
    cv::cvtColor(*frame, *frame, CV_BGR2RGB);

    if (!isCaptured)
    {
        ui->ImageView->setPixmap(QPixmap::fromImage(QImage((unsigned char*) frame->data,
                                                       frame->cols, frame->rows, QImage::Format_RGB888)));
    }
}

void MainWidget::Update(int *thresh1, int *thresh2, int *blur, int *as, int *mcl)
{
    if (isCaptured)
    {

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
