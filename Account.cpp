#include "ACCOUNT.h"
#include <iostream>
using namespace std;

Account::Account()
{
    // initialize name and type
    name = "default user";
    type = 0;
}

Account::Account(string n, int t)
{
    // initialize name and type to value passed to constructor
    name = n;

    if ((t != 1) && (t != 2))
    {
        t = 0;
        cout << "invalid user type, default type has been applied" << endl;
    }

    type = t;
}

void Account::printAccountInfo()
{
    // print the account info
    cout << "Name: " << name << endl;
    cout << "Type: ";
    if (type == 1)
    {
        cout << "Buyer" << endl;
    }
    else if (type == 2)
    {
        cout << "Seller" << endl;
    }
    else
    {
        cout << "Invalid Type" << endl;
    }
}

string Account::getName() const
{
    // return name
    return name;
}

void Account::setName(string n)
{
    // set name to value passed into the function
    name = n;
}

int Account::getType() const
{
    // return type
    return type;
}

void Account::setType(int t)
{
    // set value of type to value passed into the function
    type = t;
}