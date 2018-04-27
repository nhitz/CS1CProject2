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
#include "customer.h"

using namespace std;


/**
* @brief Manipulates the data stored within the icybersecurity database file.
*/
class dbManager
{
private:
    dbManager();
    ~dbManager();

    QSqlDatabase iCybSecdb;

public:
    static dbManager& instance();
    dbManager(const dbManager&) = delete;
    void operator=(const dbManager&) = delete;

    // Connection Test
    bool isOpen() const;

    // Login Test
    bool validateAdmin(QString user, QString pass);
    bool validateCustomer(QString user, QString pass);
};

#endif // DBMANAGER_H
