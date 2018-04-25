/********************************************************************************
** Form generated from reading UI file 'customerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDOW_H
#define UI_CUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindow
{
public:

    void setupUi(QDialog *CustomerWindow)
    {
        if (CustomerWindow->objectName().isEmpty())
            CustomerWindow->setObjectName(QStringLiteral("CustomerWindow"));
        CustomerWindow->resize(400, 300);

        retranslateUi(CustomerWindow);

        QMetaObject::connectSlotsByName(CustomerWindow);
    } // setupUi

    void retranslateUi(QDialog *CustomerWindow)
    {
        CustomerWindow->setWindowTitle(QApplication::translate("CustomerWindow", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindow: public Ui_CustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDOW_H
