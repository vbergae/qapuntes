/****************************************************************************
** Meta object code from reading C++ file 'GradesForm.h'
**
** Created: Tue 8. Dec 16:02:55 2009
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/Grades/GradesForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GradesForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GradesForm[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      24,   11,   11,   11, 0x08,
      35,   11,   11,   11, 0x08,
      49,   11,   11,   11, 0x08,
      63,   11,   11,   11, 0x08,
      78,   11,   11,   11, 0x08,
      99,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GradesForm[] = {
    "GradesForm\0\0saveGrade()\0addGrade()\0"
    "deleteGrade()\0enableGroup()\0disableGroup()\0"
    "enableRemoveButton()\0disableRemoveButton()\0"
};

const QMetaObject GradesForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GradesForm,
      qt_meta_data_GradesForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GradesForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GradesForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GradesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GradesForm))
        return static_cast<void*>(const_cast< GradesForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int GradesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveGrade(); break;
        case 1: addGrade(); break;
        case 2: deleteGrade(); break;
        case 3: enableGroup(); break;
        case 4: disableGroup(); break;
        case 5: enableRemoveButton(); break;
        case 6: disableRemoveButton(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
