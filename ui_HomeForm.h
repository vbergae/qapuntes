/********************************************************************************
** Form generated from reading UI file 'HomeForm.ui'
**
** Created: Tue 8. Dec 16:02:22 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEFORM_H
#define UI_HOMEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListView *planingList;
    QGroupBox *TasksGroup;
    QVBoxLayout *verticalLayout_2;
    QListView *tasksList;

    void setupUi(QWidget *HomeForm)
    {
        if (HomeForm->objectName().isEmpty())
            HomeForm->setObjectName(QString::fromUtf8("HomeForm"));
        HomeForm->resize(514, 503);
        verticalLayout_3 = new QVBoxLayout(HomeForm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(HomeForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        planingList = new QListView(groupBox);
        planingList->setObjectName(QString::fromUtf8("planingList"));

        verticalLayout->addWidget(planingList);


        verticalLayout_3->addWidget(groupBox);

        TasksGroup = new QGroupBox(HomeForm);
        TasksGroup->setObjectName(QString::fromUtf8("TasksGroup"));
        verticalLayout_2 = new QVBoxLayout(TasksGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tasksList = new QListView(TasksGroup);
        tasksList->setObjectName(QString::fromUtf8("tasksList"));

        verticalLayout_2->addWidget(tasksList);


        verticalLayout_3->addWidget(TasksGroup);


        retranslateUi(HomeForm);

        QMetaObject::connectSlotsByName(HomeForm);
    } // setupUi

    void retranslateUi(QWidget *HomeForm)
    {
        HomeForm->setWindowTitle(QApplication::translate("HomeForm", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("HomeForm", "Planing", 0, QApplication::UnicodeUTF8));
        TasksGroup->setTitle(QApplication::translate("HomeForm", "Tareas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HomeForm: public Ui_HomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEFORM_H
