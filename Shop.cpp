#include <iostream>
#include <iomanip>
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
    buyer.setType(1); // set the type of buyer to 1
    seller.setType(2); // set the type of seller to 2 

    buyer.setName(bName); // set buyer name
    seller.setName(sName); // set seller name

    buyer.addCredit(cred); // add credit to buyer account
}

void Shop::printReceipt()
{
    // print receipt after program has ended
    cout << "recipient: " << buyer.getName() << endl;

    buyer.printItemReceipt();

    cout << "Total cake bought:   " << buyer.getCakeCount() << endl;
    cout << "Total cookie bought: " << buyer.getCookieCount() << endl;

    cout << "Spent: RM " << buyer.getMoneySpent() << endl
         << endl;
}

void Shop::printMenu()
{
    // print the list of item sold by seller 
    cout << setw(45) << "| Welcome " << buyer.getName() << " |" << endl;
    cout << setw(30) << "Item" << setw(21) << "Price Per Unit" << setw(10) << "Weight" << setw(10) << "ID" << setw(20) << "Available Count" << endl;
    seller.printItemAvailable();
    cout << endl;
}

void Shop::printSellerInfo()
{
    // print the info about seller
    seller.printAccountInfo();
}

void Shop::buyItem(int id, int count)
{
    if (buyer.getCredit() < (seller.getItemPrice(id) * count)) // check if buyer's credit is sufficient for item requested
    {
        cout << "Insufficient balance, add more credit to your account to proceed" << endl;
    }
    else
    {
        if (seller.getItemCount(id) < count) // check if theres enough item available from seller
        {
            cout << "you've reached maximum number for this item" << endl;
        }
        else
        {
            seller.sellItem(id, count); // sellItem will deduct the item from seller inventory
            float price = seller.getItemPrice(id); // getItemPrice will get the price for item requested
            buyer.buyItem(id, count, price); // passing the required information to buyer

            cout << "RM " << price * count << " has been deducted" << endl;
        }
    }

    cout << endl;
}

void Shop::printBuyerCredit()
{
    // print credit that a buyer has
    cout << "Balance: RM " << buyer.getCredit() << endl
         << endl;
}

void Shop::addBuyerCredit(float cred)
{
    // add credit to buyer's account
    buyer.addCredit(cred);
    cout << "you've added RM" << cred << " to your account" << endl
         << endl;
}

void Shop::printBuyerInventory()
{
    // print item available in buyer's inventory
    buyer.printInventory();
}

int Shop::buyerItemCount()
{
    // return amount if item that a customer has bought for validation purposes
    return (buyer.getCakeCount() + buyer.getCookieCount());
}