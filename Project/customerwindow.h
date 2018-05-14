#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QDialog>
#include "dbmanager.h"
#include "confirmbasic.h"
#include "confirmbusiness.h"
#include "confirmenterprise.h"

/********************************************//**
 *  Namespace for the User Interface.
 ***********************************************/
namespace Ui {
  class CustomerWindow;
}

/********************************************//**
 *  Object class for the Customer Window.
 ***********************************************/
class CustomerWindow : public QDialog
{
  Q_OBJECT

public:
  explicit CustomerWindow(QWidget *parent = 0, QString name = "Customer");
  void setCustomer(QString name);
  QString getCustomer();


  ~CustomerWindow();

private slots:
  void on_basicButton_clicked();
  void on_businessButton_clicked();
  void on_enterpriseButton_clicked();
  void on_submitTestimonyButton_clicked();
  void on_logoutButton_clicked();

 // void on_totalLabel_linkActivated(const QString &link);

private:
  void updateOrders();
  Ui::CustomerWindow *ui;
  QString customerName;
};

#endif // CUSTOMERWINDOW_H
