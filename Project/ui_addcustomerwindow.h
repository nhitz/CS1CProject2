/********************************************************************************
** Form generated from reading UI file 'addcustomerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMERWINDOW_H
#define UI_ADDCUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addcustomerwindow
{
public:
    QLabel *label_6;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *customerName;
    QLabel *label_4;
    QLineEdit *streetName;
    QLabel *label_2;
    QLineEdit *cityStateZip;
    QLabel *label_3;
    QComboBox *interestChoice;
    QLabel *label_5;
    QComboBox *keyChoice;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *outputLabel;

    void setupUi(QDialog *addcustomerwindow)
    {
        if (addcustomerwindow->objectName().isEmpty())
            addcustomerwindow->setObjectName(QStringLiteral("addcustomerwindow"));
        addcustomerwindow->resize(416, 429);
        label_6 = new QLabel(addcustomerwindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 70, 161, 31));
        widget = new QWidget(addcustomerwindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 120, 225, 178));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        customerName = new QLineEdit(widget);
        customerName->setObjectName(QStringLiteral("customerName"));

        gridLayout->addWidget(customerName, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        streetName = new QLineEdit(widget);
        streetName->setObjectName(QStringLiteral("streetName"));

        gridLayout->addWidget(streetName, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cityStateZip = new QLineEdit(widget);
        cityStateZip->setObjectName(QStringLiteral("cityStateZip"));

        gridLayout->addWidget(cityStateZip, 2, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        interestChoice = new QComboBox(widget);
        interestChoice->addItem(QString());
        interestChoice->addItem(QString());
        interestChoice->setObjectName(QStringLiteral("interestChoice"));

        gridLayout->addWidget(interestChoice, 3, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        keyChoice = new QComboBox(widget);
        keyChoice->addItem(QString());
        keyChoice->addItem(QString());
        keyChoice->setObjectName(QStringLiteral("keyChoice"));

        gridLayout->addWidget(keyChoice, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_2->addWidget(okButton, 1, 0, 1, 1);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout_2->addWidget(cancelButton, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        outputLabel = new QLabel(widget);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));

        gridLayout_3->addWidget(outputLabel, 1, 0, 1, 1);


        retranslateUi(addcustomerwindow);

        QMetaObject::connectSlotsByName(addcustomerwindow);
    } // setupUi

    void retranslateUi(QDialog *addcustomerwindow)
    {
        addcustomerwindow->setWindowTitle(QApplication::translate("addcustomerwindow", "Dialog", nullptr));
        label_6->setText(QApplication::translate("addcustomerwindow", "Add a customer:", nullptr));
        label->setText(QApplication::translate("addcustomerwindow", "Customer Name:", nullptr));
        label_4->setText(QApplication::translate("addcustomerwindow", "Streetname:", nullptr));
        label_2->setText(QApplication::translate("addcustomerwindow", "City/State/Zip:", nullptr));
        label_3->setText(QApplication::translate("addcustomerwindow", "Interest:", nullptr));
        interestChoice->setItemText(0, QApplication::translate("addcustomerwindow", "very interested", nullptr));
        interestChoice->setItemText(1, QApplication::translate("addcustomerwindow", "somwhat interested", nullptr));

        label_5->setText(QApplication::translate("addcustomerwindow", "Key:", nullptr));
        keyChoice->setItemText(0, QApplication::translate("addcustomerwindow", "key", nullptr));
        keyChoice->setItemText(1, QApplication::translate("addcustomerwindow", "nice to have", nullptr));

        okButton->setText(QApplication::translate("addcustomerwindow", "Ok", nullptr));
        cancelButton->setText(QApplication::translate("addcustomerwindow", "Cancel", nullptr));
        outputLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addcustomerwindow: public Ui_addcustomerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMERWINDOW_H
