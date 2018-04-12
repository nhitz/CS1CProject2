#include "dialogcustomer.h"
#include "ui_dialogcustomer.h"

DialogCustomer::DialogCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCustomer)
{
    ui->setupUi(this);
}

DialogCustomer::~DialogCustomer()
{
    delete ui;
}
