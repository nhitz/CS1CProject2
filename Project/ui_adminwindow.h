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
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *selectedCustomerInterest;
    QLabel *selectedCustomerStreetname;
    QLabel *selectedCustomerCityStateZip;
    QLabel *selectedCustomerKey;
    QLabel *selectedCustomerName;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *txtFilter;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *DeleteButton;
    QLabel *labelTotalCustomers;
    QLabel *labelTotalCustomersNumber;

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
        widget = new QWidget(adminwindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(390, 120, 251, 191));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        selectedCustomerInterest = new QLabel(widget);
        selectedCustomerInterest->setObjectName(QStringLiteral("selectedCustomerInterest"));

        gridLayout->addWidget(selectedCustomerInterest, 3, 0, 1, 1);

        selectedCustomerStreetname = new QLabel(widget);
        selectedCustomerStreetname->setObjectName(QStringLiteral("selectedCustomerStreetname"));

        gridLayout->addWidget(selectedCustomerStreetname, 1, 0, 1, 1);

        selectedCustomerCityStateZip = new QLabel(widget);
        selectedCustomerCityStateZip->setObjectName(QStringLiteral("selectedCustomerCityStateZip"));

        gridLayout->addWidget(selectedCustomerCityStateZip, 2, 0, 1, 1);

        selectedCustomerKey = new QLabel(widget);
        selectedCustomerKey->setObjectName(QStringLiteral("selectedCustomerKey"));

        gridLayout->addWidget(selectedCustomerKey, 4, 0, 1, 1);

        selectedCustomerName = new QLabel(widget);
        selectedCustomerName->setObjectName(QStringLiteral("selectedCustomerName"));

        gridLayout->addWidget(selectedCustomerName, 0, 0, 1, 1);

        widget1 = new QWidget(adminwindow);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(51, 93, 258, 274));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        txtFilter = new QLineEdit(widget1);
        txtFilter->setObjectName(QStringLiteral("txtFilter"));

        horizontalLayout_3->addWidget(txtFilter);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        listWidget = new QListWidget(widget1);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_2->addWidget(listWidget, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        AddButton = new QPushButton(widget1);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        horizontalLayout_2->addWidget(AddButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        DeleteButton = new QPushButton(widget1);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));

        horizontalLayout->addWidget(DeleteButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        labelTotalCustomers = new QLabel(widget1);
        labelTotalCustomers->setObjectName(QStringLiteral("labelTotalCustomers"));

        gridLayout_2->addWidget(labelTotalCustomers, 3, 0, 1, 1);

        labelTotalCustomersNumber = new QLabel(widget1);
        labelTotalCustomersNumber->setObjectName(QStringLiteral("labelTotalCustomersNumber"));

        gridLayout_2->addWidget(labelTotalCustomersNumber, 3, 1, 1, 1);


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
        label_2->setText(QApplication::translate("adminwindow", "Filter:", nullptr));
        AddButton->setText(QApplication::translate("adminwindow", "Add", nullptr));
        DeleteButton->setText(QApplication::translate("adminwindow", "Delete", nullptr));
        labelTotalCustomers->setText(QApplication::translate("adminwindow", "Total Customers:", nullptr));
        labelTotalCustomersNumber->setText(QApplication::translate("adminwindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
