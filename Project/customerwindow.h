#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QDialog>

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
  explicit CustomerWindow(QWidget *parent = 0);
  ~CustomerWindow();

private:
  Ui::CustomerWindow *ui;
};

#endif // CUSTOMERWINDOW_H
