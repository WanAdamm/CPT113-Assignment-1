#include "BUYER.h"
#include <iostream>
using namespace std;

Buyer::Buyer()
{
    credit = 0;
}

Buyer::Buyer(float cred)
{
    credit = cred;
    cakeCount = 0;
    cookieCount = 0;
}

Buyer::Buyer(float cred, string n, int t):Account(n, t)
{
    credit = cred;
    cakeCount = 0;
    cookieCount = 0;
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