#include "HomeForm.h"
#include "ui_HomeForm.h"

#include <QMessageBox>

HomeForm::HomeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeForm)
{
    ui->setupUi(this);

    tasksModel = new QSqlTableModel;
    tasksModel->setTable("tasks");
    tasksModel->select();

    if(tasksModel->lastError().type() != QSqlError::NoError)
        QMessageBox::warning(this,tr("Error"),tasksModel->lastError().text());

    ui->tasksList->setModel(tasksModel);
}

HomeForm::~HomeForm()
{
    delete ui;
}

void HomeForm::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
