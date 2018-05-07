/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

/********************************************//**
 *  Object class for the main window widget.
 ***********************************************/
class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame;
    QLabel *label_3;
    QLabel *test1;
    QLabel *test2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *customerLoginButton;
    QCommandLinkButton *adminLoginButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1308, 780);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 231, 51));
        QFont font;
        font.setFamily(QStringLiteral("MS Sans Serif"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 211, 16));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 160, 1261, 601));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 81, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Yu Gothic UI Semibold"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        test1 = new QLabel(frame);
        test1->setObjectName(QStringLiteral("test1"));
        test1->setGeometry(QRect(30, 50, 521, 501));
        test2 = new QLabel(frame);
        test2->setObjectName(QStringLiteral("test2"));
        test2->setGeometry(QRect(560, 50, 521, 501));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(429, 40, 561, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_2 = new QCommandLinkButton(layoutWidget);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));

        horizontalLayout->addWidget(commandLinkButton_2);

        customerLoginButton = new QCommandLinkButton(layoutWidget);
        customerLoginButton->setObjectName(QStringLiteral("customerLoginButton"));

        horizontalLayout->addWidget(customerLoginButton);

        adminLoginButton = new QCommandLinkButton(layoutWidget);
        adminLoginButton->setObjectName(QStringLiteral("adminLoginButton"));

        horizontalLayout->addWidget(adminLoginButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1308, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ICyberSecurity", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Your Protection Is Our Success", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "About Us", Q_NULLPTR));
        test1->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        test2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        commandLinkButton_2->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        customerLoginButton->setText(QApplication::translate("MainWindow", "Customer Login", Q_NULLPTR));
        adminLoginButton->setText(QApplication::translate("MainWindow", "Administrator Login", Q_NULLPTR));
    } // retranslateUi

};

/********************************************//**
 *  Namespace for the user interface.
 ***********************************************/
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
