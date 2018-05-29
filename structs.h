#ifndef SETTINGSSTRUCT_H
#define SETTINGSSTRUCT_H

struct mSize
{
    int Width;
    int Height;
    mSize(int w, int h) :
        Width(w), Height(h) {}
    mSize() {}
};

struct mProcessSettings
{
    int Threshold1;
    int Threshold2;

    mProcessSettings(int tr1, int tr2) :
        Threshold1(tr1), Threshold2(tr2) {}
    mProcessSettings() {}
};

struct SettingsStruct
{
    int cameraAddress;
    mSize cameraResolution;
    mSize activeRegionSize;
    mSize paperSize;
    mProcessSettings processSettings;
    int blurValue;
    int approxSize;
    int minContLen;
    SettingsStruct(int ca, mSize cr, mSize ars, mSize ps, mProcessSettings prs, int bv, int as, int mcl) :
    cameraAddress(ca), cameraResolution(cr), activeRegionSize(ars), paperSize(ps),
    processSettings(prs), blurValue(bv), approxSize(as), minContLen(mcl){}
    SettingsStruct(){}
};

#endif // SETTINGSSTRUCT_H
