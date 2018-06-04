
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

TARGET = FaceDraw
TEMPLATE = app
requires(qtConfig(udpsocket))
DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH += C:\opencv_build\install\include

LIBS += C:\\opencv_build\\bin\\libopencv_core2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_contrib2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_features2d2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_flann2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_highgui2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_objdetect2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_video2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_legacy2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_calib3d2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_imgproc2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_ml2413.dll
LIBS += C:\\opencv_build\\bin\\libopencv_nonfree2413.dll
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
