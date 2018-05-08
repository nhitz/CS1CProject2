#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QString>
#include <QStringList>
#include <QDebug>

/********************************************//**
 *  Object class for the customer.
 ***********************************************/
class Customer
{
private:
    QString name;
    QString streetname;
    QString city_state_zip;
    QString interest;
    QString key;
    QString username;
    QString password;

public:
    Customer(QString, QString, QString, QString, QString);
    Customer(QString, QString, QString, QString, QString, QString, QString);
    QString getCustomerName() const;
    QString getCustomerStreet() const;
    QString getCustomerCity() const;
    QString getCustomerInterest() const;
    QString getCustomerKey() const;
    QString getCustomerUsername() const;
    QString getCustomerPassword() const;
};

#endif // CUSTOMER_H
