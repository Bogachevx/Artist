
QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

win32: RC_ICONS = icons/flash.ico
win32:{
    VERSION = 1.0.0
    QMAKE_TARGET_COMPANY = "Robowizard"
    QMAKE_TARGET_PRODUCT = "Painter"
    QMAKE_TARGET_DESCRIPTION = "PC program for painting by using Kawasaki robots"
    QMAKE_TARGET_COPYRIGHT = "Bogachev Dmitrii"
}

TARGET = Artist
TEMPLATE = app
requires(qtConfig(udpsocket))
DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH += C:\opencv3_build\install\include

LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_core341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_features2d341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_flann341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_highgui341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_objdetect341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_video341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_videoio341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_calib3d341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_imgproc341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_ml341d.dll
LIBS += C:\\opencv3_build\\install\\x86\\mingw\\bin\\libopencv_imgcodecs341d.dll

SOURCES += \
        main.cpp \
    mainwidget.cpp \
    settings.cpp \
    camerathread.cpp \
    pointssender.cpp \
    drawprocess.cpp

HEADERS += \
    mainwidget.h \
    settings.h \
    structs.h \
    camerathread.h \
    pointssender.h \
    drawprocess.h

FORMS += \
    mainwidget.ui \
    settings.ui \
    drawprocess.ui

RESOURCES += \
    resources.qrc
