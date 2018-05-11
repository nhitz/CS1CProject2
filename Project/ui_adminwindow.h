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
    QListWidget *listWidget;
    QLabel *labelTotalCustomers;
    QLabel *labelTotalCustomersNumber;
    QComboBox *comboBox;
    QLabel *label_2;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *selectedCustomerName;
    QLabel *label_8;
    QLabel *selectedCustomerStreetname;
    QLabel *label_7;
    QLabel *selectedCustomerCityStateZip;
    QLabel *label_6;
    QLabel *selectedCustomerInterest;
    QLabel *label_5;
    QLabel *selectedCustomerKey;
    QLabel *label_4;
    QLabel *selectedCustomerPamphlet;
    QLabel *label_10;
    QLabel *selectedBasicOrders;
    QLabel *label_11;
    QLabel *selectedBusinessOrders;
    QLabel *label_12;
    QLabel *selectedEnterpriseOrders;
    QLabel *label_13;
    QLabel *selectedTotalSpent;

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
        widget = new QWidget(adminwindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(320, 90, 351, 331));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        selectedCustomerName = new QLabel(widget);
        selectedCustomerName->setObjectName(QStringLiteral("selectedCustomerName"));

        gridLayout->addWidget(selectedCustomerName, 1, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        selectedCustomerStreetname = new QLabel(widget);
        selectedCustomerStreetname->setObjectName(QStringLiteral("selectedCustomerStreetname"));

        gridLayout->addWidget(selectedCustomerStreetname, 2, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        selectedCustomerCityStateZip = new QLabel(widget);
        selectedCustomerCityStateZip->setObjectName(QStringLiteral("selectedCustomerCityStateZip"));

        gridLayout->addWidget(selectedCustomerCityStateZip, 3, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        selectedCustomerInterest = new QLabel(widget);
        selectedCustomerInterest->setObjectName(QStringLiteral("selectedCustomerInterest"));

        gridLayout->addWidget(selectedCustomerInterest, 4, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        selectedCustomerKey = new QLabel(widget);
        selectedCustomerKey->setObjectName(QStringLiteral("selectedCustomerKey"));

        gridLayout->addWidget(selectedCustomerKey, 5, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        selectedCustomerPamphlet = new QLabel(widget);
        selectedCustomerPamphlet->setObjectName(QStringLiteral("selectedCustomerPamphlet"));

        gridLayout->addWidget(selectedCustomerPamphlet, 6, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 7, 0, 1, 1);

        selectedBasicOrders = new QLabel(widget);
        selectedBasicOrders->setObjectName(QStringLiteral("selectedBasicOrders"));

        gridLayout->addWidget(selectedBasicOrders, 7, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 8, 0, 1, 1);

        selectedBusinessOrders = new QLabel(widget);
        selectedBusinessOrders->setObjectName(QStringLiteral("selectedBusinessOrders"));

        gridLayout->addWidget(selectedBusinessOrders, 8, 1, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 9, 0, 1, 1);

        selectedEnterpriseOrders = new QLabel(widget);
        selectedEnterpriseOrders->setObjectName(QStringLiteral("selectedEnterpriseOrders"));

        gridLayout->addWidget(selectedEnterpriseOrders, 9, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 10, 0, 1, 1);

        selectedTotalSpent = new QLabel(widget);
        selectedTotalSpent->setObjectName(QStringLiteral("selectedTotalSpent"));

        gridLayout->addWidget(selectedTotalSpent, 10, 1, 1, 1);


        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "Dialog", nullptr));
        label->setText(QApplication::translate("adminwindow", "Admin Page", nullptr));
        labelTotalCustomers->setText(QApplication::translate("adminwindow", "Total Customers:", nullptr));
        labelTotalCustomersNumber->setText(QApplication::translate("adminwindow", "0", nullptr));
        comboBox->setItemText(0, QApplication::translate("adminwindow", "All Customers", nullptr));
        comboBox->setItemText(1, QApplication::translate("adminwindow", "Key Customers", nullptr));
        comboBox->setItemText(2, QApplication::translate("adminwindow", "Customers by Name", nullptr));

        label_2->setText(QApplication::translate("adminwindow", "Filter:", nullptr));
        AddButton->setText(QApplication::translate("adminwindow", "Add", nullptr));
        DeleteButton->setText(QApplication::translate("adminwindow", "Delete", nullptr));
        label_3->setText(QApplication::translate("adminwindow", "Customer's Info:", nullptr));
        label_9->setText(QApplication::translate("adminwindow", "Name:", nullptr));
        selectedCustomerName->setText(QString());
        label_8->setText(QApplication::translate("adminwindow", "Streetname:", nullptr));
        selectedCustomerStreetname->setText(QString());
        label_7->setText(QApplication::translate("adminwindow", "City, State Zip:", nullptr));
        selectedCustomerCityStateZip->setText(QString());
        label_6->setText(QApplication::translate("adminwindow", "Interest:", nullptr));
        selectedCustomerInterest->setText(QString());
        label_5->setText(QApplication::translate("adminwindow", "Key:", nullptr));
        selectedCustomerKey->setText(QString());
        label_4->setText(QApplication::translate("adminwindow", "Pamphlet Sent:", nullptr));
        selectedCustomerPamphlet->setText(QString());
        label_10->setText(QApplication::translate("adminwindow", "# Basic Orders:", nullptr));
        selectedBasicOrders->setText(QString());
        label_11->setText(QApplication::translate("adminwindow", "# Business Orders:", nullptr));
        selectedBusinessOrders->setText(QString());
        label_12->setText(QApplication::translate("adminwindow", "# Enterprise Orders:", nullptr));
        selectedEnterpriseOrders->setText(QString());
        label_13->setText(QApplication::translate("adminwindow", "Total Spent:                                  $", nullptr));
        selectedTotalSpent->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
