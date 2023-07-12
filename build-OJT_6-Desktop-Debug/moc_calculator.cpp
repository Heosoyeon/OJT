/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../OJT_6/calculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calculator_t {
    QByteArrayData data[11];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calculator_t qt_meta_stringdata_Calculator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Calculator"
QT_MOC_LITERAL(1, 11, 19), // "input_stringChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "resultChanged"
QT_MOC_LITERAL(4, 46, 3), // "add"
QT_MOC_LITERAL(5, 50, 8), // "subtract"
QT_MOC_LITERAL(6, 59, 8), // "multiply"
QT_MOC_LITERAL(7, 68, 6), // "divide"
QT_MOC_LITERAL(8, 75, 9), // "calculate"
QT_MOC_LITERAL(9, 85, 6), // "result"
QT_MOC_LITERAL(10, 92, 12) // "input_string"

    },
    "Calculator\0input_stringChanged\0\0"
    "resultChanged\0add\0subtract\0multiply\0"
    "divide\0calculate\0result\0input_string"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x02 /* Public */,
       5,    0,   52,    2, 0x02 /* Public */,
       6,    0,   53,    2, 0x02 /* Public */,
       7,    0,   54,    2, 0x02 /* Public */,
       8,    0,   55,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
       9, QMetaType::Double, 0x00495103,
      10, QMetaType::QVariant, 0x00495103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->input_stringChanged(); break;
        case 1: _t->resultChanged(); break;
        case 2: { int _r = _t->add();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->subtract();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->multiply();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->divide();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->calculate();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Calculator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculator::input_stringChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Calculator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calculator::resultChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Calculator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getResult(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->getInput_string(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Calculator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setResult(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setInput_string(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Calculator::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Calculator.data,
    qt_meta_data_Calculator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Calculator::input_stringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Calculator::resultChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
