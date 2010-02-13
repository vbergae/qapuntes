#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

#ifndef DATABASE_H
#define DATABASE_H

static bool createConnection()
{
    /*
    AppSettings = new QSettings;

    QString host = AppSettings->value("dbHost").toString();
    QString dbName = AppSettings->value("dbName").toString();
    QString dbUser = AppSettings->value("dbUser").toString();
    QString dbPassword = AppSettings->value("dbPassword").toString();
*/
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  //  db.setHostName(host);
    db.setDatabaseName(":memory:");
    //db.setUserName(dbUser);
    //db.setPassword(dbPassword);

    if (!db.open()) {
	QMessageBox::critical(0, qApp->tr("Imposible conectar"),
	    qApp->tr("Se ha producido un error al intentar \n"
		     "conectar a la base de datos. \n"
		     "<b>Comprube las preferencias de conexión.</b>"), QMessageBox::Ok);
	//ui->statusbar->showMessage("No Conectado");
	return false;
    }
    else
    {
	//ui->statusbar->showMessage("Conectado");
    }


    QSqlQuery query;

    // TABLE Grades
    query.exec("create table grades (id integer primary key autoincrement, "
               "name varchar(40), "
               "starDate date, "
               "finsihDate date)");

    if(query.lastError().type() != QSqlError::NoError)
    {
        qDebug() << "Grades: " << query.lastError().text();
    }

    query.exec("insert into grades values (1, '1 DAI', '2009-09-01', '2010-06-25')");
    query.exec("insert into grades values (2, '2 DAI', '2010-09-15', '2011-06-20')");

    if(query.lastError().type() != QSqlError::NoError)
    {
        qDebug() << "Grades: (insert) " << query.lastError().text();
    }

    // TABLE Teachers
    query.exec("create table teachers (id integer primary key autoincrement, "
               "name varchar(50), "
               "email varchar(50))");

    if(query.lastError().type() != QSqlError::NoError)
    {
        qDebug() << "Teachers: " << query.lastError().text();
    }

    query.exec("insert into teachers values (1, 'Eulalia Noguera', 'eulalia.noguera@iesabastos.org')");
    query.exec("insert into teachers values (2, 'Otro profesor', 'otro.profesor@iesabastos.org')");

    if(query.lastError().type() != QSqlError::NoError)
    {
        qDebug() << "Teachers: (insert) " << query.lastError().text();
    }

    // TABLE Subjects
    query.exec("create table subjects (id integer primary key autoincrement, "
               "name varchar(60), "
               "teacherId int, "
               "gradeId int)");

    if(query.lastError().type() != QSqlError::NoError)
    {
        qDebug() << "Subjects: " << query.lastError().text();
    }

    //query.exec("insert into subjects values (1, 'Programacion en lenguajes estructurados', 1, 1)");
    //query.exec("insert into subjects values (2, 'Analisis y Diseño de Aplicaciones', 2, 1)");

    if(query.lastError().type() != QSqlError::NoError)
    {
        qDebug() << "Subjects: (insert)" << query.lastError().text();
    }

    // TABLE schedules
    query.exec("create table schedules (id integer primary key autoincrement, "
               "weekDay varchar(10), "
               "startTime time, "
               "fisnishTime time, "
               "subjectId int)");

    if(query.lastError().type() != QSqlError::NoError)
    {
        qDebug() << "Schedules: " << query.lastError().text();
    }

    query.exec("insert into schedules values (1, 'Monday', '15:15', '17:30', 1)");

    if(query.lastError().type() != QSqlError::NoError)
    {
        qDebug() << "Schedules: (insert) " << query.lastError().text();
    }

    // TABLE Tasks
    query.exec("create table tasks (id integer primary key autoincrement, "
	       "title varchar(50), "
	       "description text, "
               "endDate date, "
               "priority varchar(15), "
               "subjectId int)");

    if(query.lastError().type() != QSqlError::NoError)
    {
	qDebug() << "Task: " << query.lastError().text();
    }


    query.exec("insert into tasks values (1,'Tarea de prueba', 'DESC- TExto tarea', '2009-11-30', 'Hight', 1)");
    if(query.lastError().type() != QSqlError::NoError)
    {
	qDebug() << "Task: (insert) " << query.lastError().text();
    }



    return true;



}

#endif // DATABASE_H
