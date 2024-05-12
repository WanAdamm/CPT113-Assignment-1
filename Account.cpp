#include "ACCOUNT.h"
#include <iostream>
using namespace std;

Account::Account()
{
    name = "default user";
    type = 0;
}

Account::Account(string n, int t)
{
    name = n;

    if(t != 1 || t != 2)
    {
        t = 0;
        cout << "invalid user type, default type has been applied" << endl;
    }

    type = t;
}

string Account::getName()
{
    return name;
}

void Account::setName(string n)
{
    name = n;
}

int Account::getType()
{
    return type;
}

void Account::setType(int t)
{
    type = t;
}