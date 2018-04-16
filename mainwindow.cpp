#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogcustomer.h"
#include "ui_dialogcustomer.h"
#include "dialogadmin.h"
#include "ui_dialogadmin.h"
#include"QDebug" //To use qDebug() like a cout << statement



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C://Users//ndonato0//Desktop//pamphlet.png");
    ui->labelImage->setPixmap(pix);

    QPixmap pic("C://Users//ndonato0//Desktop//pamphlet 2.png");
    ui->labelImage2->setPixmap(pic);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_commandLinkButton_3_clicked()
{
    DialogCustomer myCustomer;

    myCustomer.setModal(true);
    myCustomer.exec();

}


void MainWindow::on_AdminLogin_clicked()
{
   // qDebug ()<<"here"; //Will output if your function is working. If not outputted, then the function has a connection problem.
        DialogAdmin myAdmin;

        myAdmin.setModal(true);
        myAdmin.exec();
}
