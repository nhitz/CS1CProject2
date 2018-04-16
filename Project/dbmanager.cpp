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

bool dbManager::isOpen() const
{
    return iCybSecdb.isOpen();
}

bool validateUser(QString usern, QString passw)
{
    QSqlQuery query;
    bool success;
    success = false;

    query.prepare("SELECT username, password, usertype FROM credentials WHERE username = :user AND password = :pass");
    query.bindValue(":user", usern);
    query.bindValue(":pass", passw);

    if(query.exec())
    {
          if(query.next())
          {
                success = true;
          }
    }
    else
    {
         qDebug() << "Login Error: " << query.lastError();
    }

    return success;
}
