/** @file dbmanager.h
*	@brief Handles i/o for iCyberSecurity database
*/

#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql>
#include <QString>
#include <string>
#include <QObject>
#include <QFile>
#include <fstream>
#include <QStringList>
#include "customer.h"

using namespace std;
const string CUSTOMER_FILE = "customers.txt";

/********************************************//**
 *  Manipulates data in the database file.
 ***********************************************/
class dbManager
{
private:
    dbManager();
    ~dbManager();

    QSqlDatabase iCybSecdb;
    int customerTotal;
    //QString customerIdentity;

public:
    static dbManager& instance();
    dbManager(const dbManager&) = delete;
    void operator=(const dbManager&) = delete;

    // Connection Test
    bool isOpen() const;

    // Login Test
    bool validateAdmin(QString user, QString pass);
    bool validateCustomer(QString user, QString pass);
    QString identifyFromLogin(QString user, QString pass);

    // Customers
    bool addCustomer(const Customer& newCustomer);
    QStringList getCustomerNames();
    QStringList getKeyCustomerNames();
    QString getCustomerStreetname(QString customerName);
    QString getCustomerCityStateZip(QString customerName);
    QString getCustomerInterest(QString customerName);
    QString getCustomerKey(QString customerName);
    QString getCustomerPamphlet(QString customerPamphlet);
    bool removeCustomer(QString customerName);
    int getBasicSpent(QString customerName);
    int getBusinessSpent(QString customerName);
    int getEnterpriseSpent(QString customerName);

    // Populate database from file
    bool populateCustomers();

    // Testimonials
    bool addTestimony(QString testimony);

    // Product Orders
    bool submitBasicOrder(QString customer_name);
    bool submitBusinessOrder(QString customer_name);
    bool submitEnterpriseOrder(QString customer_name);
    int getNumberBasicOrders(QString customer_name);
    int getNumberBusinessOrders(QString customer_name);
    int getNumberEnterpriseOrders(QString customer_name);

    int getCustomerTotal() const;
    void setCustomerTotal(int value);
};

#endif // DBMANAGER_H
