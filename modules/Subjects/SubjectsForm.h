#ifndef SUBJECTSSFORM_H
#define SUBJECTSFORM_H

#include <QWidget>
#include <QtSql>
#include <QDataWidgetMapper>

namespace Ui {
    class SubjectsForm;
}

class SubjectsForm : public QWidget {
    Q_OBJECT
public:
    SubjectsForm(QWidget *parent = 0);
    ~SubjectsForm();

protected:
    void changeEvent(QEvent *e);
    void setIsNew(bool newRow = false);
    bool getIsNew();

private:
    Ui::SubjectsForm *ui;
    void setValidators();

    QSqlRelationalTableModel *model;
    QDataWidgetMapper *mapper;
    bool isNew;

private slots:
    void saveSubject();
    void addSubject();
    void deleteSubject();
    void enableGroup();
    void disableGroup();
    void enableRemoveButton();
    void disableRemoveButton();


};

#endif // SubjectSFORM_H

