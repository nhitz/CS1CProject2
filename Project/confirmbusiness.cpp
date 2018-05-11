#include "confirmbusiness.h"
#include "ui_confirmbusiness.h"
#include "dbmanager.h"

confirmBusiness::confirmBusiness(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::confirmBusiness)
{
  ui->setupUi(this);
}

void confirmBusiness::confirmBusiness::setCustomer(QString name)
{
   customerName = name;
}

confirmBusiness::~confirmBusiness()
{
  delete ui;
}

void confirmBusiness::on_submitButton_clicked()
{
    if(dbManager::instance().submitBusinessOrder(customerName))
       ui->thanksLabel->setText("Thanks!");
    close();
}

void confirmBusiness::on_cancelButton_clicked()
{
    close();
}
