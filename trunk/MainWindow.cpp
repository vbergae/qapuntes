#include <QtSql>

#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(QCoreApplication::applicationName());
    setMinimumSize(950,500);
    ui->statusbar->setVisible(false);

    createActions();
    createMenus();
    createToolBars();
    createStatusBar();

    homeForm();

    /*
    if (!createConnection())
    {
        dbSettings();
    }*/


}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
bool MainWindow::createConnection()
{
    AppSettings = new QSettings;

    QString host = AppSettings->value("dbHost").toString();
    QString dbName = AppSettings->value("dbName").toString();
    QString dbUser = AppSettings->value("dbUser").toString();
    QString dbPassword = AppSettings->value("dbPassword").toString();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(host);
    db.setDatabaseName(dbName);
    db.setUserName(dbUser);
    db.setPassword(dbPassword);

    if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Imposible conectar"),
            qApp->tr("Se ha producido un error al intentar \n"
                     "conectar a la base de datos. \n"
                     "<b>Comprube las preferencias de conexión.</b>"), QMessageBox::Ok);
        ui->statusbar->showMessage("No Conectado");
        return false;
    }
    else
    {
        ui->statusbar->showMessage("Conectado");
    }

    return true;
}
*/
void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::createActions()
{
    /*
      * General Actions
      */
    dbSettingsAct = new QAction(tr("Configurar base de datos..."), this);
    connect(dbSettingsAct,SIGNAL(triggered()),this,SLOT(dbSettings()));

    exitAct = new QAction(tr("Salir"),this);
    connect(exitAct,SIGNAL(triggered()),this,SLOT(close()));

    aboutAct = new QAction(tr("Acerca de QApuntes"), this);
    connect(aboutAct,SIGNAL(triggered()),this,SLOT(about()));

    aboutQtAct = new QAction(tr("Acerca de Qt"),this);
    connect(aboutQtAct, SIGNAL(triggered()),qApp,SLOT(aboutQt()));

    /*
      * Modules actions
      */
    homeFormAct = new QAction(QIcon(":/images/icons/appicon.png"),tr("Home"), this);
    connect(homeFormAct, SIGNAL(triggered()), this, SLOT(homeForm()));

    gradesFormAct = new QAction(QIcon(":images/icons/grades.png"),tr("Cursos"),this);
    connect(gradesFormAct,SIGNAL(triggered()),this,SLOT(gradesForm()));

    subjectsFormAct = new QAction(QIcon(":images/icons/subjects.png"),tr("Asignaturas"), this);
    connect(subjectsFormAct, SIGNAL(triggered()), this, SLOT(subjectsForm()));

    teachersFormAct = new QAction(QIcon(":/images/icons/teachers.png"),tr("Profesores"), this);
    connect(teachersFormAct, SIGNAL(triggered()), this, SLOT(teachersForm()));

}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&Archivo"));
    fileMenu->addAction(exitAct);

    modulesMenu = menuBar()->addMenu(tr("&Modulos"));
    modulesMenu->addAction(gradesFormAct);
    modulesMenu->addAction(subjectsFormAct);
    modulesMenu->addAction(teachersFormAct);

    dbMenu = menuBar()->addMenu(tr("&Base de datos"));
    dbMenu->addAction(dbSettingsAct);

    helpMenu = menuBar()->addMenu(tr("A&yuda"));
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);
}

void MainWindow::createToolBars()
{
    mainToolBar = addToolBar(tr("Barra de herramientas principal"));
    mainToolBar->setIconSize(QSize(32,32));
    mainToolBar->setMovable(false);
    mainToolBar->setFloatable(false);

    mainToolBar->addAction(homeFormAct);
    mainToolBar->addSeparator();
    mainToolBar->addAction(gradesFormAct);
    mainToolBar->addAction(subjectsFormAct);
    mainToolBar->addAction(teachersFormAct);
}

void MainWindow::createStatusBar()
{
    statusBar()->showMessage(tr("QApuntes"));
}

void MainWindow::dbSettings()
{
    dbDialog = new dbSettingsDialog;
    connect(dbDialog,SIGNAL(accepted()),this,SLOT(createConnection()));

    dbDialog->show();
    dbDialog->setFocus();
}

void MainWindow::about()
{
    QMessageBox::about(this,QCoreApplication::applicationName(),
                       QCoreApplication::applicationName() + " "
                       + QCoreApplication::applicationVersion());
}

void MainWindow::homeForm()
{
    home = new HomeForm();
    setCentralWidget(home);
}

void MainWindow::gradesForm()
{
    grades = new GradesForm();
    setCentralWidget(grades);
}

void MainWindow::subjectsForm()
{
    subjects = new SubjectsForm();
    setCentralWidget(subjects);
}

void MainWindow::teachersForm()
{

    teachers = new TeachersForm();
    setCentralWidget(teachers);
}
