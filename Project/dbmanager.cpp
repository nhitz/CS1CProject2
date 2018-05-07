#include "dbmanager.h"

/********************************************//**
 *  Constructor for the Database Manager.
 ***********************************************/
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

/********************************************//**
 *  Destructor for the Database Manager.
 ***********************************************/
dbManager::~dbManager()
{
    if(iCybSecdb.isOpen())
    {
        iCybSecdb.close();
    }
    qDebug() << "Destroying dbManager";
}

/********************************************//**
 *  Create an instance of the Database Manager.
 ***********************************************/
dbManager& dbManager::instance()
{
    static dbManager iCybSecdbInstance;

    return iCybSecdbInstance;
}

bool dbManager::isOpen() const
{
    return iCybSecdb.isOpen();
}

/********************************************//**
 *  Validation procedure for the adminsistrator.
 ***********************************************/
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

/********************************************//**
 *  Validation procedure for the customer.
 ***********************************************/
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

/********************************************//**
 *  Procedure to add customer in DB Mgr. class.
 ***********************************************/
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

/********************************************//**
 *  Procduere to add credentials, DB Mgr. class.
 ***********************************************/
bool dbManager::addCredentials(QString username, QString password)
{
    QSqlQuery query;
    bool success;

    query.prepare("INSERT INTO customer_credentials (username, password) "
                  "VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if(query.exec())
    {
        success = true;
    }
    else
    {
       qDebug() << "Failed to add customer credentials" << query.lastError();
       success = false;
    }
    return success;
}






/*
QList<Customer> dbManager::getAllCustomers()
{
    QSqlQuery query;
    QList<Customer> customerList;
    QString customer_name;
    QString customer_streetname;
    QString customer_city_state_zip;
    QString customer_interest;
    QString customer_key;

    query.prepare("SELECT name, streetname, city_state_zip, interest, key FROM customer_list");

    if(query.exec())
    {
        customer_name            = query.record().indexOf("name");
        customer_streetname      = query.record().indexOf("streetname");
        customer_city_state_zip  = query.record().indexOf("city_state_zip");
        customer_interest        = query.record().indexOf("interest");
        customer_key             = query.record().indexOf("key");

        while(query.next())
        {
            customerList.append(Customer(customer_name, customer_streetname, customer_city_state_zip, customer_interest, customer_key));
        }
        qDebug() << "Got all customers from database.";
    }
    else
    {
        qDebug() << "Error Getting Customers: " << query.lastError();
    }

    return customerList;
}
*/

/********************************************//**
 *  Getter for customer names.
 ***********************************************/
QStringList dbManager::getCustomerNames()
{
    QSqlQuery query;
    QStringList customerNames;
    QString customer_name;
    int nameIndex;

    query.prepare("SELECT name FROM customer_list");
    if(query.exec())
    {
        nameIndex = query.record().indexOf("name");
        while(query.next())
        {
            customer_name = query.value(nameIndex).toString();
            customerNames.append(customer_name);
        }
        qDebug() << "Got all customer names from database.";
    }

    return customerNames;
}

/********************************************//**
 *  Getter for the names of key customers.
 ***********************************************/
QStringList dbManager::getKeyCustomerNames()
{
    QSqlQuery query;
    QStringList customerNames;
    QString customer_name;
    QString key_str = "key";
    int nameIndex;

    query.prepare("SELECT name FROM customer_list WHERE key = '"+key_str+"'");
    if(query.exec())
    {
        nameIndex = query.record().indexOf("name");
        while(query.next())
        {
            customer_name = query.value(nameIndex).toString();
            customerNames.append(customer_name);
        }
        qDebug() << "Got all KEY customer names from database.";
    }

    return customerNames;
}

/********************************************//**
 *  Getter for customer street names.
 ***********************************************/
QString dbManager::getCustomerStreetname(QString customerName)
{
  QSqlQuery query;
  QString customer_name = customerName;
  QString customer_streetname;
  int streetIndex;

  query.prepare("SELECT streetname FROM customer_list WHERE name = '"+customer_name+"'");
  if(query.exec())
  {
      streetIndex = query.record().indexOf("streetname");
      while(query.next())
      {
          customer_streetname = query.value(streetIndex).toString();
      }
      qDebug() << "Got " << customerName <<  " streetname from database.";
  }

  return customer_streetname;
}

/********************************************//**
 *  Getter for customer city, state, and zip.
 ***********************************************/
QString dbManager::getCustomerCityStateZip(QString customerName)
{
  QSqlQuery query;
  QString customer_name = customerName;
  QString customerCityStateZip;
  int CityStateZipIndex;

  query.prepare("SELECT city_state_zip FROM customer_list WHERE name = '"+customer_name+"'");
  if(query.exec())
  {
      CityStateZipIndex = query.record().indexOf("city_state_zip");
      while(query.next())
      {
          customerCityStateZip = query.value(CityStateZipIndex).toString();
      }
      qDebug() << "Got " << customerName <<  " City, State & Zip from database.";
  }

  return customerCityStateZip;
}

/********************************************//**
 *  Getter for a customer's interest level.
 ***********************************************/
QString dbManager::getCustomerInterest(QString customerName)
{
  QSqlQuery query;
  QString customer_name = customerName;
  QString customerInterest;
  int interestIndex;

  query.prepare("SELECT interest FROM customer_list WHERE name = '"+customer_name+"'");
  if(query.exec())
  {
      interestIndex = query.record().indexOf("interest");
      while(query.next())
      {
          customerInterest = query.value(interestIndex).toString();
      }
      qDebug() << "Got " << customerName <<  " interest from database.";
  }

  return customerInterest;
}

/********************************************//**
 *  Getter for the key customers.
 ***********************************************/
QString dbManager::getCustomerKey(QString customerName)
{
  QSqlQuery query;
  QString customer_name = customerName;
  QString customerKey;
  int keyIndex;

  query.prepare("SELECT key FROM customer_list WHERE name = '"+customer_name+"'");
  if(query.exec())
  {
      keyIndex = query.record().indexOf("key");
      while(query.next())
      {
          customerKey = query.value(keyIndex).toString();
      }
      qDebug() << "Got " << customerName <<  " key from database.";
  }

  return customerKey;
}

/********************************************//**
 *  Procedure for removing customers from DB.
 ***********************************************/
bool dbManager::removeCustomer(QString customerName)
{
    QString customer_name = customerName;
    bool success;
    QSqlQuery deleteQuery;
    success = false;

    deleteQuery.prepare("DELETE FROM customer_list WHERE name = '"+customer_name+"'");
    if(deleteQuery.exec())
    {
        success = true;
    }
    else
    {
        qDebug() << "Remove customer Error: " << deleteQuery.lastError();
    }

    return success;
}

/********************************************//**
 *  Procedure for populating customer list.
 ***********************************************/
bool dbManager::populateCustomers()
{
    bool success;
    ifstream fin;
    string customer_name;
    string customer_streetname;
    string customer_city_state_zip;
    string customer_interest;
    string customer_key;


    fin.open(CUSTOMER_FILE.c_str());
    success = true;

    while(!fin.eof())
    {
        getline(fin, customer_name);
        getline(fin, customer_streetname);
        getline(fin, customer_city_state_zip);
        getline(fin, customer_interest);
        getline(fin, customer_key);

        qDebug() << QString::fromStdString(customer_name);
        qDebug() << QString::fromStdString(customer_streetname);
        qDebug() << QString::fromStdString(customer_city_state_zip);
        qDebug() << QString::fromStdString(customer_interest);
        qDebug() << QString::fromStdString(customer_key);


        if(!addCustomer(Customer(QString::fromStdString(customer_name), QString::fromStdString(customer_streetname),
                                 QString::fromStdString(customer_city_state_zip), QString::fromStdString(customer_interest),
                                 QString::fromStdString(customer_key))))
        {
            success = false;
        }
    }
    fin.close();
    return success;
}
