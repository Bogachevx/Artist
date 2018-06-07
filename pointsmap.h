#ifndef POINTSMAP_H
#define POINTSMAP_H

#include <opencv2/core.hpp>
#include <QString>
#include <QtNetwork/QUdpSocket>

class PointsMap
{
public:
    PointsMap(std::vector<std::vector<cv::Point>> cont);
    void UDP_Send(QByteArray datagram);
private:
    std::vector<std::vector<cv::Point>> Contours;
    std::vector<QString> Points;
    QUdpSocket *udpSocket;
    void addPoint(cv::Point P, bool upstate);

};

#endif // POINTSMAP_H
