/****************************************************************************
** Meta object code from reading C++ file 'knxGateway.h'
**
** Created: Fri 9. Mar 20:28:39 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../knxGateway.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'knxGateway.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KnxGateway[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x05,
      56,   36,   11,   11, 0x05,
      85,   75,   11,   11, 0x05,
     104,   98,   11,   11, 0x05,
     169,  147,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     189,   11,   11,   11, 0x0a,
     204,   11,   11,   11, 0x0a,
     216,   11,   11,   11, 0x0a,
     230,   11,   11,   11, 0x0a,
     251,  246,   11,   11, 0x0a,
     266,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_KnxGateway[] = {
    "KnxGateway\0\0evtData\0Output(QString)\0"
    "socketError,message\0error(int,QString)\0"
    "logString\0Log(QString)\0state\0"
    "KnxIpState(KnxGateway::en_knxGatewayState)\0"
    "notifyType,notifyData\0Notify(int,QString)\0"
    "onUdpControl()\0onUdpData()\0onHeartBeat()\0"
    "onDataTimeout()\0data\0Input(QString)\0"
    "AllQuit()\0"
};

void KnxGateway::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KnxGateway *_t = static_cast<KnxGateway *>(_o);
        switch (_id) {
        case 0: _t->Output((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->Log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->KnxIpState((*reinterpret_cast< KnxGateway::en_knxGatewayState(*)>(_a[1]))); break;
        case 4: _t->Notify((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->onUdpControl(); break;
        case 6: _t->onUdpData(); break;
        case 7: _t->onHeartBeat(); break;
        case 8: _t->onDataTimeout(); break;
        case 9: _t->Input((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->AllQuit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KnxGateway::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KnxGateway::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KnxGateway,
      qt_meta_data_KnxGateway, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KnxGateway::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KnxGateway::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KnxGateway::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KnxGateway))
        return static_cast<void*>(const_cast< KnxGateway*>(this));
    return QObject::qt_metacast(_clname);
}

int KnxGateway::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void KnxGateway::Output(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KnxGateway::error(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KnxGateway::Log(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KnxGateway::KnxIpState(KnxGateway::en_knxGatewayState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KnxGateway::Notify(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
