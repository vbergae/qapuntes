#ifndef GRADESFORM_H
#define GRADESFORM_H

#include <QWidget>
#include <QtSql>
#include <QDataWidgetMapper>

namespace Ui {
    class GradesForm;
}

class GradesForm : public QWidget {
    Q_OBJECT
public:
    GradesForm(QWidget *parent = 0);
    ~GradesForm();

protected:
    void changeEvent(QEvent *e);
    void setIsNew(bool newRow = false);
    bool getIsNew();

private:
    Ui::GradesForm *ui;

    QSqlTableModel *model;
    QDataWidgetMapper *mapper;
    bool isNew;

private slots:
    void saveGrade();
    void addGrade();
    void deleteGrade();
    void enableGroup();
    void disableGroup();
    void enableRemoveButton();
    void disableRemoveButton();

};

#endif // GRADESFORM_H
