#ifndef TEACHERSFORM_H
#define TEACHERSFORM_H

#include <QWidget>
#include <QtSql>
#include <QDataWidgetMapper>

namespace Ui {
    class TeachersForm;
}

class TeachersForm : public QWidget {
    Q_OBJECT
public:
    TeachersForm(QWidget *parent = 0);
    ~TeachersForm();

protected:
    void changeEvent(QEvent *e);
    void setIsNew(bool newRow = false);
    bool getIsNew();

private:
    Ui::TeachersForm *ui;

    QSqlTableModel *model;
    QDataWidgetMapper *mapper;
    bool isNew;

private slots:
    void saveTeacher();
    void addTeacher();
    void deleteTeacher();
    void enableGroup();
    void disableGroup();
    void enableRemoveButton();
    void disableRemoveButton();


};

#endif // TEACHERSFORM_H
