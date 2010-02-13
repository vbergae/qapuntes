/********************************************************************************
** Form generated from reading UI file 'dbSettingsDialog.ui'
**
** Created: Tue 8. Dec 16:02:22 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBSETTINGSDIALOG_H
#define UI_DBSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dbSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *hostEdit;
    QLabel *label_2;
    QLineEdit *dbNameEdit;
    QLabel *label_3;
    QLineEdit *userEdit;
    QLabel *label_4;
    QLineEdit *passwordEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dbSettingsDialog)
    {
        if (dbSettingsDialog->objectName().isEmpty())
            dbSettingsDialog->setObjectName(QString::fromUtf8("dbSettingsDialog"));
        dbSettingsDialog->resize(251, 197);
        verticalLayout_2 = new QVBoxLayout(dbSettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(dbSettingsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        hostEdit = new QLineEdit(groupBox);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, hostEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dbNameEdit = new QLineEdit(groupBox);
        dbNameEdit->setObjectName(QString::fromUtf8("dbNameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dbNameEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        userEdit = new QLineEdit(groupBox);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, userEdit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        passwordEdit = new QLineEdit(groupBox);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, passwordEdit);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(dbSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(dbSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), dbSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dbSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(dbSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *dbSettingsDialog)
    {
        dbSettingsDialog->setWindowTitle(QApplication::translate("dbSettingsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("dbSettingsDialog", "Configurar Conexi\303\263n", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dbSettingsDialog", "Host:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dbSettingsDialog", "Base de datos:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dbSettingsDialog", "Usuario:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dbSettingsDialog", "Contrase\303\261a:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dbSettingsDialog: public Ui_dbSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBSETTINGSDIALOG_H
