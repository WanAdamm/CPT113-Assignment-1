#include "BUYER.h"
#include <iostream>
using namespace std;

Buyer::Buyer()
{
    credit = 0;
}

float Buyer::getCredit() const
{
    return credit;
}

void Buyer::addCredit(float cred)
{
    credit += cred;
}

void Buyer::withdrawCredit(float cred)
{
    credit -= cred;
}

void Buyer::buyItem(int id, int count, float price)
{
    // id is used to check whether it is of type cookies or cakes
    if (id >= 5 && id <= 9)
    {
        cookieCount += count;
    }
    else if (id >= 0 && id < 5)
    {
        cakeCount += count;
    }
    inventory.addItem(id, count); // add the item that have been bought to inventory
    credit -= count * price;      // subtract the credit after buying
    moneySpent += count * price;
}

void Buyer::printInventory()
{
    inventory.printItemAvailable();
}

float Buyer::getMoneySpent() const
{
    return moneySpent;
}

int Buyer::getCakeCount() const
{
    return cakeCount;
}

int Buyer::getCookieCount() const
{
    return cookieCount;
}

void Buyer::printItemReceipt()
{
    if (cakeCount + cookieCount > 0)
    {
        cout << inventory;
    }
    else
    {
        cout << endl
             << "Nothing bought" << endl
             << endl;
    }
}