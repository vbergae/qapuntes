/********************************************************************************
** Form generated from reading UI file 'TeachersForm.ui'
**
** Created: Tue 8. Dec 16:02:22 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSFORM_H
#define UI_TEACHERSFORM_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeachersForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListView *teachersList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addButton;
    QPushButton *removeButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *editGroup;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TeachersForm)
    {
        if (TeachersForm->objectName().isEmpty())
            TeachersForm->setObjectName(QString::fromUtf8("TeachersForm"));
        TeachersForm->resize(794, 595);
        TeachersForm->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout_2 = new QVBoxLayout(TeachersForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(TeachersForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        teachersList = new QListView(groupBox);
        teachersList->setObjectName(QString::fromUtf8("teachersList"));
        teachersList->setStyleSheet(QString::fromUtf8("font: 18pt \"Lucida Grande\";"));

        verticalLayout->addWidget(teachersList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);
        addButton->setAutoDefault(false);
        addButton->setDefault(false);
        addButton->setFlat(false);

        horizontalLayout->addWidget(addButton);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/rem.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon1);

        horizontalLayout->addWidget(removeButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        editGroup = new QGroupBox(TeachersForm);
        editGroup->setObjectName(QString::fromUtf8("editGroup"));
        editGroup->setMaximumSize(QSize(800, 16777215));
        formLayout = new QFormLayout(editGroup);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        nameLabel = new QLabel(editGroup);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(editGroup);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(250, 0));
        nameEdit->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        emailLabel = new QLabel(editGroup);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, emailLabel);

        emailEdit = new QLineEdit(editGroup);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));
        emailEdit->setMinimumSize(QSize(250, 0));
        emailEdit->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, emailEdit);


        horizontalLayout_3->addWidget(editGroup);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        saveButton = new QPushButton(TeachersForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout_2->addWidget(saveButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(TeachersForm);

        QMetaObject::connectSlotsByName(TeachersForm);
    } // setupUi

    void retranslateUi(QWidget *TeachersForm)
    {
        TeachersForm->setWindowTitle(QApplication::translate("TeachersForm", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TeachersForm", "Teachers", 0, QApplication::UnicodeUTF8));
        addButton->setText(QString());
        removeButton->setText(QString());
        editGroup->setTitle(QApplication::translate("TeachersForm", "Details", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("TeachersForm", "Name:", 0, QApplication::UnicodeUTF8));
        emailLabel->setText(QApplication::translate("TeachersForm", "E-Mail:", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("TeachersForm", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TeachersForm: public Ui_TeachersForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSFORM_H
