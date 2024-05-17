#include "BUYER.h"
#include <iostream>
using namespace std;

Buyer::Buyer()
{
    credit = 0;
}

float Buyer::getCredit()
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
{   if(id >= 5 && id <= 9)
    {
        cookieCount += count;
    }
    else if(id >= 0 && id < 5)
    {
        cakeCount += count;
    }
    inventory.addItem(id, count);
    credit -= count * price;
    moneySpent += count * price;
}

void Buyer::printInventory()
{
    inventory.printItemAvailable();
}

float Buyer::getMoneySpent()
{
    return moneySpent;
}

int Buyer::getCakeCount()
{
    return cakeCount;
}

int Buyer::getCookieCount()
{
    return cookieCount;
}

void Buyer::printItemReceipt()
{
    if(cakeCount + cookieCount > 0)
    {
        inventory.printInventorySummary();
    }
    else
    {
        cout << endl << "Nothing bought" << endl << endl;
    }
    
}