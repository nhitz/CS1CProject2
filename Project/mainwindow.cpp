#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogcustomer.h"
#include "dialogadmin.h"
#include "helpoption.h"
#include "ui_helpoption.h"

/********************************************//**
 *  Constructor for the main window widget.
 ***********************************************/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dbManager::instance();

    QPixmap pix(":ICyberSecurityPamphlet.jpg");
    ui->test1->setPixmap(pix.scaled(500,500,Qt::KeepAspectRatio));
    QPixmap pic(":ICyberSecurityPamphlet-2.jpg");
    ui->test2->setPixmap(pic.scaled(500,500,Qt::KeepAspectRatio));
}

/********************************************//**
 *  Destructor for the main window widget.
 ***********************************************/
MainWindow::~MainWindow()
{
    delete ui;
}

/********************************************//**
 *  Procedure for logging in from main window.
 ***********************************************/
void MainWindow::on_customerLoginButton_clicked()
{
    DialogCustomer customerWindow;

    customerWindow.setModal(true);
    customerWindow.exec();
}

/********************************************//**
 *  For adminstrators logging in from main wdw.
 ***********************************************/
void MainWindow::on_adminLoginButton_clicked()
{
    DialogAdmin myAdmin;

    myAdmin.setModal(true);
    myAdmin.exec();
}



void MainWindow::on_commandLinkButton_2_clicked()
{
    helpOption helpObject;

    helpObject.setModal(true);
    helpObject.exec();

}
