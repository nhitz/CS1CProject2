#include "adminwindow.h"
#include "ui_adminwindow.h"

adminwindow::adminwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminwindow)
{
    ui->setupUi(this);

    customerNames = dbManager::instance().getCustomerNames();
    ui->listWidget->addItems(customerNames);
    ui->labelTotalCustomersNumber->setText(QString("%1").arg(ui->listWidget->count()));
}

void adminwindow::updateCustomerList()
{
    ui->listWidget->clear();
    customerNames = dbManager::instance().getCustomerNames();
    ui->listWidget->addItems(customerNames);
    ui->labelTotalCustomersNumber->setText(QString("%1").arg(ui->listWidget->count()));
}

adminwindow::~adminwindow()
{
    delete ui;
}

void adminwindow::on_AddButton_clicked()
{
  addcustomerwindow *addCustomerWin;
  addCustomerWin = new addcustomerwindow(this);
  addCustomerWin->setModal(true);
  addCustomerWin->exec();
  updateCustomerList();
  delete addCustomerWin;
}

void adminwindow::on_listWidget_itemClicked(QListWidgetItem *item)
{

    ui->selectedCustomerName->setText(item->text());

    QString street = dbManager::instance().getCustomerStreetname(item->text());
    ui->selectedCustomerStreetname->setText(street);

    QString city_state_zip = dbManager::instance().getCustomerCityStateZip(item->text());
    ui->selectedCustomerCityStateZip->setText(city_state_zip);

    QString interest = dbManager::instance().getCustomerInterest(item->text());
    ui->selectedCustomerInterest->setText(interest);

    QString key = dbManager::instance().getCustomerKey(item->text());
    ui->selectedCustomerKey->setText(key);
}

void adminwindow::on_DeleteButton_clicked()
{
    if(dbManager::instance().removeCustomer(ui->listWidget->currentItem()->text()))
    {
        qDebug() << "Deleted customer";
        updateCustomerList();
    }
}
