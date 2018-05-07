#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"

/********************************************//**
 *  Namespace for the user interface.
 ***********************************************/
namespace Ui {
  class MainWindow;
}

/********************************************//**
 *  Object class for the main window widget.
 ***********************************************/
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  void on_customerLoginButton_clicked();
  void on_adminLoginButton_clicked();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H


