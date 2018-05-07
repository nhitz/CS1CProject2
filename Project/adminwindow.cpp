#include "adminwindow.h"
#include "ui_adminwindow.h"

/********************************************//**
 *  Constructor for administrator's window.
 ***********************************************/
adminwindow::adminwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminwindow)
{
    ui->setupUi(this);

    customerNames = dbManager::instance().getCustomerNames();
    ui->listWidget->addItems(customerNames);
    ui->labelTotalCustomersNumber->setText(QString("%1").arg(ui->listWidget->count()));
}

/********************************************//**
 *  Updates the customer list in the UI.
 ***********************************************/
void adminwindow::updateCustomerList()
{
    ui->listWidget->clear();

    if(ui->comboBox->currentText() == "All Customers")
    {
        customerNames = dbManager::instance().getCustomerNames();
        ui->listWidget->addItems(customerNames);
    }
    if(ui->comboBox->currentText() == "Customers by Name")
    {
        customerNames = dbManager::instance().getCustomerNames();
        ui->listWidget->addItems(customerNames);
        ui->listWidget->sortItems(Qt::AscendingOrder);
    }
    if(ui->comboBox->currentText() == "Key Customers")
    {
        customerNames = dbManager::instance().getKeyCustomerNames();
        ui->listWidget->addItems(customerNames);
    }

    ui->labelTotalCustomersNumber->setText(QString("%1").arg(ui->listWidget->count()));
}

/********************************************//**
 *  Deletes the administrator's window.
 ***********************************************/
adminwindow::~adminwindow()
{
    delete ui;
}

/********************************************//**
 *  Procedure for when the Add Button is clicked.
 ***********************************************/
void adminwindow::on_AddButton_clicked()
{
  addcustomerwindow *addCustomerWin;
  addCustomerWin = new addcustomerwindow(this);
  addCustomerWin->setModal(true);
  addCustomerWin->exec();
  updateCustomerList();
  delete addCustomerWin;
}

/********************************************//**
 *  For when an Item is clicked on List Widget.
 ***********************************************/
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

/********************************************//**
 *  Procedure for when Delete Button is clicked.
 ***********************************************/
void adminwindow::on_DeleteButton_clicked()
{
    if(dbManager::instance().removeCustomer(ui->listWidget->currentItem()->text()))
    {
        qDebug() << "Deleted customer";
        ui->selectedCustomerName->clear();
        ui->selectedCustomerStreetname->clear();
        ui->selectedCustomerCityStateZip->clear();
        ui->selectedCustomerInterest->clear();
        ui->selectedCustomerKey->clear();
        updateCustomerList();
    }
    else
    {
        qDebug() << "Could not delete customer";
        return;
    }
}

/********************************************//**
 *  Changes index within the combo box.
 ***********************************************/
void adminwindow::on_comboBox_currentIndexChanged()
{
    updateCustomerList();
}
