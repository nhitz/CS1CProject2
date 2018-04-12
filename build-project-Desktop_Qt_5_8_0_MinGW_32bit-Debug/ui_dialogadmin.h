/********************************************************************************
** Form generated from reading UI file 'dialogadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADMIN_H
#define UI_DIALOGADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAdmin
{
public:
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *AdminUsernameEdit;
    QLabel *label_2;
    QLineEdit *AdminPasswordEdit;
    QPushButton *AdminLoginButton;

    void setupUi(QDialog *DialogAdmin)
    {
        if (DialogAdmin->objectName().isEmpty())
            DialogAdmin->setObjectName(QStringLiteral("DialogAdmin"));
        DialogAdmin->resize(443, 331);
        label_3 = new QLabel(DialogAdmin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 50, 291, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        widget = new QWidget(DialogAdmin);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 130, 189, 77));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        AdminUsernameEdit = new QLineEdit(widget);
        AdminUsernameEdit->setObjectName(QStringLiteral("AdminUsernameEdit"));

        gridLayout->addWidget(AdminUsernameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        AdminPasswordEdit = new QLineEdit(widget);
        AdminPasswordEdit->setObjectName(QStringLiteral("AdminPasswordEdit"));

        gridLayout->addWidget(AdminPasswordEdit, 1, 1, 1, 1);

        AdminLoginButton = new QPushButton(widget);
        AdminLoginButton->setObjectName(QStringLiteral("AdminLoginButton"));

        gridLayout->addWidget(AdminLoginButton, 2, 1, 1, 1);


        retranslateUi(DialogAdmin);

        QMetaObject::connectSlotsByName(DialogAdmin);
    } // setupUi

    void retranslateUi(QDialog *DialogAdmin)
    {
        DialogAdmin->setWindowTitle(QApplication::translate("DialogAdmin", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogAdmin", "Welcome Admin! Please Login!", Q_NULLPTR));
        label->setText(QApplication::translate("DialogAdmin", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogAdmin", "Password", Q_NULLPTR));
        AdminLoginButton->setText(QApplication::translate("DialogAdmin", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogAdmin: public Ui_DialogAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADMIN_H
