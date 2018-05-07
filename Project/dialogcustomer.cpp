#include "dialogcustomer.h"
#include "ui_dialogcustomer.h"

/********************************************//**
 *  Constructor for the Customer Dialog widget.
 ***********************************************/
DialogCustomer::DialogCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCustomer)
{
    ui->setupUi(this);

    if(!dbManager::instance().isOpen())
    {
        ui->statusLabel->setText("Failed to connect to database");
    }
    else
    {
        ui->statusLabel->setText("Enter credentials");
    }
}

/********************************************//**
 *  Destructor for the customer dialog widget.
 ***********************************************/
DialogCustomer::~DialogCustomer()
{
    delete ui;
}

/********************************************//**
 *  Procedure for Customer Login button.
 ***********************************************/
void DialogCustomer::on_CustomerLoginButton_clicked()
{
    CustomerWindow customerWin;

    if(dbManager::instance().validateCustomer(ui->CustomerUsernameEdit->text(), ui->CustomerPasswordEdit->text()))
    {
        ui->statusLabel->setText("Login accepted");
        customerWin.setModal(true);
        customerWin.exec();
    }
    else
        ui->statusLabel->setText("Invalid username or password");
}

