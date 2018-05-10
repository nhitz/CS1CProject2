#ifndef CONFIRMENTERPRISE_H
#define CONFIRMENTERPRISE_H

#include <QDialog>

namespace Ui {
  class confirmEnterprise;
}

class confirmEnterprise : public QDialog
{
  Q_OBJECT

public:
  explicit confirmEnterprise(QWidget *parent = 0);
  void setCustomer(QString name);
  ~confirmEnterprise();

private slots:
  void on_submitButton_clicked();
  void on_cancelButton_clicked();

private:
  Ui::confirmEnterprise *ui;
  QString customerName;
};

#endif // CONFIRMENTERPRISE_H
