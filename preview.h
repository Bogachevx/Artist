#ifndef PREVIEW_H
#define PREVIEW_H

#include <QWidget>
#include <QDesktopWidget>
#include <opencv2/core.hpp>

namespace Ui {
class Preview;
}

class Preview : public QWidget
{
    Q_OBJECT

public:
    explicit Preview(QWidget *parent = 0);
    void setImage(cv::Mat image);
    ~Preview();

private:
    Ui::Preview *ui;
};

#endif // PREVIEW_H
