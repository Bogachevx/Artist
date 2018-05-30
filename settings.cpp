#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window
    | Qt::WindowMinimizeButtonHint);
    this->setFixedSize(this->size());
}

void Settings::LoadSettings(SettingsStruct settings)
{

    for (int i = 0; i < 10; i++)
    {
        ui->CameraAddress->addItem(QString::number(i));
    }
    for (int i = 3; i < 10; i = i + 2)
    {
        ui->BlurValue->addItem(QString::number(i));
    }
    ui->CameraAddress->setCurrentIndex(settings.cameraAddress);
    ui->CameraWidth->setText(QString::number(settings.cameraResolution.Width));
    ui->CameraHeight->setText(QString::number(settings.cameraResolution.Height));
    ui->ActiveRegionWidth->setText(QString::number(settings.activeRegionSize.Width));
    ui->ActveRegionHeight->setText(QString::number(settings.activeRegionSize.Height));
    ui->PaperWidth->setText(QString::number(settings.paperSize.Width));
    ui->PaperHeight->setText(QString::number(settings.paperSize.Height));
    ui->Threshold1->setValue(settings.processSettings.Threshold1);
    ui->Threshold2->setValue(settings.processSettings.Threshold2);
    ui->BlurValue->setCurrentIndex((int)(settings.blurValue/2) - 1);
    ui->ApproxEpsilon->setValue(settings.approxSize);
    ui->MinContLen->setValue(settings.minContLen);
    ui->label_12->setText(QString::number(ui->ApproxEpsilon->value()/100.0));
    SavedSettings = settings;
}

Settings::~Settings()
{
    delete ui;
}

void Settings::ApplySettings()
{
    SettingsStruct settings(ui->CameraAddress->currentText().toInt(),
                            mSize(ui->CameraWidth->text().toInt(), ui->CameraHeight->text().toInt()),
                            mSize(ui->ActiveRegionWidth->text().toInt(), ui->ActveRegionHeight->text().toInt()),
                            mSize(ui->PaperWidth->text().toInt(), ui->PaperHeight->text().toInt()),
                            mProcessSettings(ui->Threshold1->value(), ui->Threshold2->value()),
                            ui->BlurValue->currentText().toInt(), ui->ApproxEpsilon->value(),
                            ui->MinContLen->value());
    emit Apply(settings);
    SaveSettings(settings);
}

void Settings::SaveSettings(SettingsStruct settings)
{
    std::ofstream fout("settings.dat");

    fout << settings.cameraAddress << std::endl <<
            settings.cameraResolution.Width << std::endl <<
            settings.cameraResolution.Height << std::endl <<
            settings.activeRegionSize.Width << std::endl <<
            settings.activeRegionSize.Height << std::endl <<
            settings.paperSize.Width << std::endl <<
            settings.paperSize.Height << std::endl <<
            settings.processSettings.Threshold1 << std::endl <<
            settings.processSettings.Threshold2 << std::endl <<
            settings.blurValue << std::endl <<
            settings.approxSize << std::endl <<
            settings.minContLen << std::endl;
    fout.close();
}

void Settings::Update()
{
    int thresh1 = ui->Threshold1->value();
    int thresh2 = ui->Threshold2->value();
    int blur = ui->BlurValue->currentText().toInt();
    int appr = ui->ApproxEpsilon->value();
    int mcl = ui->MinContLen->value();
    emit EmitUpdate(&thresh1, &thresh2, &blur, &appr, &mcl);
}

void Settings::ButtonApplyClicked()
{
    ApplySettings();
    this->disconnect();
    close();
}

void Settings::ButtonCancelClicked()
{
    LoadSettings(SavedSettings);
    this->disconnect();
    close();
}

void Settings::ApproxEpsilonValueChanged(int val)
{
    ui->label_12->setText(QString::number(val/100.0));
}


