/********************************************************************************
** Form generated from reading UI file 'confirmenterprise.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMENTERPRISE_H
#define UI_CONFIRMENTERPRISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_confirmEnterprise
{
public:
    QLabel *label;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QTextBrowser *textBrowser;
    QLabel *thanksLabel;

    void setupUi(QDialog *confirmEnterprise)
    {
        if (confirmEnterprise->objectName().isEmpty())
            confirmEnterprise->setObjectName(QStringLiteral("confirmEnterprise"));
        confirmEnterprise->resize(400, 300);
        label = new QLabel(confirmEnterprise);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 361, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        submitButton = new QPushButton(confirmEnterprise);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(30, 270, 75, 23));
        cancelButton = new QPushButton(confirmEnterprise);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(110, 270, 75, 23));
        textBrowser = new QTextBrowser(confirmEnterprise);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 40, 331, 221));
        thanksLabel = new QLabel(confirmEnterprise);
        thanksLabel->setObjectName(QStringLiteral("thanksLabel"));
        thanksLabel->setGeometry(QRect(200, 270, 111, 21));

        retranslateUi(confirmEnterprise);

        QMetaObject::connectSlotsByName(confirmEnterprise);
    } // setupUi

    void retranslateUi(QDialog *confirmEnterprise)
    {
        confirmEnterprise->setWindowTitle(QApplication::translate("confirmEnterprise", "Dialog", nullptr));
        label->setText(QApplication::translate("confirmEnterprise", "You are about to order our Enterprise Package,  Are you sure?", nullptr));
        submitButton->setText(QApplication::translate("confirmEnterprise", "Submit Order", nullptr));
        cancelButton->setText(QApplication::translate("confirmEnterprise", "Cancel", nullptr));
        textBrowser->setHtml(QApplication::translate("confirmEnterprise", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The enterprise service provides customers with the most advanced tools to defend against even the most complicated cyber attacks. This product is designed for large scale corporations.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt"
                        ";\">The following are included in this package:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Advanced Web Scanning Engine</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Traffic-based Malware Protection</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Cryptoware Detection &amp; Blocking</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Internet Traffic Filte"
                        "ring</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Powerful Vulnerability Intelligence</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-PC Lockdown</span></p></body></html>", nullptr));
        thanksLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class confirmEnterprise: public Ui_confirmEnterprise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMENTERPRISE_H
