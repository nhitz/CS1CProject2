#include "customer.h"

Customer::Customer(QString customer_name, QString customer_street, QString customer_city_state_zip, QString customer_interest, bool customer_key)
{
    name           = customer_name;
    streetname     = customer_street;
    city_state_zip = customer_city_state_zip;
    interest       = customer_interest;
    key            = customer_key;
}

QString Customer::getCustomerName() const
{
    return name;
}

QString Customer::getCustomerStreet() const
{
    return streetname;
}

QString Customer::getCustomerCity() const
{
    return city_state_zip;
}

QString Customer::getCustomerInterest() const
{
    return interest;
}

bool Customer::getCustomerKey() const
{
    return key;
}
