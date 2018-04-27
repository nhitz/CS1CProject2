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

bool dbManager::validateAdmin(QString usern, QString passw)
{
    QSqlQuery query;
    bool success;
    success = false;

    query.prepare("SELECT username password FROM admin_credentials WHERE username = :user AND password = :pass");
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

bool dbManager::validateCustomer(QString usern, QString passw)
{
    QSqlQuery query;
    bool success;
    success = false;

    query.prepare("SELECT username password FROM customer_credentials WHERE username = :user AND password = :pass");
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

bool dbManager::addCustomer(const Customer& newCustomer)
{
    QSqlQuery query;
    bool success;

    query.prepare("INSERT INTO customer_list (name, streetname, city_state_zip, interest, key) "
                  "VALUES (:name, :street, :city_state_zip, :interest, :key)");
    query.bindValue(":name", newCustomer.getCustomerName());
    query.bindValue(":street", newCustomer.getCustomerStreet());
    query.bindValue(":city_state_zip", newCustomer.getCustomerCity());
    query.bindValue(":interest", newCustomer.getCustomerInterest());
    query.bindValue(":key", newCustomer.getCustomerKey());

    if(query.exec())
    {
        success = true;
    }
    else
    {
       qDebug() << "Failed to add customer" << query.lastError();
       success = false;
    }
    return success;
}

bool dbManager::populateCustomers()
{
    bool success;
    ifstream fin;
    string customer_name;
    string customer_streetname;
    string customer_city_state_zip;
    string customer_interest;
    string customer_key_str;
    bool customer_key;

    fin.open(CUSTOMER_FILE.c_str());
    success = true;

    while(!fin.eof())
    {
        getline(fin, customer_name);
        getline(fin, customer_streetname);
        getline(fin, customer_city_state_zip);
        getline(fin, customer_interest);
        getline(fin, customer_key_str);

        if(customer_key_str == "key")
            customer_key = true;
        else
            customer_key = false;

        qDebug() << QString::fromStdString(customer_name);
        qDebug() << QString::fromStdString(customer_streetname);
        qDebug() << QString::fromStdString(customer_city_state_zip);
        qDebug() << QString::fromStdString(customer_interest);
        qDebug() << QString::fromStdString(customer_key_str);


        if(!addCustomer(Customer(QString::fromStdString(customer_name), QString::fromStdString(customer_streetname),
                                 QString::fromStdString(customer_city_state_zip), QString::fromStdString(customer_interest),
                                 customer_key)))
        {
            success = false;
        }
    }
    fin.close();
    return success;
}
