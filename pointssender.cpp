#include "pointssender.h"

PointsSender::PointsSender(std::vector<std::vector<cv::Point>> cont)
{
    Contours = cont;
}

void PointsSender::UDP_Send(QByteArray datagram)
{
    udpSocket->writeDatagram(datagram, QHostAddress::Broadcast, 49152);
    QThread::msleep(50);
}

void PointsSender::addPoint(cv::Point P, bool upstate)
{
    int dz = upstate?10:0;
    Points.push_back(QString::number(P.x) + ":" +
                     QString::number(P.y) + ":" + QString::number(dz) + ":\n");
}

void PointsSender::run()
{
    for (uint i = 0; i < Contours.size(); i++)
    {
        addPoint(Contours[i][0], true);
        for (uint j = 0; j < Contours[i].size(); j++)
        {
            addPoint(Contours[i][j], false);
        }
        addPoint(Contours[i][Contours[i].size()-1], true);
    }
    udpSocket = new QUdpSocket();
    qDebug() << Points.size();
    UDP_Send(QByteArray::number(Points.size()));
    for (uint i = 0; i < Points.size(); i++)
    {
        if (!isStopped)
        {
            emit sendPercent(i*100/Points.size());
            UDP_Send(Points[i].toUtf8());
            qDebug() << Points[i];
        }
        else
        {
            break;
        }
    }
    emit sendPercent(100);
    UDP_Send(QByteArray::fromStdString("-5"));
}

void PointsSender::stop()
{
    isStopped = true;
}

