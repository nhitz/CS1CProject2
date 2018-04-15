/** @file dbmanager.h
*	@brief Handles i/o for iCyberSecurity database
*/

#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql>
#include <QString>
#include <string>

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

};

#endif // DBMANAGER_H
