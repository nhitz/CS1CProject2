/********************************************************************************
** Form generated from reading UI file 'addcustomerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMERWINDOW_H
#define UI_ADDCUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addcustomerwindow
{
public:
    QLabel *label_6;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *okButton;
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
    QPushButton *cancelButton;
    QLabel *label_7;
    QLineEdit *UserNameEdit;
    QLabel *label_8;
    QLineEdit *PasswordEdit;
    QLabel *outputLabel;

    void setupUi(QDialog *addcustomerwindow)
    {
        if (addcustomerwindow->objectName().isEmpty())
            addcustomerwindow->setObjectName(QStringLiteral("addcustomerwindow"));
        addcustomerwindow->resize(416, 429);
        label_6 = new QLabel(addcustomerwindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 70, 161, 31));
        layoutWidget = new QWidget(addcustomerwindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 120, 225, 230));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_2->addWidget(okButton, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        customerName = new QLineEdit(layoutWidget);
        customerName->setObjectName(QStringLiteral("customerName"));

        gridLayout->addWidget(customerName, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        streetName = new QLineEdit(layoutWidget);
        streetName->setObjectName(QStringLiteral("streetName"));

        gridLayout->addWidget(streetName, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cityStateZip = new QLineEdit(layoutWidget);
        cityStateZip->setObjectName(QStringLiteral("cityStateZip"));

        gridLayout->addWidget(cityStateZip, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        interestChoice = new QComboBox(layoutWidget);
        interestChoice->setObjectName(QStringLiteral("interestChoice"));

        gridLayout->addWidget(interestChoice, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        keyChoice = new QComboBox(layoutWidget);
        keyChoice->setObjectName(QStringLiteral("keyChoice"));

        gridLayout->addWidget(keyChoice, 4, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout_2->addWidget(cancelButton, 3, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        UserNameEdit = new QLineEdit(layoutWidget);
        UserNameEdit->setObjectName(QStringLiteral("UserNameEdit"));

        gridLayout_2->addWidget(UserNameEdit, 1, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        PasswordEdit = new QLineEdit(layoutWidget);
        PasswordEdit->setObjectName(QStringLiteral("PasswordEdit"));

        gridLayout_2->addWidget(PasswordEdit, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        outputLabel = new QLabel(layoutWidget);
        outputLabel->setObjectName(QStringLiteral("outputLabel"));

        gridLayout_3->addWidget(outputLabel, 1, 0, 1, 1);


        retranslateUi(addcustomerwindow);

        QMetaObject::connectSlotsByName(addcustomerwindow);
    } // setupUi

    void retranslateUi(QDialog *addcustomerwindow)
    {
        addcustomerwindow->setWindowTitle(QApplication::translate("addcustomerwindow", "Dialog", Q_NULLPTR));
        label_6->setText(QApplication::translate("addcustomerwindow", "Add a customer:", Q_NULLPTR));
        okButton->setText(QApplication::translate("addcustomerwindow", "Ok", Q_NULLPTR));
        label->setText(QApplication::translate("addcustomerwindow", "Customer Name:", Q_NULLPTR));
        label_4->setText(QApplication::translate("addcustomerwindow", "Streetname:", Q_NULLPTR));
        label_2->setText(QApplication::translate("addcustomerwindow", "City/State/Zip:", Q_NULLPTR));
        label_3->setText(QApplication::translate("addcustomerwindow", "Interest:", Q_NULLPTR));
        interestChoice->clear();
        interestChoice->insertItems(0, QStringList()
         << QApplication::translate("addcustomerwindow", "very interested", Q_NULLPTR)
         << QApplication::translate("addcustomerwindow", "somwhat interested", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("addcustomerwindow", "Key:", Q_NULLPTR));
        keyChoice->clear();
        keyChoice->insertItems(0, QStringList()
         << QApplication::translate("addcustomerwindow", "key", Q_NULLPTR)
         << QApplication::translate("addcustomerwindow", "nice to have", Q_NULLPTR)
        );
        cancelButton->setText(QApplication::translate("addcustomerwindow", "Cancel", Q_NULLPTR));
        label_7->setText(QApplication::translate("addcustomerwindow", "Username:", Q_NULLPTR));
        label_8->setText(QApplication::translate("addcustomerwindow", "Password:", Q_NULLPTR));
        outputLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addcustomerwindow: public Ui_addcustomerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMERWINDOW_H
