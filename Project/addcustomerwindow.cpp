
#include "addcustomerwindow.h"
#include "ui_addcustomerwindow.h"

/********************************************//**
 *  Adds a customer window to the main display.
 ***********************************************/
addcustomerwindow::addcustomerwindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::addcustomerwindow)
{
  ui->setupUi(this);
}

/********************************************//**
 *  Deletes a customer window from the display.
 ***********************************************/
addcustomerwindow::~addcustomerwindow()
{
  delete ui;
}


/********************************************//**
 *  Procedure for when OK button is clicked.
 ***********************************************/
void addcustomerwindow::on_okButton_clicked()
{
    QString name;
    QString streetname;
    QString city_state_zip;
    QString interest;
    QString key;
    QString username;
    QString password;

    name = ui->customerName->text();
    streetname = ui->streetName->text();
    city_state_zip = ui->cityStateZip->text();
    interest = ui->interestChoice->itemText(ui->interestChoice->currentIndex());
    key = ui->keyChoice->itemText(ui->keyChoice->currentIndex());
    username = ui->UserNameEdit->text();
    password = ui->PasswordEdit->text();

    if(dbManager::instance().addCustomer(Customer(name, streetname, city_state_zip, interest, key)))
    {
        if(dbManager::instance().addCredentials(username, password)) {
            ui->outputLabel->setText("Customer Added");
        }

    }
    else
    {
        ui->outputLabel->setText("Failed To Add Customer'");
    }
    close();
}

/********************************************//**
 *  Closes customer window when button clicked.
 ***********************************************/
void addcustomerwindow::on_cancelButton_clicked()
{
    close();
}
