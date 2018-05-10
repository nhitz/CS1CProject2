/********************************************************************************
** Form generated from reading UI file 'confirmbusiness.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMBUSINESS_H
#define UI_CONFIRMBUSINESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_confirmBusiness
{
public:
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *thanksLabel;

    void setupUi(QDialog *confirmBusiness)
    {
        if (confirmBusiness->objectName().isEmpty())
            confirmBusiness->setObjectName(QStringLiteral("confirmBusiness"));
        confirmBusiness->resize(400, 300);
        submitButton = new QPushButton(confirmBusiness);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(40, 270, 75, 23));
        cancelButton = new QPushButton(confirmBusiness);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(120, 270, 75, 23));
        label = new QLabel(confirmBusiness);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 351, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        textBrowser = new QTextBrowser(confirmBusiness);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 51, 311, 211));
        thanksLabel = new QLabel(confirmBusiness);
        thanksLabel->setObjectName(QStringLiteral("thanksLabel"));
        thanksLabel->setGeometry(QRect(220, 270, 91, 21));

        retranslateUi(confirmBusiness);

        QMetaObject::connectSlotsByName(confirmBusiness);
    } // setupUi

    void retranslateUi(QDialog *confirmBusiness)
    {
        confirmBusiness->setWindowTitle(QApplication::translate("confirmBusiness", "Dialog", nullptr));
        submitButton->setText(QApplication::translate("confirmBusiness", "Submit Order", nullptr));
        cancelButton->setText(QApplication::translate("confirmBusiness", "Cancel", nullptr));
        label->setText(QApplication::translate("confirmBusiness", "You are about to order our Business Package,  Are you sure?", nullptr));
        textBrowser->setHtml(QApplication::translate("confirmBusiness", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The business service provides customers with the basic tools, plus some key tools necessary for businesses to run properly and defend against cyber criminals at the same time.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The f"
                        "ollowing are included in this package:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Zero Day Malware prevention</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Anti-phishing protection</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Automatic Software Updates</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Online Banking Security</span></p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Customer Support</span></p></body></html>", nullptr));
        thanksLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class confirmBusiness: public Ui_confirmBusiness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMBUSINESS_H
