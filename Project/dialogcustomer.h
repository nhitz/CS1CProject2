#ifndef DIALOGCUSTOMER_H
#define DIALOGCUSTOMER_H

#include <dbmanager.h>
#include <customerwindow.h>
#include <QDialog>

namespace Ui {
class DialogCustomer;
}

class DialogCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCustomer(QWidget *parent = 0);
    ~DialogCustomer();

private slots:
    void on_CustomerLoginButton_clicked();

private:
    Ui::DialogCustomer *ui;
};

#endif // DIALOGCUSTOMER_H
