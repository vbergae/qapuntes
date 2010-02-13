#include <QApplication>

#include "database.h"
#include "MainWindow.h"

int main (int argc, char *argv[])
{

    QApplication app(argc,argv);

    if (!createConnection())
	return 1;

    QCoreApplication::setOrganizationName("vbergae");
    QCoreApplication::setOrganizationDomain("vbergae.com");
    QCoreApplication::setApplicationName("qStudents");
    QCoreApplication::setApplicationVersion("0.0.1pre");

    MainWindow QApuntesMainWindow;
    QApuntesMainWindow.setUnifiedTitleAndToolBarOnMac(true);
    QApuntesMainWindow.show();

    return app.exec();
}
