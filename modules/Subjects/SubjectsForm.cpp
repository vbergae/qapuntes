#include <QtGui>

#include "SubjectsForm.h"
#include "ui_SubjectsForm.h"

SubjectsForm::SubjectsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubjectsForm)
{
    ui->setupUi(this);
    setIsNew(false);

    disableGroup();
    ui->removeButton->setEnabled(false);
    
    setValidators();

    model = new QSqlRelationalTableModel;
    model->setTable("Subjects");
    model->setRelation(2,QSqlRelation("Teachers","id","name"));
    model->setRelation(3,QSqlRelation("Grades","id","name"));
    model->setHeaderData(1,Qt::Horizontal,tr("Subject"));
    model->setHeaderData(2,Qt::Horizontal,tr("Teacher"));
    model->setHeaderData(3,Qt::Horizontal,tr("Grade"));
    model->select();

    if(model->lastError().type() != QSqlError::NoError)
        QMessageBox::warning(this,tr("Error"),model->lastError().text());

    ui->subjectsList->setModel(model);
    ui->subjectsList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->subjectsList->hideColumn(0);
    ui->subjectsList->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->subjectsList->setColumnWidth(1,300);
    ui->subjectsList->setColumnWidth(2,200);
    ui->subjectsList->setColumnWidth(3,150);

    ui->teachersCombo->setModel(model->relationModel(2));
    ui->teachersCombo->setModelColumn(model->relationModel(2)->fieldIndex("name"));

    ui->gradesCombo->setModel(model->relationModel(3));
    ui->gradesCombo->setModelColumn(model->relationModel(3)->fieldIndex("name"));

    mapper = new QDataWidgetMapper;
    mapper->setModel(model);
    mapper->setItemDelegate(new QSqlRelationalDelegate(this));
    mapper->addMapping(ui->nameEdit,1);
    mapper->addMapping(ui->teachersCombo,2);
    mapper->addMapping(ui->gradesCombo,3);

    connect(ui->subjectsList,SIGNAL(clicked(QModelIndex)),mapper,SLOT(setCurrentModelIndex(QModelIndex)));
    connect(mapper,SIGNAL(currentIndexChanged(int)),this,SLOT(enableRemoveButton()));
    connect(mapper,SIGNAL(currentIndexChanged(int)),this,SLOT(enableGroup()));
    connect(ui->addButton,SIGNAL(clicked()),this,SLOT(addSubject()));
    connect(ui->saveButton,SIGNAL(clicked()),this,SLOT(saveSubject()));
    connect(ui->removeButton,SIGNAL(clicked()),this,SLOT(deleteSubject()));
}

SubjectsForm::~SubjectsForm()
{
    delete ui;
}

void SubjectsForm::changeEvent(QEvent *e)
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

void SubjectsForm::saveSubject()
{
    if (getIsNew()==true)
    {
	int row = model->rowCount();
	model->insertRows(row, 1);
	model->setData(model->index(row, 1), ui->nameEdit->text());
	model->setData(model->index(row, 2), ui->teachersCombo->currentIndex() + 1);
	model->setData(model->index(row, 3), ui->gradesCombo->currentIndex() + 1);

	if (!model->submitAll()){
                QMessageBox::warning(this,tr("Error"),model->lastError().text());
        }

        ui->nameEdit->setText("");

        setIsNew(false);
        ui->subjectsList->clearSelection();
        disableGroup();
    }
    else
    {
        mapper->submit();

        if(model->lastError().type() != QSqlError::NoError)
            QMessageBox::warning(this,tr("Error"),model->lastError().text());

        ui->nameEdit->setText("");

        ui->subjectsList->clearSelection();
        disableGroup();
    }
}


void SubjectsForm::addSubject()
{
    ui->nameEdit->setText("");

    setIsNew(true);
    enableGroup();
    ui->nameEdit->setFocus();
}

void SubjectsForm::deleteSubject()
{
    QMessageBox msgBox;
    msgBox.setText(tr("Will eliminate a Subject. Are you sure? "));
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
            //ui->emailEdit->setText("");

            disableGroup();
            ui->removeButton->setEnabled(false);
            break;

        default:
            break;

    }

}

void SubjectsForm::setValidators()
{
    QRegExp regexp("[A-Za-z]{1,60}");
    ui->nameEdit->setValidator(new QRegExpValidator(regexp,this));
}


void SubjectsForm::setIsNew(bool newRow)
{
    isNew = newRow;
}

bool SubjectsForm::getIsNew()
{
    return isNew;
}

void SubjectsForm::enableGroup()
{
   ui->editGroup->setEnabled(true);
   ui->saveButton->setEnabled(true);
}

void SubjectsForm::disableGroup()
{
    ui->editGroup->setEnabled(false);
    ui->saveButton->setEnabled(false);
}

void SubjectsForm::enableRemoveButton()
{
    ui->removeButton->setEnabled(true);
}

void SubjectsForm::disableRemoveButton()
{
    ui->removeButton->setEnabled(false);
}
