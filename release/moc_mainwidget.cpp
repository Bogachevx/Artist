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
    QByteArrayData data[18];
    char stringdata0[227];
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
QT_MOC_LITERAL(6, 96, 23), // "ButtonCancelDrawClicked"
QT_MOC_LITERAL(7, 120, 17), // "ButtonLoadClicked"
QT_MOC_LITERAL(8, 138, 15), // "SettingsApplied"
QT_MOC_LITERAL(9, 154, 14), // "SettingsStruct"
QT_MOC_LITERAL(10, 169, 8), // "settings"
QT_MOC_LITERAL(11, 178, 6), // "Update"
QT_MOC_LITERAL(12, 185, 4), // "int*"
QT_MOC_LITERAL(13, 190, 10), // "FrameReady"
QT_MOC_LITERAL(14, 201, 8), // "cv::Mat*"
QT_MOC_LITERAL(15, 210, 5), // "frame"
QT_MOC_LITERAL(16, 216, 4), // "orig"
QT_MOC_LITERAL(17, 221, 5) // "Error"

    },
    "MainWidget\0ButtonCaptureClicked\0\0"
    "ButtonStartStopClicked\0ButtonSettingsClicked\0"
    "ButtonDrawClicked\0ButtonCancelDrawClicked\0"
    "ButtonLoadClicked\0SettingsApplied\0"
    "SettingsStruct\0settings\0Update\0int*\0"
    "FrameReady\0cv::Mat*\0frame\0orig\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      11,    5,   73,    2, 0x08 /* Private */,
      13,    2,   84,    2, 0x08 /* Private */,
      17,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,
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
        case 4: _t->ButtonCancelDrawClicked(); break;
        case 5: _t->ButtonLoadClicked(); break;
        case 6: _t->SettingsApplied((*reinterpret_cast< SettingsStruct(*)>(_a[1]))); break;
        case 7: _t->Update((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 8: _t->FrameReady((*reinterpret_cast< cv::Mat*(*)>(_a[1])),(*reinterpret_cast< cv::Mat*(*)>(_a[2]))); break;
        case 9: _t->Error(); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
