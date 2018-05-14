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

int dbManager::getCustomerTotal() const
{
    return customerTotal;
}

void dbManager::setCustomerTotal(int value)
{
    customerTotal = value;
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

    query.prepare("SELECT username password FROM customer_list WHERE username = :user AND password = :pass");
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

QString dbManager::identifyFromLogin(QString user, QString pass)
{
    QString username = user;
    QString password = pass;
    QSqlQuery query;
    int nameIndex;
    QString customerIdentity;

    query.prepare("SELECT name FROM customer_list WHERE username = '"+username+"' AND password = '"+password+"'");

    if(query.exec())
    {
        nameIndex = query.record().indexOf("name");
        while(query.next())
        {
            customerIdentity = query.value(nameIndex).toString();
        }
        qDebug() << "Got identity from login info " << customerIdentity;
    }

    return customerIdentity;
}

/********************************************//**
 *  Procedure to add customer in DB Mgr. class.
 ***********************************************/
bool dbManager::addCustomer(const Customer& newCustomer)
{
    QSqlQuery query;
    bool success;
    QString pamphlet_sent = "No";

    query.prepare("INSERT INTO customer_list (name, streetname, city_state_zip, interest, key, pamphlet_sent, username, password) "
                  "VALUES (:name, :street, :city_state_zip, :interest, :key, :pamphlet_sent, :username, :password)");
    query.bindValue(":name", newCustomer.getCustomerName());
    query.bindValue(":street", newCustomer.getCustomerStreet());
    query.bindValue(":city_state_zip", newCustomer.getCustomerCity());
    query.bindValue(":interest", newCustomer.getCustomerInterest());
    query.bindValue(":key", newCustomer.getCustomerKey());
    query.bindValue(":pamphlet_sent", pamphlet_sent);
    query.bindValue(":username", newCustomer.getCustomerUsername());
    query.bindValue(":password", newCustomer.getCustomerPassword());

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
 *  Getter for the customer's pamphlet_sent status.
 ***********************************************/
QString dbManager::getCustomerPamphlet(QString customerName)
{
  QSqlQuery query;
  QString customer_name = customerName;
  QString customerPamphlet;
  int pamIndex;

  query.prepare("SELECT pamphlet_sent FROM customer_list WHERE name = '"+customer_name+"'");
  if(query.exec())
  {
      pamIndex = query.record().indexOf("pamphlet_sent");
      while(query.next())
      {
          customerPamphlet = query.value(pamIndex).toString();
      }
      qDebug() << "Got " << customerName <<  " pamphlet_sent status from database.";
  }

  return customerPamphlet;
}

/********************************************//**
 *  Procedure for removing customers from DB.
 ***********************************************/
bool dbManager::removeCustomer(QString customerName)
{
    QString customer_name = customerName;
    bool success;
    QSqlQuery deleteQuery;
    QSqlQuery deleteCredentialsQuery;
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

int dbManager::getBasicSpent(QString customerName)
{
    QSqlQuery query;
    QString customer_name = customerName;
    int basicIndex;
    int total_basic;
    int total;

    query.prepare("SELECT basic_orders FROM customer_list WHERE name = '"+customer_name+"'");
    if(query.exec())
    {
        basicIndex = query.record().indexOf("basic_orders");
        while(query.next())
        {
            total_basic = query.value(basicIndex).toInt();
            total = (total_basic * 100);
        }
        qDebug() << "Got total spent on basic package: " << total <<  " from database.";
    }
    else
    {
        qDebug() << "Could not get basic package total spent";
    }

    return total;
}

int dbManager::getBusinessSpent(QString customerName)
{
    QSqlQuery query;
    QString customer_name = customerName;
    int businessIndex;
    int total_business;
    int total;

    query.prepare("SELECT business_orders FROM customer_list WHERE name = '"+customer_name+"'");
    if(query.exec())
    {
        businessIndex = query.record().indexOf("business_orders");
        while(query.next())
        {
            total_business = query.value(businessIndex).toInt();
            total = (total_business * 200);
        }
        qDebug() << "Got total spent on business package: " << total <<  " from database.";
    }
    else
    {
        qDebug() << "Could not get business package total spent";
    }
    return total;
}

int dbManager::getEnterpriseSpent(QString customerName)
{
    QSqlQuery query;
    QString customer_name = customerName;
    int enterpriseIndex;
    int total_enterprise;
    int total;

    query.prepare("SELECT enterprise_orders FROM customer_list WHERE name = '"+customer_name+"'");
    if(query.exec())
    {
        enterpriseIndex = query.record().indexOf("enterprise_orders");
        while(query.next())
        {
            total_enterprise = query.value(enterpriseIndex).toInt();
            total = (total_enterprise * 300);
        }
        qDebug() << "Got total spent on enterprise package:: " << total <<  " from database.";
    }
    else
    {
        qDebug() << "Could not get enterprise package total spent";
    }

    return total;
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

bool dbManager::addTestimony(QString testimony)
{
    QSqlQuery query;
    bool success;

    query.prepare("INSERT INTO customer_testimonials (testimonial) "
                  "VALUES (:testimonial)");
    query.bindValue(":testimonial", testimony);

    if(query.exec())
    {
        success = true;
    }
    else
    {
       qDebug() << "Failed to add testimonial" << query.lastError();
       success = false;
    }
    return success;
}

bool dbManager::submitBasicOrder(QString customer_name)
{
    QSqlQuery query;
    QSqlQuery query2;
    bool successUpdateOrder;
    bool successUpdateTotal;
    query.prepare("UPDATE customer_list SET basic_orders = basic_orders + 1 WHERE name = '"+customer_name+"'");

    if(query.exec())
    {
        qDebug() << "Submitted order for basic_orders from customer: " << customer_name;
        successUpdateOrder = true;
    }
    else
    {
        qDebug() << "Failed to submit basic order" << query.lastError();
        successUpdateOrder = false;
    }

    query2.prepare("UPDATE customer_list SET total_spent = total_spent + 100 WHERE name = '"+customer_name+"'");

    if(query2.exec())
    {
        qDebug() << "Updated customer total for customer: " << customer_name;
        successUpdateTotal = true;
    }
    else
    {
        qDebug() << "Failed to update customer's total" << query2.lastError();
        successUpdateTotal = false;
    }
    return successUpdateOrder && successUpdateTotal;
}

bool dbManager::submitBusinessOrder(QString customer_name)
{
    QSqlQuery query;
    QSqlQuery query2;
    bool successUpdateOrder;
    bool successUpdateTotal;
    query.prepare("UPDATE customer_list SET business_orders = business_orders + 1 WHERE name = '"+customer_name+"'");

    if(query.exec())
    {
        qDebug() << "Submitted order for business_orders from customer: " << customer_name;
        successUpdateOrder = true;
    }
    else
    {
        qDebug() << "Failed to submit business_orders " << query.lastError();
        successUpdateOrder = false;
    }

    query2.prepare("UPDATE customer_list SET total_spent = total_spent + 200 WHERE name = '"+customer_name+"'");

    if(query2.exec())
    {
        qDebug() << "Updated customer total for customer: " << customer_name;
        successUpdateTotal = true;
    }
    else
    {
        qDebug() << "Failed to update customer's total" << query2.lastError();
        successUpdateTotal = false;
    }
    return successUpdateOrder && successUpdateTotal;
}

bool dbManager::submitEnterpriseOrder(QString customer_name)
{
    QSqlQuery query;
    QSqlQuery query2;
    bool successUpdateOrder;
    bool successUpdateTotal;
    query.prepare("UPDATE customer_list SET enterprise_orders = enterprise_orders + 1 WHERE name = '"+customer_name+"'");

    if(query.exec())
    {
        qDebug() << "Submitted order for enterprise_orders from customer: " << customer_name;
        successUpdateOrder = true;
    }
    else
    {
        qDebug() << "Failed to submit enterprise_orders" << query.lastError();
        successUpdateOrder = false;
    }

    query2.prepare("UPDATE customer_list SET total_spent = total_spent + 300 WHERE name = '"+customer_name+"'");

    if(query2.exec())
    {
        qDebug() << "Updated customer total for customer: " << customer_name;
        successUpdateTotal = true;
    }
    else
    {
        qDebug() << "Failed to update customer's total" << query2.lastError();
        successUpdateTotal = false;
    }
    return successUpdateOrder && successUpdateTotal;
}

int dbManager::getNumberBasicOrders(QString customer_name)
{
    QSqlQuery query;
    int numOrders;
    int orderIndex;
    query.prepare("SELECT basic_orders FROM customer_list WHERE name = '"+customer_name+"'");

    if(query.exec())
    {
        orderIndex = query.record().indexOf("basic_orders");
        if(query.next())
        {
            numOrders = query.value(orderIndex).toInt();
        }
    }
    else
    {
         qDebug() << "Failed to retrieve number of basic orders for " << customer_name;
    }
    return numOrders;
}

int dbManager::getNumberBusinessOrders(QString customer_name)
{
    QSqlQuery query;
    int numOrders;
    int orderIndex;
    query.prepare("SELECT business_orders FROM customer_list WHERE name = '"+customer_name+"'");

    if(query.exec())
    {
        orderIndex = query.record().indexOf("business_orders");
        if(query.next())
        {
            numOrders = query.value(orderIndex).toInt();
        }
    }
    else
    {
         qDebug() << "Failed to retrieve number of business_orders for " << customer_name;
    }
    return numOrders;
}

int dbManager::getNumberEnterpriseOrders(QString customer_name)
{
    QSqlQuery query;
    int numOrders;
    int orderIndex;
    query.prepare("SELECT enterprise_orders FROM customer_list WHERE name = '"+customer_name+"'");

    if(query.exec())
    {
        orderIndex = query.record().indexOf("enterprise_orders");
        if(query.next())
        {
            numOrders = query.value(orderIndex).toInt();
        }
    }
    else
    {
         qDebug() << "Failed to retrieve number of enterprise_orders for " << customer_name;
    }
    return numOrders;
}
