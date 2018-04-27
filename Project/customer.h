#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QString>

class Customer
{
private:
    QString name;
    QString streetname;
    QString city_state_zip;
    QString interest;
    bool key;

public:
    Customer(QString, QString, QString, QString, bool);
    QString getCustomerName() const;
    QString getCustomerStreet() const;
    QString getCustomerCity() const;
    QString getCustomerInterest() const;
    bool getCustomerKey() const;
};

#endif // CUSTOMER_H
