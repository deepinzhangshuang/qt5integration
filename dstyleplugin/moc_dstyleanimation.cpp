/****************************************************************************
** Meta object code from reading C++ file 'dstyleanimation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dstyleanimation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dstyleanimation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dstyle__DStyleAnimation_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dstyle__DStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dstyle__DStyleAnimation_t qt_meta_stringdata_dstyle__DStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "dstyle::DStyleAnimation"
QT_MOC_LITERAL(1, 24, 5), // "start"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "dstyle::DStyleAnimation\0start\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dstyle__DStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void dstyle::DStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DStyleAnimation *_t = static_cast<DStyleAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dstyle::DStyleAnimation::staticMetaObject = {
    { &QAbstractAnimation::staticMetaObject, qt_meta_stringdata_dstyle__DStyleAnimation.data,
      qt_meta_data_dstyle__DStyleAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dstyle::DStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dstyle::DStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dstyle__DStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< DStyleAnimation*>(this));
    return QAbstractAnimation::qt_metacast(_clname);
}

int dstyle::DStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_dstyle__DProgressStyleAnimation_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dstyle__DProgressStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dstyle__DProgressStyleAnimation_t qt_meta_stringdata_dstyle__DProgressStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 31) // "dstyle::DProgressStyleAnimation"

    },
    "dstyle::DProgressStyleAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dstyle__DProgressStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void dstyle::DProgressStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dstyle::DProgressStyleAnimation::staticMetaObject = {
    { &DStyleAnimation::staticMetaObject, qt_meta_stringdata_dstyle__DProgressStyleAnimation.data,
      qt_meta_data_dstyle__DProgressStyleAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dstyle::DProgressStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dstyle::DProgressStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dstyle__DProgressStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< DProgressStyleAnimation*>(this));
    return DStyleAnimation::qt_metacast(_clname);
}

int dstyle::DProgressStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DStyleAnimation::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_dstyle__DNumberStyleAnimation_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dstyle__DNumberStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dstyle__DNumberStyleAnimation_t qt_meta_stringdata_dstyle__DNumberStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 29) // "dstyle::DNumberStyleAnimation"

    },
    "dstyle::DNumberStyleAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dstyle__DNumberStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void dstyle::DNumberStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dstyle::DNumberStyleAnimation::staticMetaObject = {
    { &DStyleAnimation::staticMetaObject, qt_meta_stringdata_dstyle__DNumberStyleAnimation.data,
      qt_meta_data_dstyle__DNumberStyleAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dstyle::DNumberStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dstyle::DNumberStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dstyle__DNumberStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< DNumberStyleAnimation*>(this));
    return DStyleAnimation::qt_metacast(_clname);
}

int dstyle::DNumberStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DStyleAnimation::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_dstyle__DBlendStyleAnimation_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dstyle__DBlendStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dstyle__DBlendStyleAnimation_t qt_meta_stringdata_dstyle__DBlendStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 28) // "dstyle::DBlendStyleAnimation"

    },
    "dstyle::DBlendStyleAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dstyle__DBlendStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void dstyle::DBlendStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dstyle::DBlendStyleAnimation::staticMetaObject = {
    { &DStyleAnimation::staticMetaObject, qt_meta_stringdata_dstyle__DBlendStyleAnimation.data,
      qt_meta_data_dstyle__DBlendStyleAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dstyle::DBlendStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dstyle::DBlendStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dstyle__DBlendStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< DBlendStyleAnimation*>(this));
    return DStyleAnimation::qt_metacast(_clname);
}

int dstyle::DBlendStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DStyleAnimation::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_dstyle__DScrollbarStyleAnimation_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dstyle__DScrollbarStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dstyle__DScrollbarStyleAnimation_t qt_meta_stringdata_dstyle__DScrollbarStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 32) // "dstyle::DScrollbarStyleAnimation"

    },
    "dstyle::DScrollbarStyleAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dstyle__DScrollbarStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void dstyle::DScrollbarStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dstyle::DScrollbarStyleAnimation::staticMetaObject = {
    { &DNumberStyleAnimation::staticMetaObject, qt_meta_stringdata_dstyle__DScrollbarStyleAnimation.data,
      qt_meta_data_dstyle__DScrollbarStyleAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *dstyle::DScrollbarStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dstyle::DScrollbarStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dstyle__DScrollbarStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< DScrollbarStyleAnimation*>(this));
    return DNumberStyleAnimation::qt_metacast(_clname);
}

int dstyle::DScrollbarStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DNumberStyleAnimation::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
