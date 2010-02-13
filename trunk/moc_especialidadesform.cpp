/****************************************************************************
** Meta object code from reading C++ file 'especialidadesform.h'
**
** Created
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/especialidades/especialidadesform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'especialidadesform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EspecialidadesForm[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      38,   19,   19,   19, 0x0a,
      59,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EspecialidadesForm[] = {
    "EspecialidadesForm\0\0saveFormChanges()\0"
    "removeEspecialidad()\0addEspecialidad()\0"
};

const QMetaObject EspecialidadesForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EspecialidadesForm,
      qt_meta_data_EspecialidadesForm, 0 }
};

const QMetaObject *EspecialidadesForm::metaObject() const
{
    return &staticMetaObject;
}

void *EspecialidadesForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EspecialidadesForm))
        return static_cast<void*>(const_cast< EspecialidadesForm*>(this));
    if (!strcmp(_clname, "Ui::EspecialidadesForm"))
        return static_cast< Ui::EspecialidadesForm*>(const_cast< EspecialidadesForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int EspecialidadesForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveFormChanges(); break;
        case 1: removeEspecialidad(); break;
        case 2: addEspecialidad(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
