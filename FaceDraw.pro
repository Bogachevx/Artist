#-------------------------------------------------
#
# Project created by QtCreator 2018-05-27T20:37:26
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FaceDraw
TEMPLATE = app
requires(qtConfig(udpsocket))
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

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
    pointsmap.cpp

HEADERS += \
    mainwidget.h \
    settings.h \
    structs.h \
    camerathread.h \
    pointsmap.h

FORMS += \
    mainwidget.ui \
    settings.ui

RESOURCES += \
    resources.qrc
