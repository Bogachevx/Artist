#ifndef DRAWPROCESS_H
#define DRAWPROCESS_H

#include <QWidget>

namespace Ui {
class DrawProcess;
}

class DrawProcess : public QWidget
{
    Q_OBJECT

public:

    explicit DrawProcess(QWidget *parent = 0);
    ~DrawProcess();

private:
    Ui::DrawProcess *ui;

public slots:
    void ButtonCancelDrawClicked();
    void setProgressBarValue(int val);
signals:
    void cancelButtonClicked();
};

#endif // DRAWPROCESS_H
