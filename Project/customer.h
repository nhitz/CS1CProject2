#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QString>
#include <QStringList>
#include <QDebug>

class Customer
{
private:
    QString name;
    QString streetname;
    QString city_state_zip;
    QString interest;
    QString key;

public:
    Customer(QString, QString, QString, QString, QString);
    QString getCustomerName() const;
    QString getCustomerStreet() const;
    QString getCustomerCity() const;
    QString getCustomerInterest() const;
    QString getCustomerKey() const;
};

#endif // CUSTOMER_H
