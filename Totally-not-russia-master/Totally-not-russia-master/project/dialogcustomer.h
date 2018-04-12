#ifndef DIALOGCUSTOMER_H
#define DIALOGCUSTOMER_H

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

private:
    Ui::DialogCustomer *ui;
};

#endif // DIALOGCUSTOMER_H
