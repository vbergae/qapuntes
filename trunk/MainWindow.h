#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include <QtSql>
#include <QMainWindow>

#include "dialogs/dbSettingsDialog.h"
#include "modules/Home/HomeForm.h"
#include "modules/Grades/GradesForm.h"
#include "modules/Teachers/TeachersForm.h"
#include "modules/Subjects/SubjectsForm.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private slots:
    //bool createConnection();
    void dbSettings();
    void about();

    void homeForm();
    void gradesForm();
    void subjectsForm();
    void teachersForm();

private:
    Ui::MainWindow *ui;

    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();

    dbSettingsDialog *dbDialog;

    HomeForm *home;
    GradesForm *grades;
    TeachersForm *teachers;
    SubjectsForm *subjects;

    QSettings *AppSettings;

    QMenu *fileMenu;
    QMenu *modulesMenu;
    QMenu *dbMenu;
    QMenu *helpMenu;


    QToolBar *mainToolBar;

    QAction *homeFormAct;
    QAction *gradesFormAct;
    QAction *subjectsFormAct;
    QAction *teachersFormAct;

    QAction *exitAct;
    QAction *dbSettingsAct;
    QAction *aboutAct;
    QAction *aboutQtAct;

};

#endif // MAINWINDOW_H
