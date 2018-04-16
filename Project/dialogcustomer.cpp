#include "dialogcustomer.h"
#include "ui_dialogcustomer.h"

DialogCustomer::DialogCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCustomer)
{
    ui->setupUi(this);
    //dbManager::instance();

    if(!dbManager::instance().isOpen())
    {
        ui->labelStatus->setText("Failed to connect to database");
    }
    else
    {
        ui->labelStatus->setText("Enter credentials");
    }
}

DialogCustomer::~DialogCustomer()
{
    delete ui;
}

void DialogCustomer::on_CustomerLoginButton_clicked()
{
    CustomerWindow customerWin;

    //if(dbManager::instance().validateUser(ui->CustomerUsernameEdit->text(), ui->CustomerPasswordEdit->text()))
    if(ui->CustomerUsernameEdit->text() == "sandun" && ui->CustomerPasswordEdit->text() == "1234")
    {
        ui->labelStatus->setText("Login accepted");
        customerWin.setModal(true);
        customerWin.exec();
    }
    else
        ui->labelStatus->setText("Invalid username or password");
}

