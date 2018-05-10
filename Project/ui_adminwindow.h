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

class Ui_adminwindow
{
public:
    QLabel *label;
    QLabel *label_3;
    QListWidget *listWidget;
    QLabel *labelTotalCustomers;
    QLabel *labelTotalCustomersNumber;
    QComboBox *comboBox;
    QLabel *label_2;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *selectedCustomerName;
    QLabel *selectedCustomerStreetname;
    QLabel *selectedCustomerCityStateZip;
    QLabel *selectedCustomerKey;
    QLabel *selectedCustomerInterest;
    QLabel *selectedCustomerPamphlet;
    QLabel *selectedBasicOrders;
    QLabel *selectedBusinessOrders;
    QLabel *selectedEnterpriseOrders;

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
        label_3->setGeometry(QRect(320, 70, 141, 16));
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
        label_9 = new QLabel(adminwindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(321, 121, 31, 16));
        label_8 = new QLabel(adminwindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(321, 154, 60, 16));
        label_7 = new QLabel(adminwindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(321, 187, 73, 16));
        label_6 = new QLabel(adminwindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(321, 219, 43, 16));
        label_5 = new QLabel(adminwindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(321, 252, 22, 16));
        label_4 = new QLabel(adminwindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(321, 285, 73, 16));
        label_10 = new QLabel(adminwindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(321, 318, 101, 16));
        label_11 = new QLabel(adminwindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(321, 350, 101, 16));
        label_12 = new QLabel(adminwindow);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(321, 383, 111, 16));
        widget = new QWidget(adminwindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(441, 121, 261, 281));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        selectedCustomerName = new QLabel(widget);
        selectedCustomerName->setObjectName(QStringLiteral("selectedCustomerName"));

        gridLayout->addWidget(selectedCustomerName, 0, 0, 1, 1);

        selectedCustomerStreetname = new QLabel(widget);
        selectedCustomerStreetname->setObjectName(QStringLiteral("selectedCustomerStreetname"));

        gridLayout->addWidget(selectedCustomerStreetname, 1, 0, 1, 1);

        selectedCustomerCityStateZip = new QLabel(widget);
        selectedCustomerCityStateZip->setObjectName(QStringLiteral("selectedCustomerCityStateZip"));

        gridLayout->addWidget(selectedCustomerCityStateZip, 2, 0, 1, 1);

        selectedCustomerKey = new QLabel(widget);
        selectedCustomerKey->setObjectName(QStringLiteral("selectedCustomerKey"));

        gridLayout->addWidget(selectedCustomerKey, 4, 0, 1, 1);

        selectedCustomerInterest = new QLabel(widget);
        selectedCustomerInterest->setObjectName(QStringLiteral("selectedCustomerInterest"));

        gridLayout->addWidget(selectedCustomerInterest, 3, 0, 1, 1);

        selectedCustomerPamphlet = new QLabel(widget);
        selectedCustomerPamphlet->setObjectName(QStringLiteral("selectedCustomerPamphlet"));

        gridLayout->addWidget(selectedCustomerPamphlet, 6, 0, 1, 1);

        selectedBasicOrders = new QLabel(widget);
        selectedBasicOrders->setObjectName(QStringLiteral("selectedBasicOrders"));

        gridLayout->addWidget(selectedBasicOrders, 7, 0, 1, 1);

        selectedBusinessOrders = new QLabel(widget);
        selectedBusinessOrders->setObjectName(QStringLiteral("selectedBusinessOrders"));

        gridLayout->addWidget(selectedBusinessOrders, 8, 0, 1, 1);

        selectedEnterpriseOrders = new QLabel(widget);
        selectedEnterpriseOrders->setObjectName(QStringLiteral("selectedEnterpriseOrders"));

        gridLayout->addWidget(selectedEnterpriseOrders, 9, 0, 1, 1);


        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "Dialog", nullptr));
        label->setText(QApplication::translate("adminwindow", "Admin Page", nullptr));
        label_3->setText(QApplication::translate("adminwindow", "Customer's Info:", nullptr));
        labelTotalCustomers->setText(QApplication::translate("adminwindow", "Total Customers:", nullptr));
        labelTotalCustomersNumber->setText(QApplication::translate("adminwindow", "0", nullptr));
        comboBox->setItemText(0, QApplication::translate("adminwindow", "All Customers", nullptr));
        comboBox->setItemText(1, QApplication::translate("adminwindow", "Key Customers", nullptr));
        comboBox->setItemText(2, QApplication::translate("adminwindow", "Customers by Name", nullptr));

        label_2->setText(QApplication::translate("adminwindow", "Filter:", nullptr));
        AddButton->setText(QApplication::translate("adminwindow", "Add", nullptr));
        DeleteButton->setText(QApplication::translate("adminwindow", "Delete", nullptr));
        label_9->setText(QApplication::translate("adminwindow", "Name:", nullptr));
        label_8->setText(QApplication::translate("adminwindow", "Streetname:", nullptr));
        label_7->setText(QApplication::translate("adminwindow", "City, State Zip:", nullptr));
        label_6->setText(QApplication::translate("adminwindow", "Interest:", nullptr));
        label_5->setText(QApplication::translate("adminwindow", "Key:", nullptr));
        label_4->setText(QApplication::translate("adminwindow", "Pamphlet Sent:", nullptr));
        label_10->setText(QApplication::translate("adminwindow", "# Basic Orders:", nullptr));
        label_11->setText(QApplication::translate("adminwindow", "# Business Orders:", nullptr));
        label_12->setText(QApplication::translate("adminwindow", "# Enterprise Orders:", nullptr));
        selectedCustomerName->setText(QString());
        selectedCustomerStreetname->setText(QString());
        selectedCustomerCityStateZip->setText(QString());
        selectedCustomerKey->setText(QString());
        selectedCustomerInterest->setText(QString());
        selectedCustomerPamphlet->setText(QString());
        selectedBasicOrders->setText(QString());
        selectedBusinessOrders->setText(QString());
        selectedEnterpriseOrders->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
