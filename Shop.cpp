#include <iostream>
#include "SHOP.h"
using namespace std;

Shop::Shop()
{
    buyer.setName("buyer");
    buyer.setType(1);

    seller.setName("seller");
    seller.setType(2);
}

Shop::Shop(string bName, string sName, float cred)
{
    buyer.setType(1);
    seller.setType(2);

    buyer.setName(bName);
    seller.setName(sName);

    buyer.addCredit(cred);
}

void Shop::printMenu()
{
    cout << "| Welcome |" << endl;
    seller.printItemAvailable();
}

void Shop::buyItem()
{
    
}

void Shop::sellItem()
{

}