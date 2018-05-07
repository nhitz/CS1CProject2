
/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

/********************************************//**
 *  Object class for the administrator's window.
 ***********************************************/
class Ui_adminwindow
{
public:
    QLabel *label;
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *selectedCustomerInterest;
    QLabel *selectedCustomerStreetname;
    QLabel *selectedCustomerCityStateZip;
    QLabel *selectedCustomerKey;
    QLabel *selectedCustomerName;
    QListWidget *listWidget;
    QLabel *labelTotalCustomers;
    QLabel *labelTotalCustomersNumber;
    QComboBox *comboBox;
    QLabel *label_2;
    QPushButton *AddButton;
    QPushButton *DeleteButton;

    void setupUi(QDialog *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName(QStringLiteral("adminwindow"));
        adminwindow->resize(720, 494);
        label = new QLabel(adminwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 20, 87, 18));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_3 = new QLabel(adminwindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 90, 141, 16));
        layoutWidget = new QWidget(adminwindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 120, 251, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        selectedCustomerInterest = new QLabel(layoutWidget);
        selectedCustomerInterest->setObjectName(QStringLiteral("selectedCustomerInterest"));

        gridLayout->addWidget(selectedCustomerInterest, 3, 0, 1, 1);

        selectedCustomerStreetname = new QLabel(layoutWidget);
        selectedCustomerStreetname->setObjectName(QStringLiteral("selectedCustomerStreetname"));

        gridLayout->addWidget(selectedCustomerStreetname, 1, 0, 1, 1);

        selectedCustomerCityStateZip = new QLabel(layoutWidget);
        selectedCustomerCityStateZip->setObjectName(QStringLiteral("selectedCustomerCityStateZip"));

        gridLayout->addWidget(selectedCustomerCityStateZip, 2, 0, 1, 1);

        selectedCustomerKey = new QLabel(layoutWidget);
        selectedCustomerKey->setObjectName(QStringLiteral("selectedCustomerKey"));

        gridLayout->addWidget(selectedCustomerKey, 4, 0, 1, 1);

        selectedCustomerName = new QLabel(layoutWidget);
        selectedCustomerName->setObjectName(QStringLiteral("selectedCustomerName"));

        gridLayout->addWidget(selectedCustomerName, 0, 0, 1, 1);

        listWidget = new QListWidget(adminwindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(52, 122, 256, 192));
        labelTotalCustomers = new QLabel(adminwindow);
        labelTotalCustomers->setObjectName(QStringLiteral("labelTotalCustomers"));
        labelTotalCustomers->setGeometry(QRect(52, 353, 82, 16));
        labelTotalCustomersNumber = new QLabel(adminwindow);
        labelTotalCustomersNumber->setObjectName(QStringLiteral("labelTotalCustomersNumber"));
        labelTotalCustomersNumber->setGeometry(QRect(183, 353, 16, 16));
        comboBox = new QComboBox(adminwindow);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(87, 95, 171, 20));
        label_2 = new QLabel(adminwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(53, 95, 28, 16));
        AddButton = new QPushButton(adminwindow);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(53, 322, 75, 23));
        DeleteButton = new QPushButton(adminwindow);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(135, 322, 75, 23));

        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "Dialog", nullptr));
        label->setText(QApplication::translate("adminwindow", "Admin Page", nullptr));
        label_3->setText(QApplication::translate("adminwindow", "Customer's Info:", nullptr));
        selectedCustomerInterest->setText(QString());
        selectedCustomerStreetname->setText(QString());
        selectedCustomerCityStateZip->setText(QString());
        selectedCustomerKey->setText(QString());
        selectedCustomerName->setText(QString());
        labelTotalCustomers->setText(QApplication::translate("adminwindow", "Total Customers:", nullptr));
        labelTotalCustomersNumber->setText(QApplication::translate("adminwindow", "0", nullptr));
        comboBox->setItemText(0, QApplication::translate("adminwindow", "All Customers", nullptr));
        comboBox->setItemText(1, QApplication::translate("adminwindow", "Key Customers", nullptr));
        comboBox->setItemText(2, QApplication::translate("adminwindow", "Customers by Name", nullptr));

        label_2->setText(QApplication::translate("adminwindow", "Filter:", nullptr));
        AddButton->setText(QApplication::translate("adminwindow", "Add", nullptr));
        DeleteButton->setText(QApplication::translate("adminwindow", "Delete", nullptr));
    } // retranslateUi

};

/********************************************//**
 *  Namespace for the user interface.
 ***********************************************/
namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
