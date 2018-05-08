#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include <QListWidgetItem>
#include "dbmanager.h"
#include "addcustomerwindow.h"

/********************************************//**
 *  A namespace for the User Interface.
 ***********************************************/
namespace Ui {
class adminwindow;
}

/********************************************//**
 *  Class object for the administrator's window.
 ***********************************************/
class adminwindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminwindow(QWidget *parent = 0);
    ~adminwindow();

private slots:
  void updateCustomerList();
  void on_AddButton_clicked();
  void on_listWidget_itemClicked(QListWidgetItem *item);
  void on_DeleteButton_clicked();

  void on_comboBox_currentIndexChanged(int n);

private:
    Ui::adminwindow *ui;
    //QList<Customer> customerObjects;
    QStringList customerNames;
};

#endif // ADMINWINDOW_H
