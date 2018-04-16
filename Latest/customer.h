#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QWidget>

namespace Ui {
class Customer;
}

class Customer : public QWidget
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = 0);
    ~Customer();

private:
    Ui::Customer *ui;
};

#endif // CUSTOMER_H
