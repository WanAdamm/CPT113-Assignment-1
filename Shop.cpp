#include <iostream>
#include "SHOP.h"
using namespace std;

Shop::Shop()
{
    buyer.setName("buyer");
    buyer.setType(1); // set buyer type to buyer

    seller.setName("seller");
    seller.setType(2); // set seller type to seller
}

Shop::Shop(string bName, string sName, float cred)
{
    buyer.setType(1);
    seller.setType(2);

    buyer.setName(bName);
    seller.setName(sName);

    buyer.addCredit(cred);
}

void Shop::printReceipt()
{
    cout << "recipient: " << buyer.getName() << endl;

    buyer.printItemReceipt();

    cout << "Total cake bought:   " << buyer.getCakeCount() << endl;
    cout << "Total cookie bought: " << buyer.getCookieCount() << endl;

    cout << "Spent: RM " << buyer.getMoneySpent() << endl << endl;
}

void Shop::printMenu()
{
    cout << "| Welcome " << buyer.getName() << " |" << endl;
    seller.printItemAvailable();
    cout << endl;
}

void Shop::printSellerInfo()
{
    seller.printAccountInfo();
}

void Shop::buyItem(int id, int count)
{
    // TODO: input validation for count
    if (buyer.getCredit() < (seller.getItemPrice(id) * count))
    {
        cout << "Insufficinet balance, add more credit to your account to proceed" << endl;
    }
    else
    {
        seller.sellItem(id, count);
        float price = seller.getItemPrice(id);
        buyer.buyItem(id, count, price);

        cout << "RM " << price*count << " has been deducted" << endl; 
    }

    cout << endl;
}

void Shop::printBuyerCredit()
{
    cout << "Balance: RM " << buyer.getCredit() << endl
         << endl;
}

void Shop::addBuyerCredit(float cred)
{
    buyer.addCredit(cred);
    cout << "you've added RM" << cred << " to your account" << endl
         << endl;
}

void Shop::printBuyerInventory()
{
    buyer.printInventory();
}