# #####################################################################
# Automatically generated by qmake (2.01a) mi ago 26 13:01:37 2009
# #####################################################################
TEMPLATE = app
TARGET = 
DEPENDPATH += . \
    modules/teachers
INCLUDEPATH += . \
    modules/cursos
QT += sql

# Input
HEADERS += MainWindow.h \
    dialogs/dbSettingsDialog.h \
    modules/Grades/GradesForm.h \
    modules/Subjects/SubjectsForm.h \
    modules/Home/HomeForm.h \
    database.h \
    modules/Teachers/TeachersForm.h
FORMS += MainWindow.ui \
    dialogs/dbSettingsDialog.ui \
    modules/Grades/GradesForm.ui \
    modules/Subjects/SubjectsForm.ui \
    modules/Home/HomeForm.ui \
    modules/Teachers/TeachersForm.ui
SOURCES += main.cpp \
    MainWindow.cpp \
    dialogs/dbSettingsDialog.cpp \
    modules/Grades/GradesForm.cpp \
    modules/Subjects/SubjectsForm.cpp \
    modules/Home/HomeForm.cpp \
    modules/Teachers/TeachersForm.cpp
RESOURCES += qapuntes2.qrc