/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Customer
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QWidget *Customer)
    {
        if (Customer->objectName().isEmpty())
            Customer->setObjectName(QStringLiteral("Customer"));
        Customer->resize(471, 369);
        pushButton = new QPushButton(Customer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 280, 75, 23));
        label = new QLabel(Customer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 160, 51, 16));
        label_2 = new QLabel(Customer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 210, 51, 16));
        lineEdit = new QLineEdit(Customer);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 160, 113, 20));
        lineEdit_2 = new QLineEdit(Customer);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 210, 113, 20));
        label_3 = new QLabel(Customer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 60, 341, 21));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        retranslateUi(Customer);

        QMetaObject::connectSlotsByName(Customer);
    } // setupUi

    void retranslateUi(QWidget *Customer)
    {
        Customer->setWindowTitle(QApplication::translate("Customer", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Customer", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("Customer", "Username", Q_NULLPTR));
        label_2->setText(QApplication::translate("Customer", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("Customer", "Welcome Customer, Please Login!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Customer: public Ui_Customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
