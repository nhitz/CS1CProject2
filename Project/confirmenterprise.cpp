#include "confirmenterprise.h"
#include "ui_confirmenterprise.h"
#include "dbmanager.h"

confirmEnterprise::confirmEnterprise(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::confirmEnterprise)
{
  ui->setupUi(this);
}

void confirmEnterprise::confirmEnterprise::setCustomer(QString name)
{
   customerName = name;
}

confirmEnterprise::~confirmEnterprise()
{
  delete ui;
}

void confirmEnterprise::on_submitButton_clicked()
{
    if(dbManager::instance().submitEnterpriseOrder(customerName))
       ui->thanksLabel->setText("Thanks!");
    close();
}

void confirmEnterprise::on_cancelButton_clicked()
{
    close();
}
