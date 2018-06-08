#ifndef POINTSMAP_H
#define POINTSMAP_H

#include <opencv2/core.hpp>
#include <QString>
#include <QThread>
#include <QtConcurrent/QtConcurrent>
#include <QFuture>
#include <QProgressBar>
#include <QtNetwork/QUdpSocket>
#include <opencv2/core.hpp>

#include "drawprocess.h"

class PointsSender : public QThread
{
    Q_OBJECT
public:
    PointsSender(std::vector<std::vector<cv::Point>> cont);
    void UDP_Send(QByteArray datagram);
private:
    std::vector<std::vector<cv::Point>> Contours;
    std::vector<QString> Points;
    QUdpSocket *udpSocket;
    bool isStopped = false;
    QProgressBar *pb;
    void addPoint(cv::Point P, bool upstate);
protected:
    void run();

public:
    void stop();

signals:
    void sendPercent(int);
};

#endif // POINTSMAP_H
