#include <QtGui>

#include "TeachersForm.h"
#include "ui_TeachersForm.h"

TeachersForm::TeachersForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TeachersForm)
{
    ui->setupUi(this);
    setIsNew(false);

    disableGroup();
    ui->removeButton->setEnabled(false);

    model = new QSqlTableModel;
    model->setTable("Teachers");
    model->select();

    if(model->lastError().type() != QSqlError::NoError)
        QMessageBox::warning(this,tr("Error"),model->lastError().text());

    ui->teachersList->setModel(model);
    ui->teachersList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->teachersList->setModelColumn(1);

    mapper = new QDataWidgetMapper;
    mapper->setModel(model);
    mapper->addMapping(ui->nameEdit,1);
    mapper->addMapping(ui->emailEdit,2);

    connect(ui->teachersList,SIGNAL(clicked(QModelIndex)),mapper,SLOT(setCurrentModelIndex(QModelIndex)));
    connect(mapper,SIGNAL(currentIndexChanged(int)),this,SLOT(enableRemoveButton()));
    connect(mapper,SIGNAL(currentIndexChanged(int)),this,SLOT(enableGroup()));
    connect(ui->addButton,SIGNAL(clicked()),this,SLOT(addTeacher()));
    connect(ui->saveButton,SIGNAL(clicked()),this,SLOT(saveTeacher()));
    connect(ui->removeButton,SIGNAL(clicked()),this,SLOT(deleteTeacher()));
}

TeachersForm::~TeachersForm()
{
    delete ui;
}

void TeachersForm::changeEvent(QEvent *e)
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

void TeachersForm::saveTeacher()
{
    if (getIsNew()==true)
    {

        int row = model->rowCount();
        model->insertRows(row, 1);
        model->setData(model->index(row, 1), ui->nameEdit->text());
        model->setData(model->index(row, 2), ui->emailEdit->text());
        model->submitAll();

        if(model->lastError().type() != QSqlError::NoError)
            QMessageBox::warning(this,tr("Error"),model->lastError().text());

        ui->nameEdit->setText("");
        ui->emailEdit->setText("");

        setIsNew(false);
        ui->teachersList->clearSelection();
        disableGroup();
    }
    else
    {
        mapper->submit();

        if(model->lastError().type() != QSqlError::NoError)
            QMessageBox::warning(this,tr("Error"),model->lastError().text());

        ui->nameEdit->setText("");
        ui->emailEdit->setText("");

        ui->teachersList->clearSelection();
        disableGroup();
    }
}


void TeachersForm::addTeacher()
{
    ui->nameEdit->setText("");
    ui->emailEdit->setText("");

    setIsNew(true);
    enableGroup();
    ui->nameEdit->setFocus();
}

void TeachersForm::deleteTeacher()
{
    QMessageBox msgBox;
    msgBox.setText(tr("Will eliminate a Teacher. Are you sure? "));
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
            ui->emailEdit->setText("");

            disableGroup();
            ui->removeButton->setEnabled(false);
            break;

        default:
            break;

    }

}

void TeachersForm::setIsNew(bool newRow)
{
    isNew = newRow;
}

bool TeachersForm::getIsNew()
{
    return isNew;
}

void TeachersForm::enableGroup()
{
   ui->editGroup->setEnabled(true);
   ui->saveButton->setEnabled(true);
}

void TeachersForm::disableGroup()
{
    ui->editGroup->setEnabled(false);
    ui->saveButton->setEnabled(false);
}

void TeachersForm::enableRemoveButton()
{
    ui->removeButton->setEnabled(true);
}

void TeachersForm::disableRemoveButton()
{
    ui->removeButton->setEnabled(false);
}
