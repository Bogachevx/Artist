#include "pointsmap.h"

PointsMap::PointsMap(std::vector<std::vector<cv::Point>> cont)
{
    Contours = cont;
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
    //UDP_Send(Contours.s);
    for (uint i = 0; i < Points.size(); i++)
    {
        UDP_Send(Points[i].toUtf8());
    }
}

void PointsMap::UDP_Send(QByteArray datagram)
{
    udpSocket->writeDatagram(datagram, QHostAddress::Broadcast, 49152);
}

void PointsMap::addPoint(cv::Point P, bool upstate)
{
    int dz = upstate?10:0;
    Points.push_back(QString::number(P.x) + ";" +
            QString::number(P.y) + ";" + QString::number(dz) + "\n");
}
