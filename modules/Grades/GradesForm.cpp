#include <QtGui>

#include "GradesForm.h"
#include "ui_GradesForm.h"

GradesForm::GradesForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GradesForm)
{
    ui->setupUi(this);
    setIsNew(false);

    ui->startDateEdit->setDate(QDate::currentDate());
    ui->startDateEdit->setMinimumDate(QDate::currentDate().addYears(-1));
    ui->startDateEdit->setMaximumDate(QDate::currentDate().addYears(2));
    ui->startDateEdit->setDisplayFormat("dd/MM/yyyy");
    ui->startDateEdit->setCalendarPopup(true);
    ui->startDateEdit->calendarWidget()->setFirstDayOfWeek(Qt::DayOfWeek(1));

    ui->finishDateEdit->setDate(QDate::currentDate().addMonths(10));
    ui->finishDateEdit->setMinimumDate(QDate::currentDate().addYears(-1));
    ui->finishDateEdit->setMaximumDate(QDate::currentDate().addYears(2));
    ui->finishDateEdit->setDisplayFormat("dd/MM/yyyy");
    ui->finishDateEdit->setCalendarPopup(true);
    ui->finishDateEdit->calendarWidget()->setFirstDayOfWeek(Qt::DayOfWeek(1));

    ui->editGroup->setEnabled(false);

    model = new QSqlTableModel;
    model->setTable("grades");
    model->select();

    if(model->lastError().type() != QSqlError::NoError)
        QMessageBox::warning(this,tr("Error"),model->lastError().text());

    ui->gradesList->setModel(model);
    ui->gradesList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->gradesList->setModelColumn(1);

    mapper = new QDataWidgetMapper;
    mapper->setModel(model);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapper->addMapping(ui->nameEdit,1);
    mapper->addMapping(ui->startDateEdit,2);
    mapper->addMapping(ui->finishDateEdit,3);

    connect(ui->gradesList,SIGNAL(clicked(QModelIndex)),mapper,SLOT(setCurrentModelIndex(QModelIndex)));
    connect(mapper,SIGNAL(currentIndexChanged(int)),this,SLOT(enableRemoveButton()));
    connect(mapper,SIGNAL(currentIndexChanged(int)),this,SLOT(enableGroup()));
    connect(ui->addButton,SIGNAL(clicked()),this,SLOT(addGrade()));
    connect(ui->saveButton,SIGNAL(clicked()),this,SLOT(saveGrade()));
    connect(ui->removeButton,SIGNAL(clicked()),this,SLOT(deleteGrade()));
}

GradesForm::~GradesForm()
{
    delete ui;
}

void GradesForm::changeEvent(QEvent *e)
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

void GradesForm::saveGrade()
{
    if (getIsNew()==true)
    {

        int row = model->rowCount();
        model->insertRows(row, 1);
        model->setData(model->index(row, 1), ui->nameEdit->text());
        model->setData(model->index(row, 2), ui->startDateEdit->date());
        model->setData(model->index(row, 3), ui->finishDateEdit->date());
        model->submitAll();



        if(model->lastError().type() != QSqlError::NoError)
            QMessageBox::warning(this,tr("Error"),model->lastError().text());

        ui->nameEdit->setText("");
        ui->startDateEdit->setDate(QDate::currentDate());
        ui->finishDateEdit->setDate(QDate::currentDate().addMonths(10));

        setIsNew(false);
        ui->gradesList->clearSelection();
        disableGroup();
    }
    else
    {
        mapper->submit();

        if(model->lastError().type() != QSqlError::NoError)
            QMessageBox::warning(this,tr("Error"),model->lastError().text());

        ui->nameEdit->setText("");
        ui->startDateEdit->setDate(QDate::currentDate());
        ui->finishDateEdit->setDate(QDate::currentDate().addMonths(10));

        ui->gradesList->clearSelection();
        disableGroup();
    }
}


void GradesForm::addGrade()
{
    ui->nameEdit->setText("");
    ui->startDateEdit->setDate(QDate::currentDate());
    ui->finishDateEdit->setDate(QDate::currentDate().addMonths(10));

    setIsNew(true);
    enableGroup();
    ui->nameEdit->setFocus();
}

void GradesForm::deleteGrade()
{
    QMessageBox msgBox;
    msgBox.setText(tr("Will eliminate a grade. Are you sure? "));
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.setIcon(QMessageBox::Warning);
    int execMsgBox = msgBox.exec();

    switch(execMsgBox)
    {
        case QMessageBox::Ok:
            qDebug() << "Idice a borrar: " << mapper->currentIndex();
            model->removeRow(mapper->currentIndex());

            if(model->lastError().type() != QSqlError::NoError)
                QMessageBox::critical(this,tr("Error"),model->lastError().text());

            ui->nameEdit->setText("");
            ui->startDateEdit->setDate(QDate::currentDate());
            ui->finishDateEdit->setDate(QDate::currentDate().addYears(1));

            disableGroup();
            ui->removeButton->setEnabled(false);
            break;

        default:
            break;

    }

}

void GradesForm::setIsNew(bool newRow)
{
    isNew = newRow;
}

bool GradesForm::getIsNew()
{
    return isNew;
}

void GradesForm::enableGroup()
{
   ui->editGroup->setEnabled(true);
   ui->saveButton->setEnabled(true);
}

void GradesForm::disableGroup()
{
    ui->editGroup->setEnabled(false);
    ui->saveButton->setEnabled(false);
}

void GradesForm::enableRemoveButton()
{
    ui->removeButton->setEnabled(true);
}

void GradesForm::disableRemoveButton()
{
    ui->removeButton->setEnabled(false);
}
