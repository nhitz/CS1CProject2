#include "customer.h"
#include "ui_customer.h"

Customer::Customer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
}

Customer::~Customer()
{
    delete ui;
}
