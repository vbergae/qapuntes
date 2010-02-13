/********************************************************************************
** Form generated from reading ui file 'especialidadesform.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ESPECIALIDADESFORM_H
#define UI_ESPECIALIDADESFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EspecialidadesForm
{
public:
    QGridLayout *gridLayout_2;
    QListView *especialidadesList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QGroupBox *addGroup;
    QGridLayout *gridLayout;
    QLabel *nombreEspecialidadLabel;
    QLineEdit *nombreEspecialidadEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *EspecialidadesForm)
    {
        if (EspecialidadesForm->objectName().isEmpty())
            EspecialidadesForm->setObjectName(QString::fromUtf8("EspecialidadesForm"));
        EspecialidadesForm->setEnabled(true);
        EspecialidadesForm->resize(322, 371);
        gridLayout_2 = new QGridLayout(EspecialidadesForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        especialidadesList = new QListView(EspecialidadesForm);
        especialidadesList->setObjectName(QString::fromUtf8("especialidadesList"));

        gridLayout_2->addWidget(especialidadesList, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addButton = new QPushButton(EspecialidadesForm);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setCheckable(true);

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(EspecialidadesForm);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setEnabled(false);

        horizontalLayout->addWidget(deleteButton);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        addGroup = new QGroupBox(EspecialidadesForm);
        addGroup->setObjectName(QString::fromUtf8("addGroup"));
        gridLayout = new QGridLayout(addGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nombreEspecialidadLabel = new QLabel(addGroup);
        nombreEspecialidadLabel->setObjectName(QString::fromUtf8("nombreEspecialidadLabel"));

        gridLayout->addWidget(nombreEspecialidadLabel, 0, 0, 1, 1);

        nombreEspecialidadEdit = new QLineEdit(addGroup);
        nombreEspecialidadEdit->setObjectName(QString::fromUtf8("nombreEspecialidadEdit"));

        gridLayout->addWidget(nombreEspecialidadEdit, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(addGroup);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        gridLayout_2->addWidget(addGroup, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        nombreEspecialidadLabel->setBuddy(nombreEspecialidadEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(especialidadesList, deleteButton);
        QWidget::setTabOrder(deleteButton, nombreEspecialidadEdit);
        QWidget::setTabOrder(nombreEspecialidadEdit, buttonBox);

        retranslateUi(EspecialidadesForm);
        QObject::connect(addButton, SIGNAL(toggled(bool)), addGroup, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(EspecialidadesForm);
    } // setupUi

    void retranslateUi(QWidget *EspecialidadesForm)
    {
        EspecialidadesForm->setWindowTitle(QApplication::translate("EspecialidadesForm", "Especialidades", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("EspecialidadesForm", "&Nuevo", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("EspecialidadesForm", "&Eliminar", 0, QApplication::UnicodeUTF8));
        addGroup->setTitle(QApplication::translate("EspecialidadesForm", "A\303\261adir Especialidad", 0, QApplication::UnicodeUTF8));
        nombreEspecialidadLabel->setText(QApplication::translate("EspecialidadesForm", "&Especialidad:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EspecialidadesForm);
    } // retranslateUi

};

namespace Ui {
    class EspecialidadesForm: public Ui_EspecialidadesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESPECIALIDADESFORM_H
