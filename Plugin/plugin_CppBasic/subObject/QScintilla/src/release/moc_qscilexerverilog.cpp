/****************************************************************************
** Meta object code from reading C++ file 'qscilexerverilog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Qsci/qscilexerverilog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscilexerverilog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS = QtMocHelpers::stringData(
    "QsciLexerVerilog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS_t qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16)   // "QsciLexerVerilog"
    },
    "QsciLexerVerilog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQsciLexerVerilogENDCLASS[] = {

 // content:
      11,       // revision
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

Q_CONSTINIT const QMetaObject QsciLexerVerilog::staticMetaObject = { {
    QMetaObject::SuperData::link<QsciLexer::staticMetaObject>(),
    qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQsciLexerVerilogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QsciLexerVerilog, std::true_type>
    >,
    nullptr
} };

void QsciLexerVerilog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QsciLexerVerilog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QsciLexerVerilog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQsciLexerVerilogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QsciLexer::qt_metacast(_clname);
}

int QsciLexerVerilog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciLexer::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
