#ifndef CONFIRMBASIC_H
#define CONFIRMBASIC_H

#include <QDialog>

namespace Ui {
  class confirmBasic;
}

class confirmBasic : public QDialog
{
  Q_OBJECT

public:
  explicit confirmBasic(QWidget *parent = 0);
  void setCustomer(QString name);
  ~confirmBasic();

private slots:
  void on_cancelButton_clicked();
  void on_submitOrderButton_clicked();

private:
  Ui::confirmBasic *ui;
  QString customerName;
};

#endif // CONFIRMBASIC_H
