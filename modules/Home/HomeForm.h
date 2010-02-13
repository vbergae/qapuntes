#ifndef HOMEFORM_H
#define HOMEFORM_H

#include <QtSql>
#include <QWidget>

namespace Ui {
    class HomeForm;
}

class HomeForm : public QWidget {
    Q_OBJECT
public:
    HomeForm(QWidget *parent = 0);
    ~HomeForm();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::HomeForm *ui;

    QSqlTableModel *tasksModel;
};

#endif // HOMEFORM_H
