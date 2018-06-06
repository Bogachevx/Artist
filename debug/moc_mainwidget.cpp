/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
    QByteArrayData data[22];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 20), // "ButtonCaptureClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "ButtonStartStopClicked"
QT_MOC_LITERAL(4, 56, 21), // "ButtonSettingsClicked"
QT_MOC_LITERAL(5, 78, 17), // "ButtonDrawClicked"
QT_MOC_LITERAL(6, 96, 17), // "ButtonLoadClicked"
QT_MOC_LITERAL(7, 114, 23), // "cancelDrawButtonClicked"
QT_MOC_LITERAL(8, 138, 23), // "processPendingDatagrams"
QT_MOC_LITERAL(9, 162, 19), // "convertMatToQPixmap"
QT_MOC_LITERAL(10, 182, 7), // "cv::Mat"
QT_MOC_LITERAL(11, 190, 3), // "img"
QT_MOC_LITERAL(12, 194, 15), // "SettingsApplied"
QT_MOC_LITERAL(13, 210, 14), // "SettingsStruct"
QT_MOC_LITERAL(14, 225, 8), // "settings"
QT_MOC_LITERAL(15, 234, 10), // "FrameReady"
QT_MOC_LITERAL(16, 245, 8), // "cv::Mat*"
QT_MOC_LITERAL(17, 254, 5), // "frame"
QT_MOC_LITERAL(18, 260, 4), // "orig"
QT_MOC_LITERAL(19, 265, 6), // "Update"
QT_MOC_LITERAL(20, 272, 4), // "int*"
QT_MOC_LITERAL(21, 277, 5) // "Error"

    },
    "MainWidget\0ButtonCaptureClicked\0\0"
    "ButtonStartStopClicked\0ButtonSettingsClicked\0"
    "ButtonDrawClicked\0ButtonLoadClicked\0"
    "cancelDrawButtonClicked\0processPendingDatagrams\0"
    "convertMatToQPixmap\0cv::Mat\0img\0"
    "SettingsApplied\0SettingsStruct\0settings\0"
    "FrameReady\0cv::Mat*\0frame\0orig\0Update\0"
    "int*\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      15,    2,   87,    2, 0x08 /* Private */,
      19,    5,   92,    2, 0x08 /* Private */,
      21,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QPixmap, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20, 0x80000000 | 20, 0x80000000 | 20, 0x80000000 | 20,    2,    2,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWidget *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ButtonCaptureClicked(); break;
        case 1: _t->ButtonStartStopClicked(); break;
        case 2: _t->ButtonSettingsClicked(); break;
        case 3: _t->ButtonDrawClicked(); break;
        case 4: _t->ButtonLoadClicked(); break;
        case 5: _t->cancelDrawButtonClicked(); break;
        case 6: _t->processPendingDatagrams(); break;
        case 7: { QPixmap _r = _t->convertMatToQPixmap((*reinterpret_cast< cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->SettingsApplied((*reinterpret_cast< SettingsStruct(*)>(_a[1]))); break;
        case 9: _t->FrameReady((*reinterpret_cast< cv::Mat*(*)>(_a[1])),(*reinterpret_cast< cv::Mat*(*)>(_a[2]))); break;
        case 10: _t->Update((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 11: _t->Error(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget.data,
      qt_meta_data_MainWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
