#ifndef ADDCUSTOMERWINDOW_H
#define ADDCUSTOMERWINDOW_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
  class addcustomerwindow;
}

class addcustomerwindow : public QDialog
{
  Q_OBJECT

public:
  explicit addcustomerwindow(QWidget *parent = 0);
  ~addcustomerwindow();

private slots:
  void on_okButton_clicked();

  void on_cancelButton_clicked();

private:
  Ui::addcustomerwindow *ui;
};

#endif // ADDCUSTOMERWINDOW_H
