/****************************************************************************
** Meta object code from reading C++ file 'SubjectsForm.h'
**
** Created: Tue 8. Dec 16:02:58 2009
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/Subjects/SubjectsForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SubjectsForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SubjectsForm[] = {

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
      14,   13,   13,   13, 0x08,
      28,   13,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,
      57,   13,   13,   13, 0x08,
      71,   13,   13,   13, 0x08,
      86,   13,   13,   13, 0x08,
     107,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SubjectsForm[] = {
    "SubjectsForm\0\0saveSubject()\0addSubject()\0"
    "deleteSubject()\0enableGroup()\0"
    "disableGroup()\0enableRemoveButton()\0"
    "disableRemoveButton()\0"
};

const QMetaObject SubjectsForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SubjectsForm,
      qt_meta_data_SubjectsForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SubjectsForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SubjectsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SubjectsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SubjectsForm))
        return static_cast<void*>(const_cast< SubjectsForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int SubjectsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveSubject(); break;
        case 1: addSubject(); break;
        case 2: deleteSubject(); break;
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
