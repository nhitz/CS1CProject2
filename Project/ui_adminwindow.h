/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *selectedCustomerName;
    QLabel *selectedCustomerStreetname;
    QLabel *selectedCustomerCityStateZip;
    QLabel *selectedCustomerInterest;
    QLabel *selectedCustomerKey;
    QLabel *selectedCustomerPamphlet;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;

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
        label_3->setGeometry(QRect(320, 80, 141, 16));
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
        widget->setGeometry(QRect(420, 120, 281, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        selectedCustomerName = new QLabel(widget);
        selectedCustomerName->setObjectName(QStringLiteral("selectedCustomerName"));

        verticalLayout->addWidget(selectedCustomerName);

        selectedCustomerStreetname = new QLabel(widget);
        selectedCustomerStreetname->setObjectName(QStringLiteral("selectedCustomerStreetname"));

        verticalLayout->addWidget(selectedCustomerStreetname);

        selectedCustomerCityStateZip = new QLabel(widget);
        selectedCustomerCityStateZip->setObjectName(QStringLiteral("selectedCustomerCityStateZip"));

        verticalLayout->addWidget(selectedCustomerCityStateZip);

        selectedCustomerInterest = new QLabel(widget);
        selectedCustomerInterest->setObjectName(QStringLiteral("selectedCustomerInterest"));

        verticalLayout->addWidget(selectedCustomerInterest);

        selectedCustomerKey = new QLabel(widget);
        selectedCustomerKey->setObjectName(QStringLiteral("selectedCustomerKey"));

        verticalLayout->addWidget(selectedCustomerKey);

        selectedCustomerPamphlet = new QLabel(widget);
        selectedCustomerPamphlet->setObjectName(QStringLiteral("selectedCustomerPamphlet"));

        verticalLayout->addWidget(selectedCustomerPamphlet);

        widget1 = new QWidget(adminwindow);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(320, 120, 101, 241));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);


        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("adminwindow", "Admin Page", Q_NULLPTR));
        label_3->setText(QApplication::translate("adminwindow", "Customer's Info:", Q_NULLPTR));
        labelTotalCustomers->setText(QApplication::translate("adminwindow", "Total Customers:", Q_NULLPTR));
        labelTotalCustomersNumber->setText(QApplication::translate("adminwindow", "0", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("adminwindow", "All Customers", Q_NULLPTR)
         << QApplication::translate("adminwindow", "Key Customers", Q_NULLPTR)
         << QApplication::translate("adminwindow", "Customers by Name", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("adminwindow", "Filter:", Q_NULLPTR));
        AddButton->setText(QApplication::translate("adminwindow", "Add", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("adminwindow", "Delete", Q_NULLPTR));
        selectedCustomerName->setText(QString());
        selectedCustomerStreetname->setText(QString());
        selectedCustomerCityStateZip->setText(QString());
        selectedCustomerInterest->setText(QString());
        selectedCustomerKey->setText(QString());
        selectedCustomerPamphlet->setText(QString());
        label_9->setText(QApplication::translate("adminwindow", "Name:", Q_NULLPTR));
        label_8->setText(QApplication::translate("adminwindow", "Streetname:", Q_NULLPTR));
        label_7->setText(QApplication::translate("adminwindow", "City, State Zip:", Q_NULLPTR));
        label_6->setText(QApplication::translate("adminwindow", "Interest:", Q_NULLPTR));
        label_5->setText(QApplication::translate("adminwindow", "Key:", Q_NULLPTR));
        label_4->setText(QApplication::translate("adminwindow", "Pamphlet Sent:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
