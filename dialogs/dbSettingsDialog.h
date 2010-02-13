#ifndef DBSETTINGSDIALOG_H
#define DBSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
    class dbSettingsDialog;
}

class dbSettingsDialog : public QDialog {
    Q_OBJECT
public:
    dbSettingsDialog(QWidget *parent = 0);
    ~dbSettingsDialog();

protected:
    void changeEvent(QEvent *e);

private slots:
    //void readSettings();
    void writeSettings();

private:
    Ui::dbSettingsDialog *ui;
};

#endif // DBSETTINGSDIALOG_H
