#ifndef SHOP_H
#define SHOP_H
#include "BUYER.h"
#include "SELLER.h"

class Shop
{
private:
    Seller seller; 
    Buyer buyer;
    // each shop has one seller and buyer

public:
    Shop(); // default constructor
    Shop(string, string, float); // overloaded constructor
    void printReceipt(); // print receipt after program is done running
    void printMenu(); // print list of item that is still on sale by seller
    void printSellerInfo(); // print the seller info
    void buyItem(int, int); // function for buyer to buy item from seller
    void printBuyerCredit(); // function to print money in buyer account
    void addBuyerCredit(float); // add to buyer credit
    void printBuyerInventory(); // print item in buyer inventory 
    int buyerItemCount(); // function that returns item count of buyer
};

#endif