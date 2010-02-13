/****************************************************************************
** Meta object code from reading C++ file 'cursosform.h'
**
** Created
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/cursos/cursosform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cursosform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CursosForm[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      30,   11,   11,   11, 0x0a,
      44,   11,   11,   11, 0x0a,
      55,   11,   11,   11, 0x08,
      73,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     113,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CursosForm[] = {
    "CursosForm\0\0saveFormChanges()\0"
    "removeGrade()\0addGrade()\0enableEditGroup()\0"
    "enableDeleteButton()\0disableEditGroup()\0"
    "disableDeleteButton()\0"
};

const QMetaObject CursosForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CursosForm,
      qt_meta_data_CursosForm, 0 }
};

const QMetaObject *CursosForm::metaObject() const
{
    return &staticMetaObject;
}

void *CursosForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CursosForm))
        return static_cast<void*>(const_cast< CursosForm*>(this));
    if (!strcmp(_clname, "Ui::CursosForm"))
        return static_cast< Ui::CursosForm*>(const_cast< CursosForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int CursosForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveFormChanges(); break;
        case 1: removeGrade(); break;
        case 2: addGrade(); break;
        case 3: enableEditGroup(); break;
        case 4: enableDeleteButton(); break;
        case 5: disableEditGroup(); break;
        case 6: disableDeleteButton(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
