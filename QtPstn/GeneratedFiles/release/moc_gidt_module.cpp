/****************************************************************************
** Meta object code from reading C++ file 'gidt_module.h'
**
** Created: Fri 9. Mar 23:04:37 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtKnxModule/gidt_module.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gidt_module.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GidtModule[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GidtModule[] = {
    "GidtModule\0\0Output(QString)\0OnTimer()\0"
};

void GidtModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GidtModule *_t = static_cast<GidtModule *>(_o);
        switch (_id) {
        case 0: _t->Output((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OnTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GidtModule::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GidtModule::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GidtModule,
      qt_meta_data_GidtModule, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GidtModule::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GidtModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GidtModule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GidtModule))
        return static_cast<void*>(const_cast< GidtModule*>(this));
    return QThread::qt_metacast(_clname);
}

int GidtModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GidtModule::Output(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
