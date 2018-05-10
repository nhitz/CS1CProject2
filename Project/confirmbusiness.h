#ifndef CONFIRMBUSINESS_H
#define CONFIRMBUSINESS_H

#include <QDialog>

namespace Ui {
  class confirmBusiness;
}

class confirmBusiness : public QDialog
{
  Q_OBJECT

public:
  explicit confirmBusiness(QWidget *parent = 0);
  void setCustomer(QString name);
  ~confirmBusiness();

private slots:
  void on_submitButton_clicked();
  void on_cancelButton_clicked();

private:
  Ui::confirmBusiness *ui;
  QString customerName;
};

#endif // CONFIRMBUSINESS_H
