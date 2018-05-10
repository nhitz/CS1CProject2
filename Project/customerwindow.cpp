#include "customerwindow.h"
#include "ui_customerwindow.h"

/********************************************//**
 *  Create UI for the customer window.
 ***********************************************/
CustomerWindow::CustomerWindow(QWidget *parent, QString name) :
  QDialog(parent),
  ui(new Ui::CustomerWindow)
{
    ui->setupUi(this);
    customerName = name;
    ui->customerNameLabel->setText(customerName);
    ui->numBasicLabel->setText(QString::number(0));
    ui->numBusinessLabel->setText(QString::number(0));
    ui->numEnterpriseLabel->setText(QString::number(0));

    QPixmap thePamphlet(":pamphlet.jpeg");
    ui->pamphletLabel->setPixmap(thePamphlet.scaled(792,612,Qt::KeepAspectRatio));
}

void CustomerWindow::setCustomer(QString name)
{
    customerName = name;
}

QString CustomerWindow::getCustomer()
{
    return customerName;
}

/********************************************//**
 *  Delete UI for the customer window.
 ***********************************************/
CustomerWindow::~CustomerWindow()
{
    delete ui;
}

void CustomerWindow::on_basicButton_clicked()
{
    confirmBasic orderBasicWin;
    orderBasicWin.setCustomer(customerName);

    orderBasicWin.setModal(true);
    orderBasicWin.exec();
    updateOrders();
}

void CustomerWindow::on_businessButton_clicked()
{
    confirmBusiness orderBusinessWin;
    orderBusinessWin.setCustomer(customerName);

    orderBusinessWin.setModal(true);
    orderBusinessWin.exec();
    updateOrders();
}

void CustomerWindow::on_enterpriseButton_clicked()
{
    confirmEnterprise orderEnterpriseWin;
    orderEnterpriseWin.setCustomer(customerName);

    orderEnterpriseWin.setModal(true);
    orderEnterpriseWin.exec();
    updateOrders();
}

void CustomerWindow::on_submitTestimonyButton_clicked()
{
    QString testimony = ui->testimonialText->toPlainText();
    if(testimony != NULL)
    {
        if(dbManager::instance().addTestimony(testimony))
        {
            ui->thanksLabel->setText("Thanks!");
        }
    }
}

void CustomerWindow::on_logoutButton_clicked()
{
    close();
}

void CustomerWindow::updateOrders()
{
    ui->numBasicLabel->setText(QString::number(dbManager::instance().getNumberBasicOrders(customerName)));
    ui->numBusinessLabel->setText(QString::number(dbManager::instance().getNumberBusinessOrders(customerName)));
    ui->numEnterpriseLabel->setText(QString::number(dbManager::instance().getNumberEnterpriseOrders(customerName)));
}
