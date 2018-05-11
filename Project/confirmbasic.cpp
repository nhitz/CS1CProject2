#include "confirmbasic.h"
#include "ui_confirmbasic.h"
#include "dbmanager.h"

confirmBasic::confirmBasic(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::confirmBasic)
{
    ui->setupUi(this);

}

void confirmBasic::confirmBasic::setCustomer(QString name)
{
    customerName = name;
}

confirmBasic::~confirmBasic()
{
    delete ui;
}

void confirmBasic::on_cancelButton_clicked()
{
    close();
}

void confirmBasic::on_submitOrderButton_clicked()
{
    if(dbManager::instance().submitBasicOrder(customerName))
       ui->thanksLabel->setText("Thanks!");
    close();
}
