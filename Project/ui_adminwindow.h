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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QLabel *label;
    QLabel *labelTotalCustomers;
    QLabel *labelTotalCustomersNumber;
    QListWidget *listWidget;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *txtFilter;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *UpdateButton;
    QPushButton *AddButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *DeleteButton;
    QWidget *widget2;
    QGridLayout *gridLayout;
    QLabel *selectedCustomerInterest;
    QLabel *selectedCustomerStreetname;
    QLabel *selectedCustomerCityStateZip;
    QLabel *selectedCustomerKey;
    QLabel *selectedCustomerName;

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
        labelTotalCustomers = new QLabel(adminwindow);
        labelTotalCustomers->setObjectName(QStringLiteral("labelTotalCustomers"));
        labelTotalCustomers->setGeometry(QRect(51, 439, 82, 16));
        labelTotalCustomersNumber = new QLabel(adminwindow);
        labelTotalCustomersNumber->setObjectName(QStringLiteral("labelTotalCustomersNumber"));
        labelTotalCustomersNumber->setGeometry(QRect(150, 440, 201, 20));
        listWidget = new QListWidget(adminwindow);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(51, 121, 256, 192));
        label_3 = new QLabel(adminwindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 90, 141, 16));
        widget = new QWidget(adminwindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(51, 93, 169, 22));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        txtFilter = new QLineEdit(widget);
        txtFilter->setObjectName(QStringLiteral("txtFilter"));

        horizontalLayout_3->addWidget(txtFilter);

        widget1 = new QWidget(adminwindow);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(51, 406, 241, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        UpdateButton = new QPushButton(widget1);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_2->addWidget(UpdateButton);

        AddButton = new QPushButton(widget1);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        horizontalLayout_2->addWidget(AddButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        DeleteButton = new QPushButton(widget1);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        horizontalLayout->addWidget(DeleteButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        widget2 = new QWidget(adminwindow);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(390, 120, 251, 191));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        selectedCustomerInterest = new QLabel(widget2);
        selectedCustomerInterest->setObjectName(QStringLiteral("selectedCustomerInterest"));

        gridLayout->addWidget(selectedCustomerInterest, 3, 0, 1, 1);

        selectedCustomerStreetname = new QLabel(widget2);
        selectedCustomerStreetname->setObjectName(QStringLiteral("selectedCustomerStreetname"));

        gridLayout->addWidget(selectedCustomerStreetname, 1, 0, 1, 1);

        selectedCustomerCityStateZip = new QLabel(widget2);
        selectedCustomerCityStateZip->setObjectName(QStringLiteral("selectedCustomerCityStateZip"));

        gridLayout->addWidget(selectedCustomerCityStateZip, 2, 0, 1, 1);

        selectedCustomerKey = new QLabel(widget2);
        selectedCustomerKey->setObjectName(QStringLiteral("selectedCustomerKey"));

        gridLayout->addWidget(selectedCustomerKey, 4, 0, 1, 1);

        selectedCustomerName = new QLabel(widget2);
        selectedCustomerName->setObjectName(QStringLiteral("selectedCustomerName"));

        gridLayout->addWidget(selectedCustomerName, 0, 0, 1, 1);


        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "Dialog", nullptr));
        label->setText(QApplication::translate("adminwindow", "Admin Page", nullptr));
        labelTotalCustomers->setText(QApplication::translate("adminwindow", "Total Customers:", nullptr));
        labelTotalCustomersNumber->setText(QApplication::translate("adminwindow", "0", nullptr));
        label_3->setText(QApplication::translate("adminwindow", "Customer's Info:", nullptr));
        label_2->setText(QApplication::translate("adminwindow", "Filter:", nullptr));
        UpdateButton->setText(QApplication::translate("adminwindow", "Update", nullptr));
        AddButton->setText(QApplication::translate("adminwindow", "Add", nullptr));
        DeleteButton->setText(QApplication::translate("adminwindow", "Delete", nullptr));
        selectedCustomerInterest->setText(QString());
        selectedCustomerStreetname->setText(QString());
        selectedCustomerCityStateZip->setText(QString());
        selectedCustomerKey->setText(QString());
        selectedCustomerName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
