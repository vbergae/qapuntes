/********************************************************************************
** Form generated from reading UI file 'SubjectsForm.ui'
**
** Created: Tue 8. Dec 16:02:22 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTSFORM_H
#define UI_SUBJECTSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectsForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *subjectsList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QPushButton *removeButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *editGroup;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QComboBox *teachersCombo;
    QLabel *label_3;
    QComboBox *gradesCombo;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *saveButton;

    void setupUi(QWidget *SubjectsForm)
    {
        if (SubjectsForm->objectName().isEmpty())
            SubjectsForm->setObjectName(QString::fromUtf8("SubjectsForm"));
        SubjectsForm->resize(661, 470);
        verticalLayout_2 = new QVBoxLayout(SubjectsForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(SubjectsForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        subjectsList = new QTableView(groupBox);
        subjectsList->setObjectName(QString::fromUtf8("subjectsList"));
        subjectsList->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(subjectsList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/rem.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon1);

        horizontalLayout->addWidget(removeButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        editGroup = new QGroupBox(SubjectsForm);
        editGroup->setObjectName(QString::fromUtf8("editGroup"));
        formLayout = new QFormLayout(editGroup);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(editGroup);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameEdit = new QLineEdit(editGroup);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(300, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        label_2 = new QLabel(editGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        teachersCombo = new QComboBox(editGroup);
        teachersCombo->setObjectName(QString::fromUtf8("teachersCombo"));
        teachersCombo->setMinimumSize(QSize(200, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, teachersCombo);

        label_3 = new QLabel(editGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        gradesCombo = new QComboBox(editGroup);
        gradesCombo->setObjectName(QString::fromUtf8("gradesCombo"));
        gradesCombo->setMinimumSize(QSize(150, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, gradesCombo);


        horizontalLayout_3->addWidget(editGroup);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        saveButton = new QPushButton(SubjectsForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout_2->addWidget(saveButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(SubjectsForm);

        QMetaObject::connectSlotsByName(SubjectsForm);
    } // setupUi

    void retranslateUi(QWidget *SubjectsForm)
    {
        SubjectsForm->setWindowTitle(QApplication::translate("SubjectsForm", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SubjectsForm", "Subjects", 0, QApplication::UnicodeUTF8));
        addButton->setText(QString());
        removeButton->setText(QString());
        editGroup->setTitle(QApplication::translate("SubjectsForm", "Details", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SubjectsForm", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SubjectsForm", "Teacher:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SubjectsForm", "Grade:", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("SubjectsForm", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SubjectsForm: public Ui_SubjectsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTSFORM_H
