/********************************************************************************
** Form generated from reading UI file 'dialogcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCUSTOMER_H
#define UI_DIALOGCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCustomer
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *CustomerUsernameEdit;
    QLabel *label_2;
    QLineEdit *CustomerPasswordEdit;
    QPushButton *CustomerLoginButton;
    QLabel *statusLabel;

    void setupUi(QDialog *DialogCustomer)
    {
        if (DialogCustomer->objectName().isEmpty())
            DialogCustomer->setObjectName(QStringLiteral("DialogCustomer"));
        DialogCustomer->resize(443, 341);
        label_3 = new QLabel(DialogCustomer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 60, 291, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        layoutWidget = new QWidget(DialogCustomer);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 140, 189, 77));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        CustomerUsernameEdit = new QLineEdit(layoutWidget);
        CustomerUsernameEdit->setObjectName(QStringLiteral("CustomerUsernameEdit"));

        gridLayout->addWidget(CustomerUsernameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        CustomerPasswordEdit = new QLineEdit(layoutWidget);
        CustomerPasswordEdit->setObjectName(QStringLiteral("CustomerPasswordEdit"));
        CustomerPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(CustomerPasswordEdit, 1, 1, 1, 1);

        CustomerLoginButton = new QPushButton(layoutWidget);
        CustomerLoginButton->setObjectName(QStringLiteral("CustomerLoginButton"));

        gridLayout->addWidget(CustomerLoginButton, 2, 1, 1, 1);

        statusLabel = new QLabel(DialogCustomer);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(110, 240, 161, 21));

        retranslateUi(DialogCustomer);

        QMetaObject::connectSlotsByName(DialogCustomer);
    } // setupUi

    void retranslateUi(QDialog *DialogCustomer)
    {
        DialogCustomer->setWindowTitle(QApplication::translate("DialogCustomer", "Dialog", nullptr));
        label_3->setText(QApplication::translate("DialogCustomer", "Welcome Customer! Please Login!", nullptr));
        label->setText(QApplication::translate("DialogCustomer", "Username", nullptr));
        label_2->setText(QApplication::translate("DialogCustomer", "Password", nullptr));
        CustomerLoginButton->setText(QApplication::translate("DialogCustomer", "Login", nullptr));
        statusLabel->setText(QApplication::translate("DialogCustomer", "[+]Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCustomer: public Ui_DialogCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCUSTOMER_H
