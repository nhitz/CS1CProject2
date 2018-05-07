#ifndef DIALOGCUSTOMER_H
#define DIALOGCUSTOMER_H

#include <dbmanager.h>
#include <customerwindow.h>
#include <QDialog>

/********************************************//**
 *  Namespace for the User Interface.
 ***********************************************/
namespace Ui {
class DialogCustomer;
}

/********************************************//**
 *  Object class for the Customer Dialog widget.
 ***********************************************/
class DialogCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCustomer(QWidget *parent = 0);
    ~DialogCustomer();

private slots:
    void on_CustomerLoginButton_clicked();

private:
    Ui::DialogCustomer *ui;
};

#endif // DIALOGCUSTOMER_H
