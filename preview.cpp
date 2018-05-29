#include "preview.h"
#include "ui_preview.h"

Preview::Preview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Preview)
{
    ui->setupUi(this);
}

void Preview::setImage(cv::Mat image)
{
    cv::Size size = image.size();
    this->setFixedSize(size.width, size.height);
    ui->PreviewImage->resize(size.width, size.height);
    ui->PreviewImage->setPixmap(QPixmap::fromImage(QImage((unsigned char*) image.data,
                image.cols, image.rows, QImage::Format_RGB888)));

    QDesktopWidget *d = QApplication::desktop();
    int cur_x = d->width();     // returns desktop width
    int x = cur_x - this->width() - 5;
    this->move(x, 0);
}

Preview::~Preview()
{
    delete ui;
}
