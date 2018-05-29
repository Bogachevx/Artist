#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QDebug>
#include <fstream>
#include "structs.h"
#include <opencv2/highgui.hpp>

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    void LoadSettings(SettingsStruct settings);
    ~Settings();

private:
    void ApplySettings();
    void SaveSettings(SettingsStruct settings);
    SettingsStruct SavedSettings;
    Ui::Settings *ui;

signals:
    void Apply(SettingsStruct settings);
    void EmitUpdate(int *, int *, int *, int*, int*);

public slots:
    void ButtonApplyClicked();
    void ButtonCancelClicked();
    void ApproxEpsilonValueChanged(int val);
    void Update();
};

#endif // SETTINGS_H
