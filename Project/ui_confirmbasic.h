/********************************************************************************
** Form generated from reading UI file 'confirmbasic.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMBASIC_H
#define UI_CONFIRMBASIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_confirmBasic
{
public:
    QLabel *label;
    QPushButton *submitOrderButton;
    QPushButton *cancelButton;
    QTextBrowser *textBrowser;
    QLabel *thanksLabel;

    void setupUi(QDialog *confirmBasic)
    {
        if (confirmBasic->objectName().isEmpty())
            confirmBasic->setObjectName(QStringLiteral("confirmBasic"));
        confirmBasic->resize(400, 300);
        label = new QLabel(confirmBasic);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 341, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        submitOrderButton = new QPushButton(confirmBasic);
        submitOrderButton->setObjectName(QStringLiteral("submitOrderButton"));
        submitOrderButton->setGeometry(QRect(30, 260, 81, 21));
        cancelButton = new QPushButton(confirmBasic);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(120, 260, 75, 23));
        textBrowser = new QTextBrowser(confirmBasic);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 331, 191));
        thanksLabel = new QLabel(confirmBasic);
        thanksLabel->setObjectName(QStringLiteral("thanksLabel"));
        thanksLabel->setGeometry(QRect(240, 260, 101, 21));
        thanksLabel->setFont(font);

        retranslateUi(confirmBasic);

        QMetaObject::connectSlotsByName(confirmBasic);
    } // setupUi

    void retranslateUi(QDialog *confirmBasic)
    {
        confirmBasic->setWindowTitle(QApplication::translate("confirmBasic", "Dialog", nullptr));
        label->setText(QApplication::translate("confirmBasic", "You are about to order our Basic Package,  Are you sure?", nullptr));
        submitOrderButton->setText(QApplication::translate("confirmBasic", "Submit Order", nullptr));
        cancelButton->setText(QApplication::translate("confirmBasic", "Cancel", nullptr));
        textBrowser->setHtml(QApplication::translate("confirmBasic", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The basic service provides customers with the most basic tools to maintain your computer safe from cyber-attacks. This product is designed for single users.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The following are includ"
                        "ed in this package:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Easy search Engine tool</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Software Manager</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Malicious Website Blocking</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">-Customer Support</span></p></body></html>", nullptr));
        thanksLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class confirmBasic: public Ui_confirmBasic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMBASIC_H
