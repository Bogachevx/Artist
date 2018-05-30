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
    QByteArrayData data[16];
    char stringdata0[185];
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
QT_MOC_LITERAL(6, 96, 15), // "SettingsApplied"
QT_MOC_LITERAL(7, 112, 14), // "SettingsStruct"
QT_MOC_LITERAL(8, 127, 8), // "settings"
QT_MOC_LITERAL(9, 136, 10), // "FrameReady"
QT_MOC_LITERAL(10, 147, 8), // "cv::Mat*"
QT_MOC_LITERAL(11, 156, 5), // "frame"
QT_MOC_LITERAL(12, 162, 4), // "orig"
QT_MOC_LITERAL(13, 167, 6), // "Update"
QT_MOC_LITERAL(14, 174, 4), // "int*"
QT_MOC_LITERAL(15, 179, 5) // "Error"

    },
    "MainWidget\0ButtonCaptureClicked\0\0"
    "ButtonStartStopClicked\0ButtonSettingsClicked\0"
    "ButtonDrawClicked\0SettingsApplied\0"
    "SettingsStruct\0settings\0FrameReady\0"
    "cv::Mat*\0frame\0orig\0Update\0int*\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       9,    2,   61,    2, 0x08 /* Private */,
      13,    5,   66,    2, 0x08 /* Private */,
      15,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,    2,    2,    2,    2,    2,
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
        case 4: _t->SettingsApplied((*reinterpret_cast< SettingsStruct(*)>(_a[1]))); break;
        case 5: _t->FrameReady((*reinterpret_cast< cv::Mat*(*)>(_a[1])),(*reinterpret_cast< cv::Mat*(*)>(_a[2]))); break;
        case 6: _t->Update((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5]))); break;
        case 7: _t->Error(); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
