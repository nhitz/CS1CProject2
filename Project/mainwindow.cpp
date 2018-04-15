#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogcustomer.h"
#include "dialogadmin.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_customerLoginButton_clicked()
{
    DialogCustomer customerWindow;

    customerWindow.setModal(true);
    customerWindow.exec();
}

void MainWindow::on_adminLoginButton_clicked()
{
    DialogAdmin myAdmin;

    myAdmin.setModal(true);
    myAdmin.exec();
}
