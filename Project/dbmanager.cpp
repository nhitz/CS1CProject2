#include "dbmanager.h"

dbManager::dbManager()
{
    iCybSecdb = QSqlDatabase::addDatabase("QSQLITE");
    iCybSecdb.setDatabaseName("icybersecurity.db");

    if(QFile::exists("icybersecurity.db"))
    {
        if(!iCybSecdb.open())
        {
            qDebug() << "Error connecting to database";
        }
        else
        {
            qDebug() << "Connected to database";
        }
    }
    else
    {
        qDebug() << "Database file path does not exist";
    }
}

dbManager::~dbManager()
{
    if(iCybSecdb.isOpen())
    {
        iCybSecdb.close();
    }
    qDebug() << "Destroying dbManager";
}

dbManager& dbManager::instance()
{
    static dbManager iCybSecdbInstance;

    return iCybSecdbInstance;
}

