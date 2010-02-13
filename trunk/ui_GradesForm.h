/********************************************************************************
** Form generated from reading UI file 'GradesForm.ui'
**
** Created: Tue 8. Dec 16:02:22 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADESFORM_H
#define UI_GRADESFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
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

class Ui_GradesForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mainGroupBox;
    QVBoxLayout *verticalLayout;
    QListView *gradesList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QPushButton *removeButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *editGroup;
    QFormLayout *formLayout;
    QLabel *nombreLabel;
    QLineEdit *nameEdit;
    QLabel *startDateLabel;
    QDateEdit *startDateEdit;
    QLabel *finishDateLabel;
    QDateEdit *finishDateEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *saveButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GradesForm)
    {
        if (GradesForm->objectName().isEmpty())
            GradesForm->setObjectName(QString::fromUtf8("GradesForm"));
        GradesForm->resize(534, 478);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GradesForm->sizePolicy().hasHeightForWidth());
        GradesForm->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(GradesForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mainGroupBox = new QGroupBox(GradesForm);
        mainGroupBox->setObjectName(QString::fromUtf8("mainGroupBox"));
        verticalLayout = new QVBoxLayout(mainGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gradesList = new QListView(mainGroupBox);
        gradesList->setObjectName(QString::fromUtf8("gradesList"));
        gradesList->setMaximumSize(QSize(16777215, 250));
        gradesList->setViewMode(QListView::ListMode);

        verticalLayout->addWidget(gradesList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QPushButton(mainGroupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        removeButton = new QPushButton(mainGroupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/rem.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon1);

        horizontalLayout->addWidget(removeButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(mainGroupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        editGroup = new QGroupBox(GradesForm);
        editGroup->setObjectName(QString::fromUtf8("editGroup"));
        formLayout = new QFormLayout(editGroup);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        nombreLabel = new QLabel(editGroup);
        nombreLabel->setObjectName(QString::fromUtf8("nombreLabel"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, nombreLabel);

        nameEdit = new QLineEdit(editGroup);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setMinimumSize(QSize(250, 0));
        nameEdit->setMaximumSize(QSize(200, 16777215));
        nameEdit->setMaxLength(100);

        formLayout->setWidget(1, QFormLayout::FieldRole, nameEdit);

        startDateLabel = new QLabel(editGroup);
        startDateLabel->setObjectName(QString::fromUtf8("startDateLabel"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, startDateLabel);

        startDateEdit = new QDateEdit(editGroup);
        startDateEdit->setObjectName(QString::fromUtf8("startDateEdit"));
        startDateEdit->setCalendarPopup(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, startDateEdit);

        finishDateLabel = new QLabel(editGroup);
        finishDateLabel->setObjectName(QString::fromUtf8("finishDateLabel"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, finishDateLabel);

        finishDateEdit = new QDateEdit(editGroup);
        finishDateEdit->setObjectName(QString::fromUtf8("finishDateEdit"));
        finishDateEdit->setCalendarPopup(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, finishDateEdit);


        horizontalLayout_3->addWidget(editGroup);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        saveButton = new QPushButton(GradesForm);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setEnabled(false);

        horizontalLayout_2->addWidget(saveButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        nombreLabel->setBuddy(nameEdit);
        startDateLabel->setBuddy(startDateEdit);
        finishDateLabel->setBuddy(finishDateEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(nameEdit, startDateEdit);
        QWidget::setTabOrder(startDateEdit, finishDateEdit);

        retranslateUi(GradesForm);

        QMetaObject::connectSlotsByName(GradesForm);
    } // setupUi

    void retranslateUi(QWidget *GradesForm)
    {
        GradesForm->setWindowTitle(QApplication::translate("GradesForm", "Cursos", 0, QApplication::UnicodeUTF8));
        mainGroupBox->setTitle(QApplication::translate("GradesForm", "Grades", 0, QApplication::UnicodeUTF8));
        gradesList->setStyleSheet(QApplication::translate("GradesForm", "font: 15pt \"Sans Serif\";", 0, QApplication::UnicodeUTF8));
        addButton->setText(QString());
        removeButton->setText(QString());
        editGroup->setTitle(QApplication::translate("GradesForm", "Details", 0, QApplication::UnicodeUTF8));
        nombreLabel->setText(QApplication::translate("GradesForm", "Grade Name:", 0, QApplication::UnicodeUTF8));
        startDateLabel->setText(QApplication::translate("GradesForm", "Start Date:", 0, QApplication::UnicodeUTF8));
        finishDateLabel->setText(QApplication::translate("GradesForm", "Finish Date:", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("GradesForm", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GradesForm: public Ui_GradesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADESFORM_H
