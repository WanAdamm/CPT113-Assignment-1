#ifndef SELLER_H
#define SELLER_H

#include "ACCOUNT.h"
#include "SELLERINVENTORY.h"

class Seller : public Account
{

private:
    float revenue; //  stores revenue
    SellerInventory inventory; // inventory which stores item that a seller have

public:
    Seller(); // default constructor
    Seller(float, string, int); // overloaded constructor
    void printSellerInfo(); // function to print seller info
    float getRevenue() const; // getter function for revenue
    void addRevenue(float); // add to current revenue value
    void subRevenue(float); // subtract from current revenue value
    void printItemAvailable(); // print list of item available inside the seller inventory
    void sellItem(int, int); // function to sell item from seller inventory
    float getItemPrice(int) const; // getter function for item price of item inside seller inventory
    int getItemCount(int) const; // getter function to get item count of item inside the inventory
};

#endif