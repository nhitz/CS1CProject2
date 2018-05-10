/********************************************************************************
** Form generated from reading UI file 'customerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDOW_H
#define UI_CUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindow
{
public:
    QLabel *label_4;
    QLabel *pamphletLabel;
    QPushButton *logoutButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *businessButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *basicButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPushButton *enterpriseButton;
    QLabel *label_11;
    QLabel *customerNameLabel;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QTextEdit *testimonialText;
    QPushButton *submitTestimonyButton;
    QLabel *thanksLabel;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *numBasicLabel;
    QLabel *label_8;
    QLabel *numBusinessLabel;
    QLabel *label_9;
    QLabel *numEnterpriseLabel;
    QLabel *label_10;
    QLabel *totalLabel;

    void setupUi(QDialog *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName(QStringLiteral("CustomerWindow"));
        CustomerWindow->resize(979, 597);
        label_4 = new QLabel(CustomerWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 30, 311, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        pamphletLabel = new QLabel(CustomerWindow);
        pamphletLabel->setObjectName(QStringLiteral("pamphletLabel"));
        pamphletLabel->setGeometry(QRect(30, 80, 612, 401));
        pamphletLabel->setMaximumSize(QSize(792, 612));
        pamphletLabel->setScaledContents(true);
        logoutButton = new QPushButton(CustomerWindow);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(870, 550, 75, 23));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        logoutButton->setFont(font1);
        layoutWidget = new QWidget(CustomerWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 510, 161, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        verticalLayout->addWidget(label);

        businessButton = new QPushButton(layoutWidget);
        businessButton->setObjectName(QStringLiteral("businessButton"));

        verticalLayout->addWidget(businessButton);

        layoutWidget1 = new QWidget(CustomerWindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 510, 161, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        basicButton = new QPushButton(layoutWidget1);
        basicButton->setObjectName(QStringLiteral("basicButton"));

        verticalLayout_2->addWidget(basicButton);

        layoutWidget2 = new QWidget(CustomerWindow);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(470, 510, 171, 51));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        verticalLayout_3->addWidget(label_3);

        enterpriseButton = new QPushButton(layoutWidget2);
        enterpriseButton->setObjectName(QStringLiteral("enterpriseButton"));

        verticalLayout_3->addWidget(enterpriseButton);

        label_11 = new QLabel(CustomerWindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 10, 111, 31));
        label_11->setFont(font);
        customerNameLabel = new QLabel(CustomerWindow);
        customerNameLabel->setObjectName(QStringLiteral("customerNameLabel"));
        customerNameLabel->setGeometry(QRect(150, 10, 331, 31));
        customerNameLabel->setFont(font);
        widget = new QWidget(CustomerWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(660, 20, 281, 351));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font1);

        gridLayout_2->addWidget(pushButton_4, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font1);

        gridLayout_2->addWidget(pushButton_5, 0, 1, 1, 2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 3);

        testimonialText = new QTextEdit(widget);
        testimonialText->setObjectName(QStringLiteral("testimonialText"));

        gridLayout_2->addWidget(testimonialText, 2, 0, 1, 3);

        submitTestimonyButton = new QPushButton(widget);
        submitTestimonyButton->setObjectName(QStringLiteral("submitTestimonyButton"));

        gridLayout_2->addWidget(submitTestimonyButton, 3, 0, 1, 2);

        thanksLabel = new QLabel(widget);
        thanksLabel->setObjectName(QStringLiteral("thanksLabel"));

        gridLayout_2->addWidget(thanksLabel, 3, 2, 1, 1);

        widget1 = new QWidget(CustomerWindow);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(671, 391, 231, 141));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        numBasicLabel = new QLabel(widget1);
        numBasicLabel->setObjectName(QStringLiteral("numBasicLabel"));

        gridLayout->addWidget(numBasicLabel, 1, 1, 1, 2);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        numBusinessLabel = new QLabel(widget1);
        numBusinessLabel->setObjectName(QStringLiteral("numBusinessLabel"));

        gridLayout->addWidget(numBusinessLabel, 2, 1, 1, 2);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        numEnterpriseLabel = new QLabel(widget1);
        numEnterpriseLabel->setObjectName(QStringLiteral("numEnterpriseLabel"));

        gridLayout->addWidget(numEnterpriseLabel, 3, 1, 1, 2);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        totalLabel = new QLabel(widget1);
        totalLabel->setObjectName(QStringLiteral("totalLabel"));

        gridLayout->addWidget(totalLabel, 4, 1, 1, 2);


        retranslateUi(CustomerWindow);

        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QDialog *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QApplication::translate("CustomerWindow", "Dialog", nullptr));
        label_4->setText(QApplication::translate("CustomerWindow", "Please make order selection:", nullptr));
        pamphletLabel->setText(QApplication::translate("CustomerWindow", "pamphletLabel", nullptr));
        logoutButton->setText(QApplication::translate("CustomerWindow", "Logout", nullptr));
        label->setText(QApplication::translate("CustomerWindow", "                     $200", nullptr));
        businessButton->setText(QApplication::translate("CustomerWindow", "Order Business Package", nullptr));
        label_2->setText(QApplication::translate("CustomerWindow", "                     $100", nullptr));
        basicButton->setText(QApplication::translate("CustomerWindow", "Order Basic Package", nullptr));
        label_3->setText(QApplication::translate("CustomerWindow", "                       $300", nullptr));
        enterpriseButton->setText(QApplication::translate("CustomerWindow", "Order Enterprise Package", nullptr));
        label_11->setText(QApplication::translate("CustomerWindow", "Welcome, ", nullptr));
        customerNameLabel->setText(QString());
        pushButton_4->setText(QApplication::translate("CustomerWindow", "Help", nullptr));
        pushButton_5->setText(QApplication::translate("CustomerWindow", "Request Pamphlet", nullptr));
        label_5->setText(QApplication::translate("CustomerWindow", "Liked our products? Leave us a testimonial!", nullptr));
        submitTestimonyButton->setText(QApplication::translate("CustomerWindow", "Submit", nullptr));
        thanksLabel->setText(QString());
        label_6->setText(QApplication::translate("CustomerWindow", "Order Summary:", nullptr));
        label_7->setText(QApplication::translate("CustomerWindow", "Basic Package:", nullptr));
        numBasicLabel->setText(QString());
        label_8->setText(QApplication::translate("CustomerWindow", "Business Package:", nullptr));
        numBusinessLabel->setText(QString());
        label_9->setText(QApplication::translate("CustomerWindow", "Enterprise Package:", nullptr));
        numEnterpriseLabel->setText(QString());
        label_10->setText(QApplication::translate("CustomerWindow", "Total:", nullptr));
        totalLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
