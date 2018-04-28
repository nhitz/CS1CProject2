#include "addcustomerwindow.h"
#include "ui_addcustomerwindow.h"

addcustomerwindow::addcustomerwindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::addcustomerwindow)
{
  ui->setupUi(this);
}

addcustomerwindow::~addcustomerwindow()
{
  delete ui;
}

void addcustomerwindow::on_okButton_clicked()
{
    QString name;
    QString streetname;
    QString city_state_zip;
    QString interest;
    QString key;

    name = ui->customerName->text();
    streetname = ui->streetName->text();
    city_state_zip = ui->cityStateZip->text();
    interest = ui->interestChoice->itemText(ui->interestChoice->currentIndex());
    key = ui->keyChoice->itemText(ui->keyChoice->currentIndex());

    if(dbManager::instance().addCustomer(Customer(name, streetname, city_state_zip, interest, key)))
    {
        ui->outputLabel->setText("Customer Added");
    }
    else
    {
        ui->outputLabel->setText("Failed To Add Customer'");
    }
    close();
}

void addcustomerwindow::on_cancelButton_clicked()
{
    close();
}
