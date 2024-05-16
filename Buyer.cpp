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
{
    inventory.addItem(id, count);
    credit -= count * price;
}