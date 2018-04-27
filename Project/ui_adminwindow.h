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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *DeleteButton;
    QPushButton *AddButton;
    QPushButton *UpdateButton;

    void setupUi(QDialog *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName(QStringLiteral("adminwindow"));
        adminwindow->resize(860, 583);
        label = new QLabel(adminwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, 20, 101, 21));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableWidget = new QTableWidget(adminwindow);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem20);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(130, 80, 551, 241));
        tableWidget->setRowCount(6);
        tableWidget->setColumnCount(5);
        DeleteButton = new QPushButton(adminwindow);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setGeometry(QRect(370, 360, 75, 23));
        AddButton = new QPushButton(adminwindow);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(170, 360, 75, 23));
        UpdateButton = new QPushButton(adminwindow);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));
        UpdateButton->setGeometry(QRect(550, 360, 75, 23));

        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("adminwindow", "Admin Page", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tableWidget->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("adminwindow", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->item(0, 1);
        ___qtablewidgetitem1->setText(QApplication::translate("adminwindow", "Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 2);
        ___qtablewidgetitem2->setText(QApplication::translate("adminwindow", "City/Zipcode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 3);
        ___qtablewidgetitem3->setText(QApplication::translate("adminwindow", "Interest", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 4);
        ___qtablewidgetitem4->setText(QApplication::translate("adminwindow", "Cutomer Rating", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(1, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("adminwindow", "Sandun", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 1);
        ___qtablewidgetitem6->setText(QApplication::translate("adminwindow", "1234 Elm Street", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 2);
        ___qtablewidgetitem7->setText(QApplication::translate("adminwindow", "Mission Viejo", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 3);
        ___qtablewidgetitem8->setText(QApplication::translate("adminwindow", "no", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 4);
        ___qtablewidgetitem9->setText(QApplication::translate("adminwindow", "no", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(2, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("adminwindow", "Alan", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(2, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("adminwindow", "2313", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(2, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("adminwindow", "dklfsdf", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(2, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("adminwindow", "dfsf", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(2, 4);
        ___qtablewidgetitem14->setText(QApplication::translate("adminwindow", "fsdf", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(3, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("adminwindow", "Andrean", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(3, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("adminwindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(3, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("adminwindow", "sdfsf", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(3, 3);
        ___qtablewidgetitem18->setText(QApplication::translate("adminwindow", "dsfds", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(3, 4);
        ___qtablewidgetitem19->setText(QApplication::translate("adminwindow", "dsfs", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        DeleteButton->setText(QApplication::translate("adminwindow", "Delete", Q_NULLPTR));
        AddButton->setText(QApplication::translate("adminwindow", "Add", Q_NULLPTR));
        UpdateButton->setText(QApplication::translate("adminwindow", "Update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
