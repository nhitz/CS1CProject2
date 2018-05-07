#include "customerwindow.h"
#include "ui_customerwindow.h"

/********************************************//**
 *  Create UI for the customer window.
 ***********************************************/
CustomerWindow::CustomerWindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::CustomerWindow)
{
  ui->setupUi(this);
}

/********************************************//**
 *  Delete UI for the customer window.
 ***********************************************/
CustomerWindow::~CustomerWindow()
{
  delete ui;
}
