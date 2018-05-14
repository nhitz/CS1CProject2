/********************************************************************************
** Form generated from reading UI file 'helpoption.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPOPTION_H
#define UI_HELPOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_helpOption
{
public:
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *helpOption)
    {
        if (helpOption->objectName().isEmpty())
            helpOption->setObjectName(QStringLiteral("helpOption"));
        helpOption->resize(722, 355);
        label = new QLabel(helpOption);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 10, 121, 21));
        label_4 = new QLabel(helpOption);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 100, 47, 13));
        label_5 = new QLabel(helpOption);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 100, 47, 13));
        textBrowser = new QTextBrowser(helpOption);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 661, 231));

        retranslateUi(helpOption);

        QMetaObject::connectSlotsByName(helpOption);
    } // setupUi

    void retranslateUi(QDialog *helpOption)
    {
        helpOption->setWindowTitle(QApplication::translate("helpOption", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("helpOption", "Navigating Our Website:", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        textBrowser->setHtml(QApplication::translate("helpOption", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">How to be a customer? Contact our administrator if you are interested in being a customer. You will be given your own personal login. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">As a customer, you have the option to choose one of our products: Basic ($100), Business ($200), and Enterprise ($300). You can order a"
                        "s many products of any kind as you want, and you are able to see your total spent, as well as the products you ordered.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Are you an admin? Here is what you can do:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You can login to the admin page. View our current customers, add our new customers, and delete customers who decide to withdraw from the company.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You are able to see each customer's total spent if they ordered a pamplet. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\">You can sort by cutomer name and display only our key customers.</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class helpOption: public Ui_helpOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPOPTION_H
