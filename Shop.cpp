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
    cout << "| Welcome " << buyer.getName() << " |"<< endl;
    seller.printItemAvailable();
    cout << endl;
}

void Shop::printSellerInfo()
{
    seller.printAccountInfo();
}

void Shop::buyItem(int id, int count)
{
    seller.sellItem(id, count);
    float price = seller.getItemPrice(id);
    buyer.buyItem(id, count, price);
}

void Shop::printBuyerCredit()
{
    cout << "Balance: " << buyer.getCredit() << endl << endl;
}

void Shop::addBuyerCredit(float cred)
{
    buyer.addCredit(cred);
    cout << "you've added RM" << cred << " to your account" << endl << endl; 
}

void Shop::printBuyerInventory()
{
    buyer.printInventory();
}