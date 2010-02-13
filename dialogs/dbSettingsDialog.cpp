#include <QSettings>
#include <QVariant>

#include "dbSettingsDialog.h"
#include "ui_dbSettingsDialog.h"

dbSettingsDialog::dbSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dbSettingsDialog)
{
    ui->setupUi(this);

    QSettings settings;
    ui->hostEdit->setText(settings.value("dbHost",QString("localhost")).toString());
    ui->dbNameEdit->setText(settings.value("dbName",QString("Apuntes")).toString());
    ui->userEdit->setText(settings.value("dbUser",QString("username")).toString());
    ui->passwordEdit->setText(settings.value("dbPassword",QString("")).toString());

    connect(this,SIGNAL(accepted()),this,SLOT(writeSettings()));
}

dbSettingsDialog::~dbSettingsDialog()
{
    delete ui;
}

void dbSettingsDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void dbSettingsDialog::writeSettings()
{
    QSettings settings;
    settings.setValue("dbHost",ui->hostEdit->text());
    settings.setValue("dbName",ui->dbNameEdit->text());
    settings.setValue("dbUser",ui->userEdit->text());
    settings.setValue("dbPassword",ui->passwordEdit->text());
}
