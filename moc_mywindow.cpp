/****************************************************************************
** Meta object code from reading C++ file 'mywindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mywindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyWindow_t {
    QByteArrayData data[22];
    char stringdata0[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyWindow_t qt_meta_stringdata_MyWindow = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyWindow"
QT_MOC_LITERAL(1, 9, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(4, 47, 12), // "QMouseEvent*"
QT_MOC_LITERAL(5, 60, 5), // "event"
QT_MOC_LITERAL(6, 66, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(7, 84, 15), // "mousePressEvent"
QT_MOC_LITERAL(8, 100, 10), // "paintEvent"
QT_MOC_LITERAL(9, 111, 12), // "QPaintEvent*"
QT_MOC_LITERAL(10, 124, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(11, 156, 8), // "position"
QT_MOC_LITERAL(12, 165, 23), // "on_linia_button_clicked"
QT_MOC_LITERAL(13, 189, 23), // "on_okrag_button_clicked"
QT_MOC_LITERAL(14, 213, 24), // "on_elipsa_button_clicked"
QT_MOC_LITERAL(15, 238, 22), // "on_bezi_button_clicked"
QT_MOC_LITERAL(16, 261, 32), // "on_zapisz_beziego_button_clicked"
QT_MOC_LITERAL(17, 294, 19), // "on_bSkejany_clicked"
QT_MOC_LITERAL(18, 314, 29), // "on_zapisz_bSklejanego_clicked"
QT_MOC_LITERAL(19, 344, 30), // "on_dodaj_do_sklejanego_clicked"
QT_MOC_LITERAL(20, 375, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(21, 395, 7) // "checked"

    },
    "MyWindow\0on_exitButton_clicked\0\0"
    "mouseMoveEvent\0QMouseEvent*\0event\0"
    "mouseReleaseEvent\0mousePressEvent\0"
    "paintEvent\0QPaintEvent*\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_linia_button_clicked\0"
    "on_okrag_button_clicked\0"
    "on_elipsa_button_clicked\0"
    "on_bezi_button_clicked\0"
    "on_zapisz_beziego_button_clicked\0"
    "on_bSkejany_clicked\0on_zapisz_bSklejanego_clicked\0"
    "on_dodaj_do_sklejanego_clicked\0"
    "on_checkBox_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    1,   90,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       8,    1,   99,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,
      17,    0,  110,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,
      19,    0,  112,    2, 0x08 /* Private */,
      20,    1,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,

       0        // eod
};

void MyWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_exitButton_clicked(); break;
        case 1: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 5: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_linia_button_clicked(); break;
        case 7: _t->on_okrag_button_clicked(); break;
        case 8: _t->on_elipsa_button_clicked(); break;
        case 9: _t->on_bezi_button_clicked(); break;
        case 10: _t->on_zapisz_beziego_button_clicked(); break;
        case 11: _t->on_bSkejany_clicked(); break;
        case 12: _t->on_zapisz_bSklejanego_clicked(); break;
        case 13: _t->on_dodaj_do_sklejanego_clicked(); break;
        case 14: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MyWindow.data,
    qt_meta_data_MyWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MyWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
