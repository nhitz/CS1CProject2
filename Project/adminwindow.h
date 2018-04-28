#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include <QListWidgetItem>
#include "dbmanager.h"
#include "addcustomerwindow.h"

namespace Ui {
class adminwindow;
}

class adminwindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminwindow(QWidget *parent = 0);
    ~adminwindow();

private slots:
  void on_AddButton_clicked();

  void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::adminwindow *ui;
    //QList<Customer> customerObjects;
    QStringList customerNames;
};

#endif // ADMINWINDOW_H
