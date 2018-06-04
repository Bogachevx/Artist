#include "drawprocess.h"
#include "ui_drawprocess.h"

void DrawProcess::setProgressBarValue(int val)
{
    ui->sendingProgress->setValue(val);

}

DrawProcess::DrawProcess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DrawProcess)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window
    | Qt::WindowMinimizeButtonHint);
    this->setFixedSize(this->size());
}


DrawProcess::~DrawProcess()
{
    delete ui;
}

void DrawProcess::ButtonCancelDrawClicked()
{
    emit cancelButtonClicked();
}
